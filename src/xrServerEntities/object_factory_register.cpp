////////////////////////////////////////////////////////////////////////////
//	Module 		: object_factory_register.cpp
//	Created 	: 27.05.2004
//  Modified 	: 27.05.2004
//	Author		: Dmitriy Iassenev
//	Description : Object factory
////////////////////////////////////////////////////////////////////////////

#include "pch_script.h"
#pragma hdrstop

#include "object_factory_impl.h"

// server entities includes
#include "xrServer_Objects_ALife_All.h"
#include "xrServer_Objects_Alife_Smartcovers.h"
#include "clsid_game.h"

// client entities includes
#ifndef NO_XR_GAME
#include "xrEngine/std_classes.h"
#include "Level.h"
#include "GamePersistent.h"
#include "HUDManager.h"
#include "Actor.h"
#include "Spectator.h"

#include "ai/monsters/flesh/flesh.h"
#include "ai/monsters/chimera/chimera.h"
#include "ai/monsters/dog/dog.h"
#include "ai/stalker/ai_stalker.h"
#include "ai/monsters/bloodsucker/bloodsucker.h"
#include "ai/monsters/boar/boar.h"
#include "ai/monsters/pseudodog/pseudodog.h"
#include "ai/monsters/pseudodog/psy_dog.h"
#include "ai/monsters/burer/burer.h"
#include "ai/monsters/pseudogigant/pseudo_gigant.h"
#include "ai/monsters/controller/controller.h"
#include "ai/monsters/poltergeist/poltergeist.h"
#include "ai/monsters/zombie/zombie.h"
#include "ai/monsters/fracture/fracture.h"
#include "ai/monsters/snork/snork.h"
#include "ai/monsters/cat/cat.h"
#include "ai/monsters/tushkano/tushkano.h"
#include "ai/monsters/rats/ai_rat.h"

#include "ai/phantom/phantom.h"

#include "ai/trader/ai_trader.h"

#include "ai/crow/ai_crow.h"
#include "WeaponAutomaticShotgun.h"
#ifdef DEBUG
#include "xrEngine/StatGraph.h"
#include "PHDebug.h"
#endif // DEBUG

#include "Hit.h"
#include "PHDestroyable.h"
#include "Car.h"

#include "helicopter.h"

#include "MercuryBall.h"
#include "BlackDrops.h"
#include "BlackGraviArtifact.h"
#include "BastArtifact.h"
#include "DummyArtifact.h"
#include "ZudaArtifact.h"
#include "ThornArtifact.h"
#include "FadedBall.h"
#include "ElectricBall.h"
#include "RustyHairArtifact.h"
#include "GalantineArtifact.h"
#include "GraviArtifact.h"
#include "cta_game_artefact.h"

#include "WeaponFN2000.h"
#include "WeaponAK74.h"
#include "WeaponLR300.h"
#include "WeaponHPSA.h"
#include "WeaponPM.h"
#include "WeaponAmmo.h"
#include "WeaponFORT.h"
#include "WeaponBinoculars.h"
#include "WeaponShotgun.h"
#include "WeaponSVD.h"
#include "WeaponSVU.h"
#include "WeaponRPG7.h"
#include "WeaponVal.h"
#include "WeaponVintorez.h"
#include "WeaponWalther.h"
#include "WeaponUSP45.h"
#include "WeaponGroza.h"
#include "WeaponKnife.h"
#include "weaponBM16.h"
#include "WeaponRG6.h"
#include "WeaponStatMgun.h"

#include "Scope.h"
#include "Silencer.h"
#include "GrenadeLauncher.h"

#include "Bolt.h"
#include "medkit.h"
#include "antirad.h"
#include "FoodItem.h"
#include "BottleItem.h"
#include "ExplosiveItem.h"

#include "InfoDocument.h"
#include "attachable_item.h"

#include "ScientificOutfit.h"
#include "StalkerOutfit.h"
#include "MilitaryOutfit.h"
#include "ExoOutfit.h"
#include "ActorHelmet.h"

#include "F1.h"
#include "RGD5.h"

#include "ExplosiveRocket.h"

#include "MPPlayersBag.h"

#include "CustomZone.h"
#include "MosquitoBald.h"
#include "Mincer.h"
#include "GraviZone.h"
#include "RadioactiveZone.h"
#include "level_changer.h"
#include "script_zone.h"
#include "team_base_zone.h"
#include "TorridZone.h"
#include "ZoneVisual.h"
#include "HairsZone.h"
#include "AmebaZone.h"
#include "NoGravityZone.h"
#include "SimpleDetector.h"
#include "EliteDetector.h"
#include "AdvancedDetector.h"
#include "ZoneCampfire.h"

#include "Torch.h"
#include "PDA.h"
#include "flare.h"

#include "searchlight.h"

#include "HangingLamp.h"
#include "PhysicObject.h"
#include "script_object.h"
#include "BreakableObject.h"
#include "PhysicsSkeletonObject.h"
#include "DestroyablePhysicsObject.h"

#include "game_sv_single.h"
#include "game_sv_deathmatch.h"
#include "game_sv_teamdeathmatch.h"
#include "game_sv_artefacthunt.h"
#include "game_sv_capture_the_artefact.h"

#include "game_cl_single.h"
#include "game_cl_deathmatch.h"
#include "game_cl_teamdeathmatch.h"
#include "game_cl_artefacthunt.h"
#include "game_cl_capture_the_artefact.h"

#include "UIGameSP.h"
#include "UIGameAHunt.h"
#include "UIGameCTA.h"
#include "ClimableObject.h"
#include "space_restrictor.h"
#include "smart_zone.h"
#include "InventoryBox.h"

#include "actor_mp_server.h"
#include "actor_mp_client.h"
#include "smart_cover_object.h"
#include "Script_UI_MainMenu.h"
#endif // NO_XR_GAME

#ifndef NO_XR_GAME
#define ADD(a, b, c, d) add<a, b>(c, d)
#define ADD_MP(a, b, c, d, e, f) add(new CObjectItemClientServerSingleMp<a, b, c, d>(e, f))
#else
#define ADD(a, b, c, d) add<b>(c, d)
#endif

void CObjectFactory::register_classes()
{
#ifndef NO_XR_GAME
    // client entities
    add<CLevel>(CLSID_GAME_LEVEL, "level");
    add<CGamePersistent>(CLSID_GAME_PERSISTANT, "game");
    add<CHUDManager>(CLSID_HUDMANAGER, "hud_manager");
    // Server Game type
    add<game_sv_Single>(CLSID_SV_GAME_SINGLE, "game_sv_single");
#ifndef BENCHMARK_BUILD
    add<game_sv_Deathmatch>(CLSID_SV_GAME_DEATHMATCH, "game_sv_deathmatch");
    add<game_sv_TeamDeathmatch>(CLSID_SV_GAME_TEAMDEATHMATCH, "game_sv_team_deathmatch");
    add<game_sv_ArtefactHunt>(CLSID_SV_GAME_ARTEFACTHUNT, "game_sv_artefact_hunt");
    add<game_sv_CaptureTheArtefact>(CLSID_SV_GAME_CAPTURETHEARTEFACT, "game_sv_capture_the_artefact");
#endif //	BENCHMARK_BUILD
    // Client Game type
    add<game_cl_Single>(CLSID_CL_GAME_SINGLE, "game_cl_single");
#ifndef BENCHMARK_BUILD
    add<game_cl_Deathmatch>(CLSID_CL_GAME_DEATHMATCH, "game_cl_deathmatch");
    add<game_cl_TeamDeathmatch>(CLSID_CL_GAME_TEAMDEATHMATCH, "game_cl_team_deathmatch");
    add<game_cl_ArtefactHunt>(CLSID_CL_GAME_ARTEFACTHUNT, "game_cl_artefact_hunt");
    add<game_cl_CaptureTheArtefact>(CLSID_CL_GAME_CAPTURETHEARTEFACT, "game_cl_capture_the_artefact");
#endif //	BENCHMARK_BUILD

    add<CUIGameSP>(CLSID_GAME_UI_SINGLE, "game_ui_single");
    add<CUIGameDM>(CLSID_GAME_UI_DEATHMATCH, "game_ui_deathmatch");
    add<CUIGameTDM>(CLSID_GAME_UI_TEAMDEATHMATCH, "game_ui_team_deathmatch");
    add<CUIGameAHunt>(CLSID_GAME_UI_ARTEFACTHUNT, "game_ui_artefact_hunt");
    add<CUIGameCTA>(CLSID_GAME_UI_CAPTURETHEARTEFACT, "game_ui_capture_the_artefact");

    if (!FS.IsSDK())
    {
        ADD_MP(CActor, CActorMP, CSE_ALifeCreatureActor, CSE_ActorMP, CLSID_OBJECT_ACTOR, "actor");
    }
#else
    ADD(CActor, CSE_ALifeCreatureActor, CLSID_OBJECT_ACTOR, "actor");
#endif // NO_XR_GAME

    // server entities
    add<CSE_ALifeGroupTemplate<CSE_ALifeMonsterBase>>(CLSID_AI_FLESH_GROUP, "flesh_group");
    //	add<CSE_SpawnGroup>											(CLSID_AI_SPAWN_GROUP			,"spawn_group");
    add<CSE_ALifeGraphPoint>(CLSID_AI_GRAPH, "graph_point");
    add<CSE_ALifeOnlineOfflineGroup>(CLSID_ONLINE_OFFLINE_GROUP, "online_offline_group");
    // client and server entities
    if (FS.IsSDK())
    {
        this->add<CSE_ALifeCreatureActor>(CLSID_SE_ACTOR, "actor");
    }
    else
    {
        ADD(CSpectator, CSE_Spectator, CLSID_SPECTATOR, "spectator");
        ADD(CAI_Flesh, CSE_ALifeMonsterBase, CLSID_AI_FLESH, "flesh");
        ADD(CChimera, CSE_ALifeMonsterBase, CLSID_AI_CHIMERA, "chimera");
        ADD(CAI_Dog, CSE_ALifeMonsterBase, CLSID_AI_DOG_RED, "dog_red");
        ADD(CAI_Stalker, CSE_ALifeHumanStalker, CLSID_AI_STALKER, "stalker");
        ADD(CAI_Bloodsucker, CSE_ALifeMonsterBase, CLSID_AI_BLOODSUCKER, "bloodsucker");
        ADD(CAI_Boar, CSE_ALifeMonsterBase, CLSID_AI_BOAR, "boar");
        ADD(CAI_PseudoDog, CSE_ALifeMonsterBase, CLSID_AI_DOG_BLACK, "dog_black");
        ADD(CPsyDog, CSE_ALifeMonsterBase, CLSID_AI_DOG_PSY, "psy_dog");
        ADD(CPsyDogPhantom, CSE_ALifePsyDogPhantom, CLSID_AI_DOG_PSY_PHANTOM, "psy_dog_phantom");
        ADD(CBurer, CSE_ALifeMonsterBase, CLSID_AI_BURER, "burer");
        ADD(CPseudoGigant, CSE_ALifeMonsterBase, CLSID_AI_GIANT, "pseudo_gigant");
        ADD(CController, CSE_ALifeMonsterBase, CLSID_AI_CONTROLLER, "controller");
        ADD(CPoltergeist, CSE_ALifeMonsterBase, CLSID_AI_POLTERGEIST, "poltergeist");
        ADD(CZombie, CSE_ALifeMonsterBase, CLSID_AI_ZOMBIE, "zombie");
        ADD(CFracture, CSE_ALifeMonsterBase, CLSID_AI_FRACTURE, "fracture");
        ADD(CSnork, CSE_ALifeMonsterBase, CLSID_AI_SNORK, "snork");
        ADD(CCat, CSE_ALifeMonsterBase, CLSID_AI_CAT, "cat");
        ADD(CTushkano, CSE_ALifeMonsterBase, CLSID_AI_TUSHKANO, "tushkano");

        ADD(CPhantom, CSE_ALifeCreaturePhantom, CLSID_AI_PHANTOM, "phantom");

        // Trader
        ADD(CAI_Trader, CSE_ALifeTrader, CLSID_AI_TRADER, "trader");

        ADD(CAI_Crow, CSE_ALifeCreatureCrow, CLSID_AI_CROW, "crow");
        ADD(CAI_Rat, CSE_ALifeMonsterRat, CLSID_AI_RAT, "rat");
        ADD(CCar, CSE_ALifeCar, CLSID_CAR, "car");

        ADD(CHelicopter, CSE_ALifeHelicopter, CLSID_VEHICLE_HELICOPTER, "helicopter");
        // Artefacts
        ADD(CMercuryBall, CSE_ALifeItemArtefact, CLSID_AF_MERCURY_BALL, "art_mercury_ball");
        ADD(CBlackDrops, CSE_ALifeItemArtefact, CLSID_AF_BLACKDROPS, "art_black_drops");
        ADD(CBlackGraviArtefact, CSE_ALifeItemArtefact, CLSID_AF_NEEDLES, "art_needles");
        ADD(CBastArtefact, CSE_ALifeItemArtefact, CLSID_AF_BAST, "art_bast_artefact");
        ADD(CBlackGraviArtefact, CSE_ALifeItemArtefact, CLSID_AF_BLACK_GRAVI, "art_gravi_black");
        ADD(CDummyArtefact, CSE_ALifeItemArtefact, CLSID_AF_DUMMY, "art_dummy");
        ADD(CZudaArtefact, CSE_ALifeItemArtefact, CLSID_AF_ZUDA, "art_zuda");
        ADD(CThornArtefact, CSE_ALifeItemArtefact, CLSID_AF_THORN, "art_thorn");
        ADD(CFadedBall, CSE_ALifeItemArtefact, CLSID_AF_FADED_BALL, "art_faded_ball");
        ADD(CElectricBall, CSE_ALifeItemArtefact, CLSID_AF_ELECTRIC_BALL, "art_electric_ball");
        ADD(CRustyHairArtefact, CSE_ALifeItemArtefact, CLSID_AF_RUSTY_HAIR, "art_rusty_hair");
        ADD(CGalantineArtefact, CSE_ALifeItemArtefact, CLSID_AF_GALANTINE, "art_galantine");
        ADD(CGraviArtefact, CSE_ALifeItemArtefact, CLSID_AF_GRAVI, "art_gravi");
        ADD(CGraviArtefact, CSE_ALifeItemArtefact, CLSID_ARTEFACT, "artefact");
        ADD(CtaGameArtefact, CSE_ALifeItemArtefact, CLSID_AF_CTA, "art_cta");

        //  [8/15/2006]
        ADD(CWeaponMagazined, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_MAGAZINED, "wpn_wmagaz");
        //  [8/15/2006]
        //  [8/17/2006]
        ADD(CWeaponMagazinedWGrenade, CSE_ALifeItemWeaponMagazinedWGL, CLSID_OBJECT_W_MAGAZWGL, "wpn_wmaggl");
        //  [8/17/2006]
        ADD(CWeaponFN2000, CSE_ALifeItemWeaponMagazinedWGL, CLSID_OBJECT_W_FN2000, "wpn_fn2000");
        ADD(CWeaponAK74, CSE_ALifeItemWeaponMagazinedWGL, CLSID_OBJECT_W_AK74, "wpn_ak74");
        ADD(CWeaponLR300, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_LR300, "wpn_lr300");
        ADD(CWeaponHPSA, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_HPSA, "wpn_hpsa");
        ADD(CWeaponPM, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_PM, "wpn_pm");
        ADD(CWeaponFORT, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_FORT, "wpn_fort");
        ADD(CWeaponBinoculars, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_BINOCULAR, "wpn_binocular");
        ADD(CWeaponShotgun, CSE_ALifeItemWeaponShotGun, CLSID_OBJECT_W_SHOTGUN, "wpn_shotgun");
        ADD(CWeaponSVD, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_SVD, "wpn_svd");
        ADD(CWeaponSVU, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_SVU, "wpn_svu");
        ADD(CWeaponRPG7, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_RPG7, "wpn_rpg7");
        ADD(CWeaponVal, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_VAL, "wpn_val");
        ADD(CWeaponVintorez, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_VINTOREZ, "wpn_vintorez");
        ADD(CWeaponWalther, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_WALTHER, "wpn_walther");
        ADD(CWeaponUSP45, CSE_ALifeItemWeaponMagazined, CLSID_OBJECT_W_USP45, "wpn_usp45");
        ADD(CWeaponGroza, CSE_ALifeItemWeaponMagazinedWGL, CLSID_OBJECT_W_GROZA, "wpn_groza");
        ADD(CWeaponKnife, CSE_ALifeItemWeapon, CLSID_OBJECT_W_KNIFE, "wpn_knife");
        ADD(CWeaponBM16, CSE_ALifeItemWeaponShotGun, CLSID_OBJECT_W_BM16, "wpn_bm16");
        ADD(CWeaponRG6, CSE_ALifeItemWeaponShotGun, CLSID_OBJECT_W_RG6, "wpn_rg6");
        //-----------------------------------------------------------------------------------------------------
        ADD(CWeaponAmmo, CSE_ALifeItemAmmo, CLSID_OBJECT_AMMO, "wpn_ammo");
        ADD(CWeaponAmmo, CSE_ALifeItemAmmo, CLSID_OBJECT_A_VOG25, "wpn_ammo_vog25");
        ADD(CWeaponAmmo, CSE_ALifeItemAmmo, CLSID_OBJECT_A_OG7B, "wpn_ammo_og7b");
        ADD(CWeaponAmmo, CSE_ALifeItemAmmo, CLSID_OBJECT_A_M209, "wpn_ammo_m209");
        //-----------------------------------------------------------------------------------------------------

        // Weapons Add-on
        ADD(CScope, CSE_ALifeItem, CLSID_OBJECT_W_SCOPE, "wpn_scope");
        ADD(CSilencer, CSE_ALifeItem, CLSID_OBJECT_W_SILENCER, "wpn_silencer");
        ADD(CGrenadeLauncher, CSE_ALifeItem, CLSID_OBJECT_W_GLAUNCHER, "wpn_grenade_launcher");
  
        // Inventory
        ADD(CBolt, CSE_ALifeItemBolt, CLSID_IITEM_BOLT, "obj_bolt");
        ADD(CMedkit, CSE_ALifeItem, CLSID_IITEM_MEDKIT, "obj_medkit");
        ADD(CMedkit, CSE_ALifeItem, CLSID_IITEM_BANDAGE, "obj_bandage");
        ADD(CAntirad, CSE_ALifeItem, CLSID_IITEM_ANTIRAD, "obj_antirad");
        ADD(CFoodItem, CSE_ALifeItem, CLSID_IITEM_FOOD, "obj_food");
        ADD(CBottleItem, CSE_ALifeItem, CLSID_IITEM_BOTTLE, "obj_bottle");
        ADD(CExplosiveItem, CSE_ALifeItemExplosive, CLSID_IITEM_EXPLOSIVE, "obj_explosive");

        // Info Document
        ADD(CInfoDocument, CSE_ALifeItemDocument, CLSID_IITEM_DOCUMENT, "obj_document");
        ADD(CInventoryItemObject, CSE_ALifeItem, CLSID_IITEM_ATTACH, "obj_attachable");

        // Equipment outfit
        ADD(CScientificOutfit, CSE_ALifeItemCustomOutfit, CLSID_EQUIPMENT_SCIENTIFIC, "equ_scientific");
        ADD(CStalkerOutfit, CSE_ALifeItemCustomOutfit, CLSID_EQUIPMENT_STALKER, "equ_stalker");
        ADD(CMilitaryOutfit, CSE_ALifeItemCustomOutfit, CLSID_EQUIPMENT_MILITARY, "equ_military");
        ADD(CExoOutfit, CSE_ALifeItemCustomOutfit, CLSID_EQUIPMENT_EXO, "equ_exo");
        ADD(CHelmet, CSE_ALifeItem, CLSID_EQUIPMENT_HELMET, "helmet");

        // Grenades
        ADD(CF1, CSE_ALifeItemGrenade, CLSID_GRENADE_F1, "wpn_grenade_f1");
        ADD(CRGD5, CSE_ALifeItemGrenade, CLSID_GRENADE_RGD5, "wpn_grenade_rgd5");

        // Rockets
        ADD(CExplosiveRocket, CSE_Temporary, CLSID_OBJECT_G_RPG7, "wpn_grenade_rpg7");
        ADD(CExplosiveRocket, CSE_Temporary, CLSID_OBJECT_G_FAKE, "wpn_grenade_fake");

        //-----------------------------------------------------------------------------------------------------------------
        ADD(CMPPlayersBag, CSE_ALifeItem, CLSID_OBJECT_PLAYERS_BAG, "mp_players_bag");
        //-----------------------------------------------------------------------------------------------------------------

        // Zones
        ADD(CCustomZone, CSE_ALifeCustomZone, CLSID_ZONE, "zone");
        ADD(CMosquitoBald, CSE_ALifeAnomalousZone, CLSID_Z_MBALD, "zone_mosquito_bald");
        ADD(CMincer, CSE_ALifeAnomalousZone, CLSID_Z_MINCER, "zone_mincer");
        ADD(CMosquitoBald, CSE_ALifeAnomalousZone, CLSID_Z_ACIDF, "zone_acid_fog");
        ADD(CMincer, CSE_ALifeAnomalousZone, CLSID_Z_GALANT, "zone_galantine");
        ADD(CRadioactiveZone, CSE_ALifeAnomalousZone, CLSID_Z_RADIO, "zone_radioactive");
        ADD(CHairsZone, CSE_ALifeZoneVisual, CLSID_Z_BFUZZ, "zone_bfuzz");
        ADD(CHairsZone, CSE_ALifeZoneVisual, CLSID_Z_RUSTYH, "zone_rusty_hair");
        ADD(CMosquitoBald, CSE_ALifeAnomalousZone, CLSID_Z_DEAD, "zone_dead");
#ifndef BENCHMARK_BUILD
        ADD(CLevelChanger, CSE_ALifeLevelChanger, CLSID_LEVEL_CHANGER, "level_changer");
#endif //	BENCHMARK_BUILD
        ADD(CScriptZone, CSE_ALifeSpaceRestrictor, CLSID_SCRIPT_ZONE, "script_zone");
        ADD(CSmartZone, CSE_ALifeSmartZone, CLSID_SMART_ZONE, "smart_zone");
        ADD(CTeamBaseZone, CSE_ALifeTeamBaseZone, CLSID_Z_TEAM_BASE, "team_base_zone");
        ADD(CTorridZone, CSE_ALifeTorridZone, CLSID_Z_TORRID, "torrid_zone");
        ADD(CSpaceRestrictor, CSE_ALifeSpaceRestrictor, CLSID_SPACE_RESTRICTOR, "space_restrictor");
        ADD(CAmebaZone, CSE_ALifeZoneVisual, CLSID_Z_AMEBA, "ameba_zone");
        ADD(CNoGravityZone, CSE_ALifeAnomalousZone, CLSID_Z_NOGRAVITY, "nogravity_zone");
        ADD(CZoneCampfire, CSE_ALifeAnomalousZone, CLSID_Z_CAMPFIRE, "zone_campfire");
        // Detectors
        ADD(CSimpleDetector, CSE_ALifeItemDetector, CLSID_DETECTOR_SIMPLE, "device_detector_simple");
        ADD(CAdvancedDetector, CSE_ALifeItemDetector, CLSID_DETECTOR_ADVANCED, "device_detector_advanced");
        ADD(CEliteDetector, CSE_ALifeItemDetector, CLSID_DETECTOR_ELITE, "device_detector_elite");
        ADD(CScientificDetector, CSE_ALifeItemDetector, CLSID_DETECTOR_SCIENTIFIC, "device_detector_scientific");

        // Devices
        ADD(CTorch, CSE_ALifeItemTorch, CLSID_DEVICE_TORCH, "device_torch");
        ADD(CPda, CSE_ALifeItemPDA, CLSID_DEVICE_PDA, "device_pda");
        ADD(CFlare, CSE_ALifeItem, CLSID_DEVICE_FLARE, "device_flare");

        // objects
        ADD(CProjector, CSE_ALifeObjectProjector, CLSID_OBJECT_PROJECTOR, "projector");
        ADD(CWeaponStatMgun, CSE_ALifeStationaryMgun, CLSID_OBJECT_W_STATMGUN, "wpn_stat_mgun");
        //	ADD(CTrigger				,CSE_Trigger					,CLSID_OBJECT_TRIGGER			,"trigger");

        // entity
        ADD(CHangingLamp, CSE_ALifeObjectHangingLamp, CLSID_OBJECT_HLAMP, "hanging_lamp");
        ADD(CPhysicObject, CSE_ALifeObjectPhysic, CLSID_OBJECT_PHYSIC, "obj_physic");
        ADD(CScriptObject, CSE_ALifeDynamicObjectVisual, CLSID_SCRIPT_OBJECT, "script_object");
        ADD(CBreakableObject, CSE_ALifeObjectBreakable, CLSID_OBJECT_BREAKABLE, "obj_breakable");
        ADD(CClimableObject, CSE_ALifeObjectClimable, CLSID_OBJECT_CLIMABLE, "obj_climable");
        ADD(CPhysicsSkeletonObject, CSE_ALifePHSkeletonObject, CLSID_PH_SKELETON_OBJECT, "obj_phskeleton");
        ADD(CDestroyablePhysicsObject, CSE_ALifeObjectPhysic, CLSID_PHYSICS_DESTROYABLE, "obj_phys_destroyable");

        ADD(CInventoryBox, CSE_ALifeInventoryBox, CLSID_INVENTORY_BOX, "inventory_box");
        ADD(smart_cover::object, CSE_SmartCover, TEXT2CLSID("SMRTCOVR"), "smart_cover");
    }

#pragma region Cordis Scripts Registering
    if (!FS.IsSDK())
    {
        this->add<Cordis::Scripts::Script_UI_MainMenu>(TEXT2CLSID("MAIN_MNU"), "Script_UI_MainMenu");
        this->add<CSmartZone, Cordis::Scripts::Script_SE_SmartTerrain>(
            CLSID_SE_SMART_TERRAIN, "Script_SE_SmartTerrain");
        this->add<CLevelChanger, Cordis::Scripts::Script_SE_LevelChanger>(
            CLSID_SE_LEVEL_CHANGER, "Script_SE_LevelChanger");
        this->add<CActor, Cordis::Scripts::Script_SE_Actor>(CLSID_SE_ACTOR, "Script_SE_Actor");
        this->add<CAI_Stalker, Cordis::Scripts::Script_SE_Stalker>(CLSID_SE_STALKER, "Script_SE_Stalker");
        this->add<CHelicopter, Cordis::Scripts::Script_SE_Helicopter>(CLSID_SE_HELI, "Script_SE_Helicopter");
        this->add<CSmartZone, Cordis::Scripts::Script_SE_Restrictor>(CLSID_SE_RESTRICTOR, "Script_SE_Resctrictor");
        this->add<CPhysicObject, Cordis::Scripts::Script_SE_Physic>(CLSID_SE_PHYSICS_OBJECT, "Script_SE_Physic");
        this->add<smart_cover::object, Cordis::Scripts::Script_SE_SmartCover>(
            CLSID_SE_SMART_COVER, "Script_SE_SmartCover");
        this->add<CDestroyablePhysicsObject, Cordis::Scripts::Script_SE_Physic>(
            CLSID_SE_DESTROYABLE_PHYSICS_OBJECT, "Script_SE_DestroyablePhysic");
        this->add<CHangingLamp, Cordis::Scripts::Script_SE_Lamp>(CLSID_SE_LAMP, "Script_SE_Lamp");
        this->add<CElectricBall, Cordis::Scripts::Script_SE_Artefact>(CLSID_SE_ARTEFACT, "Script_SE_Artefact");
        this->add<CAI_Bloodsucker, Cordis::Scripts::Script_SE_Monster>(
            CLSID_SE_MONSTER_BLOODSUCKER, "Script_SE_Bloodsucker");
        this->add<CAI_Boar, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_BOAR, "Script_SE_Boar");
        this->add<CAI_Dog, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_DOG, "Script_SE_Dog");
        this->add<CAI_Flesh, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_FLESH, "Script_SE_Flesh");
        this->add<CAI_PseudoDog, Cordis::Scripts::Script_SE_Monster>(
            CLSID_SE_MONSTER_DOG_PSEUDO, "Script_SE_PseudoDog");
        this->add<CBurer, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_BURER, "Script_SE_Burer");
        this->add<CCat, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_CAT, "Script_SE_Cat");
        this->add<CChimera, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_CHIMERA, "Script_SE_Chimera");
        this->add<CController, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_CONTROLLER, "Script_SE_Controller");
        this->add<CTushkano, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_TUSHKANO, "Script_SE_Tushkano");
        this->add<CFracture, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_IZLOM, "Script_SE_Izlom");
        this->add<CPoltergeist, Cordis::Scripts::Script_SE_Monster>(
            CLSID_SE_MONSTER_POLTERGEIST, "Script_SE_Poltergeist");
        this->add<CPseudoGigant, Cordis::Scripts::Script_SE_Monster>(
            CLSID_SE_MONSTER_PSEUDO_GIGANT, "Script_SE_PseudoGigant");
        this->add<CZombie, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_ZOMBI, "Script_SE_Zombie");
        this->add<CSnork, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_SNORK, "Script_SE_Snork");
        this->add<CPsyDog, Cordis::Scripts::Script_SE_Monster>(CLSID_SE_MONSTER_DOG_PSY, "Script_SE_PsyDog");
        this->add<CPsyDogPhantom, Cordis::Scripts::Script_SE_Monster>(
            CLSID_SE_MONSTER_DOG_PSY_PHANTOM, "Script_SE_PsyDogPhantom");
        this->add<CTorch, Cordis::Scripts::Script_SE_ItemTorch>(CLSID_SE_TORCH, "Script_SE_Torch");
        this->add<CScientificDetector, Cordis::Scripts::Script_SE_Detector>(
            CLSID_SE_SCIENTIFICDETECTOR, "Script_SE_ScientificDetector");
        this->add<CEliteDetector, Cordis::Scripts::Script_SE_Detector>(
            CLSID_SE_ELITEDETECTOR, "Script_SE_EliteDetector");
        this->add<CAdvancedDetector, Cordis::Scripts::Script_SE_Detector>(
            CLSID_SE_ADVANCEDDETECTOR, "Script_SE_AdvancedDetector");
        this->add<CSimpleDetector, Cordis::Scripts::Script_SE_Detector>(
            CLSID_SE_SIMPLEDETECTOR, "Script_SE_SimpleDetector");
        this->add<CScope, Cordis::Scripts::Script_SE_Item>(CLSID_SE_WEAPON_SCOPE, "Script_SE_WeaponScope");
        this->add<CSilencer, Cordis::Scripts::Script_SE_Item>(CLSID_SE_WEAPON_SILENCER, "Script_SE_WeaponSilencer");
        this->add<CGrenadeLauncher, Cordis::Scripts::Script_SE_Item>(
            CLSID_SE_WEAPON_GRENADE_LAUNCHER, "Script_SE_WeaponGrenadeLauncher");
        this->add<CStalkerOutfit, Cordis::Scripts::Script_SE_Outfit>(CLSID_SE_OUTFIT, "Script_SE_OutfitStalker");
        this->add<CHelmet, Cordis::Scripts::Script_SE_Helmet>(CLSID_SE_HELMET, "Script_SE_Helmet");
        this->add<CWeaponBinoculars, Cordis::Scripts::Script_SE_WeaponMagazined>(
            CLSID_SE_WEAPON_BINOCULAR, "Script_SE_WeaponBinocular");
        this->add<CWeaponKnife, Cordis::Scripts::Script_SE_Weapon>(CLSID_SE_WEAPON_KNIFE, "Script_SE_WeaponKnife");
        this->add<CWeaponBM16, Cordis::Scripts::Script_SE_WeaponShotgun>(CLSID_SE_WEAPON_BM16, "Script_SE_WeaponBM16");
        this->add<CWeaponGroza, Cordis::Scripts::Script_SE_WeaponMagazinedWGL>(
            CLSID_SE_WEAPON_GROZA, "Script_SE_WeaponGroza");
        this->add<CWeaponSVD, Cordis::Scripts::Script_SE_WeaponMagazined>(CLSID_SE_WEAPON_SVD, "Script_SE_WeaponSVD");
        this->add<CWeaponAK74, Cordis::Scripts::Script_SE_WeaponMagazinedWGL>(
            CLSID_SE_WEAPON_AK74, "Script_SE_WeaponAK74");
        this->add<CWeaponLR300, Cordis::Scripts::Script_SE_WeaponMagazined>(
            CLSID_SE_WEAPON_LR300, "Script_SE_WeaponLR300");
        this->add<CWeaponHPSA, Cordis::Scripts::Script_SE_WeaponMagazined>(
            CLSID_SE_WEAPON_HPSA, "Script_SE_WeaponHPSA");
        this->add<CWeaponPM, Cordis::Scripts::Script_SE_WeaponMagazined>(CLSID_SE_WEAPON_PM, "Script_SE_WeaponPM");
        this->add<CWeaponRG6, Cordis::Scripts::Script_SE_WeaponShotgun>(CLSID_SE_WEAPON_RG6, "Script_SE_WeaponRG6");
        this->add<CWeaponRPG7, Cordis::Scripts::Script_SE_WeaponMagazined>(
            CLSID_SE_WEAPON_RPG7, "Script_SE_WeaponRPG7");
        this->add<CWeaponShotgun, Cordis::Scripts::Script_SE_WeaponShotgun>(
            CLSID_SE_WEAPON_SHOTGUN, "Script_SE_WeaponShotgun");
        this->add<CWeaponAutomaticShotgun, Cordis::Scripts::Script_SE_WeaponAutomaticShotgun>(
            CLSID_SE_WEAPON_SHOTGUN_AUTOMATIC, "Script_SE_WeaponShotgunAutomatic");
        this->add<CWeaponSVU, Cordis::Scripts::Script_SE_WeaponMagazined>(CLSID_SE_WEAPON_SVU, "Script_SE_WeaponSVU");
        this->add<CWeaponUSP45, Cordis::Scripts::Script_SE_WeaponMagazined>(
            CLSID_SE_WEAPON_USP45, "Script_SE_WeaponUSP45");
        this->add<CWeaponVal, Cordis::Scripts::Script_SE_WeaponMagazined>(CLSID_SE_WEAPON_VAL, "Script_SE_WeaponVal");
        this->add<CWeaponVintorez, Cordis::Scripts::Script_SE_WeaponMagazined>(
            CLSID_SE_WEAPON_VINTOREZ, "Script_SE_WeaponVintorez");
        this->add<CWeaponWalther, Cordis::Scripts::Script_SE_WeaponMagazined>(CLSID_SE_WEAPON_WALTHER, "Script_SE_WeaponWalther");
        this->add<CHairsZone, Cordis::Scripts::Script_SE_ZoneVisual>(CLSID_SE_ZONE_HAIRS, "Script_SE_ZoneHairs");
        this->add<CMosquitoBald, Cordis::Scripts::Script_SE_ZoneAnomaly>(
            CLSID_SE_ZONE_MOSQUITOBALD, "Script_SE_ZoneMosquitoBald");
        this->add<CMincer, Cordis::Scripts::Script_SE_ZoneAnomaly>(CLSID_SE_ZONE_GALANT, "Script_SE_ZoneGalant");
        this->add<CMincer, Cordis::Scripts::Script_SE_ZoneAnomaly>(CLSID_SE_ZONE_MINCE, "Script_SE_ZoneMince");
        this->add<CRadioactiveZone, Cordis::Scripts::Script_SE_ZoneAnomaly>(
            CLSID_SE_ZONE_RADIOACTIVE, "Script_SE_ZoneRadioactive");
        this->add<CTorridZone, Cordis::Scripts::Script_SE_TorridZone>(CLSID_SE_ZONE_TORRID, "Script_SE_ZoneTorrid");
        this->add<CWeaponAmmo, Cordis::Scripts::Script_SE_Ammo>(CLSID_SE_AMMO, "Script_SE_Ammo");
        this->add<CWeaponAmmo, Cordis::Scripts::Script_SE_Ammo>(CLSID_SE_VOG25, "Script_SE_AmmoVog25");
        this->add<CWeaponAmmo, Cordis::Scripts::Script_SE_Ammo>(CLSID_SE_OG78B, "Script_SE_AmmoOg78b");
        this->add<CWeaponAmmo, Cordis::Scripts::Script_SE_Ammo>(CLSID_SE_M209, "Script_SE_AmmoM209");

        this->add<CF1, Cordis::Scripts::Script_SE_Grenade>(CLSID_SE_GRENADE_F1, "Script_SE_GrenadeF1");
        this->add<CRGD5, Cordis::Scripts::Script_SE_Grenade>(CLSID_SE_GRENADE_RGD, "Script_SE_GrenadeRGD5");

        this->add<CMedkit, Cordis::Scripts::Script_SE_Eatable>(CLSID_SE_MEDKIT, "Script_SE_EatableMedit");
        this->add<CMedkit, Cordis::Scripts::Script_SE_Eatable>(CLSID_SE_BANDAGE, "Script_SE_EatableBandge");
        this->add<CAntirad, Cordis::Scripts::Script_SE_Eatable>(CLSID_SE_ANTIRAD, "Script_SE_EatableAntirad");
        this->add<CFoodItem, Cordis::Scripts::Script_SE_Eatable>(CLSID_SE_FOOD, "Script_SE_Food");
        this->add<CBottleItem, Cordis::Scripts::Script_SE_Eatable>(CLSID_SE_BOTTLE, "Script_SE_Drinking");

        this->add<CInventoryBox, Cordis::Scripts::Script_SE_InventoryBox>(
            CLSID_SE_INVENTORY_BOX, "Script_SE_InventoryBox");
        this->add<CExplosiveItem, Cordis::Scripts::Script_SE_Explosive>(CLSID_SE_EXPLOSION, "Script_SE_Explosive");

        this->add<CPda, Cordis::Scripts::Script_SE_PDA>(CLSID_SE_PDA, "Script_SE_Pda");

        this->add<Cordis::Scripts::Script_SE_SimulationSquad>(
            CLSID_SE_ONLINE_OFFLINE_GROUP, "Script_SE_OnlineOfflineGroup");
    }

#pragma endregion

#ifndef NO_XR_GAME
    // hack, for dedicated server only
    // because we do not have scripts
    // and script functionality is not
    // needed here
    if (!GEnv.isDedicatedServer)
        return;

    ADD(CElectricBall, CSE_ALifeItemArtefact, TEXT2CLSID("SCRPTART"), "artefact_s");
    //	ADD(CtaGameArtefact			,CSE_ALifeItemArtefact			,TEXT2CLSID("AF_CTA") ,"ctaartefact_s");
    ADD(CTorch, CSE_ALifeItemTorch, TEXT2CLSID("TORCH_S"), "device_torch_s");
    ADD(CStalkerOutfit, CSE_ALifeItemCustomOutfit, TEXT2CLSID("E_STLK"), "equ_stalker_s");
    ADD(CScope, CSE_ALifeItem, TEXT2CLSID("WP_SCOPE"), "wpn_scope_s");
    ADD(CWeaponAK74, CSE_ALifeItemWeaponMagazinedWGL, TEXT2CLSID("WP_AK74"), "wpn_ak74_s");
    ADD(CWeaponLR300, CSE_ALifeItemWeaponMagazined, TEXT2CLSID("WP_LR300"), "wpn_lr300_s");
    ADD(CWeaponBinoculars, CSE_ALifeItemWeaponMagazined, TEXT2CLSID("WP_BINOC"), "wpn_binocular_s");
    ADD(CWeaponBM16, CSE_ALifeItemWeaponShotGun, TEXT2CLSID("WP_BM16"), "wpn_bm16_s");
    ADD(CWeaponGroza, CSE_ALifeItemWeaponMagazinedWGL, TEXT2CLSID("WP_GROZA"), "wpn_groza_s");
    ADD(CWeaponSVD, CSE_ALifeItemWeaponMagazined, TEXT2CLSID("WP_SVD"), "wpn_svd_s");
    ADD(CWeaponHPSA, CSE_ALifeItemWeaponMagazined, TEXT2CLSID("WP_HPSA"), "wpn_hpsa_s");
    ADD(CWeaponKnife, CSE_ALifeItemWeapon, TEXT2CLSID("WP_KNIFE"), "wpn_knife_s");
    ADD(CWeaponPM, CSE_ALifeItemWeaponMagazined, TEXT2CLSID("WP_PM"), "wpn_pm_s");
    ADD(CWeaponRG6, CSE_ALifeItemWeaponShotGun, TEXT2CLSID("WP_RG6"), "wpn_rg6_s");
    ADD(CWeaponRPG7, CSE_ALifeItemWeaponMagazined, TEXT2CLSID("WP_RPG7"), "wpn_rpg7_s");
    ADD(CWeaponShotgun, CSE_ALifeItemWeaponShotGun, TEXT2CLSID("WP_SHOTG"), "wpn_shotgun_s");
    ADD(CWeaponSVU, CSE_ALifeItemWeaponMagazined, TEXT2CLSID("WP_SVU"), "wpn_svu_s");
    ADD(CWeaponUSP45, CSE_ALifeItemWeaponMagazined, TEXT2CLSID("WP_USP45"), "wpn_usp45_s");
    ADD(CWeaponVal, CSE_ALifeItemWeaponMagazined, TEXT2CLSID("WP_VAL"), "wpn_val_s");
    ADD(CWeaponVintorez, CSE_ALifeItemWeaponMagazined, TEXT2CLSID("WP_VINT"), "wpn_vintorez_s");
    ADD(CWeaponWalther, CSE_ALifeItemWeaponMagazined, TEXT2CLSID("WP_WALTH"), "wpn_walther_s");
    ADD(CHairsZone, CSE_ALifeZoneVisual, TEXT2CLSID("ZS_BFUZZ"), "zone_bfuzz_s");
    ADD(CMosquitoBald, CSE_ALifeAnomalousZone, TEXT2CLSID("ZS_MBALD"), "zone_mbald_s");
    ADD(CMincer, CSE_ALifeAnomalousZone, TEXT2CLSID("ZS_GALAN"), "zone_galant_s");
    ADD(CMincer, CSE_ALifeAnomalousZone, TEXT2CLSID("ZS_MINCE"), "zone_mincer_s");
    ADD(CAmebaZone, CSE_ALifeZoneVisual, TEXT2CLSID("ZS_AMEBA"), "zone_ameba_s");
    ADD(CNoGravityZone, CSE_ALifeAnomalousZone, TEXT2CLSID("ZS_NGRAV"), "zone_nograv_s");
    ADD(CSpaceRestrictor, CSE_ALifeSpaceRestrictor, TEXT2CLSID("SPC_RS_S"), "script_restr");
#endif // NO_XR_GAME
}
