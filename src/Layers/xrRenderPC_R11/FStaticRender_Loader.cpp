#include "stdafx.h"
#include "Layers/xrRender/FBasicVisual.h"
#include "xrCore/FMesh.hpp"
#include "Common/LevelStructure.hpp"
#include "xrEngine/x_ray.h"
#include "xrEngine/IGame_Persistent.h"
#include "xrCore/stream_reader.h"
#include "Layers/xrRenderDX10/dx10BufferUtils.h"

#pragma warning(push)
#pragma warning(disable : 4995)
#include <malloc.h>
#pragma warning(pop)

void CRender::level_Load(IReader* fs)
{
    R_ASSERT(nullptr != g_pGameLevel);
    R_ASSERT(!b_loaded);

    // Begin
    pApp->LoadBegin();
    Resources->DeferredLoad(TRUE);
    IReader* chunk;

    // Shaders
    g_pGamePersistent->SetLoadStageTitle("st_loading_shaders");
    g_pGamePersistent->LoadTitle();
    {
        chunk = fs->open_chunk(fsL_SHADERS);
        R_ASSERT2(chunk, "Level doesn't builded correctly.");
        u32 count = chunk->r_u32();
        Shaders.resize(count);
        for (u32 i = 0; i < count; i++) // skip first shader as "reserved" one
        {
            string512 n_sh, n_tlist;
            LPCSTR n = LPCSTR(chunk->pointer());
            chunk->skip_stringZ();
            if (0 == n[0])
                continue;
            xr_strcpy(n_sh, n);
            LPSTR delim = strchr(n_sh, '/');
            *delim = 0;
            xr_strcpy(n_tlist, delim + 1);
            Shaders[i] = Resources->Create(n_sh, n_tlist);
        }
        chunk->close();
    }

    // Components
    L_Shadows = new CLightShadows();
    L_Projector = new CLightProjector();
    L_Glows = new CGlowManager();
    Wallmarks = new CWallmarksEngine();
    Details = new CDetailManager();

    rmFar();
    rmNormal();

    marker = 0;

    if (!GEnv.isDedicatedServer)
    {
        // VB,IB,SWI
        g_pGamePersistent->SetLoadStageTitle("st_loading_geometry");
        g_pGamePersistent->LoadTitle();
        {
            CStreamReader* geom = FS.rs_open("$level$", "level.geom");
            R_ASSERT2(geom, "level.geom");
            LoadBuffers(geom, false);
            LoadSWIs(geom);
            FS.r_close(geom);
        }

        //...and alternate/fast geometry
        if (ps_r1_force_geomx)
        {
            CStreamReader* geom = FS.rs_open("$level$", "level.geomx");
            R_ASSERT2(geom, "level.geomX");
            LoadBuffers(geom, true);
            FS.r_close(geom);
        }

        // Visuals
        g_pGamePersistent->SetLoadStageTitle("st_loading_spatial_db");
        g_pGamePersistent->LoadTitle();
        chunk = fs->open_chunk(fsL_VISUALS);
        LoadVisuals(chunk);
        chunk->close();

        // Details
        g_pGamePersistent->SetLoadStageTitle("st_loading_details");
        g_pGamePersistent->LoadTitle();
        Details->Load();
    }

    // Sectors
    g_pGamePersistent->SetLoadStageTitle("st_loading_sectors_portals");
    g_pGamePersistent->LoadTitle();
    LoadSectors(fs);

    // HOM
    HOM.Load();

    // Lights
    g_pGamePersistent->SetLoadStageTitle("st_loading_lights");
    g_pGamePersistent->LoadTitle();
    LoadLights(fs);

    // End
    pApp->LoadEnd();
    b_loaded = TRUE;
}

void CRender::level_Unload()
{
    if (nullptr == g_pGameLevel)
        return;
    if (!b_loaded)
        return;

    u32 I;

    // HOM
    HOM.Unload();

    //*** Details
    Details->Unload();

    //*** Sectors
    // 1.
    xr_delete(rmPortals);
    pLastSector = nullptr;
    vLastCameraPos.set(flt_max, flt_max, flt_max);
    uLastLTRACK = 0;

    // 2.
    for (I = 0; I < Sectors.size(); I++)
        xr_delete(Sectors[I]);
    Sectors.clear();
    // 3.
    for (I = 0; I < Portals.size(); I++)
        xr_delete(Portals[I]);
    Portals.clear();

    //*** Lights
    L_Glows->Unload();
    Lights.Unload();

    //*** Visuals
    for (I = 0; I < Visuals.size(); I++)
    {
        Visuals[I]->Release();
        xr_delete(Visuals[I]);
    }
    Visuals.clear();

    //*** SWI
    for (I = 0; I < SWIs.size(); I++)
        xr_free(SWIs[I].sw);
    SWIs.clear();

    //*** VB/IB
    for (I = 0; I < nVB.size(); I++)
    {
        HW.stats_manager.decrement_stats_vb(nVB[I]);
        _RELEASE(nVB[I]);
    }

    for (I = 0; I < xVB.size(); I++)
    {
        HW.stats_manager.decrement_stats_vb(xVB[I]);
        _RELEASE(xVB[I]);
    }
    nVB.clear();
    xVB.clear();

    for (I = 0; I < nIB.size(); I++)
    {
        HW.stats_manager.decrement_stats_ib(nIB[I]);
        _RELEASE(nIB[I]);
    }

    for (I = 0; I < xIB.size(); I++)
    {
        HW.stats_manager.decrement_stats_ib(xIB[I]);
        _RELEASE(xIB[I]);
    }

    nIB.clear();
    xIB.clear();
    nDC.clear();
    xDC.clear();

    //*** Components
    xr_delete(Details);
    xr_delete(Wallmarks);
    xr_delete(L_Glows);
    xr_delete(L_Projector);
    xr_delete(L_Shadows);

    //*** Shaders
    Shaders.clear();

#ifdef DEBUG
    Resources->DBG_VerifyGeoms();
    Resources->DBG_VerifyTextures();
#endif
    b_loaded = FALSE;
}

void CRender::LoadBuffers(CStreamReader* base_fs, bool alternative)
{
    Resources->Evict();
    u32 dwUsage = D3DUSAGE_WRITEONLY | (HW.Caps.geometry.bSoftware ? D3DUSAGE_SOFTWAREPROCESSING : 0);

    xr_vector<VertexDeclarator>& _DC  = alternative ? xDC : nDC;
    xr_vector<ID3DVertexBuffer*>& _VB = alternative ? xVB : nVB;
    xr_vector<ID3DIndexBuffer*>& _IB  = alternative ? xIB : nIB;

    // Vertex buffers
    {
        // Use DX9-style declarators
        CStreamReader* fs = base_fs->open_chunk(fsL_VB);
        R_ASSERT2(fs, "Could not load geometry. File 'level.geom?' corrupted.");
        u32 count = fs->r_u32();
        _DC.resize(count);
        _VB.resize(count);
        u32 bufferSize = (MAXD3DDECLLENGTH + 1) * sizeof(D3DVERTEXELEMENT9);
        D3DVERTEXELEMENT9* dcl = (D3DVERTEXELEMENT9*)_alloca(bufferSize);
        for (u32 i = 0; i < count; i++)
        {
            // decl
            //			D3DVERTEXELEMENT9*	dcl		= (D3DVERTEXELEMENT9*) fs().pointer();
            fs->r(dcl, bufferSize);
            fs->advance(-(int)bufferSize);

            u32 dcl_len = D3DXGetDeclLength(dcl) + 1;
            _DC[i].resize(dcl_len);
            fs->r(_DC[i].begin(), dcl_len * sizeof(D3DVERTEXELEMENT9));

            // count, size
            u32 vCount = fs->r_u32();
            u32 vSize = D3DXGetDeclVertexSize(dcl, 0);
            Msg("* [Loading VB] %d verts, %d Kb", vCount, (vCount * vSize) / 1024);

            // Create and fill
            // BYTE*	pData		= 0;
            // R_CHK				(HW.pDevice->CreateVertexBuffer(vCount*vSize,dwUsage,0,D3DPOOL_MANAGED,&_VB[i],0));
            // R_CHK				(_VB[i]->Lock(0,0,(void**)&pData,0));
            //			CopyMemory			(pData,fs().pointer(),vCount*vSize);
            // fs->r				(pData,vCount*vSize);
            //_VB[i]->Unlock		();
            //	TODO: DX10: Check fragmentation.
            //	Check if buffer is less then 2048 kb
            BYTE* pData = xr_alloc<BYTE>(vCount * vSize);
            fs->r(pData, vCount * vSize);
            dx10BufferUtils::CreateVertexBuffer(&_VB[i], pData, vCount * vSize);
            xr_free(pData);

            //			fs->advance			(vCount*vSize);
        }
        fs->close();
    }

    // Index buffers
    {
        CStreamReader* fs = base_fs->open_chunk(fsL_IB);
        u32 count = fs->r_u32();
        _IB.resize(count);
        for (u32 i = 0; i < count; i++)
        {
            u32 iCount = fs->r_u32();
            Msg("* [Loading IB] %d indices, %d Kb", iCount, (iCount * 2) / 1024);

            // Create and fill
            // BYTE*	pData		= 0;
            // R_CHK
            // (HW.pDevice->CreateIndexBuffer(iCount*2,dwUsage,D3DFMT_INDEX16,D3DPOOL_MANAGED,&_IB[i],0));
            // R_CHK				(_IB[i]->Lock(0,0,(void**)&pData,0));
            //			CopyMemory			(pData,fs().pointer(),iCount*2);
            // fs->r				(pData,iCount*2);
            //_IB[i]->Unlock		();

            //	TODO: DX10: Check fragmentation.
            //	Check if buffer is less then 2048 kb
            BYTE* pData = xr_alloc<BYTE>(iCount * 2);
            fs->r(pData, iCount * 2);
            dx10BufferUtils::CreateIndexBuffer(&_IB[i], pData, iCount * 2);
            xr_free(pData);

            //			fs().advance		(iCount*2);
        }
        fs->close();
    }

}

void CRender::LoadVisuals(IReader* fs)
{
    IReader* chunk = nullptr;
    u32 index = 0;
    dxRender_Visual* V = nullptr;
    ogf_header H;

    while ((chunk = fs->open_chunk(index)) != nullptr)
    {
        chunk->r_chunk_safe(OGF_HEADER, &H, sizeof(H));
        V = Models->Instance_Create(H.type);
        V->Load(nullptr, chunk, 0);
        Visuals.push_back(V);

        chunk->close();
        index++;
    }
}

void CRender::LoadLights(IReader* fs)
{
    // lights
    Lights.Load(fs);

    // glows
    IReader* chunk = fs->open_chunk(fsL_GLOWS);
    R_ASSERT(chunk && "Can't find glows");
    L_Glows->Load(chunk);
    chunk->close();
}

struct b_portal
{
    u16 sector_front;
    u16 sector_back;
    svector<Fvector, 6> vertices;
};

void CRender::LoadSectors(IReader* fs)
{
    // allocate memory for portals
    u32 size = fs->find_chunk(fsL_PORTALS);
    R_ASSERT(0 == size % sizeof(b_portal));
    u32 count = size / sizeof(b_portal);
    Portals.resize(count);
    for (u32 c = 0; c < count; c++)
        Portals[c] = new CPortal();

    // load sectors
    IReader* S = fs->open_chunk(fsL_SECTORS);
    for (u32 i = 0;; i++)
    {
        IReader* P = S->open_chunk(i);
        if (nullptr == P)
            break;

        CSector* __S = new CSector();
        __S->load(*P);
        Sectors.push_back(__S);

        P->close();
    }
    S->close();

    // load portals
    if (count)
    {
        u32 i;
        CDB::Collector CL;
        fs->find_chunk(fsL_PORTALS);
        for (i = 0; i < count; i++)
        {
            b_portal P;
            fs->r(&P, sizeof(P));
            CPortal* __P = (CPortal*)Portals[i];
            __P->Setup(P.vertices.begin(), P.vertices.size(), (CSector*)getSector(P.sector_front),
                (CSector*)getSector(P.sector_back));
            for (u32 j = 2; j < P.vertices.size(); j++)
                CL.add_face_packed_D(P.vertices[0], P.vertices[j - 1], P.vertices[j], u32(i));
        }
        if (CL.getTS() < 2)
        {
            Fvector v1, v2, v3;
            v1.set(-20000.f, -20000.f, -20000.f);
            v2.set(-20001.f, -20001.f, -20001.f);
            v3.set(-20002.f, -20002.f, -20002.f);
            CL.add_face_packed_D(v1, v2, v3, 0);
        }

        // build portal model
        rmPortals = new CDB::MODEL();
        rmPortals->build(CL.getV(), int(CL.getVS()), CL.getT(), int(CL.getTS()));
    }
    else
    {
        rmPortals = nullptr;
    }

    // debug
    //	for (int d=0; d<Sectors.size(); d++)
    //		Sectors[d]->DebugDump	();

    pLastSector = nullptr;
}

void CRender::LoadSWIs(CStreamReader* base_fs)
{
    // allocate memory for portals
    if (base_fs->find_chunk(fsL_SWIS))
    {
        CStreamReader* fs = base_fs->open_chunk(fsL_SWIS);
        u32 item_count = fs->r_u32();

        xr_vector<FSlideWindowItem>::iterator it = SWIs.begin();
        xr_vector<FSlideWindowItem>::iterator it_e = SWIs.end();

        for (; it != it_e; ++it)
            xr_free((*it).sw);

        SWIs.clear();

        SWIs.resize(item_count);
        for (u32 c = 0; c < item_count; c++)
        {
            FSlideWindowItem& swi = SWIs[c];
            swi.reserved[0] = fs->r_u32();
            swi.reserved[1] = fs->r_u32();
            swi.reserved[2] = fs->r_u32();
            swi.reserved[3] = fs->r_u32();
            swi.count = fs->r_u32();
            VERIFY(NULL == swi.sw);
            swi.sw = xr_alloc<FSlideWindow>(swi.count);
            fs->r(swi.sw, sizeof(FSlideWindow) * swi.count);
        }

        fs->close();
    }
}
