#pragma once

#include "xrCore/xr_ini.h"

namespace Cordis
{
namespace Scripts
{
namespace XR_LOGIC
{
inline CInifile configure_schemes(CSE_ALifeObject* npc, const CInifile& ini, const xr_string& ini_filename,
    unsigned int stype, const xr_string& section_logic, const xr_string& gulag_name)
{
    if (!npc)
    {
        R_ASSERT2(false, "Object was null!");
        return CInifile("system.ltx");
    }

    std::uint16_t npc_id = npc->ID;

    // Lord: доделать!
    return CInifile("а это убрать и написать нормальный аргумент.ltx");
}

} // namespace XR_LOGIC
} // namespace Scripts
} // namespace Cordis
