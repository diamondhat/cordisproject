#include "stdafx.h"
#include "Script_SchemeSRDeimos.h"

constexpr std::uint32_t _kPostProcessEffectorID = 5;
constexpr std::uint32_t _kCameraEffectorID = 6;
constexpr std::uint32_t _kPostProcessEffector2ID = 7;

namespace Cordis
{
namespace Scripts
{
Script_SchemeSRDeimos::Script_SchemeSRDeimos(
    CScriptGameObject* const p_client_object, DataBase::Script_ComponentScheme_SRDeimos* storage)
    : inherited_scheme(p_client_object, storage), m_p_storage(storage)
{
    this->m_scheme_name = "sr_deimos";
    this->m_p_storage->setIntensity(0.0f);
    this->m_camera_effector_time = 0;
    this->m_phase = 0;
}

Script_SchemeSRDeimos::~Script_SchemeSRDeimos(void) {}

void Script_SchemeSRDeimos::update(const float delta)
{
    if (!DataBase::Storage::getInstance().getActor() || Device.dwPrecacheFrame > 1)
    {
        return;
    }
    CScriptGameObject* const p_client_actor = DataBase::Storage::getInstance().getActor();

    Script_Binder_Actor* const p_binder_actor = dynamic_cast<Script_Binder_Actor*>(p_client_actor->binded_object());
    if (!p_binder_actor)
    {
        R_ASSERT2(false, "can't be check your binded object for Actor");
        return;
    }

    if (p_binder_actor->getDeimosIntensity())
    {
        this->m_p_storage->setIntensity(p_binder_actor->getDeimosIntensity());
        p_binder_actor->setDeimosIntensity(0.0f);

        if (this->m_p_storage->getIntensity() > this->m_p_storage->getDisableBound())
        {
            // Lord: протестировать
            Globals::Game::level::add_pp_effector(
                xr_string(this->m_p_storage->getPostProcessEffectorName()).append(".ppe").c_str(),
                _kPostProcessEffectorID, true);
            XR_SOUND::play_sound_looped(p_client_actor->ID(), this->m_p_storage->getNoiseSoundName());
            this->m_phase = 1;
        }

        if (this->m_p_storage->getIntensity() > this->m_p_storage->getSwitchLowerBound())
        {
            XR_SOUND::play_sound_looped(p_client_actor->ID(), this->m_p_storage->getHeartBeetSoundName());
            this->m_phase = 2;
        }
    }

    const Fvector& movement_speed = p_client_actor->GetMovementSpeed();
    float current_speed = movement_speed.magnitude();
    float intensity_delta = (this->m_p_storage->getMovementSpeed() - current_speed) * 0.005f;

    if (intensity_delta)
        intensity_delta = this->m_p_storage->getGrowingKoef() * intensity_delta;
    else
        intensity_delta = this->m_p_storage->getLoweringKoef() * intensity_delta;

    this->m_p_storage->setIntensity((this->m_p_storage->getIntensity() + intensity_delta));

    if (this->m_p_storage->getIntensity() > 1.0f)
        this->m_p_storage->setIntensity(1.0f);
    else if (this->m_p_storage->getIntensity() < 0.0f)
        this->m_p_storage->setIntensity(0.0f);

    float postprocess_intensity = this->m_p_storage->getIntensity();
    float noise_intensity = this->m_p_storage->getIntensity();
    float heartbeet_intensity = this->m_p_storage->getIntensity();

    if (this->m_phase)
    {
        Globals::Game::level::set_pp_effector_factor(_kPostProcessEffectorID, postprocess_intensity);
        XR_SOUND::set_volume_sound_looped(
            p_client_actor->ID(), this->m_p_storage->getNoiseSoundName(), noise_intensity);

        if (this->m_phase > 1)
            XR_SOUND::set_volume_sound_looped(
                p_client_actor->ID(), this->m_p_storage->getHeartBeetSoundName(), heartbeet_intensity);
    }

    if (intensity_delta)
    {
        if (this->m_p_storage->getIntensity() > this->m_p_storage->getSwitchUpperBound())
        {
            std::uint32_t current_time = Globals::get_time_global();
            if (current_time - this->m_camera_effector_time >
                this->m_p_storage->getCameraEffectorRepeatingTime())
            {
                this->m_camera_effector_time = Globals::get_time_global();
                Globals::Game::level::add_cam_effector(xr_string("camera_effects\\")
                                                           .append(this->m_p_storage->getCameraEffectorName())
                                                           .append(".anm")
                                                           .c_str(),
                    _kCameraEffectorID, false, "");
                Globals::Game::level::add_pp_effector(
                    xr_string(this->m_p_storage->getPostProcessEffector2Name()).append(".ppe").c_str(),
                    _kPostProcessEffector2ID, false);
                p_client_actor->SetHealth(-this->m_p_storage->getHealthLost());
            }
        }
        else if (this->m_p_storage->getIntensity() > this->m_p_storage->getSwitchLowerBound())
        {
            if (this->m_phase < 2)
            {
                XR_SOUND::play_sound_looped(p_client_actor->ID(), this->m_p_storage->getHeartBeetSoundName());
                XR_SOUND::set_volume_sound_looped(
                    p_client_actor->ID(), this->m_p_storage->getHeartBeetSoundName(), heartbeet_intensity);
                this->m_phase = 2;
            }
        }
        else if (this->m_p_storage->getIntensity() > this->m_p_storage->getDisableBound())
        {
            if (this->m_phase < 1)
            {
                Globals::Game::level::add_pp_effector(
                    xr_string(this->m_p_storage->getPostProcessEffectorName()).append(".ppe").c_str(),
                    _kPostProcessEffectorID, true);
                Globals::Game::level::set_pp_effector_factor(_kPostProcessEffectorID, postprocess_intensity);
                XR_SOUND::play_sound_looped(p_client_actor->ID(), this->m_p_storage->getNoiseSoundName());
                XR_SOUND::set_volume_sound_looped(
                    p_client_actor->ID(), this->m_p_storage->getNoiseSoundName(), noise_intensity);
                this->m_phase = 1;
            }
        }
    }
    else
    {
        if (this->m_p_storage->getIntensity() < this->m_p_storage->getDisableBound())
        {
            if (this->m_phase)
            {
                XR_SOUND::stop_sound_looped(p_client_actor->ID(), this->m_p_storage->getNoiseSoundName());
                Globals::Game::level::remove_pp_effector(_kPostProcessEffectorID);
                this->m_phase = 0;
            }
        }
        else if (this->m_p_storage->getIntensity() < this->m_p_storage->getSwitchLowerBound())
        {
            if (this->m_phase > 1)
            {
                XR_SOUND::stop_sound_looped(p_client_actor->ID(), this->m_p_storage->getHeartBeetSoundName());
                this->m_phase = 1;
            }
        }
        else if (this->m_p_storage->getIntensity() < this->m_p_storage->getSwitchUpperBound())
        {
            Globals::Game::level::remove_cam_effector(_kCameraEffectorID);
            Globals::Game::level::remove_pp_effector(_kPostProcessEffector2ID);
        }
    }

    if (XR_LOGIC::try_switch_to_another_section(this->m_npc, this->m_p_storage, p_client_actor))
    {
        if (this->m_phase)
        {
            XR_SOUND::stop_sound_looped(p_client_actor->ID(), this->m_p_storage->getNoiseSoundName());
            Globals::Game::level::remove_pp_effector(_kPostProcessEffectorID);
            if (this->m_phase > 1)
            {
                XR_SOUND::stop_sound_looped(p_client_actor->ID(), this->m_p_storage->getHeartBeetSoundName());
                Globals::Game::level::remove_cam_effector(_kCameraEffectorID);
                Globals::Game::level::remove_pp_effector(_kPostProcessEffector2ID);
            }
        }

        return;
    }
}

void Script_SchemeSRDeimos::set_scheme(CScriptGameObject* const p_client_object, CScriptIniFile* const p_ini,
    const xr_string& scheme_name, const xr_string& section_name, const xr_string& gulag_name)
{
    if (!p_client_object)
    {
        R_ASSERT2(false, "object is null!");
        return;
    }

    DataBase::Script_ComponentScheme_SRDeimos* p_storage = XR_LOGIC::assign_storage_and_bind<DataBase::Script_ComponentScheme_SRDeimos>(p_client_object, p_ini, scheme_name, section_name, gulag_name);

    if (!p_storage)
    {
        R_ASSERT2(false, "object is null!");
        return;
    }

    p_storage->setLogic(XR_LOGIC::cfg_get_switch_conditions(p_ini, section_name, p_client_object));

    float movement_speed = Globals::Utils::cfg_get_number(p_ini, section_name, "movement_speed");

    if (fis_zero(movement_speed))
        movement_speed = 100.0f;
    
    float growing_koef = Globals::Utils::cfg_get_number(p_ini, section_name, "growing_koef");

    if (fis_zero(growing_koef))
        growing_koef = 0.1f;

    float lowering_koef = Globals::Utils::cfg_get_number(p_ini, section_name, "lowering_koef");

    if (fis_zero(lowering_koef))
        lowering_koef = growing_koef;


    p_storage->setMovementSpeed(movement_speed);
    p_storage->setGrowingKoef(growing_koef);
    p_storage->setLoweringKoef(lowering_koef);
    p_storage->setPostProcessEffectorName(Globals::Utils::cfg_get_string(p_ini, section_name, "pp_effector"));
    p_storage->setPostProcessEffector2Name(Globals::Utils::cfg_get_string(p_ini, section_name, "pp_effector2"));
    p_storage->setCameraEffectorName(Globals::Utils::cfg_get_string(p_ini, section_name, "cam_effector"));
    
    std::uint32_t camera_repeating_time = static_cast<std::uint32_t>(Globals::Utils::cfg_get_number(p_ini, section_name, "cam_effector_repeating_time"));

    if (!camera_repeating_time)
        camera_repeating_time = 10;

    camera_repeating_time *= 1000;

    p_storage->setCameraEffectorRepeatingTime(camera_repeating_time);
    p_storage->setNoiseSoundName(Globals::Utils::cfg_get_string(p_ini, section_name, "noise_sound"));
    p_storage->setHeartBeetSoundName(Globals::Utils::cfg_get_string(p_ini, section_name, "heartbeet_sound"));
    
    float health_lost = Globals::Utils::cfg_get_number(p_ini, section_name, "health_lost");

    if (fis_zero(health_lost))
        health_lost = 0.01f;

    p_storage->setHealthLost(health_lost);
    
    float disable_bound = Globals::Utils::cfg_get_number(p_ini, section_name, "disable_bound");

    if (fis_zero(disable_bound))
        disable_bound = 0.1f;

    p_storage->setDisableBound(disable_bound);

    float switch_lower_bound = Globals::Utils::cfg_get_number(p_ini, section_name, "switch_lower_bound");

    if (fis_zero(switch_lower_bound))
        switch_lower_bound = 0.5f;

    p_storage->setSwitchLowerBound(switch_lower_bound);

    float switch_upper_bound = Globals::Utils::cfg_get_number(p_ini, section_name, "switch_upper_bound");

    if (fis_zero(switch_upper_bound))
        switch_upper_bound = 0.75f;

    p_storage->setSwitchUpperBound(switch_upper_bound);
}

} // namespace Scripts
} // namespace Cordis
