#include "stdafx.h"
#include "Script_SE_SimulationSquad.h"
#include "Script_XR_Logic.h"


namespace Cordis
{
namespace Scripts
{
Script_SE_SimulationSquad::Script_SE_SimulationSquad(LPCSTR section) : inherited(section), m_assigned_target_id(0), m_current_spot_id(0), m_current_target_id(0), m_smart_terrain_id(0),
      m_settings_id(this->name()),
      m_sound_manager(Script_SoundManager::getSoundManager((xr_string("squad_").append(this->name())))),
      m_player_id(Globals::Utils::cfg_get_string(Globals::get_system_ini(), this->m_settings_id, "faction")),
      m_condlist_action(XR_LOGIC::parse_condlist_by_server_object("assign_action", "target_smart",
          Globals::Utils::cfg_get_string(Globals::get_system_ini(), this->m_settings_id, "target_smart"))),
      m_condlist_death(XR_LOGIC::parse_condlist_by_server_object("death_condlist", "on_death",
          Globals::Utils::cfg_get_string(Globals::get_system_ini(), this->m_settings_id, "target_smart"))),
      m_condlist_invulnerability(XR_LOGIC::parse_condlist_by_server_object("invulnerability", "invulnerability", Globals::Utils::cfg_get_string(Globals::get_system_ini(), this->m_settings_id, "invulnerability"))),
      m_relationship(Globals::Utils::cfg_get_string(Globals::get_system_ini(), this->m_settings_id, "relationship")),
      m_sympathy(Globals::Utils::cfg_get_number(Globals::get_system_ini(), this->m_settings_id, "sympathy", this)),
      m_condlist_show_spot(XR_LOGIC::parse_condlist_by_server_object("show_spot", "show_spot", Globals::Utils::cfg_get_string(Globals::get_system_ini(), this->m_settings_id, "show_spot"))),
      m_is_always_arrived(Globals::Utils::cfg_get_bool(Globals::get_system_ini(), this->m_settings_id, "always_walk", this))
{
    
}

Script_SE_SimulationSquad::~Script_SE_SimulationSquad(void) 
{

}


} // namespace Scripts
} // namespace Cordis