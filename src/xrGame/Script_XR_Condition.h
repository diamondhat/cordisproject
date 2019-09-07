#pragma once
#include "Script_SurgeManager.h"

namespace Cordis
{
namespace Scripts
{
namespace XR_CONDITION
{
inline bool is_surge_started(void) { return Script_SurgeManager::getInstance().IsStarted(); }

inline bool is_enemy_actor(CScriptGameObject* enemy, CScriptGameObject* object)
{
    if (!enemy)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    if (!object)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    return (enemy->ID() == object->ID());
}

inline bool is_fighting_dist_ge(CScriptGameObject* enemy, CScriptGameObject* npc, const float& distance)
{
    if (!enemy)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    if (!npc)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    return (enemy->Position().distance_to_sqr(npc->Position()) >= (distance * distance));
}

inline bool is_fighting_dist_ge(CSE_ALifeDynamicObject* enemy, CSE_ALifeDynamicObject* npc, const float& distance)
{
    if (!enemy)
    {
        R_ASSERT2(false, "object was null!");
        return;
    }

    if (!npc)
    {
        R_ASSERT2(false, "object was null!");
        return;
    }

    return (enemy->Position().distance_to_sqr(npc->Position()) >= (distance * distance));
}

inline bool is_fighting_dist_le(CScriptGameObject* enemy, CScriptGameObject* npc, const float& distance)
{
    if (!enemy)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    if (!npc)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    return (enemy->Position().distance_to_sqr(npc->Position()) <= distance * distance);
}

inline bool is_fighting_dist_le(CSE_ALifeDynamicObject* enemy, CSE_ALifeDynamicObject* npc, const float& distance)
{
    if (!enemy)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    if (!npc)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    return (enemy->Position().distance_to_sqr(npc->Position()) <= distance * distance);
}

inline bool is_enemy_in_zone(CScriptGameObject* enemy, CScriptGameObject* npc, const xr_string& zone_name)
{
    if (!enemy)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    if (!npc)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    if (!zone_name.size())
    {
        R_ASSERT2(false, "Zone name can't be empty!");
        return false;
    }

    CScriptGameObject* zone = DataBase::Storage::getInstance().getZoneByName()[zone_name];

    if (!zone)
    {
        R_ASSERT2(false, "Can't find a script object's zone!");
        return false;
    }

    return Globals::Utils::is_npc_in_zone(enemy, zone);
}

inline bool is_npc_in_zone(CSE_ALifeDynamicObject* server_enemy, CScriptGameObject* npc, const xr_string& zone_name)
{
    if (!server_enemy)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    if (!npc)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    if (!zone_name.size())
    {
        R_ASSERT2(false, "Zone name can't be empty!");
        return false;
    }

    CScriptGameObject* zone = DataBase::Storage::getInstance().getZoneByName()[zone_name];

    if (!zone)
    {
        R_ASSERT2(false, "Can't find a script object's zone");
        return false;
    }

    return Globals::Utils::is_npc_in_zone(server_enemy, zone);
}

inline bool is_black_screen(CScriptGameObject* actor, CScriptGameObject* npc) { return Device.dwPrecacheFrame > 1; }

inline bool is_black_screen(CSE_ALifeDynamicObject* server_actor, CSE_ALifeDynamicObject* server_npc)
{
    return Device.dwPrecacheFrame > 1;
}

inline bool check_npc_name(CScriptGameObject* actor, CScriptGameObject* npc, const xr_string& npc_name)
{
    if (!actor)
    {
        R_ASSERT2(false, "actor is null!");
        return false;
    }

    if (!npc)
    {
        R_ASSERT2(false, "npc is null!");
        return false;
    }

    if (!npc->Name())
    {
        R_ASSERT2(false, "String can't be nullptr! Something goes wrong!");
        return false;
    }

    if (!npc_name.size())
    {
        R_ASSERT2(false, "String can't be empty!");
        return false;
    }

    return (npc->Name() == npc_name);
}

inline bool check_npc_name(
    CSE_ALifeDynamicObject* server_actor, CSE_ALifeDynamicObject* server_npc, const xr_string& npc_name)
{
    if (!server_actor)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    if (!server_npc)
    {
        R_ASSERT2(false, "object was null!");
        return false;
    }

    if (!server_npc->name_replace())
    {
        R_ASSERT2(false, "string can't be null! Something goes wrong!");
        return false;
    }

    if (!npc_name.size())
    {
        R_ASSERT2(false, "Name can't be empty!");
        return false;
    }

    return (server_npc->name_replace() == npc_name);
}



} // namespace XR_CONDITION
} // namespace Scripts
} // namespace Cordis
