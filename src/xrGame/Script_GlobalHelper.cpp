#include "stdafx.h"
#include "Script_GlobalHelper.h"

Cordis::Scripts::Script_GlobalHelper::Script_GlobalHelper(void)
{
// @ Здесь инициализация всех "локальных" карт которые находятся в каждом скрипте
// @ Инициаилизируется на запуске самого интро
#pragma region Cordis Usable Clsid
    this->m_stalker_classes[Globals::get_script_clsid(CLSID_SE_ACTOR)] = true;
    this->m_stalker_classes[Globals::get_script_clsid(CLSID_SE_STALKER)] = true;

    MESSAGEI("registered stalker clsid classes!");

    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_BLOODSUCKER)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_BOAR)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_DOG)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_FLESH)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_DOG_PSEUDO)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_DOG_PSY)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_DOG_PSY_PHANTOM)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_DOG)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_BURER)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_CHIMERA)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_CAT)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_CONTROLLER)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_IZLOM)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_POLTERGEIST)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_PSEUDO_GIGANT)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_ZOMBI)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_SNORK)] = true;
    this->m_monster_classes[Globals::get_script_clsid(CLSID_SE_MONSTER_TUSHKANO)] = true;

    MESSAGEI("registered monster clsid classes!");

    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_VINTOREZ)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_AK74)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_LR300)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_HPSA)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_PM)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_SHOTGUN)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_SHOTGUN_AUTOMATIC)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_BM16)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_SVD)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_SVU)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_RG6)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_RPG7)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_VAL)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_WALTHER)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_USP45)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_GROZA)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_KNIFE)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_WEAPON_GRENADE_LAUNCHER)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_GRENADE_F1)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_SE_GRENADE_RGD)] = true;
    this->m_weapon_classes[Globals::get_script_clsid(CLSID_OBJECT_G_FAKE)] = true;

    MESSAGEI("registered weapon clsid classes!");

    this->m_artefact_classes[Globals::get_script_clsid(CLSID_SE_ARTEFACT)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_BAST)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_BLACK_GRAVI)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_BLACKDROPS)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_ELECTRIC_BALL)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_DUMMY)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_FADED_BALL)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_GALANTINE)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_GRAVI)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_MERCURY_BALL)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_NEEDLES)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_RUSTY_HAIR)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_THORN)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_AF_ZUDA)] = true;
    this->m_artefact_classes[Globals::get_script_clsid(CLSID_ARTEFACT)] = true;

    MESSAGEI("registered artefact clsid classes!");

#pragma endregion

#pragma region Cordis XR_PATROL Initializing
    std::pair<Fvector, float> xr_patrol_formations_data;
    xr_patrol_formations_data.first = Fvector().set(0.3f, 0.0f, -1.0f);
    xr_patrol_formations_data.second = 1.2f;
    /*        XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_BACK] = xr_vector<std::pair<Fvector,
     * float>>();*/
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_BACK].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(-0.3f, 0.0f, -1.0f);
    xr_patrol_formations_data.second = 2.4f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_BACK].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(0.3f, 0.0f, -1.0f);
    xr_patrol_formations_data.second = 3.6f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_BACK].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(-0.3f, 0.0f, -1.0f);
    xr_patrol_formations_data.second = 4.8f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_BACK].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(0.3f, 0.0f, -1.0f);
    xr_patrol_formations_data.second = 6.0f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_BACK].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(-0.3f, 0.0f, -1.0f);
    xr_patrol_formations_data.second = 7.2f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_BACK].push_back(xr_patrol_formations_data);

    xr_patrol_formations_data.first = Fvector().set(-1.0f, 0.0f, 0.0f);
    xr_patrol_formations_data.second = 2.0f;
    /*        XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_LINE] = xr_vector<std::pair<Fvector,
     * float>>();*/
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_LINE].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(-1.0f, 0.0f, 0.0f);
    xr_patrol_formations_data.second = 4.0f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_LINE].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(-1.0f, 0.0f, 0.0f);
    xr_patrol_formations_data.second = 6.0f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_LINE].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(1.0f, 0.0f, 0.0f);
    xr_patrol_formations_data.second = 2.0f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_LINE].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(1.0f, 0.0f, 0.0f);
    xr_patrol_formations_data.second = 4.0f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_LINE].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(1.0f, 0.0f, 0.0f);
    xr_patrol_formations_data.second = 6.0f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_LINE].push_back(xr_patrol_formations_data);

    xr_patrol_formations_data.first = Fvector().set(0.44721359f, 0.0f, -0.89442718f);
    xr_patrol_formations_data.second = 2.2360680f;
    /*        XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_AROUND] = xr_vector<std::pair<Fvector,
     * float>>();*/

    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_AROUND].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(-0.44721359f, 0.0f, -0.89442718f);
    xr_patrol_formations_data.second = 2.2360680f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_AROUND].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(1.0f, 0.0f, 0.0f);
    xr_patrol_formations_data.second = 2.0f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_AROUND].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(-1.0f, 0.0f, 0.0f);
    xr_patrol_formations_data.second = 2.0f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_AROUND].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(0.44721359f, 0.0f, -0.89442718f);
    xr_patrol_formations_data.second = 2.2360680f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_AROUND].push_back(xr_patrol_formations_data);
    xr_patrol_formations_data.first = Fvector().set(-0.44721359f, 0.0f, -0.89442718f);
    xr_patrol_formations_data.second = 2.2360680f;
    XR_PATROL::getFormations()[XR_PATROL::XR_PATROL_FORMATION_INDEX_AROUND].push_back(xr_patrol_formations_data);
#pragma endregion

	this->initialize_SmartCovers();

#pragma region Cordis Animpoint System Table initialization
    // @ Eatable
    this->setRegisteredEatableVisuals("stalker_hero_1", true);
    this->setRegisteredEatableVisuals("stalker_hero_novice_1", true);
    this->setRegisteredEatableVisuals("stalker_hero_stalker_1", true);
    this->setRegisteredEatableVisuals("stalker_hero_dolg_1", true);
    this->setRegisteredEatableVisuals("stalker_hero_dolg_2", true);
    this->setRegisteredEatableVisuals("stalker_hero_freedom_1", true);
    this->setRegisteredEatableVisuals("stalker_hero_freedom_2", true);
    this->setRegisteredEatableVisuals("stalker_hero_specops", true);
    this->setRegisteredEatableVisuals("stalker_hero_military", true);
    this->setRegisteredEatableVisuals("stalker_hero_neutral_nauchniy", true);
    this->setRegisteredEatableVisuals("stalker_hero_cs_heavy", true);
    this->setRegisteredEatableVisuals("stalker_hero_exo", true);
    this->setRegisteredEatableVisuals("stalker_bandit_3", true);
    this->setRegisteredEatableVisuals("stalker_bandit_3_face_1", true);
    this->setRegisteredEatableVisuals("stalker_bandit_3_mask", true);
    this->setRegisteredEatableVisuals("stalker_bandit_4", true);
    this->setRegisteredEatableVisuals("stalker_dolg_2_face_1", true);
    this->setRegisteredEatableVisuals("stalker_dolg_1_face_1", true);
    this->setRegisteredEatableVisuals("stalker_dolg_3_face_1", true);
    this->setRegisteredEatableVisuals("stalker_freedom_1_face_1", true);
    this->setRegisteredEatableVisuals("stalker_freedom_2_face_1", true);
    this->setRegisteredEatableVisuals("stalker_freedom_2_face_2", true);
    this->setRegisteredEatableVisuals("stalker_freedom_3", true);
    this->setRegisteredEatableVisuals("stalker_freedom_3_face_1", true);
    this->setRegisteredEatableVisuals("stalker_monolith_1_face_1", true);
    this->setRegisteredEatableVisuals("stalker_nebo_2_face_1", true);
    this->setRegisteredEatableVisuals("stalker_neutral_1_face_1", true);
    this->setRegisteredEatableVisuals("stalker_neutral_1_face_2", true);
    this->setRegisteredEatableVisuals("stalker_neutral_1_face_3", true);
    this->setRegisteredEatableVisuals("stalker_bandit_3_face_3", true);
    this->setRegisteredEatableVisuals("stalker_neutral_2_face_1", true);
    this->setRegisteredEatableVisuals("stalker_neutral_2_face_2", true);
    this->setRegisteredEatableVisuals("stalker_neutral_2_face_3", true);
    this->setRegisteredEatableVisuals("stalker_neutral_2_face_4", true);
    this->setRegisteredEatableVisuals("stalker_neutral_2_face_5", true);
    this->setRegisteredEatableVisuals("stalker_neutral_2_face_6", true);
    this->setRegisteredEatableVisuals("stalker_neutral_2_face_7", true);
    this->setRegisteredEatableVisuals("stalker_bandit_3_face_2", true);
    this->setRegisteredEatableVisuals("stalker_neutral_3_face_1", true);
    this->setRegisteredEatableVisuals("stalker_neutral_nauchniy_face_1", true);
    this->setRegisteredEatableVisuals("stalker_neutral_nauchniy_face_3", true);
    this->setRegisteredEatableVisuals("stalker_soldier_1", true);
    this->setRegisteredEatableVisuals("stalker_soldier_1_face_1", true);
    this->setRegisteredEatableVisuals("stalker_solider_2", true);
    this->setRegisteredEatableVisuals("stalker_solider_2_face_1", true);
    this->setRegisteredEatableVisuals("stalker_solider_3_face_1", true);
    this->setRegisteredEatableVisuals("stalker_solider_ecolog_face_1", true);
    this->setRegisteredEatableVisuals("stalker_ucheniy_1_face_1", true);
    this->setRegisteredEatableVisuals("stalker_ucheniy_1_face_2", true);
    this->setRegisteredEatableVisuals("stalker_zombied_1", true);
    this->setRegisteredEatableVisuals("stalker_zombied_3", true);
    this->setRegisteredEatableVisuals("stalker_neutral_nauchniy_face_2", true);

    // @ Harmonica
    this->setRegisteredHarmonicaVisuals("stalker_hero_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_hero_novice_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_hero_stalker_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_hero_dolg_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_hero_dolg_2", true);
    this->setRegisteredHarmonicaVisuals("stalker_hero_freedom_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_hero_freedom_2", true);
    this->setRegisteredHarmonicaVisuals("stalker_hero_specops", true);
    this->setRegisteredHarmonicaVisuals("stalker_hero_military", true);
    this->setRegisteredHarmonicaVisuals("stalker_hero_neutral_nauchniy", true);
    this->setRegisteredHarmonicaVisuals("stalker_hero_cs_heavy", true);
    this->setRegisteredHarmonicaVisuals("stalker_hero_exo", true);
    this->setRegisteredHarmonicaVisuals("stalker_bandit_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_bandit_2", true);
    this->setRegisteredHarmonicaVisuals("stalker_bandit_3", true);
    this->setRegisteredHarmonicaVisuals("stalker_bandit_3_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_bandit_3_mask", true);
    this->setRegisteredHarmonicaVisuals("stalker_bandit_4", true);
    this->setRegisteredHarmonicaVisuals("stalker_dolg_2_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_dolg_1_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_dolg_2_mask", true);
    this->setRegisteredHarmonicaVisuals("stalker_dolg_3_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_freedom_1_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_freedom_2_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_freedom_2_face_2", true);
    this->setRegisteredHarmonicaVisuals("stalker_freedom_2_mask", true);
    this->setRegisteredHarmonicaVisuals("stalker_freedom_3", true);
    this->setRegisteredHarmonicaVisuals("stalker_freedom_3_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_monolith_1_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_nebo_2_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_1_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_1_face_2", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_1_face_3", true);
    this->setRegisteredHarmonicaVisuals("stalker_bandit_3_face_3", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_2_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_2_face_2", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_2_face_3", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_2_face_4", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_2_face_5", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_2_face_6", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_2_face_7", true);
    this->setRegisteredHarmonicaVisuals("stalker_bandit_3_face_2", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_2_mask", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_3_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_nauchniy_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_nauchniy_face_3", true);
    this->setRegisteredHarmonicaVisuals("stalker_soldier_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_soldier_1_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_solider_2", true);
    this->setRegisteredHarmonicaVisuals("stalker_solider_2_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_solider_3_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_solider_ecolog_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_ucheniy_1_face_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_ucheniy_1_face_2", true);
    this->setRegisteredHarmonicaVisuals("stalker_zombied_1", true);
    this->setRegisteredHarmonicaVisuals("stalker_zombied_2", true);
    this->setRegisteredHarmonicaVisuals("stalker_zombied_3", true);
    this->setRegisteredHarmonicaVisuals("stalker_zombied_4", true);
    this->setRegisteredHarmonicaVisuals("stalker_neutral_nauchniy_face_2", true);

    this->m_animpoint_table["animpoint_stay_wall"].push_back(
        { Globals::predicate_const_true, "animpoint_stay_wall" });
    this->m_animpoint_table["animpoint_stay_wall"].push_back(
        { Globals::predicate_animpoint_bread, "predicate_animpoint_bread" });
    this->m_animpoint_table["animpoint_stay_wall"].push_back(
        { Globals::predicate_animpoint_kolbasa, "animpoint_stay_wall_eat_kolbasa" });
    this->m_animpoint_table["animpoint_stay_wall"].push_back(
        { Globals::predicate_animpoint_vodka, "animpoint_stay_wall_drink_vodka" });
    this->m_animpoint_table["animpoint_stay_wall"].push_back(
        { Globals::predicate_animpoint_energy, "animpoint_stay_wall_drink_energy" });
    this->m_animpoint_table["animpoint_stay_wall"].push_back(
        { Globals::predicate_animpoint_weapon, "animpoint_stay_wall_weapon" });

    this->m_animpoint_table["animpoint_stay_table"].push_back(
        { Globals::predicate_const_true, "animpoint_stay_table" });
    this->m_animpoint_table["animpoint_stay_table"].push_back(
        { Globals::predicate_animpoint_bread, "animpoint_stay_table_eat_bread" });
    this->m_animpoint_table["animpoint_stay_table"].push_back(
        { Globals::predicate_animpoint_kolbasa, "animpoint_stay_table_eat_kolbasa" });
    this->m_animpoint_table["animpoint_stay_table"].push_back(
        { Globals::predicate_animpoint_vodka, "animpoint_stay_table_drink_vodka" });
    this->m_animpoint_table["animpoint_stay_table"].push_back(
        { Globals::predicate_animpoint_energy, "animpoint_stay_table_drink_energy" });
    this->m_animpoint_table["animpoint_stay_table"].push_back(
        { Globals::predicate_animpoint_weapon, "animpoint_stay_table_weapon" });

    this->m_animpoint_table["animpoint_sit_high"].push_back({ Globals::predicate_const_true, "animpoint_sit_high" });
    this->m_animpoint_table["animpoint_sit_high"].push_back(
        { Globals::predicate_animpoint_bread, "animpoint_sit_high_eat_bread" });
    this->m_animpoint_table["animpoint_sit_high"].push_back(
        { Globals::predicate_animpoint_kolbasa, "animpoint_sit_high_eat_kolbasa" });
    this->m_animpoint_table["animpoint_sit_high"].push_back(
        { Globals::predicate_animpoint_vodka, "animpoint_sit_high_drink_vodka" });
    this->m_animpoint_table["animpoint_sit_high"].push_back(
        { Globals::predicate_animpoint_energy, "animpoint_sit_high_drink_energy" });
    this->m_animpoint_table["animpoint_sit_high"].push_back(
        { Globals::predicate_animpoint_harmonica, "animpoint_sit_high_harmonica" });

    this->m_animpoint_table["animpoint_sit_normal"].push_back(
        { Globals::predicate_const_true, "animpoint_sit_normal" });
    this->m_animpoint_table["animpoint_sit_normal"].push_back(
        { Globals::predicate_animpoint_bread, "animpoint_sit_normal_eat_bread" });
    this->m_animpoint_table["animpoint_sit_normal"].push_back(
        { Globals::predicate_animpoint_kolbasa, "animpoint_sit_normal_eat_kolbasa" });
    this->m_animpoint_table["animpoint_sit_normal"].push_back(
        { Globals::predicate_animpoint_vodka, "animpoint_sit_normal_drink_vodka" });
    this->m_animpoint_table["animpoint_sit_normal"].push_back(
        { Globals::predicate_animpoint_energy, "animpoint_sit_normal_drink_energy" });
    this->m_animpoint_table["animpoint_sit_normal"].push_back(
        { Globals::predicate_animpoint_guitar, "animpoint_sit_normal_guitar" });

    this->m_animpoint_table["animpoint_sit_low"].push_back({ Globals::predicate_const_true, "animpoint_sit_low" });
    this->m_animpoint_table["animpoint_sit_low"].push_back(
        { Globals::predicate_animpoint_bread, "animpoint_sit_low_eat_bread" });
    this->m_animpoint_table["animpoint_sit_low"].push_back(
        { Globals::predicate_animpoint_kolbasa, "animpoint_sit_low_eat_kolbasa" });
    this->m_animpoint_table["animpoint_sit_low"].push_back(
        { Globals::predicate_animpoint_vodka, "animpoint_sit_low_drink_vodka" });
    this->m_animpoint_table["animpoint_sit_low"].push_back(
        { Globals::predicate_animpoint_energy, "animpoint_sit_low_drink_energy" });
    this->m_animpoint_table["animpoint_sit_low"].push_back(
        { Globals::predicate_animpoint_guitar, "animpoint_sit_low_guitar" });
    this->m_animpoint_table["animpoint_sit_low"].push_back(
        { Globals::predicate_animpoint_harmonica, "animpoint_sit_low_harmonica" });

    this->m_animpoint_table["walker_camp"].push_back({ Globals::predicate_animpoint_guitar, "play_guitar" });
    this->m_animpoint_table["walker_camp"].push_back({ Globals::predicate_animpoint_harmonica, "play_harmonica" });
#pragma endregion

#pragma region Cordis Jobs Types Initializing
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNameWalker] =
        Globals::GulagGenerator::kGulagJobPath;
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNameCamper] =
        Globals::GulagGenerator::kGulagJobPath;
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNamePatrol] =
        Globals::GulagGenerator::kGulagJobPath;
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNameAnimpoint] =
        Globals::GulagGenerator::kGulagJobSmartCover;
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNameSmartCover] =
        Globals::GulagGenerator::kGulagJobSmartCover;
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNameRemark] =
        Globals::GulagGenerator::kGulagJobPoint;
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNameCover] =
        Globals::GulagGenerator::kGulagJobPoint;
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNameSleeper] =
        Globals::GulagGenerator::kGulagJobPath;
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNameMobWalker] =
        Globals::GulagGenerator::kGulagJobPath;
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNameMobHome] =
        Globals::GulagGenerator::kGulagJobPath;
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNameMobJump] =
        Globals::GulagGenerator::kGulagJobPoint;
    this->m_job_type_by_scheme[Globals::GulagGenerator::kGulagJobNameCompanion] =
        Globals::GulagGenerator::kGulagJobPoint;
#pragma endregion

#pragma region Cordis State Library initialization
	this->initialize_StateLib_Descriptors();
#pragma endregion
#pragma endregion

#pragma region Cordis Initializing animation for monsters by actions(uses in state manager for monster)
    this->m_monster_animation_to_action["free"] = MonsterSpace::eMentalStateFree;
    this->m_monster_animation_to_action["danger"] = MonsterSpace::eMentalStateDanger;
    this->m_monster_animation_to_action["panic"] = MonsterSpace::eMentalStatePanic;
    this->m_monster_animation_to_action["stand_idle"] = MonsterSpace::eAA_StandIdle;
    this->m_monster_animation_to_action["capture_prepare"] = MonsterSpace::eAA_CapturePrepare;
    this->m_monster_animation_to_action["sit_idle"] = MonsterSpace::eAA_SitIdle;
    this->m_monster_animation_to_action["lie_idle"] = MonsterSpace::eAA_LieIdle;
    this->m_monster_animation_to_action["eat"] = MonsterSpace::eAA_Eat;
    this->m_monster_animation_to_action["sleep"] = MonsterSpace::eAA_Sleep;
    this->m_monster_animation_to_action["rest"] = MonsterSpace::eAA_Rest;
    this->m_monster_animation_to_action["attack"] = MonsterSpace::eAA_Attack;
    this->m_monster_animation_to_action["look_around"] = MonsterSpace::eAA_LookAround;
    this->m_monster_animation_to_action["turn"] = MonsterSpace::eAA_Turn;

    this->m_monster_sound_name_to_type_action["idle"] = MonsterSound::EType::eMonsterSoundIdle;
    this->m_monster_sound_name_to_type_action["eat"] = MonsterSound::EType::eMonsterSoundEat;
    this->m_monster_sound_name_to_type_action["attack"] = MonsterSound::EType::eMonsterSoundAggressive;
    this->m_monster_sound_name_to_type_action["attack_hit"] = MonsterSound::EType::eMonsterSoundAttackHit;
    this->m_monster_sound_name_to_type_action["take_damage"] = MonsterSound::EType::eMonsterSoundTakeDamage;
    this->m_monster_sound_name_to_type_action["die"] = MonsterSound::EType::eMonsterSoundDie;
    this->m_monster_sound_name_to_type_action["threaten"] = MonsterSound::EType::eMonsterSoundThreaten;
    this->m_monster_sound_name_to_type_action["steal"] = MonsterSound::EType::eMonsterSoundSteal;
    this->m_monster_sound_name_to_type_action["panic"] = MonsterSound::EType::eMonsterSoundPanic;
#pragma endregion

#pragma region SmartTerrain Initializing
    this->m_game_server_nearest_to_actor_smart_terrain.first = 0;
    this->m_game_server_nearest_to_actor_smart_terrain.second = std::numeric_limits<float>::max();
    this->m_registered_smart_terrain_territory_type[Globals::kSmartTerrainTerritoryBase] = true;
    this->m_registered_smart_terrain_territory_type[Globals::kSmartTerrainTerritoryDefault] = true;
    this->m_registered_smart_terrain_territory_type[Globals::kSmartTerrainTerritoryResource] = true;
    this->m_registered_smart_terrain_territory_type[Globals::kSmartTerrainTerritoryTerritory] = true;
    this->m_registered_smart_terrain_path_fields.push_back(Globals::kSmartTerrainPathFieldCenterPoint);
    this->m_registered_smart_terrain_path_fields.push_back(Globals::kSmartTerrainPathFieldPathHome);
    this->m_registered_smart_terrain_path_fields.push_back(Globals::kSmartTerrainPathFieldPathMain);
    this->m_registered_smart_terrain_path_fields.push_back(Globals::kSmartTerrainPathFieldPathWalk);

    this->m_registered_smart_terrain_control_script_states["normal"] = Script_SmartTerrainControl_States::kNormal;
    this->m_registered_smart_terrain_control_script_states["danger"] = Script_SmartTerrainControl_States::kDanger;
    this->m_registered_smart_terrain_control_script_states["alarm"] = Script_SmartTerrainControl_States::kAlarm;
#pragma endregion

#pragma region Cordis SimulationBoard Initializing
    // @ Lord: реализовать автоматическое считываение и сделать нумерацию от 0
    this->m_simulationboard_group_id_by_levels_name["zaton"] = 1;
    this->m_simulationboard_group_id_by_levels_name["pripyat"] = 2;
    this->m_simulationboard_group_id_by_levels_name["jupiter"] = 3;
    this->m_simulationboard_group_id_by_levels_name["labx8"] = 4;
    this->m_simulationboard_group_id_by_levels_name["jupiter_underground"] = 5;
#pragma endregion

#pragma region Cordis SimulationSquad Initializing
    this->m_simulationsquad_is_squad_monster_by_type["monster_predatory_day"] = true;
    this->m_simulationsquad_is_squad_monster_by_type["monster_predatory_night"] = true;
    this->m_simulationsquad_is_squad_monster_by_type["monster_vegetarian"] = true;
    this->m_simulationsquad_is_squad_monster_by_type["monster_zombied_day"] = true;
    this->m_simulationsquad_is_squad_monster_by_type["monster_zombied_night"] = true;
    this->m_simulationsquad_is_squad_monster_by_type["monster_special"] = true;
    this->m_simulationsquad_is_squad_monster_by_type["monster"] = true;
#pragma endregion

#pragma region Cordis SE_Actor initializing
    this->m_game_smarts_by_no_assault_zone["zat_a2_sr_no_assault"] = "zat_stalker_base_smart";
    this->m_game_smarts_by_no_assault_zone["jup_a6_sr_no_assault"] = "jup_a6";
    this->m_game_smarts_by_no_assault_zone["jup_b41_sr_no_assault"] = "jup_b41";
#pragma endregion

#pragma region Cordis Registering XR_CONDITION Functions
    _REGISTER_FULL_FUNCTION_XR_CONDITION(actor_on_level, XR_CONDITION::is_actor_on_level)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(dist_to_actor_ge, XR_CONDITION::is_dist_to_actor_ge)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(dist_to_actor_le, XR_CONDITION::is_dist_to_actor_le)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(surge_started, XR_CONDITION::is_surge_started)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(surge_complete, XR_CONDITION::is_surge_complete)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(surge_kill_all, XR_CONDITION::is_surge_kill_all)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(actor_in_zone, XR_CONDITION::is_actor_in_zone)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(npc_in_zone, XR_CONDITION::is_npc_in_zone)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(npc_community, XR_CONDITION::is_npc_community)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_alive_one, XR_CONDITION::is_alive_one)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_alive, XR_CONDITION::is_alive)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_dead, XR_CONDITION::is_dead)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(story_object_exist, XR_CONDITION::is_story_object_exist)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(actor_has_item, XR_CONDITION::is_actor_has_item)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(check_smart_alarm_status, XR_CONDITION::check_smart_alarm_status)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_faction_enemy_to_actor, XR_CONDITION::is_faction_enemy_to_actor)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_faction_friend_to_actor, XR_CONDITION::is_faction_friend_to_actor)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_faction_neutral_to_actor, XR_CONDITION::is_faction_neutral_to_actor)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_squad_friend_to_actor, XR_CONDITION::is_squad_friend_to_actor)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_squad_enemy_to_actor, XR_CONDITION::is_squad_enemy_to_actor)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_squad_neutral_to_actor, XR_CONDITION::is_squad_neutral_to_actor)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(actor_active_detector, XR_CONDITION::is_actor_active_detector)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_rain, XR_CONDITION::is_rain)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_heavy_rain, XR_CONDITION::is_heavy_rain)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_day, XR_CONDITION::is_day)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_dark_night, XR_CONDITION::is_dark_night)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(is_jup_a12_mercs_time, XR_CONDITION::is_jup_a12_mercs_time)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(zat_b7_is_night, XR_CONDITION::is_zat_b7_is_night)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(zat_b7_is_late_attack_time, XR_CONDITION::is_zat_b7_is_late_attack_time)
        _REGISTER_FULL_FUNCTION_XR_CONDITION(actor_on_level, XR_CONDITION::is_actor_on_level)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(squad_has_enemy, XR_CONDITION::is_squad_has_enemy)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(squad_in_zone_all, XR_CONDITION::is_squad_in_zone_all)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(squads_in_zone_b41, XR_CONDITION::is_squads_in_zone_b41)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(squad_exist, XR_CONDITION::is_squad_exist)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(is_squad_commander, XR_CONDITION::is_squad_commander)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(squad_npc_count_ge, XR_CONDITION::is_squad_npc_count_ge)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(quest_npc_enemy_actor, XR_CONDITION::is_quest_npc_enemy_actor)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(distance_to_obj_ge, XR_CONDITION::is_distance_to_obj_ge)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(distance_to_obj_le, XR_CONDITION::is_distance_to_obj_le)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(dist_to_story_obj_ge, XR_CONDITION::is_dist_to_story_obj_ge)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(jup_b202_inventory_box_empty, XR_CONDITION::is_jup_b202_inventory_box_empty)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(object_exist, XR_CONDITION::is_object_exist)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(squad_curr_action, XR_CONDITION::is_squad_curr_action)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(jup_b47_npc_online, XR_CONDITION::is_jup_b47_npc_online)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(zat_b29_anomaly_has_af, XR_CONDITION::is_zat_b29_anomaly_has_af)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(jup_b221_who_will_start, XR_CONDITION::is_jup_b221_who_will_start)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(jup_b202_actor_treasure_not_in_steal, XR_CONDITION::is_jup_b202_actor_treasure_not_in_steal)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(jup_b25_senya_spawn_condition, XR_CONDITION::is_jup_b25_senya_spawn_condition)
		_REGISTER_FULL_FUNCTION_XR_CONDITION(jup_b25_flint_gone_condition, XR_CONDITION::is_jup_b25_flint_gone_condition)

		_REGISTER_CS_FUNCTION_XR_CONDITION(fighting_dist_ge, XR_CONDITION::is_fighting_dist_ge)
		_REGISTER_CS_FUNCTION_XR_CONDITION(fighting_dist_le, XR_CONDITION::is_fighting_dist_le)
		_REGISTER_CS_FUNCTION_XR_CONDITION(enemy_in_zone, XR_CONDITION::is_enemy_in_zone)
		_REGISTER_CS_FUNCTION_XR_CONDITION(story_obj_in_zone_by_name, XR_CONDITION::is_story_obj_in_zone_by_name)

		_REGISTER_CCS_FUNCTION_XR_CONDITION(black_screen, XR_CONDITION::is_black_screen)
		_REGISTER_CCS_FUNCTION_XR_CONDITION(check_npc_name, XR_CONDITION::check_npc_name)
		_REGISTER_CCS_FUNCTION_XR_CONDITION(counter_greater, XR_CONDITION::is_counter_greater)
		_REGISTER_CCS_FUNCTION_XR_CONDITION(counter_equal, XR_CONDITION::is_counter_equal)
		_REGISTER_CCS_FUNCTION_XR_CONDITION(actor_has_weapon, XR_CONDITION::is_actor_has_weapon)
		_REGISTER_CCS_FUNCTION_XR_CONDITION(squad_in_zone, XR_CONDITION::is_squad_in_zone)
		_REGISTER_CCS_FUNCTION_XR_CONDITION(actor_has_nimble_weapon, XR_CONDITION::is_actor_has_nimble_weapon)
		_REGISTER_CCS_FUNCTION_XR_CONDITION(actor_has_active_nimble_weapon, XR_CONDITION::is_actor_has_active_nimble_weapon)

		_REGISTER_CSS_FUNCTION_XR_CONDITION(target_squad_name, XR_CONDITION::is_target_squad_name)



		_REGISTER_C_FUNCTION_XR_CONDITION(check_enemy_name, XR_CONDITION::check_enemy_name)
		_REGISTER_C_FUNCTION_XR_CONDITION(target_smart_name, XR_CONDITION::is_target_smart_name)

		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(mob_was_hit, XR_CONDITION::is_mob_was_hit)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(mob_has_enemy, XR_CONDITION::is_mob_has_enemy)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(heavy_wounded, XR_CONDITION::is_heavy_wounded)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(killed_by_actor, XR_CONDITION::is_killed_by_actor)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(hit_by_actor, XR_CONDITION::is_hit_by_actor)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(fighting_actor, XR_CONDITION::is_fighting_actor)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_factions_friends, XR_CONDITION::is_factions_friends)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_factions_neutrals, XR_CONDITION::is_factions_neutrals)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_factions_enemies, XR_CONDITION::is_factions_enemies)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(actor_neutral, XR_CONDITION::is_actor_neutral)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(actor_friend, XR_CONDITION::is_actor_friend)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(actor_enemy, XR_CONDITION::is_actor_enemy)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(see_actor, XR_CONDITION::is_see_actor)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(npc_talking, XR_CONDITION::is_npc_talking)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(talking, XR_CONDITION::is_talking)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(has_enemy_in_current_loopholes_fov, XR_CONDITION::is_has_enemy_in_current_loopholes_fov)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(_kamp_talk, XR_CONDITION::is_kamp_talk)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(see_enemy, XR_CONDITION::is_see_enemy)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(has_actor_enemy, XR_CONDITION::is_has_actor_enemy)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(has_enemy, XR_CONDITION::is_has_enemy)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(signal, XR_CONDITION::is_signal)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(npc_has_item, XR_CONDITION::is_npc_has_item)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(killed_by, XR_CONDITION::is_killed_by)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(deadly_hit, XR_CONDITION::is_deadly_hit)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(best_pistol, XR_CONDITION::is_best_pistol)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(hitted_on_bone, XR_CONDITION::is_hitted_on_bone)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(hitted_by, XR_CONDITION::is_hitted_by)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(actor_health_le, XR_CONDITION::is_actor_health_le)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(health_le, XR_CONDITION::is_health_le)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(distance_to_obj_on_job_le, XR_CONDITION::is_distance_to_obj_on_job_le)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_obj_on_job, XR_CONDITION::is_obj_on_job)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_wounded, XR_CONDITION::is_wounded)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(npc_in_actor_frustum, XR_CONDITION::is_npc_in_actor_frustrum)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(actor_see_npc, XR_CONDITION::is_actor_see_npc)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(see_npc, XR_CONDITION::is_see_npc)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_playing_sound, XR_CONDITION::is_playing_sound)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_enemy_actor, XR_CONDITION::is_enemy_actor)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(animpoint_reached, XR_CONDITION::is_animpoint_reached)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(in_dest_smart_cover, XR_CONDITION::is_in_dest_smart_cover)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(jup_b16_is_zone_active, XR_CONDITION::is_jup_b16_is_zone_active)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_monster_snork, XR_CONDITION::is_monster_snork)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_monster_dog, XR_CONDITION::is_monster_dog)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_monster_psy_dog, XR_CONDITION::is_monster_psy_dog)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_monster_polter, XR_CONDITION::is_monster_polter)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_monster_tushkano, XR_CONDITION::is_monster_tushkano)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_monster_burer, XR_CONDITION::is_monster_burer)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_monster_controller, XR_CONDITION::is_monster_controller)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_monster_flesh, XR_CONDITION::is_monster_flesh)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(is_monster_boar, XR_CONDITION::is_monster_boar)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(pas_b400_actor_far_forward, XR_CONDITION::is_pas_b400_actor_far_forward)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(pas_b400_actor_far_backward, XR_CONDITION::is_pas_b400_actor_far_backward)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(pri_a28_actor_is_far, XR_CONDITION::is_pri_a28_actor_is_far)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(check_enemy_smart, XR_CONDITION::is_check_enemy_smart)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(zat_b103_actor_has_needed_food, XR_CONDITION::is_zat_b103_actor_has_needed_food)
		_REGISTER_C_PURE_FUNCTION_XR_CONDITION(zat_b29_rivals_dialog_precond, XR_CONDITION::is_zat_b29_rivals_dialog_precond)

#pragma endregion

#pragma region Cordis Registering XR_EFFECTS Functions
		this->load_XREFFECTS_Functions();
#pragma endregion


#pragma region Cordis Initializing DialogManager
    {
        CScriptIniFile ini = CScriptIniFile("misc\\dialog_manager.ltx");
        xr_string id_name;
        xr_string value_name;
        xr_string category_name;
        // Lord: test it ... точно ли мы должны отмимать единицу
        for (std::size_t i = 0; i < ini.line_count("list") - 1; ++i)
        {
            const char* id;
            const char* value;
            bool result = ini.r_line("list", i, &id, &value);

            if (ini.line_exist(id, "category"))
            {
                category_name = ini.r_string(id, "category");

                if (!(category_name == "hello" || category_name == "anomalies" || category_name == "place" ||
                    category_name == "job" || category_name == "information"))
                    category_name = "default";
            }
            else
            {
                R_ASSERT2(false, "Not categoried section");
            }

            if (category_name != "default")
            {
                DialogData data;
                data.setName(id);

                if (ini.line_exist(id, "npc_community"))
                {
                    const char* result = ini.r_string(id, "npc_community");
                    data.setNpcCommunities(Globals::Utils::parse_names(result));
                }
                else
                {
                    data.setNpcCommunities(xr_vector<xr_string>{"not_set"});
                }

                if (ini.line_exist(id, "level"))
                {
                    const char* result = ini.r_string(id, "level");
                    data.setLevels(Globals::Utils::parse_names(result));
                }
                else
                {
                    data.setLevels(xr_vector<xr_string>{"not_set"});
                }

                if (ini.line_exist(id, "actor_community"))
                {
                    const char* result = ini.r_string(id, "actor_community");
                    data.setActorCommunities(Globals::Utils::parse_names(result));
                }
                else
                {
                    data.setActorCommunities(xr_vector<xr_string>{"not_set"});
                }

                if (ini.line_exist(id, "wounded"))
                {
                    data.setWounded(ini.r_string(id, "wounded"));
                }
                else
                {
                    data.setWounded(Globals::kStringFalse);
                }

                if (ini.line_exist(id, "once"))
                {
                    data.setOnceStateName(ini.r_string(id, "once"));
                }
                else
                {
                    data.setOnceStateName("always");
                }

                if (ini.line_exist(id, "info"))
                {
                    if (xr_strcmp(ini.r_string(id, "info"), "") != 0)
                    {
                        xr_map<std::uint32_t, CondlistData::CondlistValues> result;
                        xr_string buffer = ini.r_string(id, "info");
                        XR_LOGIC::parse_infopotions(result, buffer);
                        if (!result.empty())
                        {
                            data.setInfo(result);
                        }
                        else
                        {
                            MESSAGEW("can't parse infoportions!!!!!!");
                        }
                    }
                }

                if (category_name == "anomalies" || category_name == "place")
                {
                    if (ini.line_exist(id, "smart"))
                    {
                        data.setSmartTerrainName(ini.r_string(id, "smart"));
                    }
                }

                data.setID(CRD_DialogManager::generate_id());
                this->m_phrase_table[category_name][data.getID()] = data;
                this->m_phrase_priority_table[category_name];
            }
        }
    }

#pragma region Cordis Registering Dialog Manager functions
    {
        _REGISTER_FUNCTION_DIALOG_MANAGER(init_hello_dialogs, CRD_DialogManager::init_hello_dialogs)
    }
#pragma endregion
#pragma endregion

#pragma region Cordis Registering Schemes set_scheme callbacks
    {
        this->m_registered_schemes_add_to_binder_callbacks["danger"] = Script_EvaluatorDanger::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["gather_items"] = Script_EvaluatorGatherItems::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["abuse"] = Script_SchemeXRAbuse::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["walker"] = Script_SchemeXRWalker::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["remark"] = Script_SchemeXRRemark::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["sleeper"] = Script_SchemeXRSleeper::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["camper"] = Script_SchemeXRCamper::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["meet"] = Script_SchemeXRMeet::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["help_wounded"] = Script_ActionXRHelpWounded::add_to_binder;
        //this->m_registered_schemes_add_to_binder_callbacks["corpse_detection"] = Script_SchemeXRCorpseDetection:: Lord: доделать!
        this->m_registered_schemes_add_to_binder_callbacks["combat"] = XR_COMBAT::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["death"] = Script_SchemeXRDeath::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["hit"] = Script_SchemeXRHit::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["wounded"] = Script_SchemeXRWounded::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["combat_ignore"] = Script_SchemeXRCombatIgnore::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["combat_zombied"] = Script_SchemeXRCombatZombied::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["patrol"] = Script_SchemeXRPatrol::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["smartcover"] = Script_SchemeXRSmartCover::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["animpoint"] = Script_SchemeXRAnimpoint::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["reach_task"] = Script_SchemeXRReachTask::add_to_binder;

        this->m_registered_schemes_add_to_binder_callbacks["mob_remark"] = Script_SchemeMobRemark::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["mob_walker"] = Script_SchemeMobWalker::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["mob_combat"] = Script_SchemeMobCombat::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["mob_death"] = Script_SchemeMobDeath::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["mob_jump"] = Script_SchemeMobJump::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["mob_home"] = Script_SchemeMobHome::add_to_binder;

        this->m_registered_schemes_add_to_binder_callbacks["ph_door"] = Script_SchemePHDoor::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["ph_idle"] = Script_SchemePHIdle::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["ph_hit"] = Script_SchemePHHit::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["ph_on_hit"] = Script_SchemePHOnHit::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["ph_button"] = Script_SchemePHButton::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["ph_code"] = Script_SchemePHCode::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["ph_on_death"] = Script_SchemePHDeath::add_to_binder;
/*        this->m_registered_schemes_add_to_binder_callbacks["ph_minigun"] = Script_SchemePHMinigun::add_to_binder; Not used!*/
        this->m_registered_schemes_add_to_binder_callbacks["ph_oscillate"] = Script_SchemePHOscillate::add_to_binder;

        this->m_registered_schemes_add_to_binder_callbacks["sr_no_weapon"] = Script_SchemeSRNoWeapon::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["sr_teleport"] = Script_SchemeSRTeleport::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["sr_idle"] = Script_SchemeSRIdle::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["sr_light"] = Script_SchemeSRLight::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["sr_timer"] = Script_SchemeSRTimer::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["sr_psy_antenna"] = Script_SchemeSRPsyAntenna::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["sr_postprocess"] = Script_SchemeSRPostProcess::add_to_binder;
        this->m_registered_schemes_add_to_binder_callbacks["sr_particle"] = Script_SchemeSRParticle::add_to_binder;
/*        this->m_registered_schemes_add_to_binder_callbacks["sr_cutscene"] = Script_SchemeSRC::add_to_binder;*/
/*        this->m_registered_schemes_add_to_binder_callbacks["sr_crow_spawner"] = Script_SchemeSRCrr::add_to_binder;*/
/*        this->m_registered_schemes_add_to_binder_callbacks["sr_silence"] = Script_SchemeSRSilenceZone::add_to_binder; Not used!*/
        this->m_registered_schemes_add_to_binder_callbacks["sr_deimos"] = Script_SchemeSRDeimos::add_to_binder;

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		this->m_schemes_allocators["danger"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRDanger, this->m_allocator_xr_danger);
		this->m_schemes_allocators["gather_items"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRGatherItems, this->m_allocator_xr_gather_items);
		this->m_schemes_allocators["abuse"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRAbuse, this->m_allocator_xr_abuse);
		this->m_schemes_allocators["walker"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRWalker, this->m_allocator_xr_walker);
		this->m_schemes_allocators["remark"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRRemark, this->m_allocator_xr_remark);
		this->m_schemes_allocators["sleeper"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRSleeper, this->m_allocator_xr_sleeper);
		this->m_schemes_allocators["camper"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRCamper, this->m_allocator_xr_camper);
		this->m_schemes_allocators["meet"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRMeet, this->m_allocator_xr_meet);
		this->m_schemes_allocators["help_wounded"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRHelpWounded, this->m_allocator_xr_help_wounded);
		//this->m_schemes_allocators["corpse_detection"] = Script_SchemeXRCorpseDetection:: Lord: доделать!
		this->m_schemes_allocators["combat"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRCombat, this->m_allocator_xr_combat);
		this->m_schemes_allocators["death"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRDeath, this->m_allocator_xr_death);
		this->m_schemes_allocators["hit"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRHit, this->m_allocator_xr_hit);
		this->m_schemes_allocators["wounded"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRWounded, this->m_allocator_xr_wounded);
		this->m_schemes_allocators["combat_ignore"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRCombatIgnore, this->m_allocator_xr_combat_ignore);
		this->m_schemes_allocators["combat_zombied"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRCombatZombied, this->m_allocator_xr_combat_zombied);
		this->m_schemes_allocators["patrol"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRPatrol, this->m_allocator_xr_patrol);
		this->m_schemes_allocators["smartcover"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRSmartCover, this->m_allocator_xr_smartcover);
		this->m_schemes_allocators["animpoint"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRAnimPoint, this->m_allocator_xr_animpoint);
		this->m_schemes_allocators["reach_task"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_XRReachTask, this->m_allocator_xr_reach_task);

		this->m_schemes_allocators["mob_remark"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_MobRemark, this->m_allocator_mob_remark);
		this->m_schemes_allocators["mob_walker"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_MobWalker, this->m_allocator_mob_walker);
		this->m_schemes_allocators["mob_combat"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_MobCombat, this->m_allocator_mob_combat);
		this->m_schemes_allocators["mob_death"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_MobDeath, this->m_allocator_mob_death);
		this->m_schemes_allocators["mob_jump"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_MobJump, this->m_allocator_mob_jump);
		this->m_schemes_allocators["mob_home"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_MobHome, this->m_allocator_mob_home);

		this->m_schemes_allocators["ph_door"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_PHDoor, this->m_allocator_ph_door);
		this->m_schemes_allocators["ph_idle"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_PHIdle, this->m_allocator_ph_idle);
		this->m_schemes_allocators["ph_hit"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_PHHit, this->m_allocator_ph_hit);
		this->m_schemes_allocators["ph_on_hit"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_PHOnHit, this->m_allocator_ph_on_hit);
		this->m_schemes_allocators["ph_button"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_PHButton, this->m_allocator_ph_button);
		this->m_schemes_allocators["ph_code"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_PHCode, this->m_allocator_ph_code);
/*		this->m_schemes_allocators["ph_on_death"] = _REGISTER_ALLOC(DataBase::;*/
		/*        this->m_schemes_allocators["ph_minigun"] = Script_SchemePHMinigun::add_to_binder; Not used!*/
		this->m_schemes_allocators["ph_oscillate"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_PHOscillate, this->m_allocator_ph_oscillate);

		this->m_schemes_allocators["sr_no_weapon"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_SRNoWeapon, this->m_allocator_sr_no_weapon);
		this->m_schemes_allocators["sr_teleport"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_SRTeleport, this->m_allocator_sr_teleport);
		this->m_schemes_allocators["sr_idle"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_SRIdle, this->m_allocator_sr_idle);
		this->m_schemes_allocators["sr_light"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_SRLight, this->m_allocator_sr_light);
		this->m_schemes_allocators["sr_timer"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_SRTimer, this->m_allocator_sr_timer);
		this->m_schemes_allocators["sr_psy_antenna"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_SRPsyAntenna, this->m_allocator_sr_psy_antenna);
		this->m_schemes_allocators["sr_postprocess"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_SRPostProcess, this->m_allocator_sr_post_process);
		this->m_schemes_allocators["sr_particle"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_SRParticle, this->m_allocator_sr_particle);
		/*        this->m_schemes_allocators["sr_cutscene"] = Script_SchemeSRC::add_to_binder;*/
		/*        this->m_schemes_allocators["sr_crow_spawner"] = Script_SchemeSRCrr::add_to_binder;*/
		/*        this->m_schemes_allocators["sr_silence"] = Script_SchemeSRSilenceZone::add_to_binder; Not used!*/
		this->m_schemes_allocators["sr_deimos"] = _REGISTER_ALLOC(DataBase::Script_ComponentScheme_SRDeimos, this->m_allocator_sr_deimos);
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		this->m_registered_schemes_set_scheme_callbacks["danger"] = Script_EvaluatorDanger::set_danger;
		this->m_registered_schemes_set_scheme_callbacks["gather_items"] = Script_EvaluatorGatherItems::set_gather_items;
		this->m_registered_schemes_set_scheme_callbacks["abuse"] = Script_SchemeXRAbuse::set_abuse;
		this->m_registered_schemes_set_scheme_callbacks["walker"] = Script_SchemeXRWalker::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["remark"] = Script_SchemeXRRemark::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["sleeper"] = Script_SchemeXRSleeper::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["camper"] = Script_SchemeXRCamper::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["meet"] = Script_SchemeXRMeet::set_meet;
		this->m_registered_schemes_set_scheme_callbacks["help_wounded"] = Script_ActionXRHelpWounded::set_help_wounded;
		//this->m_registered_schemes_set_scheme_callbacks["corpse_detection"] = Script_SchemeXRCorpseDetection:: Lord: доделать!
		this->m_registered_schemes_set_scheme_callbacks["combat"] = XR_COMBAT::set_combat_checker;
		this->m_registered_schemes_set_scheme_callbacks["death"] = Script_SchemeXRDeath::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["hit"] = Script_SchemeXRHit::set_hit_checker;
		this->m_registered_schemes_set_scheme_callbacks["wounded"] = Script_SchemeXRWounded::set_wounded;
		this->m_registered_schemes_set_scheme_callbacks["combat_ignore"] = Script_SchemeXRCombatIgnore::set_combat_ignore_checker;
/*		this->m_registered_schemes_set_scheme_callbacks["combat_zombied"] = Script_SchemeXRCombatZombied::add_to_binder;*/
		this->m_registered_schemes_set_scheme_callbacks["patrol"] = Script_SchemeXRPatrol::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["smartcover"] = Script_SchemeXRSmartCover::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["animpoint"] = Script_SchemeXRAnimpoint::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["reach_task"] = Script_SchemeXRReachTask::set_reach_task;

        this->m_registered_schemes_set_scheme_callbacks["mob_remark"] = Script_SchemeMobRemark::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["mob_walker"] = Script_SchemeMobWalker::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["mob_combat"] = Script_SchemeMobCombat::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["mob_death"] = Script_SchemeMobDeath::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["mob_jump"] = Script_SchemeMobJump::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["mob_home"] = Script_SchemeMobHome::set_scheme;

		this->m_registered_schemes_set_scheme_callbacks["ph_door"] = Script_SchemePHDoor::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["ph_idle"] = Script_SchemePHIdle::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["ph_hit"] = Script_SchemePHHit::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["ph_on_hit"] = Script_SchemePHOnHit::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["ph_button"] = Script_SchemePHButton::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["ph_code"] = Script_SchemePHCode::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["ph_on_death"] = Script_SchemePHDeath::set_scheme;
		/*        this->m_registered_schemes_set_scheme_callbacks["ph_minigun"] = Script_SchemePHMinigun::add_to_binder; Not used!*/
		this->m_registered_schemes_set_scheme_callbacks["ph_oscillate"] = Script_SchemePHOscillate::set_scheme;

		this->m_registered_schemes_set_scheme_callbacks["sr_no_weapon"] = Script_SchemeSRNoWeapon::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["sr_teleport"] = Script_SchemeSRTeleport::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["sr_idle"] = Script_SchemeSRIdle::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["sr_light"] = Script_SchemeSRLight::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["sr_timer"] = Script_SchemeSRTimer::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["sr_psy_antenna"] = Script_SchemeSRPsyAntenna::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["sr_postprocess"] = Script_SchemeSRPostProcess::set_scheme;
		this->m_registered_schemes_set_scheme_callbacks["sr_particle"] = Script_SchemeSRParticle::set_scheme;
		/*        this->m_registered_schemes_set_scheme_callbacks["sr_cutscene"] = Script_SchemeSRC::add_to_binder;*/
		/*        this->m_registered_schemes_set_scheme_callbacks["sr_crow_spawner"] = Script_SchemeSRCrr::add_to_binder;*/
		/*        this->m_registered_schemes_set_scheme_callbacks["sr_silence"] = Script_SchemeSRSilenceZone::add_to_binder; Not used!*/
		this->m_registered_schemes_set_scheme_callbacks["sr_deimos"] = Script_SchemeSRDeimos::set_scheme;
        
    }
#pragma endregion

#pragma region Cordis registering indoor levels for sr_light scheme
    this->m_indoor_levels["jupiter_underground"] = true;
#pragma endregion

#pragma region Cordis initiazlizing ignore distance for XR_DANGER
    this->m_xr_danger_ignore_distance_by_danger_type[CDangerObject::eDangerTypeAttacked] = 150.0f;
    this->m_xr_danger_ignore_distance_by_danger_type[CDangerObject::eDangerTypeGrenade] = 15.0f;
    this->m_xr_danger_ignore_distance_by_danger_type[CDangerObject::eDangerTypeFreshEntityCorpse] = 10.0f;
    this->m_xr_danger_ignore_distance_by_danger_type[CDangerObject::eDangerTypeEntityAttacked] = 150.0f;
    this->m_xr_danger_ignore_distance_by_danger_type[CDangerObject::eDangerTypeEnemySound] = 0.0f;
    this->m_xr_danger_ignore_distance_by_danger_type[CDangerObject::eDangerTypeAttackSound] = 20.0f;
    this->m_xr_danger_ignore_distance_by_danger_type[CDangerObject::eDangerTypeEntityDeath] = 4.0f;
    this->m_xr_danger_ignore_distance_by_danger_type[CDangerObject::eDangerTypeBulletRicochet] = 2.0f;
#pragma endregion

#pragma region Cordis State Manager Initialzing
    this->m_look_direction_states["threat_na"] = true;
    this->m_look_direction_states["wait_na"] = true;
    this->m_look_direction_states["guard_na"] = true;

	this->initialize_StateLib();
#pragma endregion

#pragma region Cordis News Manager
    this->m_news_manager_registered_sound_tips["pioneer"] = "ui_inGame2_PD_Pervootkrivatel";
    this->m_news_manager_registered_sound_tips["mutant_hunter"] = "ui_inGame2_PD_Ohotnik_na_mutantov";
    this->m_news_manager_registered_sound_tips["detective"] = "ui_inGame2_PD_Sisshik";
    this->m_news_manager_registered_sound_tips["one_of_the_lads"] = "ui_inGame2_PD_Svoy_paren";
    this->m_news_manager_registered_sound_tips["kingpin"] = "ui_inGame2_PD_Avtoritet";
    this->m_news_manager_registered_sound_tips["herald_of_justice"] = "ui_inGame2_PD_Gonets_pravosudiya";
    this->m_news_manager_registered_sound_tips["seeker"] = "ui_inGame2_PD_Iskatel";
    this->m_news_manager_registered_sound_tips["battle_systems_master"] = "ui_inGame2_PD_master_boevih_sistem";
    this->m_news_manager_registered_sound_tips["high_tech_master"] = "ui_inGame2_PD_Master_visokih_technologiy";
    this->m_news_manager_registered_sound_tips["skilled_stalker"] = "ui_inGame2_PD_Opitniy_stalker";
    this->m_news_manager_registered_sound_tips["leader"] = "ui_inGame2_PD_Lider";
    this->m_news_manager_registered_sound_tips["diplomat"] = "ui_inGame2_PD_Diplomat";
    this->m_news_manager_registered_sound_tips["research_man"] = "ui_inGame2_PD_Nauchniy_sotrudnik";
    this->m_news_manager_registered_sound_tips["friend_of_duty"] = "ui_inGame2_PD_Drug_Dolga";
    this->m_news_manager_registered_sound_tips["friend_of_freedom"] = "ui_inGame2_PD_Drug_Swobodi";
    this->m_news_manager_registered_sound_tips["balance_advocate"] = "ui_inGame2_PD_storonnik_ravnovesiya";
    this->m_news_manager_registered_sound_tips["wealthy"] = "ui_inGame2_PD_Sostoyatelniy_klient";
    this->m_news_manager_registered_sound_tips["keeper_of_secrets"] = "ui_inGame2_PD_Hranitel_tayn";
    this->m_news_manager_registered_sound_tips["marked_by_zone"] = "ui_inGame2_PD_Otmecheniy_zonoy";
    this->m_news_manager_registered_sound_tips["information_dealer"] = "ui_inGame2_PD_Torgovets_informatsiey";
    this->m_news_manager_registered_sound_tips["friend_of_stalkers"] = "ui_inGame2_PD_Drug_Stalkerov";
    this->m_news_manager_registered_sound_tips["got_artefact"] = "ui_inGame2_D_gonets_pravosudiya";
    this->m_news_manager_registered_sound_tips["got_ammo"] = "ui_inGame2_D_Ohotnik_na_mutantov";
    this->m_news_manager_registered_sound_tips["got_medicine"] = "ui_inGame2_D_Sisshik";
    this->m_news_manager_registered_sound_tips["got_duty_light_armor"] =
        "ui_inGame2_D_Vipolnil_2_zadaniya_dlya_Dolga";
    this->m_news_manager_registered_sound_tips["got_duty_heavy_armor"] =
        "ui_inGame2_D_Vipolnil_4_zadaniya_dlya_Dolga";
    this->m_news_manager_registered_sound_tips["got_freedom_light_armor"] =
        "ui_inGame2_D_Vipolnil_2_zadaniya_dlya_Swobodi";
    this->m_news_manager_registered_sound_tips["got_freedom_heavy_armor"] =
        "ui_inGame2_D_Vipolnil_4_zadaniya_dlya_Swobodi";
    this->m_news_manager_registered_sound_tips["can_resupply"] = "ui_inGame2_Pered_zadaniyami_voennih";
    this->m_news_manager_registered_sound_tips["recent_surge"] = "ui_inGame2_V_zone_nedavno_proshel_vibros";

    this->m_news_manager_action_description_by_type_name["new"] = "general_new_task";
    this->m_news_manager_action_description_by_type_name["complete"] = "general_complete_task";
    this->m_news_manager_action_description_by_type_name["fail"] = "general_fail_task";
    this->m_news_manager_action_description_by_type_name["reversed"] = "general_reverse_task";
    this->m_news_manager_action_description_by_type_name["updated"] = "general_update_task";
#pragma endregion

#pragma region Cordis Smart Names(Translated from smart_names.ltx)
    CScriptIniFile ini_smart("misc\\smart_names.ltx");

    for (std::uint32_t i = 0; i < ini_smart.line_count("levels"); ++i)
    {
        const char* level_name;
        const char* value_name;

        if (ini_smart.r_line("levels", i, &level_name, &value_name))
        {
            if (ini_smart.section_exist(level_name))
            {
                for (std::uint32_t j = 0; j < ini_smart.line_count(level_name); ++j)
                {
                    const char* smart_name;
                    const char* translated_name;
                    if (ini_smart.r_line(level_name, i, &smart_name, &translated_name))
                    {
                        this->m_smart_terrains_translated_name[level_name][smart_name] = translated_name;
                    }
                }
            }
        }
    }
#pragma endregion

#pragma region Cordis PDA initializing
    this->m_registered_pda_primary_objects.push_back({ "zat_b55_spot", "st_zat_b55_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b100_spot", "st_zat_b100_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b104_spot", "st_zat_b104_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b38_spot", "st_zat_b38_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b40_spot", "st_zat_b40_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b56_spot", "st_zat_b56_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b5_spot", "st_zat_b5_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_a2_spot", "st_zat_a2_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b20_spot", "st_zat_b20_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b53_spot", "st_zat_b53_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b101_spot", "st_zat_b101_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b106_spot", "st_zat_b106_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b7_spot", "st_zat_b7_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b14_spot", "st_zat_b14_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b52_spot", "st_zat_b52_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b39_spot", "st_zat_b39_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b33_spot", "st_zat_b33_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b18_spot", "st_zat_b18_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b54_spot", "st_zat_b54_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b12_spot", "st_zat_b12_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b28_spot", "st_zat_b28_name" });
    this->m_registered_pda_primary_objects.push_back({ "zat_b103_spot", "st_zat_b103_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b1_spot", "st_jup_b1_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b46_spot", "st_jup_b46_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b202_spot", "st_jup_b202_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b211_spot", "st_jup_b211_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b200_spot", "st_jup_b200_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b19_spot", "st_jup_b19_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_a6_spot", "st_jup_a6_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b25_spot", "st_jup_b25_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b6_spot", "st_jup_b6_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b205_spot", "st_jup_b205_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b206_spot", "st_jup_b206_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b32_spot", "st_jup_b32_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_a10_spot", "st_jup_a10_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b209_spot", "st_jup_b209_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b208_spot", "st_jup_b208_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_a12_spot", "st_jup_a12_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b212_spot", "st_jup_b212_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b9_spot", "st_jup_b9_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_b201_spot", "st_jup_b201_name" });
    this->m_registered_pda_primary_objects.push_back({ "jup_a9_spot", "st_jup_a9_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_a28_spot", "st_pri_a28_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_b36_spot", "st_pri_b36_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_b303_spot", "st_pri_b303_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_b301_spot", "st_pri_b301_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_a17_spot", "st_pri_a17_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_b306_spot", "st_pri_b306_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_a16_spot", "st_pri_a16_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_a25_spot", "st_pri_a25_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_b35_spot", "st_pri_b35_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_a21_spot", "st_pri_a21_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_b304_spot", "st_pri_b304_name" });
    this->m_registered_pda_primary_objects.push_back({ "pri_a18_spot", "st_pri_a18_name" });

    PDA_ChangeObjectData data;
    data.setTargetName("jup_b32_spot");
    data.setHintName("st_jup_b32_name");
    data.setZoneName("jup_b32_anomal_zone");
    data.setGroupName("jup_b32_scanner_1_placed");
    this->m_registered_pda_change_objects.push_back(data);
    data.setTargetName("jup_b201_spot");
    data.setHintName("st_jup_b201_name");
    data.setZoneName("jup_b201_anomal_zone");
    data.setGroupName("jup_b32_scanner_2_placed");
    this->m_registered_pda_change_objects.push_back(data);
    data.setTargetName("jup_b209_spot");
    data.setHintName("st_jup_b209_name");
    data.setZoneName("jup_b209_anomal_zone");
    data.setGroupName("jup_b32_scanner_3_placed");
    this->m_registered_pda_change_objects.push_back(data);
    data.setTargetName("jup_b211_spot");
    data.setHintName("st_jup_b211_name");
    data.setZoneName("jup_b211_anomal_zone");
    data.setGroupName("jup_b32_scanner_4_placed");
    this->m_registered_pda_change_objects.push_back(data);
    data.setTargetName("jup_b1_spot");
    data.setHintName("st_jup_b1_name");
    data.setZoneName("jup_b10_anomal_zone");
    data.setGroupName("jup_b32_scanner_5_placed");
    this->m_registered_pda_change_objects.push_back(data);
#pragma endregion

#pragma region Cordis Dialog Zaton initializing
    this->m_zat_b29_af_table[16] = "af_gravi";
    this->m_zat_b29_af_table[17] = "af_eye";
    this->m_zat_b29_af_table[18] = "af_baloon";
    this->m_zat_b29_af_table[19] = "af_dummy_dummy";
    this->m_zat_b29_af_table[20] = "af_gold_fish";
    this->m_zat_b29_af_table[21] = "af_fire";
    this->m_zat_b29_af_table[22] = "af_glass";
    this->m_zat_b29_af_table[23] = "af_ice";

    this->m_zat_b29_infop_bring_table[16] = "zat_b29_bring_af_16";
    this->m_zat_b29_infop_bring_table[17] = "zat_b29_bring_af_17";
    this->m_zat_b29_infop_bring_table[18] = "zat_b29_bring_af_18";
    this->m_zat_b29_infop_bring_table[19] = "zat_b29_bring_af_19";
    this->m_zat_b29_infop_bring_table[20] = "zat_b29_bring_af_20";
    this->m_zat_b29_infop_bring_table[21] = "zat_b29_bring_af_21";
    this->m_zat_b29_infop_bring_table[22] = "zat_b29_bring_af_22";
    this->m_zat_b29_infop_bring_table[23] = "zat_b29_bring_af_23";

    this->m_zat_b29_infop_table[16] = "zat_b29_af_16";
    this->m_zat_b29_infop_table[17] = "zat_b29_af_17";
    this->m_zat_b29_infop_table[18] = "zat_b29_af_18";
    this->m_zat_b29_infop_table[19] = "zat_b29_af_19";
    this->m_zat_b29_infop_table[20] = "zat_b29_af_20";
    this->m_zat_b29_infop_table[21] = "zat_b29_af_21";
    this->m_zat_b29_infop_table[22] = "zat_b29_af_22";
    this->m_zat_b29_infop_table[23] = "zat_b29_af_23";

    this->m_zat_b29_af_names_table[16] = "st_af_gravi_name";
    this->m_zat_b29_af_names_table[17] = "st_af_eye_name";
    this->m_zat_b29_af_names_table[18] = "st_af_baloon_name";
    this->m_zat_b29_af_names_table[19] = "st_af_dummy_dummy_name";
    this->m_zat_b29_af_names_table[20] = "st_af_gold_fish_name";
    this->m_zat_b29_af_names_table[21] = "st_af_fire_name";
    this->m_zat_b29_af_names_table[22] = "st_af_glass_name";
    this->m_zat_b29_af_names_table[23] = "st_af_ice_name";

    this->m_zat_item_count_by_category[1] = 3;
    this->m_zat_item_count_by_category[2] = 3;
    this->m_zat_item_count_by_category[3] = 3;
    this->m_zat_item_count_by_category[4] = 3;
    this->m_zat_item_count_by_category[5] = 1;
    this->m_zat_item_count_by_category[6] = 1;
    this->m_zat_item_count_by_category[7] = 1;

    this->m_zat_b51_costs_table[1] = { {"prepay_agreed", 700}, {"prepay_refused", 1400}, {"cost", 2800} };
    this->m_zat_b51_costs_table[2] = { {
                                          "prepay_agreed",
                                          2000,
                                      },
        {"prepay_refused", 4000}, {"cost", 8000} };
    this->m_zat_b51_costs_table[3] = { {
                                          "prepay_agreed",
                                          4000,
                                      },
        {"prepay_refused", 8000}, {"cost", 16000} };
    this->m_zat_b51_costs_table[4] = { {
                                          "prepay_agreed",
                                          4000,
                                      },
        {"prepay_refused", 8000}, {"cost", 16000} };
    this->m_zat_b51_costs_table[5] = { {
                                          "prepay_agreed",
                                          8000,
                                      },
        {"prepay_refused", 16000}, {"cost", 32000} };
    this->m_zat_b51_costs_table[6] = { {
                                          "prepay_agreed",
                                          6000,
                                      },
        {"prepay_refused", 12000}, {"cost", 24000} };
    this->m_zat_b51_costs_table[7] = { {
                                          "prepay_agreed",
                                          12000,
                                      },
        {"prepay_refused", 24000}, {"cost", 48000} };
#pragma endregion

#pragma region Cordis Task
    this->m_task_valid_values["complete"] = true;
    this->m_task_valid_values["task"] = true;
    this->m_task_valid_values["reversed"] = true;

    this->m_task_guiders_by_level["zaton"]["jupiter"] = "zat_b215_stalker_guide_zaton";
    this->m_task_guiders_by_level["zaton"]["pripyat"] = "zat_b215_stalker_guide_zaton";
    this->m_task_guiders_by_level["jupiter"]["zaton"] = "zat_b215_stalker_guide_jupiter";
    this->m_task_guiders_by_level["jupiter"]["pripyat"] = "jup_b43_stalker_assistant";
    this->m_task_guiders_by_level["pripyat"]["zaton"] = "jup_b43_stalker_assistant_pri";
    this->m_task_guiders_by_level["pripyat"]["jupiter"] = "jup_b43_stalker_assistant_pri";

    this->m_task_status_by_id[0] = "normal";
    this->m_task_status_by_id[1] = "selected";
    this->m_task_status_by_id[2] = "completed";
    this->m_task_status_by_id[3] = "fail";
    this->m_task_status_by_id[4] = "reversed";

    this->m_task_id_by_status["normal"] = 0;
    this->m_task_id_by_status["selected"] = 1;
    this->m_task_id_by_status["completed"] = 2;
    this->m_task_id_by_status["fail"] = 3;
    this->m_task_id_by_status["reversed"] = 4;
#pragma endregion

#pragma region Cordis Surge Manager Immuned to Surge squads
    this->m_surge_manager_immuned_to_surge_squads["monster_predatory_day"] = true;
    this->m_surge_manager_immuned_to_surge_squads["monster_predatory_night"] = true;
    this->m_surge_manager_immuned_to_surge_squads["monster_vegetarian"] = true;
    this->m_surge_manager_immuned_to_surge_squads["monster_zombied_day"] = true;
    this->m_surge_manager_immuned_to_surge_squads["monster_zombied_night"] = true;
    this->m_surge_manager_immuned_to_surge_squads["monster_special"] = true;
    this->m_surge_manager_immuned_to_surge_squads["monster"] = true;
    this->m_surge_manager_immuned_to_surge_squads["zombied"] = true;
#pragma endregion

#pragma region Cordis Dialogs Jupiter
    this->m_jup_a12_af_table[1] = "af_fire";
    this->m_jup_a12_af_table[2] = "af_gold_fish";
    this->m_jup_a12_af_table[3] = "af_glass";
    this->m_jup_a12_af_table[4] = "af_ice";

    this->m_jup_b9_money_count = { 3000, 2850, 2700, 2550, 2400, 2250, 2100, 1950, 1800, 1650 };

#pragma endregion

#pragma region Cordis Dialogs Pripyat
    this->m_pri_a25_medic_items["basic"]["conserva"] = 2;
    this->m_pri_a25_medic_items["basic"]["medkit"] = 2;
    this->m_pri_a25_medic_items["basic"]["medkit_army"] = 1;
    this->m_pri_a25_medic_items["basic"]["antirad"] = 2;
    this->m_pri_a25_medic_items["basic"]["bandage"] = 4;
    this->m_pri_a25_medic_items["basic"]["drug_coagulant"] = 1;
    this->m_pri_a25_medic_items["basic"]["drug_radioprotector"] = 1;

    this->m_pri_a25_medic_items["advanced"]["conserva"] = 3;
    this->m_pri_a25_medic_items["advanced"]["medkit"] = 3;
    this->m_pri_a25_medic_items["advanced"]["medkit_army"] = 2;
    this->m_pri_a25_medic_items["advanced"]["antirad"] = 3;
    this->m_pri_a25_medic_items["advanced"]["bandage"] = 5;
    this->m_pri_a25_medic_items["advanced"]["drug_coagulant"] = 1;
    this->m_pri_a25_medic_items["advanced"]["drug_radioprotector"] = 1;
    this->m_pri_a25_medic_items["advanced"]["drug_antidot"] = 1;
    this->m_pri_a25_medic_items["advanced"]["drug_psy_blockade"] = 1;

    this->m_pri_a25_medic_items["elite"]["conserva"] = 4;
    this->m_pri_a25_medic_items["elite"]["medkit"] = 5;
    this->m_pri_a25_medic_items["elite"]["medkit_army"] = 3;
    this->m_pri_a25_medic_items["elite"]["antirad"] = 5;
    this->m_pri_a25_medic_items["elite"]["bandage"] = 8;
    this->m_pri_a25_medic_items["elite"]["drug_coagulant"] = 2;
    this->m_pri_a25_medic_items["elite"]["drug_radioprotector"] = 2;
    this->m_pri_a25_medic_items["elite"]["drug_antidot"] = 1;
    this->m_pri_a25_medic_items["elite"]["drug_psy_blockade"] = 1;


    this->m_pri_a22_supp_items["supply_ammo_1"]["ammo_9x18_fmj"] = 2;
    this->m_pri_a22_supp_items["supply_ammo_1"]["ammo_9x18_pmm"] = 1;
    this->m_pri_a22_supp_items["supply_ammo_2"]["ammo_9x19_fmj"] = 2;
    this->m_pri_a22_supp_items["supply_ammo_2"]["ammo_9x19_pbp"] = 1;
    this->m_pri_a22_supp_items["supply_ammo_3"]["ammo_11.43x23_fmj"] = 2;
    this->m_pri_a22_supp_items["supply_ammo_3"]["ammo_11.43x23_hydro"] = 1;
    this->m_pri_a22_supp_items["supply_ammo_4"]["ammo_12x70_buck"] = 10;
    this->m_pri_a22_supp_items["supply_ammo_4"]["ammo_12x76_zhekan"] = 5;
    this->m_pri_a22_supp_items["supply_ammo_5"]["ammo_5.45x39_fmj"] = 2;
    this->m_pri_a22_supp_items["supply_ammo_5"]["ammo_5.45x39_ap"] = 1;
    this->m_pri_a22_supp_items["supply_ammo_6"]["ammo_5.56x45_ss190"] = 2;
    this->m_pri_a22_supp_items["supply_ammo_6"]["ammo_5.56x45_ap"] = 1;
    this->m_pri_a22_supp_items["supply_ammo_7"]["ammo_9x39_pab9"] = 1;
    this->m_pri_a22_supp_items["supply_ammo_7"]["ammo_9x39_ap"] = 1;
    this->m_pri_a22_supp_items["supply_ammo_8"]["ammo_7.62x54_7h1"] = 1;
    this->m_pri_a22_supp_items["supply_ammo_9"]["ammo_pkm_100"] = 1;
    this->m_pri_a22_supp_items["supply_grenade_1"]["grenade_rgd5"] = 3;
    this->m_pri_a22_supp_items["supply_grenade_1"]["grenade_f1"] = 2;
    this->m_pri_a22_supp_items["supply_grenade_2"]["ammo_vog-25"] = 3;
    this->m_pri_a22_supp_items["supply_grenade_3"]["ammo_m209"] = 3;
#pragma endregion

#pragma region Cordis Schemes stuff 
    this->m_xr_walker_association["idle"] = "wait";
    this->m_xr_walker_association["harmonica"] = "play_harmonica";
    this->m_xr_walker_association["guitar"] = "play_guitar";
    this->m_xr_walker_association["story"] = "wait";

    this->m_wounded_by_state[0] = "wounded_heavy";
    this->m_wounded_by_state[1] = "wounded_heavy_2";
    this->m_wounded_by_state[2] = "wounded_heavy_3";

    this->m_xr_combat_ignore_smarts_by_no_assault_zones["zat_a2_sr_no_assault"] = "zat_stalker_base_smart";
    this->m_xr_combat_ignore_smarts_by_no_assault_zones["jup_a6_sr_no_assault"] = "jup_a6";
    this->m_xr_combat_ignore_smarts_by_no_assault_zones["jup_b41_sr_no_assault"] = "jup_b41";

    this->m_xr_patrol_formations["line"].push_back({ Fvector().set(-1.0f, 0.0f, 0.0f), 2 });
    this->m_xr_patrol_formations["line"].push_back({ Fvector().set(-1.0f, 0.0f, 0.0f), 4 });
    this->m_xr_patrol_formations["line"].push_back({ Fvector().set(-1.0f, 0.0f, 0.0f), 6 });
    this->m_xr_patrol_formations["line"].push_back({ Fvector().set(1.0f, 0.0f, 0.0f), 2 });
    this->m_xr_patrol_formations["line"].push_back({ Fvector().set(1.0f, 0.0f, 0.0f), 4 });
    this->m_xr_patrol_formations["line"].push_back({ Fvector().set(1.0f, 0.0f, 0.0f), 6 });

    this->m_xr_patrol_formations["back"].push_back({ Fvector().set(0.3f, 0.0f, -1.0f), 1.2f });
    this->m_xr_patrol_formations["back"].push_back({ Fvector().set(-0.3f, 0.0f, -1.0f), 2.4f });
    this->m_xr_patrol_formations["back"].push_back({ Fvector().set(0.3f, 0.0f, -1.0f), 3.6f });
    this->m_xr_patrol_formations["back"].push_back({ Fvector().set(-0.3f, 0.0f, -1.0f), 4.8f });
    this->m_xr_patrol_formations["back"].push_back({ Fvector().set(0.3f, 0.0f, -1.0f), 6.0f });
    this->m_xr_patrol_formations["back"].push_back({ Fvector().set(-0.3f, 0.0f, -1.0f), 7.2f });

    this->m_xr_patrol_formations["around"].push_back({ Fvector().set(0.44721359f, 0.0f, -0.89442718f), 2.2360680f });
    this->m_xr_patrol_formations["around"].push_back({ Fvector().set(-0.44721359f, 0.0f, -0.89442718f), 2.2360680f });
    this->m_xr_patrol_formations["around"].push_back({ Fvector().set(1.0f, 0.0f, 0.0f), 2.0f });
    this->m_xr_patrol_formations["around"].push_back({ Fvector().set(-1.0f, 0.0f, -0.0f), 2.0f });
    this->m_xr_patrol_formations["around"].push_back({ Fvector().set(0.44721359f, 0.0f, 0.89442718f), 2.2360680f });
    this->m_xr_patrol_formations["around"].push_back({ Fvector().set(-0.44721359f, 0.0f, 0.89442718f), 2.2360680f });

    this->m_xr_patrol_accel_by_curtype["walk"] = "run";
    this->m_xr_patrol_accel_by_curtype["patrol"] = "rush";
    this->m_xr_patrol_accel_by_curtype["raid"] = "assault";
    this->m_xr_patrol_accel_by_curtype["sneak"] = "sneak_run";
    this->m_xr_patrol_accel_by_curtype["sneak_run"] = "assault";

    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(0.3f, 0.0f, -1.0f), 1.2f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(-0.3f, 0.0f, -1.0f), 1.2f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(0.3f, 0.0f, -1.0f), 2.4f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(-0.3f, 0.0f, -1.0f), 2.4f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(0.3f, 0.0f, -1.0f), 3.6f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(-0.3f, 0.0f, -1.0f), 3.6f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(0.3f, 0.0f, -1.0f), 4.8f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(-0.3f, 0.0f, -1.0f), 4.8f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(0.3f, 0.0f, -1.0f), 6.0f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(-0.3f, 0.0f, -1.0f), 6.0f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(0.3f, 0.0f, -1.0f), 7.2f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(-0.3f, 0.0f, -1.0f), 7.2f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(0.3f, 0.0f, -1.0f), 8.4f });
    this->m_xr_reach_task_formations["back"].push_back({ Fvector().set(-0.3f, 0.0f, -1.0f), 8.4f });

    this->m_xr_animpoint_association_table["idle"].first.push_back("");
    this->m_xr_animpoint_association_table["idle"].first.push_back("_eat_bread");
    this->m_xr_animpoint_association_table["idle"].first.push_back("_eat_kolbasa");
    this->m_xr_animpoint_association_table["idle"].first.push_back("_drink_vodka");
    this->m_xr_animpoint_association_table["idle"].first.push_back("_drink_energy");
    this->m_xr_animpoint_association_table["idle"].first.push_back("_weapon");
    this->m_xr_animpoint_association_table["idle"].second.push_back("");
    this->m_xr_animpoint_association_table["idle"].second.push_back("_eat_bread");
    this->m_xr_animpoint_association_table["idle"].second.push_back("_eat_kolbasa");
    this->m_xr_animpoint_association_table["idle"].second.push_back("_drink_vodka");
    this->m_xr_animpoint_association_table["idle"].second.push_back("_drink_energy");
    this->m_xr_animpoint_association_table["idle"].second.push_back("_weapon");

    this->m_xr_animpoint_association_table["harmonica"].first.push_back("_harmonica");
    this->m_xr_animpoint_association_table["harmonica"].second.push_back("");
    this->m_xr_animpoint_association_table["harmonica"].second.push_back("_eat_bread");
    this->m_xr_animpoint_association_table["harmonica"].second.push_back("_eat_kolbasa");
    this->m_xr_animpoint_association_table["harmonica"].second.push_back("_drink_vodka");
    this->m_xr_animpoint_association_table["harmonica"].second.push_back("_drink_energy");
    this->m_xr_animpoint_association_table["harmonica"].second.push_back("_weapon");

    this->m_xr_animpoint_association_table["guitar"].first.push_back("_guitar");
    this->m_xr_animpoint_association_table["guitar"].second.push_back("");
    this->m_xr_animpoint_association_table["guitar"].second.push_back("_eat_bread");
    this->m_xr_animpoint_association_table["guitar"].second.push_back("_eat_kolbasa");
    this->m_xr_animpoint_association_table["guitar"].second.push_back("_drink_vodka");
    this->m_xr_animpoint_association_table["guitar"].second.push_back("_drink_energy");
    this->m_xr_animpoint_association_table["guitar"].second.push_back("_weapon");

    this->m_xr_animpoint_association_table["story"].first.push_back("");
    this->m_xr_animpoint_association_table["story"].first.push_back("_weapon");
    this->m_xr_animpoint_association_table["story"].second.push_back("");
    this->m_xr_animpoint_association_table["story"].second.push_back("_eat_bread");
    this->m_xr_animpoint_association_table["story"].second.push_back("_eat_kolbasa");
    this->m_xr_animpoint_association_table["story"].second.push_back("_drink_vodka");
    this->m_xr_animpoint_association_table["story"].second.push_back("_drink_energy");
    this->m_xr_animpoint_association_table["story"].second.push_back("_weapon");

    this->m_xr_smartcover_cover_substate["fire_target"] = "fire";
    this->m_xr_smartcover_cover_substate["fire_no_lookout_target"] = "fire";
    this->m_xr_smartcover_cover_substate["idle_target"] = "idle";
    this->m_xr_smartcover_cover_substate["lookout_target"] = "idle";
#pragma endregion

#pragma region Cordis Registering some constants
    this->m_data_relations["friend"] = ALife::eRelationTypeFriend;
    this->m_data_relations["enemy"] = ALife::eRelationTypeEnemy;
    this->m_data_relations["neutral"] = ALife::eRelationTypeNeutral;
#pragma endregion

#pragma region Cordis XR_SOUND loading sounds 
    Globals::load_sound();
#pragma endregion

#pragma region Cordis squad_community_by_behaviour
    this->m_squad_community_by_behavior["stalker"] = "stalker";
    this->m_squad_community_by_behavior["bandit"] = "bandit";
    this->m_squad_community_by_behavior["dolg"] = "dolg";
    this->m_squad_community_by_behavior["freedom"] = "freedom";
    this->m_squad_community_by_behavior["army"] = "army";
    this->m_squad_community_by_behavior["ecolog"] = "ecolog";
    this->m_squad_community_by_behavior["killer"] = "killer";
    this->m_squad_community_by_behavior["zombied"] = "zombied";
    this->m_squad_community_by_behavior["monolith"] = "monolith";
    this->m_squad_community_by_behavior["monster"] = "monster";
    this->m_squad_community_by_behavior["monster_predatory_day"] = "monster";
    this->m_squad_community_by_behavior["monster_predatory_night"] = "monster";
    this->m_squad_community_by_behavior["monster_vegetarian"] = "monster";
    this->m_squad_community_by_behavior["monster_zombied_day"] = "monster";
    this->m_squad_community_by_behavior["monster_zombied_night"] = "monster";
    this->m_squad_community_by_behavior["monster_special"] = "monster";
#pragma endregion
 
}

void Cordis::Scripts::Script_GlobalHelper::initialize_StateLib_Descriptors(void)
{
	xr_map<xr_string, StateLibData> state_library;
	StateLibData state_lib_data = StateLibData(Globals::kUnsignedInt32Undefined, Globals::kUnsignedInt32Undefined,
		Globals::kUnsignedInt32Undefined, Globals::kUnsignedInt32Undefined, "",
		"", "");
	state_library["idle"] = state_lib_data;
	state_lib_data = StateLibData(Globals::kUnsignedInt32Undefined, Globals::kUnsignedInt32Undefined,
		Globals::kUnsignedInt32Undefined, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "");
	state_library["smartcover"] = state_lib_data;
	state_lib_data =
		StateLibData(MonsterSpace::eMovementTypeWalk, MonsterSpace::eMentalStateFree, MonsterSpace::eBodyStateStand,
			Globals::kUnsignedInt32Undefined, "none", "", "");
	state_library["walk"] = state_lib_data;
	state_lib_data =
		StateLibData(MonsterSpace::eMovementTypeWalk, MonsterSpace::eMentalStateFree, MonsterSpace::eBodyStateStand,
			Globals::kUnsignedInt32Undefined, "none", "", "");
	state_library["walk_noweap"] = state_lib_data;
	state_lib_data =
		StateLibData(MonsterSpace::eMovementTypeRun, MonsterSpace::eMentalStateFree, MonsterSpace::eBodyStateStand,
			Globals::kUnsignedInt32Undefined, "strapped", "", "");
	state_library["run"] = state_lib_data;
	state_lib_data =
		StateLibData(MonsterSpace::eMovementTypeRun, MonsterSpace::eMentalStatePanic, MonsterSpace::eBodyStateStand,
			Globals::kUnsignedInt32Undefined, "strapped", "", "");
	state_library["sprint"] = state_lib_data;
	state_lib_data =
		StateLibData(MonsterSpace::eMovementTypeWalk, MonsterSpace::eMentalStateFree, MonsterSpace::eBodyStateStand,
			Globals::kUnsignedInt32Undefined, "unstrapped", "", "");
	state_library["patrol"] = state_lib_data;
	state_lib_data =
		StateLibData(MonsterSpace::eMovementTypeWalk, MonsterSpace::eMentalStateFree, MonsterSpace::eBodyStateStand,
			Globals::kUnsignedInt32Undefined, "fire", "", "");
	state_library["patrol_fire"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeWalk, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"", false, 0, true);
	state_library["raid"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeWalk, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "fire", "",
		"");
	state_library["raid_fire"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeWalk, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"");
	state_library["sneak"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeRun, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"");
	state_library["sneak_run"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeWalk, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "strapped", "",
		"");
	state_library["sneak_no_wpn"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeRun, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"");
	state_library["assault"] = state_lib_data;
	state_lib_data =
		StateLibData(MonsterSpace::eMovementTypeRun, MonsterSpace::eMentalStateFree, MonsterSpace::eBodyStateStand,
			Globals::kUnsignedInt32Undefined, "fire", "", "");
	state_library["assault_fire"] = state_lib_data;
	state_lib_data =
		StateLibData(MonsterSpace::eMovementTypeRun, MonsterSpace::eMentalStateFree, MonsterSpace::eBodyStateStand,
			Globals::kUnsignedInt32Undefined, "unstrapped", "", "");
	state_library["rush"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"idle");
	state_library["wait"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "none", "", "idle");
	state_library["wait_trade"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"");
	state_library["wait_na"] = state_lib_data;

	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"idle");
	state_library["guard"] = state_lib_data;

	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"");
	state_library["guard_chasovoy"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"");
	state_library["guard_na"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "fire", "",
		"");
	state_library["guard_fire"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"", true, 0, false);
	state_library["threat"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"bloodsucker_search");
	state_library["threat_danger"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"give_orders");
	state_library["give_orders"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"");
	state_library["threat_heli"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"", true);
	state_library["threat_na"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "fire", "",
		"");
	state_library["threat_fire"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "sniper_fire", "",
		"");
	state_library["threat_sniper_fire"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"hide");
	state_library["hide"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"");
	state_library["hide_na"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "fire", "",
		"");
	state_library["hide_fire"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "sniper_fire", "",
		"");
	state_library["hide_sniper_fire"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "",
		"", "caution");
	state_library["caution"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"choosing");
	state_library["choose"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"press");
	state_library["press"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"warding");
	state_library["ward"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "none", "",
		"ward_short");
	state_library["ward_short"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "none", "",
		"warding");
	state_library["ward_noweap"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "none", "",
		"warding_short");
	state_library["ward_noweap_short"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "none", "",
		"fold_arms");
	state_library["fold_arms"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "",
		"", "poisk");
	state_library["search"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"stoop_no_weap");
	state_library["stoop_no_weap"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"salut");
	state_library["salut"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"salut_free");
	state_library["salut_free"] = state_lib_data;
	state_lib_data = StateLibData(Globals::kUnsignedInt32Undefined, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"prisoner");
	state_library["prisoner"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "strapped", "",
		"hide");
	state_library["hide_no_wpn"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "sit",
		"");
	state_library["sit"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "sit_knee",
		"");
	state_library["sit_knee"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "sit_ass",
		"");
	state_library["sit_ass"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "sit_knee", "play_guitar");
	state_library["play_guitar"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "sit_ass", "play_harmonica");
	state_library["play_harmonica"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"sleeping");
	state_library["sleep"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"hello");
	state_library["hello"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"hello");
	state_library["hello_wpn"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"refuse");
	state_library["refuse"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"claim");
	state_library["claim"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"backoff");
	state_library["backoff"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"backoff");
	state_library["backoff2"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "",
		"", "punch");
	state_library["punch"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "strapped", "",
		"search_corpse");
	state_library["search_corpse"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "strapped", "",
		"help_wounded");
	state_library["help_wounded"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "strapped", "",
		"dynamite");
	state_library["dynamite"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"binocular");
	state_library["binocular"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"cr_raciya");
	state_library["hide_rac"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"raciya");
	state_library["wait_rac"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "none", "",
		"raciya");
	state_library["wait_rac_noweap"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"raciya_stc");
	state_library["wait_rac_stc"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "unstrapped", "",
		"raciya");
	state_library["guard_rac"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"probe_stand");
	state_library["probe_stand"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"probe_stand_detector_advanced");
	state_library["probe_stand_detector_advanced"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"probe_stand_detector_elite");
	state_library["probe_stand_detector_elite"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"probe_way");
	state_library["probe_way"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"probe_way_detector_advanced");
	state_library["probe_way_detector_advanced"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"probe_way_detector_elite");
	state_library["probe_way_detector_elite"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"probe_crouch");
	state_library["probe_crouch"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"probe_crouch_detector_advanced");
	state_library["probe_crouch_detector_advanced"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"probe_crouch_detector_elite");
	state_library["probe_crouch_detector_elite"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"scaner_stand");
	state_library["scaner_stand"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"scaner_way");
	state_library["scaner_way"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"scaner_crouch");
	state_library["scaner_crouch"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"hands_up");
	state_library["hands_up"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, SightManager::eSightTypeCurrentDirection, "strapped",
		"", "wounded");
	state_library["wounded"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, SightManager::eSightTypeCurrentDirection, "drop", "",
		"wounded_heavy_1");
	state_library["wounded_heavy"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, SightManager::eSightTypeCurrentDirection, "drop", "",
		"wounded_heavy_2");
	state_library["wounded_heavy_2"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, SightManager::eSightTypeCurrentDirection, "drop", "",
		"wounded_heavy_3");
	state_library["wounded_heavy_3"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, SightManager::eSightTypeCurrentDirection, "drop", "",
		"wounded_zombie");
	state_library["wounded_zombie"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "strapped", "",
		"trans_0");
	state_library["trans_0"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "strapped", "",
		"trans_1");
	state_library["trans_1"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "strapped", "",
		"trans_zombied");
	state_library["trans_zombied"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "strapped", "",
		"talk_default");
	state_library["talk_default"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "drop", "",
		"psy_armed");
	state_library["psy_pain"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "strapped", "",
		"psy_armed");
	state_library["psy_armed"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateCrouch, Globals::kUnsignedInt32Undefined, "fire", "",
		"psy_shoot", false, 1);
	state_library["psy_shoot"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateCrouch, SightManager::eSightTypeCurrentDirection, "drop", "",
		"wounded_heavy_1");
	state_library["lay_on_bed"] = state_lib_data;

#pragma region Cordis State Library Animpoint stuff
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_wall", "animpoint_stay_wall");
	state_library["animpoint_stay_wall"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_table", "animpoint_stay_table");
	state_library["animpoint_stay_table"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_high",
		"animpoint_sit_high");
	state_library["animpoint_sit_high"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_sit_normal", "animpoint_sit_normal");
	state_library["animpoint_sit_normal"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_low",
		"animpoint_sit_low");
	state_library["animpoint_sit_low"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_wall", "animpoint_stay_wall_eat_bread");
	state_library["animpoint_stay_wall_eat_bread"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_wall", "animpoint_stay_wall_eat_kolbasa");
	state_library["animpoint_stay_wall_eat_kolbasa"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_table", "animpoint_stay_table_eat_bread");
	state_library["animpoint_stay_table_eat_bread"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_table", "animpoint_stay_table_eat_kolbasa");
	state_library["animpoint_stay_table_eat_kolbasa"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_high",
		"animpoint_sit_high_eat_bread");
	state_library["animpoint_sit_high_eat_bread"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_high",
		"animpoint_sit_high_eat_kolbasa");
	state_library["animpoint_sit_high_eat_kolbasa"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_sit_normal", "animpoint_sit_normal_eat_bread");
	state_library["animpoint_sit_normal_eat_bread"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_sit_normal", "animpoint_sit_normal_eat_kolbasa");
	state_library["animpoint_sit_normal_eat_kolbasa"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_low",
		"animpoint_sit_low_eat_bread");
	state_library["animpoint_sit_low_eat_bread"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_low",
		"animpoint_sit_low_eat_kolbasa");
	state_library["animpoint_sit_low_eat_kolbasa"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_wall", "animpoint_stay_wall_drink_vodka");
	state_library["animpoint_stay_wall_drink_vodka"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_wall", "animpoint_stay_wall_drink_energy");
	state_library["animpoint_stay_wall_drink_energy"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_table", "animpoint_stay_table_drink_vodka");
	state_library["animpoint_stay_table_drink_vodka"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_table", "animpoint_stay_table_drink_energy");
	state_library["animpoint_stay_table_drink_energy"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_high",
		"animpoint_sit_high_drink_vodka");
	state_library["animpoint_sit_high_drink_vodka"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_high",
		"animpoint_sit_high_drink_energy");
	state_library["animpoint_sit_high_drink_energy"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_sit_normal", "animpoint_sit_normal_drink_vodka");
	state_library["animpoint_sit_normal_drink_vodka"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_low",
		"animpoint_sit_low_drink_vodka");
	state_library["animpoint_sit_low_drink_vodka"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_low",
		"animpoint_sit_low_drink_energy");
	state_library["animpoint_sit_low_drink_energy"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_wall", "animpoint_stay_wall_guitar");
	state_library["animpoint_stay_wall_guitar"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_table", "animpoint_stay_table_guitar");
	state_library["animpoint_stay_table_guitar"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_high",
		"animpoint_sit_high_guitar");
	state_library["animpoint_sit_high_guitar"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_sit_normal", "animpoint_sit_normal_guitar");
	state_library["animpoint_sit_normal_guitar"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_low",
		"animpoint_sit_low_guitar");
	state_library["animpoint_sit_low_guitar"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_wall", "animpoint_stay_wall_harmonica");
	state_library["animpoint_stay_wall_harmonica"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_table", "animpoint_stay_table_harmonica");
	state_library["animpoint_stay_table_harmonica"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_high",
		"animpoint_sit_high_harmonica");
	state_library["animpoint_sit_high_harmonica"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_sit_normal", "animpoint_sit_normal_harmonica");
	state_library["animpoint_sit_normal_harmonica"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_low",
		"animpoint_sit_low_harmonica");
	state_library["animpoint_sit_low_harmonica"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"animpoint_stay_wall_weapon", "");
	state_library["animpoint_stay_wall_weapon"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"animpoint_stay_table_weapon", "");
	state_library["animpoint_stay_table_weapon"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"animpoint_sit_high_weapon", "");
	state_library["animpoint_sit_high_weapon"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"animpoint_sit_normal_weapon", "");
	state_library["animpoint_sit_normal_weapon"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"animpoint_sit_low_weapon", "");
	state_library["animpoint_sit_low_weapon"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_wall", "");
	state_library["animpoint_stay_wall_no_rnd"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_stay_table", "");
	state_library["animpoint_stay_table_no_rnd"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_high",
		"");
	state_library["animpoint_sit_high_no_rnd"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"animpoint_sit_normal", "");
	state_library["animpoint_sit_normal_no_rnd"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_low",
		"");
	state_library["animpoint_sit_low_no_rnd"] = state_lib_data;
#pragma endregion

#pragma region Cordis State Library Manager Scenario
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"zat_b14_give_artefact_idle");
	state_library["zat_b14_give_artefact_idle"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, Globals::kUnsignedInt32Undefined, "strapped", "",
		"zat_b14_give_artefact_act");
	state_library["zat_b14_give_artefact_act"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "zat_b14_stay_wall");
	state_library["zat_b14_stay_wall"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "zat_b38_stalker_break_lock");
	state_library["zat_b38_stalker_break_lock"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "zat_b38_stalker_turn_on_lift");
	state_library["zat_b38_stalker_turn_on_lift"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "zat_b38_stalker_jump_tonnel");
	state_library["zat_b38_stalker_jump_tonnel"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "zat_b38_stalker_alert");
	state_library["zat_b38_stalker_alert"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "zat_b20_noah_jump");
	state_library["zat_b20_noah_jump"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "pri_a17_ice_climb");
	state_library["pri_a17_ice_climb"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a17_fall_down");
	state_library["pri_a17_fall_down"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a17_pray_in");
	state_library["pri_a17_pray_in"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a17_pray");
	state_library["pri_a17_pray"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "zat_b22_medic_turn_idle");
	state_library["zat_b22_medic_turn_idle"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "zat_b22_medic_turn_out");
	state_library["zat_b22_medic_turn_out"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "fire",
		"", "zat_b22_medic_suicide");
	state_library["zat_b22_medic_suicide"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none", "zat_b3_tech_idle",
		"zat_b3_tech_drunk");
	state_library["zat_b3_tech_drunk"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none", "zat_b3_tech_idle",
		"zat_b3_tech_drink");
	state_library["zat_b3_tech_drink"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none", "zat_b3_tech_idle",
		"zat_b3_tech_idle_1");
	state_library["zat_b3_tech_idle"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none", "zat_b3_tech_idle",
		"");
	state_library["zat_b3_tech_idle_short"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none", "zat_b3_tech_idle",
		"zat_b3_tech_surprise");
	state_library["zat_b3_tech_surprise"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "give_orders");
	state_library["give_orders"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "bloodsucker_search");
	state_library["bloodsucker_search"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateDanger,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "fire",
		"", "bloodsucker_panic");
	state_library["bloodsucker_panic"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "fire",
		"", "suicide_animation");
	state_library["suicide_animation"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "jup_b10_drunk_ravings");
	state_library["jup_b10_drunk_ravings"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "pas_b400_vano_probe");
	state_library["pas_b400_vano_probe"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped", "animpoint_sit_high",
		"pri_a28_kirillov_sit_high_radio");
	state_library["pri_a28_kirillov_sit_high_radio"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a18_inspert_monolit_actor");
	state_library["pri_a18_inspert_monolit_actor"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"pri_a20_colonel_radio", "");
	state_library["pri_a20_colonel_radio"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "fire", "pri_a21_sentry_madness",
		"");
	state_library["pri_a21_sentry_madness"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "fire",
		"pri_a21_sentry_madness_idle", "pri_a21_sentry_madness_suicide");
	state_library["pri_a21_sentry_madness_suicide"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"pri_a22_colonel_lean_on_table", "");
	state_library["pri_a22_colonel_lean_on_table"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a28_army_trance_out");
	state_library["pri_a28_army_trance_out"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "zat_b106_wounded_idle");
	state_library["zat_b106_wounded_idle"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "zat_b38_cop_dead");
	state_library["zat_b38_cop_dead"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"jup_b15_zulus_sit_idle_short", "jup_b15_zulus_sit_drink");
	state_library["jup_b15_zulus_sit_drink"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"jup_b15_zulus_sit_idle_short", "jup_b15_zulus_sit_idle");
	state_library["jup_b15_zulus_sit_idle"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"jup_b15_zulus_sit_idle_short", "");
	state_library["jup_b15_zulus_sit_idle_short"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "jup_b15_zulus_sit_out");
	state_library["jup_b15_zulus_sit_out"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_actor_one");
	state_library["jup_b219_actor_one"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_actor_one_vano");
	state_library["jup_b219_actor_one_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_actor_one_monolith");
	state_library["jup_b219_actor_one_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_actor_one_soldier");
	state_library["jup_b219_actor_one_soldier"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_actor_all");
	state_library["jup_b219_actor_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_actor_soldier_vano");
	state_library["jup_b219_actor_soldier_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_actor_soldier_monolith");
	state_library["jup_b219_actor_soldier_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_actor_vano_monolith");
	state_library["jup_b219_actor_vano_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_zulus_one");
	state_library["jup_b219_zulus_one"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_zulus_one_vano");
	state_library["jup_b219_zulus_one_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_zulus_one_monolith");
	state_library["jup_b219_zulus_one_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_zulus_one_soldier");
	state_library["jup_b219_zulus_one_soldier"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_zulus_all");
	state_library["jup_b219_zulus_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_zulus_soldier_vano");
	state_library["jup_b219_zulus_soldier_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_zulus_soldier_monolith");
	state_library["jup_b219_zulus_soldier_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_zulus_vano_monolith");
	state_library["jup_b219_zulus_vano_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_soldier_one");
	state_library["jup_b219_soldier_one"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_soldier_all");
	state_library["jup_b219_soldier_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_soldier_soldier_vano");
	state_library["jup_b219_soldier_soldier_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_soldier_soldier_monolith");
	state_library["jup_b219_soldier_soldier_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_monolith_one");
	state_library["jup_b219_monolith_one"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_monolith_all");
	state_library["jup_b219_monolith_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_monolith_soldier_monolith");
	state_library["jup_b219_monolith_soldier_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_monolith_vano_monolith");
	state_library["jup_b219_monolith_vano_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_vano_one");
	state_library["jup_b219_vano_one"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_vano_all");
	state_library["jup_b219_vano_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_vano_soldier_vano");
	state_library["jup_b219_vano_soldier_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_b219_vano_vano_monolith");
	state_library["jup_b219_vano_vano_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "jup_b219_azot_one");
	state_library["jup_b219_azot_one"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "jup_b219_azot_one_vano");
	state_library["jup_b219_azot_one_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "jup_b219_azot_one_monolith");
	state_library["jup_b219_azot_one_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "jup_b219_azot_one_soldier");
	state_library["jup_b219_azot_one_soldier"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "jup_b219_azot_soldier_vano");
	state_library["jup_b219_azot_soldier_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "jup_b219_azot_soldier_monolith");
	state_library["jup_b219_azot_soldier_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "jup_b219_azot_vano_monolith");
	state_library["jup_b219_azot_vano_monolith"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "jup_b219_azot_all");
	state_library["jup_b219_azot_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "zat_b100_heli_2_serch");
	state_library["zat_b100_heli_2_serch"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "zat_b101_heli_5_serch");
	state_library["zat_b101_heli_5_serch"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "jup_b217_guide_stand");
	state_library["jup_b217_guide_stand"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "jup_b217_nitro_stand");
	state_library["jup_b217_nitro_stand"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "jup_b41_novikov_stand");
	state_library["jup_b41_novikov_stand"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_b305_actor");
	state_library["pri_b305_actor"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_a9_cam1_actor");
	state_library["jup_a9_cam1_actor"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_a9_cam2_actor");
	state_library["jup_a9_cam2_actor"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "jup_a9_cam3_actor");
	state_library["jup_a9_cam3_actor"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "jup_b217_nitro_straight");
	state_library["jup_b217_nitro_straight"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "pri_a25_psy_medic_idle");
	state_library["pri_a25_psy_medic_idle"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "pri_a25_psy_medic_out");
	state_library["pri_a25_psy_medic_out"] = state_lib_data;
#pragma endregion

#pragma region Cordis State Library PriA15
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_idle_none");
	state_library["pri_a15_idle_none"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "strapped",
		"", "pri_a15_idle_none");
	state_library["pri_a15_idle_strap"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_idle_unstrap");
	state_library["pri_a15_idle_unstrap"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_vano_all");
	state_library["pri_a15_vano_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_vano_1_sokolov");
	state_library["pri_a15_vano_1_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_vano_1_zulus");
	state_library["pri_a15_vano_1_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_vano_1_wanderer");
	state_library["pri_a15_vano_1_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_vano_2_sokolov_zulus");
	state_library["pri_a15_vano_2_sokolov_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_vano_2_sokolov_wanderer");
	state_library["pri_a15_vano_2_sokolov_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_vano_2_zulus_wanderer");
	state_library["pri_a15_vano_2_zulus_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_vano_3_vano_alive");
	state_library["pri_a15_vano_3_vano_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_sokolov_all");
	state_library["pri_a15_sokolov_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_sokolov_1_vano");
	state_library["pri_a15_sokolov_1_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_sokolov_1_zulus");
	state_library["pri_a15_sokolov_1_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_sokolov_1_wanderer");
	state_library["pri_a15_sokolov_1_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_sokolov_2_vano_zulus");
	state_library["pri_a15_sokolov_2_vano_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_sokolov_2_vano_wanderer");
	state_library["pri_a15_sokolov_2_vano_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_sokolov_2_zulus_wanderer");
	state_library["pri_a15_sokolov_2_zulus_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_sokolov_3_sokolov_alive");
	state_library["pri_a15_sokolov_3_sokolov_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_zulus_all");
	state_library["pri_a15_zulus_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_zulus_1_vano");
	state_library["pri_a15_zulus_1_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_zulus_1_sokolov");
	state_library["pri_a15_zulus_1_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_zulus_1_wanderer");
	state_library["pri_a15_zulus_1_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_zulus_2_vano_sokolov");
	state_library["pri_a15_zulus_2_vano_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_zulus_2_vano_wanderer");
	state_library["pri_a15_zulus_2_vano_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_zulus_2_sokolov_wanderer");
	state_library["pri_a15_zulus_2_sokolov_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_zulus_3_zulus_alive");
	state_library["pri_a15_zulus_3_zulus_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_wanderer_all");
	state_library["pri_a15_wanderer_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_wanderer_1_vano");
	state_library["pri_a15_wanderer_1_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_wanderer_1_sokolov");
	state_library["pri_a15_wanderer_1_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_wanderer_1_zulus");
	state_library["pri_a15_wanderer_1_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_wanderer_2_vano_sokolov");
	state_library["pri_a15_wanderer_2_vano_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_wanderer_2_vano_zulus");
	state_library["pri_a15_wanderer_2_vano_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_wanderer_2_sokolov_zulus");
	state_library["pri_a15_wanderer_2_sokolov_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_wanderer_3_wanderer_alive");
	state_library["pri_a15_wanderer_3_wanderer_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_all");
	state_library["pri_a15_actor_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_1_vano");
	state_library["pri_a15_actor_1_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_1_sokolov");
	state_library["pri_a15_actor_1_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_1_zulus");
	state_library["pri_a15_actor_1_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_1_wanderer");
	state_library["pri_a15_actor_1_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_2_vano_sokolov");
	state_library["pri_a15_actor_2_vano_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_2_vano_zulus");
	state_library["pri_a15_actor_2_vano_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_2_vano_wanderer");
	state_library["pri_a15_actor_2_vano_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_2_sokolov_zulus");
	state_library["pri_a15_actor_2_sokolov_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_2_sokolov_wanderer");
	state_library["pri_a15_actor_2_sokolov_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_2_zulus_wanderer");
	state_library["pri_a15_actor_2_zulus_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_3_vano_alive");
	state_library["pri_a15_actor_3_vano_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_3_sokolov_alive");
	state_library["pri_a15_actor_3_sokolov_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_3_zulus_alive");
	state_library["pri_a15_actor_3_zulus_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_3_wanderer_alive");
	state_library["pri_a15_actor_3_wanderer_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "none",
		"", "pri_a15_actor_all_dead");
	state_library["pri_a15_actor_all_dead"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_all");
	state_library["pri_a15_military_tarasov_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_1_vano");
	state_library["pri_a15_military_tarasov_1_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_1_sokolov");
	state_library["pri_a15_military_tarasov_1_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_1_zulus");
	state_library["pri_a15_military_tarasov_1_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_1_wanderer");
	state_library["pri_a15_military_tarasov_1_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_2_vano_sokolov");
	state_library["pri_a15_military_tarasov_2_vano_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_2_vano_zulus");
	state_library["pri_a15_military_tarasov_2_vano_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_2_vano_wanderer");
	state_library["pri_a15_military_tarasov_2_vano_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_2_sokolov_zulus");
	state_library["pri_a15_military_tarasov_2_sokolov_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_2_sokolov_wanderer");
	state_library["pri_a15_military_tarasov_2_sokolov_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_2_zulus_wanderer");
	state_library["pri_a15_military_tarasov_2_zulus_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_3_vano_alive");
	state_library["pri_a15_military_tarasov_3_vano_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_3_sokolov_alive");
	state_library["pri_a15_military_tarasov_3_sokolov_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_3_zulus_alive");
	state_library["pri_a15_military_tarasov_3_zulus_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_3_wanderer_alive");
	state_library["pri_a15_military_tarasov_3_wanderer_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_tarasov_all_dead");
	state_library["pri_a15_military_tarasov_all_dead"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_all");
	state_library["pri_a15_military_2_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_1_vano");
	state_library["pri_a15_military_2_1_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_1_sokolov");
	state_library["pri_a15_military_2_1_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_1_zulus");
	state_library["pri_a15_military_2_1_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_1_wanderer");
	state_library["pri_a15_military_2_1_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_2_vano_sokolov");
	state_library["pri_a15_military_2_2_vano_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_2_vano_zulus");
	state_library["pri_a15_military_2_2_vano_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_2_vano_wanderer");
	state_library["pri_a15_military_2_2_vano_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_2_sokolov_zulus");
	state_library["pri_a15_military_2_2_sokolov_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_2_sokolov_wanderer");
	state_library["pri_a15_military_2_2_sokolov_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_2_zulus_wanderer");
	state_library["pri_a15_military_2_2_zulus_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_3_vano_alive");
	state_library["pri_a15_military_2_3_vano_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_3_sokolov_alive");
	state_library["pri_a15_military_2_3_sokolov_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_3_zulus_alive");
	state_library["pri_a15_military_2_3_zulus_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_3_wanderer_alive");
	state_library["pri_a15_military_2_3_wanderer_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_2_all_dead");
	state_library["pri_a15_military_2_all_dead"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_all");
	state_library["pri_a15_military_3_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_1_vano");
	state_library["pri_a15_military_3_1_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_1_sokolov");
	state_library["pri_a15_military_3_1_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_1_zulus");
	state_library["pri_a15_military_3_1_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_1_wanderer");
	state_library["pri_a15_military_3_1_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_2_vano_sokolov");
	state_library["pri_a15_military_3_2_vano_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_2_vano_zulus");
	state_library["pri_a15_military_3_2_vano_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_2_vano_wanderer");
	state_library["pri_a15_military_3_2_vano_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_2_sokolov_zulus");
	state_library["pri_a15_military_3_2_sokolov_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_2_sokolov_wanderer");
	state_library["pri_a15_military_3_2_sokolov_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_2_zulus_wanderer");
	state_library["pri_a15_military_3_2_zulus_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_3_vano_alive");
	state_library["pri_a15_military_3_3_vano_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_3_sokolov_alive");
	state_library["pri_a15_military_3_3_sokolov_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_3_zulus_alive");
	state_library["pri_a15_military_3_3_zulus_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_3_wanderer_alive");
	state_library["pri_a15_military_3_3_wanderer_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_3_all_dead");
	state_library["pri_a15_military_3_all_dead"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_all");
	state_library["pri_a15_military_4_all"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_1_vano");
	state_library["pri_a15_military_4_1_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_1_vano");
	state_library["pri_a15_military_4_1_vano"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_1_sokolov");
	state_library["pri_a15_military_4_1_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_1_zulus");
	state_library["pri_a15_military_4_1_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_1_wanderer");
	state_library["pri_a15_military_4_1_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_2_vano_sokolov");
	state_library["pri_a15_military_4_2_vano_sokolov"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_2_vano_zulus");
	state_library["pri_a15_military_4_2_vano_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_2_vano_wanderer");
	state_library["pri_a15_military_4_2_vano_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_2_sokolov_zulus");
	state_library["pri_a15_military_4_2_sokolov_zulus"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_2_sokolov_wanderer");
	state_library["pri_a15_military_4_2_sokolov_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_2_zulus_wanderer");
	state_library["pri_a15_military_4_2_zulus_wanderer"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_3_vano_alive");
	state_library["pri_a15_military_4_3_vano_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_3_sokolov_alive");
	state_library["pri_a15_military_4_3_sokolov_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_3_zulus_alive");
	state_library["pri_a15_military_4_3_zulus_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_3_wanderer_alive");
	state_library["pri_a15_military_4_3_wanderer_alive"] = state_lib_data;
	state_lib_data = StateLibData(MonsterSpace::eMovementTypeStand, MonsterSpace::eMentalStateFree,
		MonsterSpace::eBodyStateStand, SightManager::eSightTypeAnimationDirection, "unstrapped",
		"", "pri_a15_military_4_all_dead");
	state_library["pri_a15_military_4_all_dead"] = state_lib_data;

	this->m_state_library = std::move(state_library);
}

void Cordis::Scripts::Script_GlobalHelper::initialize_StateLib(void)
{
    this->initialize_StateLib_Animations();
    this->initialize_StateLib_Animpoints();
    this->initialize_StateLib_Zaton();
    this->initialize_StateLib_Jupiter();
    this->initialize_StateLib_Pripyat();
}

void Cordis::Scripts::Script_GlobalHelper::initialize_StateLib_Animations(void)
{
	StateManagerAnimationData idle_animation_data;
	idle_animation_data.setPropertiesMaxIdle(5);
	idle_animation_data.setPropertiesSumIdle(3);
	idle_animation_data.setPropertiesRandom(80);

	idle_animation_data.addAnimation("idle", 0, "idle_0_idle_1");
	idle_animation_data.addAnimation("idle", 1, "idle_1_idle_1");
	idle_animation_data.addAnimation("idle", 2, "idle_2_idle_1");
	idle_animation_data.addAnimation("idle", 3, "idle_3_idle_1");
	idle_animation_data.addAnimation("idle", 4, "idle_4_idle_1");
	idle_animation_data.addAnimation("idle", 8, "idle_8_idle_1");
	idle_animation_data.addAnimation("idle", 9, "idle_2_idle_1");
	idle_animation_data.addAnimation("idle", 10, "idle_10_idle_1");

	idle_animation_data.addAnimation("rnd", 0, "idle_0_idle_0");
	idle_animation_data.addAnimation("rnd", 0, "idle_0_idle_2");
	idle_animation_data.addAnimation("rnd", 0, "idle_0_idle_3");
	idle_animation_data.addAnimation("rnd", 0, "idle_0_idle_4");

	idle_animation_data.addAnimation("rnd", 1, "idle_1_idle_0");
	idle_animation_data.addAnimation("rnd", 1, "idle_1_idle_2");
	idle_animation_data.addAnimation("rnd", 1, "idle_1_idle_3");
	idle_animation_data.addAnimation("rnd", 1, "idle_1_idle_4");

	idle_animation_data.addAnimation("rnd", 2, "idle_2_idle_0");
	idle_animation_data.addAnimation("rnd", 2, "idle_2_idle_2");
	idle_animation_data.addAnimation("rnd", 2, "idle_2_idle_3");
	idle_animation_data.addAnimation("rnd", 2, "idle_2_idle_4");

	idle_animation_data.addAnimation("rnd", 3, "idle_3_idle_0");
	idle_animation_data.addAnimation("rnd", 3, "idle_3_idle_2");
	idle_animation_data.addAnimation("rnd", 3, "idle_3_idle_3");
	idle_animation_data.addAnimation("rnd", 3, "idle_3_idle_4");

	idle_animation_data.addAnimation("rnd", 4, "idle_4_idle_0");
	idle_animation_data.addAnimation("rnd", 4, "idle_4_idle_2");
	idle_animation_data.addAnimation("rnd", 4, "idle_4_idle_3");
	idle_animation_data.addAnimation("rnd", 4, "idle_4_idle_4");

	idle_animation_data.addAnimation("rnd", 8, "idle_8_idle_0");
	idle_animation_data.addAnimation("rnd", 8, "idle_8_idle_2");
	idle_animation_data.addAnimation("rnd", 8, "idle_8_idle_3");
	idle_animation_data.addAnimation("rnd", 8, "idle_8_idle_4");

	idle_animation_data.addAnimation("rnd", 9, "idle_2_idle_0");
	idle_animation_data.addAnimation("rnd", 9, "idle_2_idle_2");
	idle_animation_data.addAnimation("rnd", 9, "idle_2_idle_3");
	idle_animation_data.addAnimation("rnd", 9, "idle_2_idle_4");

	idle_animation_data.addAnimation("rnd", 10, "idle_10_idle_0");
	idle_animation_data.addAnimation("rnd", 10, "idle_10_idle_2");
	idle_animation_data.addAnimation("rnd", 10, "idle_10_idle_3");
	idle_animation_data.addAnimation("rnd", 10, "idle_10_idle_4");

	this->m_state_manager_animation_list["idle"] = idle_animation_data;

	StateManagerAnimationData idle_chasovoy_animation_data;
	idle_chasovoy_animation_data.setPropertiesMaxIdle(5);
	idle_chasovoy_animation_data.setPropertiesSumIdle(3);
	idle_chasovoy_animation_data.setPropertiesRandom(80);

	idle_chasovoy_animation_data.addAnimation("idle", 0, "idle_0_idle_1");
	idle_chasovoy_animation_data.addAnimation("idle", 1, "idle_1_idle_1");
	idle_chasovoy_animation_data.addAnimation("idle", 2, "idle_2_idle_1");
	idle_chasovoy_animation_data.addAnimation("idle", 3, "idle_3_idle_1");
	idle_chasovoy_animation_data.addAnimation("idle", 4, "idle_4_idle_1");
	idle_chasovoy_animation_data.addAnimation("idle", 8, "idle_8_idle_1");
	idle_chasovoy_animation_data.addAnimation("idle", 9, "idle_2_idle_1");
	idle_chasovoy_animation_data.addAnimation("idle", 10, "idle_10_idle_1");

	idle_chasovoy_animation_data.addAnimation("rnd", 0, "chasovoy_0");
	idle_chasovoy_animation_data.addAnimation("rnd", 0, "chasovoy_1");
	idle_chasovoy_animation_data.addAnimation("rnd", 0, "chasovoy_2");
	idle_chasovoy_animation_data.addAnimation("rnd", 0, "chasovoy_3");
	idle_chasovoy_animation_data.addAnimation("rnd", 0, "chasovoy_4");

	idle_chasovoy_animation_data.addAnimation("rnd", 1, "chasovoy_0");
	idle_chasovoy_animation_data.addAnimation("rnd", 1, "chasovoy_1");
	idle_chasovoy_animation_data.addAnimation("rnd", 1, "chasovoy_2");
	idle_chasovoy_animation_data.addAnimation("rnd", 1, "chasovoy_3");
	idle_chasovoy_animation_data.addAnimation("rnd", 1, "chasovoy_4");

	idle_chasovoy_animation_data.addAnimation("rnd", 2, "chasovoy_0");
	idle_chasovoy_animation_data.addAnimation("rnd", 2, "chasovoy_1");
	idle_chasovoy_animation_data.addAnimation("rnd", 2, "chasovoy_2");
	idle_chasovoy_animation_data.addAnimation("rnd", 2, "chasovoy_3");
	idle_chasovoy_animation_data.addAnimation("rnd", 2, "chasovoy_4");

	idle_chasovoy_animation_data.addAnimation("rnd", 3, "chasovoy_0");
	idle_chasovoy_animation_data.addAnimation("rnd", 3, "chasovoy_1");
	idle_chasovoy_animation_data.addAnimation("rnd", 3, "chasovoy_2");
	idle_chasovoy_animation_data.addAnimation("rnd", 3, "chasovoy_3");
	idle_chasovoy_animation_data.addAnimation("rnd", 3, "chasovoy_4");

	idle_chasovoy_animation_data.addAnimation("rnd", 4, "chasovoy_0");
	idle_chasovoy_animation_data.addAnimation("rnd", 4, "chasovoy_1");
	idle_chasovoy_animation_data.addAnimation("rnd", 4, "chasovoy_2");
	idle_chasovoy_animation_data.addAnimation("rnd", 4, "chasovoy_3");
	idle_chasovoy_animation_data.addAnimation("rnd", 4, "chasovoy_4");

	idle_chasovoy_animation_data.addAnimation("rnd", 8, "chasovoy_0");
	idle_chasovoy_animation_data.addAnimation("rnd", 8, "chasovoy_1");
	idle_chasovoy_animation_data.addAnimation("rnd", 8, "chasovoy_2");
	idle_chasovoy_animation_data.addAnimation("rnd", 8, "chasovoy_3");
	idle_chasovoy_animation_data.addAnimation("rnd", 8, "chasovoy_4");

	idle_chasovoy_animation_data.addAnimation("rnd", 9, "chasovoy_0");
	idle_chasovoy_animation_data.addAnimation("rnd", 9, "chasovoy_1");
	idle_chasovoy_animation_data.addAnimation("rnd", 9, "chasovoy_2");
	idle_chasovoy_animation_data.addAnimation("rnd", 9, "chasovoy_3");
	idle_chasovoy_animation_data.addAnimation("rnd", 9, "chasovoy_4");

	idle_chasovoy_animation_data.addAnimation("rnd", 10, "chasovoy_0");
	idle_chasovoy_animation_data.addAnimation("rnd", 10, "chasovoy_1");
	idle_chasovoy_animation_data.addAnimation("rnd", 10, "chasovoy_2");
	idle_chasovoy_animation_data.addAnimation("rnd", 10, "chasovoy_3");
	idle_chasovoy_animation_data.addAnimation("rnd", 10, "chasovoy_4");

	this->m_state_manager_animation_list["idle_chasovoy"] = idle_chasovoy_animation_data;

	StateManagerAnimationData caution_animation_data;
	caution_animation_data.setPropertiesMaxIdle(5);
	caution_animation_data.setPropertiesSumIdle(3);
	caution_animation_data.setPropertiesRandom(80);

	caution_animation_data.addAnimation("into", 0, "prisluh_0_in");
	caution_animation_data.addAnimation("into", 1, "prisluh_1_in");
	caution_animation_data.addAnimation("into", 2, "prisluh_2_in");
	caution_animation_data.addAnimation("into", 3, "prisluh_3_in");
	caution_animation_data.addAnimation("into", 4, "prisluh_4_in");
	caution_animation_data.addAnimation("into", 8, "prisluh_8_in");
	caution_animation_data.addAnimation("into", 9, "prisluh_9_in");
	caution_animation_data.addAnimation("into", 10, "prisluh_10_in");

	caution_animation_data.addAnimation("out", 0, "prisluh_0_out");
	caution_animation_data.addAnimation("out", 1, "prisluh_1_out");
	caution_animation_data.addAnimation("out", 2, "prisluh_2_out");
	caution_animation_data.addAnimation("out", 3, "prisluh_3_out");
	caution_animation_data.addAnimation("out", 4, "prisluh_4_out");
	caution_animation_data.addAnimation("out", 8, "prisluh_8_out");
	caution_animation_data.addAnimation("out", 9, "prisluh_9_out");
	caution_animation_data.addAnimation("out", 10, "prisluh_10_out");

	caution_animation_data.addAnimation("idle", 0, "prisluh_0_1");
	caution_animation_data.addAnimation("idle", 1, "prisluh_1_1");
	caution_animation_data.addAnimation("idle", 2, "prisluh_2_1");
	caution_animation_data.addAnimation("idle", 3, "prisluh_3_1");
	caution_animation_data.addAnimation("idle", 4, "prisluh_4_1");
	caution_animation_data.addAnimation("idle", 8, "prisluh_8_1");
	caution_animation_data.addAnimation("idle", 9, "prisluh_9_1");
	caution_animation_data.addAnimation("idle", 10, "prisluh_10_1");

	caution_animation_data.addAnimation("rnd", 0, "prisluh_0_0");
	caution_animation_data.addAnimation("rnd", 0, "prisluh_0_2");
	caution_animation_data.addAnimation("rnd", 1, "prisluh_1_0");
	caution_animation_data.addAnimation("rnd", 1, "prisluh_1_2");
	caution_animation_data.addAnimation("rnd", 2, "prisluh_2_0");
	caution_animation_data.addAnimation("rnd", 2, "prisluh_2_2");
	caution_animation_data.addAnimation("rnd", 3, "prisluh_3_0");
	caution_animation_data.addAnimation("rnd", 3, "prisluh_3_2");
	caution_animation_data.addAnimation("rnd", 4, "prisluh_4_0");
	caution_animation_data.addAnimation("rnd", 4, "prisluh_4_2");
	caution_animation_data.addAnimation("rnd", 8, "prisluh_8_0");
	caution_animation_data.addAnimation("rnd", 8, "prisluh_8_2");
	caution_animation_data.addAnimation("rnd", 9, "prisluh_9_0");
	caution_animation_data.addAnimation("rnd", 9, "prisluh_9_2");
	caution_animation_data.addAnimation("rnd", 10, "prisluh_10_0");
	caution_animation_data.addAnimation("rnd", 10, "prisluh_10_2");

	this->m_state_manager_animation_list["caution"] = caution_animation_data;

	StateManagerAnimationData poisk_animation_data;
	poisk_animation_data.setPropertiesMaxIdle(5);
	poisk_animation_data.setPropertiesSumIdle(3);
	poisk_animation_data.setPropertiesRandom(80);

	poisk_animation_data.addAnimation("idle", 0, "poisk_0_idle_1");
	poisk_animation_data.addAnimation("idle", 1, "poisk_1_idle_1");
	poisk_animation_data.addAnimation("idle", 2, "poisk_2_idle_1");
	poisk_animation_data.addAnimation("idle", 3, "poisk_3_idle_1");
	poisk_animation_data.addAnimation("idle", 4, "poisk_4_idle_1");
	poisk_animation_data.addAnimation("idle", 8, "poisk_8_idle_1");
	poisk_animation_data.addAnimation("idle", 9, "poisk_9_idle_1");
	poisk_animation_data.addAnimation("idle", 10, "poisk_10_idle_1");

	poisk_animation_data.addAnimation("rnd", 0, "poisk_0_idle_0");
	poisk_animation_data.addAnimation("rnd", 0, "poisk_0_idle_2");
	poisk_animation_data.addAnimation("rnd", 1, "poisk_1_idle_0");
	poisk_animation_data.addAnimation("rnd", 1, "poisk_1_idle_2");
	poisk_animation_data.addAnimation("rnd", 2, "poisk_2_idle_0");
	poisk_animation_data.addAnimation("rnd", 2, "poisk_2_idle_2");
	poisk_animation_data.addAnimation("rnd", 3, "poisk_3_idle_0");
	poisk_animation_data.addAnimation("rnd", 3, "poisk_3_idle_2");
	poisk_animation_data.addAnimation("rnd", 4, "poisk_4_idle_0");
	poisk_animation_data.addAnimation("rnd", 4, "poisk_4_idle_2");
	poisk_animation_data.addAnimation("rnd", 8, "poisk_8_idle_0");
	poisk_animation_data.addAnimation("rnd", 8, "poisk_8_idle_2");
	poisk_animation_data.addAnimation("rnd", 9, "poisk_9_idle_0");
	poisk_animation_data.addAnimation("rnd", 9, "poisk_9_idle_2");
	poisk_animation_data.addAnimation("rnd", 10, "poisk_10_idle_0");
	poisk_animation_data.addAnimation("rnd", 10, "poisk_10_idle_2");

	this->m_state_manager_animation_list["poisk"] = poisk_animation_data;

	StateManagerAnimationData stoop_no_weap_animation_data;
	stoop_no_weap_animation_data.setPropertiesMaxIdle(2);
	stoop_no_weap_animation_data.setPropertiesSumIdle(1);
	stoop_no_weap_animation_data.setPropertiesRandom(80);

	stoop_no_weap_animation_data.addAnimation("idle", 0, "poisk_0_idle_0");

	this->m_state_manager_animation_list["stoop_no_weap"] = stoop_no_weap_animation_data;

	StateManagerAnimationData hide_animation_data;
	hide_animation_data.setPropertiesMaxIdle(5);
	hide_animation_data.setPropertiesSumIdle(3);
	hide_animation_data.setPropertiesRandom(80);

	hide_animation_data.addAnimation("into", 0, "cr_idle_0_in");
	hide_animation_data.addAnimation("into", 1, "cr_idle_1_in");
	hide_animation_data.addAnimation("into", 2, "cr_idle_2_in");
	hide_animation_data.addAnimation("into", 3, "cr_idle_3_in");
	hide_animation_data.addAnimation("into", 4, "cr_idle_4_in");
	hide_animation_data.addAnimation("into", 8, "cr_idle_8_in");
	hide_animation_data.addAnimation("into", 9, "cr_idle_9_in");
	hide_animation_data.addAnimation("into", 10, "cr_idle_10_in");

	hide_animation_data.addAnimation("out", 0, "cr_idle_0_out");
	hide_animation_data.addAnimation("out", 1, "cr_idle_1_out");
	hide_animation_data.addAnimation("out", 2, "cr_idle_2_out");
	hide_animation_data.addAnimation("out", 3, "cr_idle_3_out");
	hide_animation_data.addAnimation("out", 4, "cr_idle_4_out");
	hide_animation_data.addAnimation("out", 8, "cr_idle_8_out");
	hide_animation_data.addAnimation("out", 9, "cr_idle_9_out");
	hide_animation_data.addAnimation("out", 10, "cr_idle_10_out");

	hide_animation_data.addAnimation("idle", 0, "cr_idle_0_1");
	hide_animation_data.addAnimation("idle", 1, "cr_idle_1_1");
	hide_animation_data.addAnimation("idle", 2, "cr_idle_2_1");
	hide_animation_data.addAnimation("idle", 3, "cr_idle_3_1");
	hide_animation_data.addAnimation("idle", 4, "cr_idle_4_1");
	hide_animation_data.addAnimation("idle", 8, "cr_idle_8_1");
	hide_animation_data.addAnimation("idle", 9, "cr_idle_9_1");
	hide_animation_data.addAnimation("idle", 10, "cr_idle_10_1");

	hide_animation_data.addAnimation("rnd", 0, "cr_idle_0_0");
	hide_animation_data.addAnimation("rnd", 0, "cr_idle_0_2");
	hide_animation_data.addAnimation("rnd", 1, "cr_idle_1_0");
	hide_animation_data.addAnimation("rnd", 1, "cr_idle_1_2");
	hide_animation_data.addAnimation("rnd", 2, "cr_idle_2_0");
	hide_animation_data.addAnimation("rnd", 2, "cr_idle_2_2");
	hide_animation_data.addAnimation("rnd", 3, "cr_idle_3_0");
	hide_animation_data.addAnimation("rnd", 3, "cr_idle_3_2");
	hide_animation_data.addAnimation("rnd", 4, "cr_idle_4_0");
	hide_animation_data.addAnimation("rnd", 4, "cr_idle_4_2");
	hide_animation_data.addAnimation("rnd", 8, "cr_idle_8_0");
	hide_animation_data.addAnimation("rnd", 8, "cr_idle_8_2");
	hide_animation_data.addAnimation("rnd", 9, "cr_idle_9_0");
	hide_animation_data.addAnimation("rnd", 9, "cr_idle_9_2");
	hide_animation_data.addAnimation("rnd", 10, "cr_idle_10_0");
	hide_animation_data.addAnimation("rnd", 10, "cr_idle_10_2");

	this->m_state_manager_animation_list["hide"] = hide_animation_data;

	StateManagerAnimationData play_guitar_animation_data;
	play_guitar_animation_data.setPropertiesMaxIdle(3);
	play_guitar_animation_data.setPropertiesSumIdle(3);
	play_guitar_animation_data.setPropertiesRandom(80);

	play_guitar_animation_data.addAnimation("into", 0, "sit_1_guitar_0_0");
	play_guitar_animation_data.addAnimationAttachItemName("into", 0, "guitar_a");
	//       play_guitar_animation_data.addAnimationFunction(sr_camp.play_guitar) Lord: реализовать!
	play_guitar_animation_data.addAnimation("into", 0, "sit_1_guitar_0_1");

	play_guitar_animation_data.addAnimation("out", 0, "guitar_0_sit_1_0");
	play_guitar_animation_data.addAnimationDettachItemName("out", 0, "guitar_a");
	play_guitar_animation_data.addAnimationDettachItemName("out", 0, "guitar_0_sit_1_1");

	play_guitar_animation_data.addAnimation("idle", 0, "guitar_0");

	this->m_state_manager_animation_list["play_guitar"] = play_guitar_animation_data;

	StateManagerAnimationData play_harmonica_animation_data;
	play_harmonica_animation_data.setPropertiesMaxIdle(3);
	play_harmonica_animation_data.setPropertiesSumIdle(3);
	play_harmonica_animation_data.setPropertiesRandom(80);

	play_harmonica_animation_data.addAnimation("into", 0, "sit_2_harmonica_1_0");
	play_harmonica_animation_data.addAnimationAttachItemName("into", 0, "harmonica_a");
	//    play_harmonica_animation_data.addAnimationFunction(sr_camp.start_harmonica); Lord: реализовать!
	play_harmonica_animation_data.addAnimation("into", 0, "sit_2_harmonica_1_1");

	play_harmonica_animation_data.addAnimation("out", 0, "harmonica_1_sit_2_0");
	play_harmonica_animation_data.addAnimationDettachItemName("out", 0, "harmonica_a");
	play_harmonica_animation_data.addAnimation("out", 0, "harmonica_1_sit_2_1");

	play_harmonica_animation_data.addAnimation("idle", 0, "harmonica_0");

	this->m_state_manager_animation_list["play_harmonica"] = play_harmonica_animation_data;

	StateManagerAnimationData hello_animation_data;
	hello_animation_data.setPropertiesMaxIdle(5);
	hello_animation_data.setPropertiesSumIdle(5);
	hello_animation_data.setPropertiesRandom(100);

	hello_animation_data.addAnimation("rnd", 0, "hello_0_idle_0");
	hello_animation_data.addAnimation("rnd", 1, "hello_1_idle_0");
	hello_animation_data.addAnimation("rnd", 2, "hello_2_idle_0");
	hello_animation_data.addAnimation("rnd", 3, "hello_3_idle_0");
	hello_animation_data.addAnimation("rnd", 4, "hello_4_idle_0");
	hello_animation_data.addAnimation("rnd", 8, "hello_8_idle_0");
	hello_animation_data.addAnimation("rnd", 9, "hello_9_idle_0");
	hello_animation_data.addAnimation("rnd", 10, "hello_10_idle_0");

	this->m_state_manager_animation_list["hello"] = hello_animation_data;

	StateManagerAnimationData refuse_animation_data;
	refuse_animation_data.setPropertiesMaxIdle(3);
	refuse_animation_data.setPropertiesSumIdle(3);
	refuse_animation_data.setPropertiesRandom(100);

	refuse_animation_data.addAnimation("rnd", 0, "net_0_0");
	refuse_animation_data.addAnimation("rnd", 1, "net_1_0");
	refuse_animation_data.addAnimation("rnd", 2, "net_2_0");
	refuse_animation_data.addAnimation("rnd", 3, "net_3_0");
	refuse_animation_data.addAnimation("rnd", 4, "net_4_0");
	refuse_animation_data.addAnimation("rnd", 8, "net_8_0");
	refuse_animation_data.addAnimation("rnd", 9, "net_9_0");
	refuse_animation_data.addAnimation("rnd", 10, "net_10_0");

	this->m_state_manager_animation_list["refuse"] = refuse_animation_data;

	StateManagerAnimationData claim_animation_data;
	claim_animation_data.setPropertiesMaxIdle(5);
	claim_animation_data.setPropertiesSumIdle(2);
	claim_animation_data.setPropertiesRandom(100);

	claim_animation_data.addAnimation("rnd", 1, "gop_stop_1_0");
	claim_animation_data.addAnimation("rnd", 2, "gop_stop_2_0");
	claim_animation_data.addAnimation("rnd", 3, "gop_stop_3_0");
	claim_animation_data.addAnimation("rnd", 4, "gop_stop_4_0");
	claim_animation_data.addAnimation("rnd", 8, "gop_stop_8_0");
	claim_animation_data.addAnimation("rnd", 9, "gop_stop_9_0");
	claim_animation_data.addAnimation("rnd", 10, "gop_stop_10_0");

	this->m_state_manager_animation_list["claim"] = claim_animation_data;

	StateManagerAnimationData backoff_animation_data;
	backoff_animation_data.setPropertiesMaxIdle(5);
	backoff_animation_data.setPropertiesSumIdle(2);
	backoff_animation_data.setPropertiesRandom(100);

	backoff_animation_data.addAnimation("rnd", 0, "uhodi_1_0");
	backoff_animation_data.addAnimation("rnd", 0, "uhodi_1_1");
	backoff_animation_data.addAnimation("rnd", 1, "uhodi_1_0");
	backoff_animation_data.addAnimation("rnd", 1, "uhodi_1_1");
	backoff_animation_data.addAnimation("rnd", 2, "uhodi_2_0");
	backoff_animation_data.addAnimation("rnd", 2, "uhodi_2_1");
	backoff_animation_data.addAnimation("rnd", 3, "uhodi_3_0");
	backoff_animation_data.addAnimation("rnd", 3, "uhodi_3_1");
	backoff_animation_data.addAnimation("rnd", 4, "uhodi_4_0");
	backoff_animation_data.addAnimation("rnd", 4, "uhodi_4_1");
	backoff_animation_data.addAnimation("rnd", 8, "uhodi_8_0");
	backoff_animation_data.addAnimation("rnd", 8, "uhodi_8_1");
	backoff_animation_data.addAnimation("rnd", 9, "uhodi_9_0");
	backoff_animation_data.addAnimation("rnd", 9, "uhodi_9_1");
	backoff_animation_data.addAnimation("rnd", 10, "uhodi_10_0");
	backoff_animation_data.addAnimation("rnd", 10, "uhodi_10_1");

	this->m_state_manager_animation_list["backoff"] = backoff_animation_data;

	StateManagerAnimationData punch_animation_data;
	punch_animation_data.setPropertiesMaxIdle(5);
	punch_animation_data.setPropertiesSumIdle(2);
	punch_animation_data.setPropertiesRandom(100);

	punch_animation_data.addAnimation("into", 0, "norm_facer_0_0");
	punch_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::actor_punch);
	punch_animation_data.addAnimation("into", 0, "norm_facer_0_1");
	punch_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::clearAbuse);
	punch_animation_data.addAnimation("into", 1, "norm_facer_1_0");
	punch_animation_data.addAnimationFunction("into", 1, XR_EFFECTS::actor_punch);
	punch_animation_data.addAnimation("into", 1, "norm_facer_1_1");
	punch_animation_data.addAnimationFunction("into", 1, XR_EFFECTS::clearAbuse);
	punch_animation_data.addAnimation("into", 2, "norm_facer_2_0");
	punch_animation_data.addAnimationFunction("into", 2, XR_EFFECTS::actor_punch);
	punch_animation_data.addAnimation("into", 2, "norm_facer_2_1");
	punch_animation_data.addAnimationFunction("into", 2, XR_EFFECTS::clearAbuse);
	punch_animation_data.addAnimation("into", 3, "norm_facer_3_0");
	punch_animation_data.addAnimationFunction("into", 3, XR_EFFECTS::actor_punch);
	punch_animation_data.addAnimation("into", 3, "norm_facer_3_1");
	punch_animation_data.addAnimationFunction("into", 3, XR_EFFECTS::clearAbuse);
	punch_animation_data.addAnimation("into", 4, "norm_facer_4_0");
	punch_animation_data.addAnimationFunction("into", 4, XR_EFFECTS::actor_punch);
	punch_animation_data.addAnimation("into", 4, "norm_facer_4_1");
	punch_animation_data.addAnimationFunction("into", 4, XR_EFFECTS::clearAbuse);
	punch_animation_data.addAnimation("into", 8, "norm_facer_8_0");
	punch_animation_data.addAnimationFunction("into", 8, XR_EFFECTS::actor_punch);
	punch_animation_data.addAnimation("into", 8, "norm_facer_8_1");
	punch_animation_data.addAnimationFunction("into", 8, XR_EFFECTS::clearAbuse);
	punch_animation_data.addAnimation("into", 9, "norm_facer_9_0");
	punch_animation_data.addAnimationFunction("into", 9, XR_EFFECTS::actor_punch);
	punch_animation_data.addAnimation("into", 9, "norm_facer_9_1");
	punch_animation_data.addAnimationFunction("into", 9, XR_EFFECTS::clearAbuse);
	punch_animation_data.addAnimation("into", 10, "norm_facer_10_0");
	punch_animation_data.addAnimationFunction("into", 10, XR_EFFECTS::actor_punch);
	punch_animation_data.addAnimation("into", 10, "norm_facer_10_1");
	punch_animation_data.addAnimationFunction("into", 10, XR_EFFECTS::clearAbuse);

	this->m_state_manager_animation_list["punch"] = punch_animation_data;

	StateManagerAnimationData sleeping_animation_data;
	sleeping_animation_data.setPropertiesMaxIdle(5);
	sleeping_animation_data.setPropertiesSumIdle(10);
	sleeping_animation_data.setPropertiesRandom(100);

	sleeping_animation_data.addAnimation("into", 0, "idle_0_to_sit_0");
	sleeping_animation_data.addAnimation("into", 0, "sit_to_sleep_0");
	sleeping_animation_data.addAnimation("out", 0, "sleep_to_sit_0");
	sleeping_animation_data.addAnimation("out", 0, "sit_0_to_idle_0");
	sleeping_animation_data.addAnimation("idle", 0, "sleep_idle_0");
	sleeping_animation_data.addAnimation("rnd", 0, "sleep_idle_1");

	this->m_state_manager_animation_list["sleeping"] = sleeping_animation_data;

	StateManagerAnimationData wounded_animation_data;
	wounded_animation_data.setPropertiesMaxIdle(5);
	wounded_animation_data.setPropertiesSumIdle(10);
	wounded_animation_data.setPropertiesRandom(70);

	wounded_animation_data.addAnimation("into", 0, "idle_to_wounded_0");
	wounded_animation_data.addAnimation("out", 0, "wounded_to_idle_0");
	wounded_animation_data.addAnimation("idle", 0, "wounded_idle_0");

	this->m_state_manager_animation_list["wounded"] = wounded_animation_data;

	StateManagerAnimationData wounded_heavy_1_animation_data;
	wounded_heavy_1_animation_data.setPropertiesMaxIdle(5);
	wounded_heavy_1_animation_data.setPropertiesSumIdle(10);
	wounded_heavy_1_animation_data.setPropertiesRandom(70);

	wounded_heavy_1_animation_data.addAnimation("into", 0, "idle_to_wounded_1");
	wounded_heavy_1_animation_data.addAnimation("out", 0, "waunded_1_out");
	wounded_heavy_1_animation_data.addAnimation("idle", 0, "waunded_1_idle_0");

	this->m_state_manager_animation_list["wounded_heavy_1"] = wounded_heavy_1_animation_data;

	StateManagerAnimationData wounded_heavy_2_animation_data;
	wounded_heavy_2_animation_data.setPropertiesMaxIdle(5);
	wounded_heavy_2_animation_data.setPropertiesSumIdle(10);
	wounded_heavy_2_animation_data.setPropertiesRandom(70);

	wounded_heavy_2_animation_data.addAnimation("into", 0, "idle_to_wounded_2");
	wounded_heavy_2_animation_data.addAnimation("out", 0, "wounded_2_out");
	wounded_heavy_2_animation_data.addAnimation("idle", 0, "wounded_2_idle_0");

	this->m_state_manager_animation_list["wounded_heavy_2"] = wounded_heavy_2_animation_data;

	StateManagerAnimationData wounded_heavy_3_animation_data;
	wounded_heavy_3_animation_data.setPropertiesMaxIdle(5);
	wounded_heavy_3_animation_data.setPropertiesSumIdle(10);
	wounded_heavy_3_animation_data.setPropertiesRandom(70);

	wounded_heavy_3_animation_data.addAnimation("idle", 0, "idle_to_wounded_3");
	wounded_heavy_3_animation_data.addAnimation("out", 0, "wounded_3_out");
	wounded_heavy_3_animation_data.addAnimation("idle", 0, "wounded_3_idle_0");

	this->m_state_manager_animation_list["wounded_heavy_3"] = wounded_heavy_3_animation_data;

	StateManagerAnimationData wounded_zombie_animation_data;
	wounded_zombie_animation_data.setPropertiesMaxIdle(5);
	wounded_zombie_animation_data.setPropertiesSumIdle(10);
	wounded_zombie_animation_data.setPropertiesRandom(70);

	wounded_zombie_animation_data.addAnimation("into", 0, "idle_to_wounded_0");
	wounded_zombie_animation_data.addAnimation("out", 0, "wounded_to_idle_0");
	wounded_zombie_animation_data.addAnimation("idle", 0, "wounded_idle_0");
	wounded_zombie_animation_data.addAnimation("rnd", 0, "wounded_idle_1");

	this->m_state_manager_animation_list["wounded_zombie"] = wounded_zombie_animation_data;

	StateManagerAnimationData choosing_animation_data;
	choosing_animation_data.setPropertiesMaxIdle(8);
	choosing_animation_data.setPropertiesSumIdle(10);
	choosing_animation_data.setPropertiesRandom(80);

	choosing_animation_data.addAnimation("rnd", 0, "komandir_0");
	choosing_animation_data.addAnimation("rnd", 0, "komandir_1");
	choosing_animation_data.addAnimation("rnd", 0, "komandir_2");

	this->m_state_manager_animation_list["choosing"] = choosing_animation_data;

	StateManagerAnimationData press_animation_data;
	press_animation_data.setPropertiesMaxIdle(8);
	press_animation_data.setPropertiesSumIdle(10);
	press_animation_data.setPropertiesRandom(80);

	press_animation_data.addAnimation("into", 0, "knopka_0");
	press_animation_data.addAnimation("out", 0, "knopka_1");
	press_animation_data.addAnimation("idle", 0, "knopka_2");

	this->m_state_manager_animation_list["press"] = press_animation_data;

	StateManagerAnimationData warding_animation_data;
	warding_animation_data.setPropertiesMaxIdle(10);
	warding_animation_data.setPropertiesSumIdle(10);
	warding_animation_data.setPropertiesRandom(0);

	warding_animation_data.addAnimation("idle", 0, "ohrana_0");
	warding_animation_data.addAnimation("out", 0, "ohrana_2");
	warding_animation_data.addAnimation("idle", 0, "ohrana_1");

	this->m_state_manager_animation_list["warding"] = warding_animation_data;

	StateManagerAnimationData warding_short_animation_data;
	warding_short_animation_data.setPropertiesMaxIdle(10);
	warding_short_animation_data.setPropertiesSumIdle(10);
	warding_short_animation_data.setPropertiesRandom(0);

	warding_short_animation_data.addAnimation("into", 0, "ohrana_0");
	warding_short_animation_data.addAnimation("out", 0, "ohrana_2");
	warding_short_animation_data.addAnimation("idle", 0, "ohrana_1_short");

	this->m_state_manager_animation_list["warding_short"] = warding_short_animation_data;

	StateManagerAnimationData fold_arms_animation_data;
	fold_arms_animation_data.setPropertiesMaxIdle(10);
	fold_arms_animation_data.setPropertiesSumIdle(10);
	fold_arms_animation_data.setPropertiesRandom(0);

	fold_arms_animation_data.addAnimation("idle", 0, "cut_scene_idle_0");

	this->m_state_manager_animation_list["fold_arms"] = fold_arms_animation_data;

	StateManagerAnimationData talk_default_animation_data;
	talk_default_animation_data.setPropertiesMaxIdle(5);
	talk_default_animation_data.setPropertiesSumIdle(5);
	talk_default_animation_data.setPropertiesRandom(70);

	talk_default_animation_data.addAnimation("into", 2, "norm_talk_2_in_0");
	talk_default_animation_data.addAnimation("out", 2, "norm_talk_2_out_0");
	talk_default_animation_data.addAnimation("idle", 0, "idle_0_idle_1");
	talk_default_animation_data.addAnimation("idle", 2, "norm_talk_2_idle_1");
	talk_default_animation_data.addAnimation("rnd", 0, "idle_0_idle_0");
	talk_default_animation_data.addAnimation("rnd", 2, "norm_talk_2_idle_0");
	talk_default_animation_data.addAnimation("rnd", 2, "norm_talk_2_idle_2");
	talk_default_animation_data.addAnimation("rnd", 2, "norm_talk_2_idle_3");
	talk_default_animation_data.addAnimation("rnd", 2, "norm_talk_2_idle_4");

	this->m_state_manager_animation_list["talk_default"] = talk_default_animation_data;

	StateManagerAnimationData binocular_animation_data;
	binocular_animation_data.setPropertiesMaxIdle(1);
	binocular_animation_data.setPropertiesSumIdle(1);
	binocular_animation_data.setPropertiesRandom(100);

	binocular_animation_data.addAnimation("into", 0, "binoculars_draw_0");
	binocular_animation_data.addAnimationAttachItemName("into", 0, "wpn_binoc");
	binocular_animation_data.addAnimation("into", 0, "binoculars_draw_1");
	binocular_animation_data.addAnimation("into", 0, "binoculars_zoom_in_0");

	binocular_animation_data.addAnimation("out", 0, "binoculars_zoom_out_0");
	binocular_animation_data.addAnimation("out", 0, "binoculars_hide_0");
	binocular_animation_data.addAnimationAttachItemName("out", 0, "wpn_binoc");
	binocular_animation_data.addAnimation("out", 0, "binoculars_hide_1");

	binocular_animation_data.addAnimation("idle", 0, "binoculars_zoom_idle_0");

	binocular_animation_data.addAnimation("rnd", 0, "binoculars_zoom_idle_1");
	binocular_animation_data.addAnimation("rnd", 0, "binoculars_zoom_idle_2");
	binocular_animation_data.addAnimation("rnd", 0, "binoculars_zoom_idle_3");
	binocular_animation_data.addAnimation("rnd", 0, "binoculars_zoom_idle_4");

	this->m_state_manager_animation_list["binocular"] = binocular_animation_data;

	StateManagerAnimationData salut_animation_data;
	salut_animation_data.setPropertiesMaxIdle(1);
	salut_animation_data.setPropertiesSumIdle(1);
	salut_animation_data.setPropertiesRandom(100);

	salut_animation_data.addAnimation("into", 0, "chest_0_idle_0");
	salut_animation_data.addAnimation("into", 0, "chest_0_idle_2");

	salut_animation_data.addAnimation("out", 0, "chest_0_idle_3");

	salut_animation_data.addAnimation("idle", 0, "chest_0_idle_1");

	this->m_state_manager_animation_list["salut"] = salut_animation_data;

	StateManagerAnimationData salut_free_animation_data;
	salut_free_animation_data.setPropertiesMaxIdle(1);
	salut_free_animation_data.setPropertiesSumIdle(1);
	salut_free_animation_data.setPropertiesRandom(100);

	salut_free_animation_data.addAnimation("into", 0, "chest_1_idle_0");

	this->m_state_manager_animation_list["salut_free"] = salut_free_animation_data;

	StateManagerAnimationData hands_up_animation_data;
	hands_up_animation_data.setPropertiesMaxIdle(1);
	hands_up_animation_data.setPropertiesSumIdle(1);
	hands_up_animation_data.setPropertiesRandom(100);

	hands_up_animation_data.addAnimation("idle", 0, "hand_up_0");

	this->m_state_manager_animation_list["hands_up"] = hands_up_animation_data;

	StateManagerAnimationData trans_0_animation_data;
	trans_0_animation_data.setPropertiesMaxIdle(1);
	trans_0_animation_data.setPropertiesSumIdle(1);
	trans_0_animation_data.setPropertiesRandom(100);

	trans_0_animation_data.addAnimation("into", 0, "idle_0_to_trans_0");
	trans_0_animation_data.addAnimation("out", 0, "trans_0_to_idle_0");
	trans_0_animation_data.addAnimation("idle", 0, "trans_0_idle_0");

	this->m_state_manager_animation_list["trans_0"] = trans_0_animation_data;

	StateManagerAnimationData trans_1_animation_data;
	trans_1_animation_data.setPropertiesMaxIdle(1);
	trans_1_animation_data.setPropertiesSumIdle(1);
	trans_1_animation_data.setPropertiesRandom(100);

	trans_1_animation_data.addAnimation("into", 0, "idle_0_to_trans_1");
	trans_1_animation_data.addAnimation("out", 0, "trans_1_to_idle_0");
	trans_1_animation_data.addAnimation("idle", 0, "trans_1_idle_0");

	this->m_state_manager_animation_list["trans_1"] = trans_1_animation_data;

	StateManagerAnimationData trans_zombied_animation_data;
	trans_zombied_animation_data.setPropertiesMaxIdle(1);
	trans_zombied_animation_data.setPropertiesSumIdle(1);
	trans_zombied_animation_data.setPropertiesRandom(100);

	trans_zombied_animation_data.addAnimation("into", 0, "trans_0_idle_1");
	trans_zombied_animation_data.addAnimation("out", 0, "trans_0_idle_0");
	trans_zombied_animation_data.addAnimation("out", 0, "trans_0_idle_2");
	trans_zombied_animation_data.addAnimation("out", 0, "trans_0_idle_3");
	trans_zombied_animation_data.addAnimation("out", 0, "trans_0_idle_4");
	trans_zombied_animation_data.addAnimation("out", 0, "trans_0_idle_5");
	trans_zombied_animation_data.addAnimation("out", 0, "trans_0_idle_6");

	this->m_state_manager_animation_list["trans_zombied"] = trans_zombied_animation_data;

	StateManagerAnimationData probe_stand_animation_data;
	probe_stand_animation_data.setPropertiesMaxIdle(0);
	probe_stand_animation_data.setPropertiesSumIdle(0);
	probe_stand_animation_data.setPropertiesRandom(100);

	probe_stand_animation_data.addAnimation("into", 0, "metering_anomalys_0_draw_0");
	probe_stand_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::get_best_detector);
	probe_stand_animation_data.addAnimation("into", 0, "metering_anomalys_0_draw_1");

	probe_stand_animation_data.addAnimation("out", 0, "metering_anomalys_0_hide_0");
	probe_stand_animation_data.addAnimationFunction("out", 0, XR_EFFECTS::hide_best_detector);
	probe_stand_animation_data.addAnimation("out", 0, "metering_anomalys_0_hide_1");

	probe_stand_animation_data.addAnimation("idle", 0, "metering_anomalys_0_idle_0");

	probe_stand_animation_data.addAnimation("rnd", 0, "metering_anomalys_0_idle_1");
	probe_stand_animation_data.addAnimation("rnd", 0, "metering_anomalys_0_idle_2");
	probe_stand_animation_data.addAnimation("rnd", 0, "metering_anomalys_0_idle_3");
	probe_stand_animation_data.addAnimation("rnd", 0, "metering_anomalys_0_idle_4");
	probe_stand_animation_data.addAnimation("rnd", 0, "metering_anomalys_0_idle_5");

	this->m_state_manager_animation_list["probe_stand"] = probe_stand_animation_data;

	StateManagerAnimationData probe_way_animation_data;
	probe_way_animation_data.setPropertiesMaxIdle(0);
	probe_way_animation_data.setPropertiesSumIdle(0);
	probe_way_animation_data.setPropertiesRandom(100);

	probe_way_animation_data.addAnimation("into", 0, "metering_anomalys_0_draw_0");
	probe_way_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::get_best_detector);
	probe_way_animation_data.addAnimation("into", 0, "metering_anomalys_0_draw_1");
	probe_way_animation_data.addAnimation("into", 0, "metering_anomalys_0_idle_6");

	probe_way_animation_data.addAnimation("out", 0, "metering_anomalys_0_hide_0");
	probe_way_animation_data.addAnimationFunction("out", 0, XR_EFFECTS::hide_best_detector);
	probe_way_animation_data.addAnimation("out", 0, "metering_anomalys_0_hide_1");

	probe_way_animation_data.addAnimation("idle", 0, "metering_anomalys_0_idle_0");

	this->m_state_manager_animation_list["probe_way"] = probe_way_animation_data;

	StateManagerAnimationData probe_crouch_animation_data;
	probe_crouch_animation_data.setPropertiesMaxIdle(0);
	probe_crouch_animation_data.setPropertiesSumIdle(0);
	probe_crouch_animation_data.setPropertiesRandom(100);

	probe_crouch_animation_data.addAnimation("into", 0, "metering_anomalys_1_draw_0");
	probe_crouch_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::get_best_detector);
	probe_crouch_animation_data.addAnimation("into", 0, "metering_anomalys_1_draw_1");

	probe_crouch_animation_data.addAnimation("out", 0, "metering_anomalys_1_hide_0");
	probe_crouch_animation_data.addAnimationFunction("out", 0, XR_EFFECTS::hide_best_detector);
	probe_crouch_animation_data.addAnimation("out", 0, "metering_anomalys_1_hide_1");

	probe_crouch_animation_data.addAnimation("idle", 0, "metering_anomalys_1_idle_0");

	probe_crouch_animation_data.addAnimation("rnd", 0, "metering_anomalys_1_idle_1");
	probe_crouch_animation_data.addAnimation("rnd", 0, "metering_anomalys_1_idle_2");
	probe_crouch_animation_data.addAnimation("rnd", 0, "metering_anomalys_1_idle_3");
	probe_crouch_animation_data.addAnimation("rnd", 0, "metering_anomalys_1_idle_4");

	this->m_state_manager_animation_list["probe_crouch"] = probe_crouch_animation_data;

	StateManagerAnimationData scaner_stand_animation_data;
	scaner_stand_animation_data.setPropertiesMaxIdle(0);
	scaner_stand_animation_data.setPropertiesSumIdle(0);
	scaner_stand_animation_data.setPropertiesRandom(100);

	scaner_stand_animation_data.addAnimation("into", 0, "metering_anomalys_0_draw_0");
	scaner_stand_animation_data.addAnimationAttachItemName("into", 0, "anomaly_scaner");
	scaner_stand_animation_data.addAnimation("into", 0, "metering_anomalys_0_draw_1");

	scaner_stand_animation_data.addAnimation("out", 0, "metering_anomalys_0_hide_0");
	scaner_stand_animation_data.addAnimationDettachItemName("out", 0, "anomaly_scaner");
	scaner_stand_animation_data.addAnimation("out", 0, "metering_anomalys_0_hide_1");

	scaner_stand_animation_data.addAnimation("idle", 0, "metering_anomalys_0_idle_0");

	scaner_stand_animation_data.addAnimation("rnd", 0, "metering_anomalys_0_idle_1");
	scaner_stand_animation_data.addAnimation("rnd", 0, "metering_anomalys_0_idle_2");
	scaner_stand_animation_data.addAnimation("rnd", 0, "metering_anomalys_0_idle_3");
	scaner_stand_animation_data.addAnimation("rnd", 0, "metering_anomalys_0_idle_4");
	scaner_stand_animation_data.addAnimation("rnd", 0, "metering_anomalys_0_idle_5");

	this->m_state_manager_animation_list["scaner_stand"] = scaner_stand_animation_data;

	StateManagerAnimationData scaner_way_animation_data;
	scaner_way_animation_data.setPropertiesMaxIdle(0);
	scaner_way_animation_data.setPropertiesSumIdle(0);
	scaner_way_animation_data.setPropertiesRandom(100);

	scaner_way_animation_data.addAnimation("into", 0, "metering_anomalys_0_draw_0");
	scaner_way_animation_data.addAnimationAttachItemName("into", 0, "anomaly_scaner");
	scaner_way_animation_data.addAnimation("into", 0, "metering_anomalys_0_draw_1");
	scaner_way_animation_data.addAnimation("into", 0, "metering_anomalys_0_idle_6");

	scaner_way_animation_data.addAnimation("out", 0, "metering_anomalys_0_hide_0");
	scaner_way_animation_data.addAnimationDettachItemName("out", 0, "anomaly_scaner");
	scaner_way_animation_data.addAnimation("out", 0, "metering_anomalys_0_hide_1");

	scaner_way_animation_data.addAnimation("idle", 0, "metering_anomalys_0_idle_0");

	this->m_state_manager_animation_list["scaner_way"] = scaner_way_animation_data;

	StateManagerAnimationData scaner_crouch_animation_data;
	scaner_crouch_animation_data.setPropertiesMaxIdle(0);
	scaner_crouch_animation_data.setPropertiesSumIdle(0);
	scaner_crouch_animation_data.setPropertiesRandom(100);

	scaner_crouch_animation_data.addAnimation("into", 0, "metering_anomalys_1_draw_0");
	scaner_crouch_animation_data.addAnimationAttachItemName("into", 0, "anomaly_scaner");
	scaner_crouch_animation_data.addAnimation("into", 0, "metering_anomalys_1_draw_1");

	scaner_crouch_animation_data.addAnimation("out", 0, "metering_anomalys_1_hide_0");
	scaner_crouch_animation_data.addAnimationDettachItemName("out", 0, "anomaly_scaner");
	scaner_crouch_animation_data.addAnimation("out", 0, "metering_anomalys_1_hide_1");

	scaner_crouch_animation_data.addAnimation("idle", 0, "metering_anomalys_1_idle_0");

	scaner_crouch_animation_data.addAnimation("rnd", 0, "metering_anomalys_1_idle_1");
	scaner_crouch_animation_data.addAnimation("rnd", 0, "metering_anomalys_1_idle_2");
	scaner_crouch_animation_data.addAnimation("rnd", 0, "metering_anomalys_1_idle_3");
	scaner_crouch_animation_data.addAnimation("rnd", 0, "metering_anomalys_1_idle_4");

	this->m_state_manager_animation_list["scaner_crouch"] = scaner_crouch_animation_data;

	StateManagerAnimationData prisoner_animation_data;
	prisoner_animation_data.setPropertiesMaxIdle(1);
	prisoner_animation_data.setPropertiesSumIdle(1);
	prisoner_animation_data.setPropertiesRandom(100);

	prisoner_animation_data.addAnimation("into", 0, "prisoner_0_sit_down_0");
	prisoner_animation_data.addAnimation("out", 0, "prisoner_0_stand_up_0");
	prisoner_animation_data.addAnimation("idle", 0, "prisoner_0_sit_idle_0");

	this->m_state_manager_animation_list["prisoner"] = prisoner_animation_data;

	StateManagerAnimationData raciya_animation_data;
	raciya_animation_data.setPropertiesMaxIdle(1);
	raciya_animation_data.setPropertiesSumIdle(1);
	raciya_animation_data.setPropertiesRandom(100);

	raciya_animation_data.addAnimation("into", 0, "raciya_0_draw_0");
	raciya_animation_data.addAnimationAttachItemName("into", 0, "hand_radio");
	raciya_animation_data.addAnimation("into", 0, "raciya_0_draw_1");
	raciya_animation_data.addAnimation("into", 1, "raciya_1_draw_0");
	raciya_animation_data.addAnimationAttachItemName("into", 1, "hand_radio");
	raciya_animation_data.addAnimation("into", 1, "raciya_1_draw_1");
	raciya_animation_data.addAnimation("into", 2, "raciya_2_draw_0");
	raciya_animation_data.addAnimationAttachItemName("into", 2, "hand_radio");
	raciya_animation_data.addAnimation("into", 2, "raciya_2_draw_1");
	raciya_animation_data.addAnimation("into", 3, "raciya_3_draw_0");
	raciya_animation_data.addAnimationAttachItemName("into", 3, "hand_radio");
	raciya_animation_data.addAnimation("into", 3, "raciya_3_draw_1");
	raciya_animation_data.addAnimation("into", 4, "raciya_4_draw_0");
	raciya_animation_data.addAnimationAttachItemName("into", 4, "hand_radio");
	raciya_animation_data.addAnimation("into", 4, "raciya_4_draw_1");
	raciya_animation_data.addAnimation("into", 8, "raciya_8_draw_0");
	raciya_animation_data.addAnimationAttachItemName("into", 8, "hand_radio");
	raciya_animation_data.addAnimation("into", 8, "raciya_8_draw_1");
	raciya_animation_data.addAnimation("into", 9, "raciya_9_draw_0");
	raciya_animation_data.addAnimationAttachItemName("into", 9, "hand_radio");
	raciya_animation_data.addAnimation("into", 9, "raciya_9_draw_1");
	raciya_animation_data.addAnimation("into", 10, "raciya_10_draw_0");
	raciya_animation_data.addAnimationAttachItemName("into", 10, "hand_radio");
	raciya_animation_data.addAnimation("into", 10, "raciya_10_draw_1");

	raciya_animation_data.addAnimation("out", 0, "raciya_0_hide_0");
	raciya_animation_data.addAnimationDettachItemName("out", 0, "hand_radio");
	raciya_animation_data.addAnimation("out", 0, "raciya_0_hide_1");
	raciya_animation_data.addAnimation("out", 1, "raciya_1_hide_0");
	raciya_animation_data.addAnimationDettachItemName("out", 1, "hand_radio");
	raciya_animation_data.addAnimation("out", 1, "raciya_1_hide_1");
	raciya_animation_data.addAnimation("out", 2, "raciya_2_hide_0");
	raciya_animation_data.addAnimationDettachItemName("out", 2, "hand_radio");
	raciya_animation_data.addAnimation("out", 2, "raciya_2_hide_1");
	raciya_animation_data.addAnimation("out", 3, "raciya_3_hide_0");
	raciya_animation_data.addAnimationDettachItemName("out", 3, "hand_radio");
	raciya_animation_data.addAnimation("out", 3, "raciya_3_hide_1");
	raciya_animation_data.addAnimation("out", 4, "raciya_4_hide_0");
	raciya_animation_data.addAnimationDettachItemName("out", 4, "hand_radio");
	raciya_animation_data.addAnimation("out", 4, "raciya_4_hide_1");
	raciya_animation_data.addAnimation("out", 8, "raciya_8_hide_0");
	raciya_animation_data.addAnimationDettachItemName("out", 8, "hand_radio");
	raciya_animation_data.addAnimation("out", 8, "raciya_8_hide_1");
	raciya_animation_data.addAnimation("out", 9, "raciya_9_hide_0");
	raciya_animation_data.addAnimationDettachItemName("out", 9, "hand_radio");
	raciya_animation_data.addAnimation("out", 9, "raciya_9_hide_1");
	raciya_animation_data.addAnimation("out", 10, "raciya_10_hide_0");
	raciya_animation_data.addAnimationDettachItemName("out", 10, "hand_radio");
	raciya_animation_data.addAnimation("out", 10, "raciya_10_hide_1");

	raciya_animation_data.addAnimation("idle", 0, "raciya_0_idle_0");
	raciya_animation_data.addAnimation("idle", 1, "raciya_1_idle_0");
	raciya_animation_data.addAnimation("idle", 2, "raciya_2_idle_0");
	raciya_animation_data.addAnimation("idle", 3, "raciya_3_idle_0");
	raciya_animation_data.addAnimation("idle", 4, "raciya_4_idle_0");
	raciya_animation_data.addAnimation("idle", 8, "raciya_8_idle_0");
	raciya_animation_data.addAnimation("idle", 9, "raciya_9_idle_0");
	raciya_animation_data.addAnimation("idle", 10, "raciya_10_idle_0");

	raciya_animation_data.addAnimation("rnd", 0, "raciya_0_talk_0");
	raciya_animation_data.addAnimation("rnd", 1, "raciya_1_talk_0");
	raciya_animation_data.addAnimation("rnd", 2, "raciya_2_talk_0");
	raciya_animation_data.addAnimation("rnd", 3, "raciya_3_talk_0");
	raciya_animation_data.addAnimation("rnd", 4, "raciya_4_talk_0");
	raciya_animation_data.addAnimation("rnd", 8, "raciya_8_talk_0");
	raciya_animation_data.addAnimation("rnd", 9, "raciya_9_talk_0");
	raciya_animation_data.addAnimation("rnd", 10, "raciya_10_talk_0");

	this->m_state_manager_animation_list["raciya"] = raciya_animation_data;

	StateManagerAnimationData cr_raciya_animation_data;
	cr_raciya_animation_data.setPropertiesMaxIdle(1);
	cr_raciya_animation_data.setPropertiesSumIdle(1);
	cr_raciya_animation_data.setPropertiesRandom(100);

	cr_raciya_animation_data.addAnimation("into", 0, "cr_raciya_0_draw_0");
	cr_raciya_animation_data.addAnimationAttachItemName("into", 0, "hand_radio");
	cr_raciya_animation_data.addAnimation("into", 0, "cr_raciya_0_draw_1");
	cr_raciya_animation_data.addAnimation("into", 1, "cr_raciya_1_draw_0");
	cr_raciya_animation_data.addAnimationAttachItemName("into", 1, "hand_radio");
	cr_raciya_animation_data.addAnimation("into", 1, "cr_raciya_1_draw_1");
	cr_raciya_animation_data.addAnimation("into", 2, "cr_raciya_2_draw_0");
	cr_raciya_animation_data.addAnimationAttachItemName("into", 2, "hand_radio");
	cr_raciya_animation_data.addAnimation("into", 2, "cr_raciya_2_draw_1");
	cr_raciya_animation_data.addAnimation("into", 3, "cr_raciya_3_draw_0");
	cr_raciya_animation_data.addAnimationAttachItemName("into", 3, "hand_radio");
	cr_raciya_animation_data.addAnimation("into", 3, "cr_raciya_3_draw_1");
	cr_raciya_animation_data.addAnimation("into", 4, "cr_raciya_4_draw_0");
	cr_raciya_animation_data.addAnimationAttachItemName("into", 4, "hand_radio");
	cr_raciya_animation_data.addAnimation("into", 4, "cr_raciya_4_draw_1");
	cr_raciya_animation_data.addAnimation("into", 8, "cr_raciya_8_draw_0");
	cr_raciya_animation_data.addAnimationAttachItemName("into", 8, "hand_radio");
	cr_raciya_animation_data.addAnimation("into", 8, "cr_raciya_8_draw_1");
	cr_raciya_animation_data.addAnimation("into", 9, "cr_raciya_9_draw_0");
	cr_raciya_animation_data.addAnimationAttachItemName("into", 9, "hand_radio");
	cr_raciya_animation_data.addAnimation("into", 9, "cr_raciya_9_draw_1");
	cr_raciya_animation_data.addAnimation("into", 10, "cr_raciya_10_draw_0");
	cr_raciya_animation_data.addAnimationAttachItemName("into", 10, "hand_radio");
	cr_raciya_animation_data.addAnimation("into", 10, "cr_raciya_10_draw_1");

	cr_raciya_animation_data.addAnimation("out", 0, "cr_raciya_0_hide_0");
	cr_raciya_animation_data.addAnimationDettachItemName("out", 0, "hand_radio");
	cr_raciya_animation_data.addAnimation("out", 0, "cr_raciya_0_hide_1");
	cr_raciya_animation_data.addAnimation("out", 1, "cr_raciya_1_hide_0");
	cr_raciya_animation_data.addAnimationDettachItemName("out", 1, "hand_radio");
	cr_raciya_animation_data.addAnimation("out", 1, "cr_raciya_1_hide_1");
	cr_raciya_animation_data.addAnimation("out", 2, "cr_raciya_2_hide_0");
	cr_raciya_animation_data.addAnimationDettachItemName("out", 2, "hand_radio");
	cr_raciya_animation_data.addAnimation("out", 2, "cr_raciya_2_hide_1");
	cr_raciya_animation_data.addAnimation("out", 3, "cr_raciya_3_hide_0");
	cr_raciya_animation_data.addAnimationDettachItemName("out", 3, "hand_radio");
	cr_raciya_animation_data.addAnimation("out", 3, "cr_raciya_3_hide_1");
	cr_raciya_animation_data.addAnimation("out", 4, "cr_raciya_4_hide_0");
	cr_raciya_animation_data.addAnimationDettachItemName("out", 4, "hand_radio");
	cr_raciya_animation_data.addAnimation("out", 4, "cr_raciya_4_hide_1");
	cr_raciya_animation_data.addAnimation("out", 8, "cr_raciya_8_hide_0");
	cr_raciya_animation_data.addAnimationDettachItemName("out", 8, "hand_radio");
	cr_raciya_animation_data.addAnimation("out", 8, "cr_raciya_8_hide_1");
	cr_raciya_animation_data.addAnimation("out", 9, "cr_raciya_9_hide_0");
	cr_raciya_animation_data.addAnimationDettachItemName("out", 9, "hand_radio");
	cr_raciya_animation_data.addAnimation("out", 9, "cr_raciya_9_hide_1");
	cr_raciya_animation_data.addAnimation("out", 10, "cr_raciya_10_hide_0");
	cr_raciya_animation_data.addAnimationDettachItemName("out", 10, "hand_radio");
	cr_raciya_animation_data.addAnimation("out", 10, "cr_raciya_10_hide_1");

	cr_raciya_animation_data.addAnimation("idle", 0, "cr_raciya_0_idle_0");
	cr_raciya_animation_data.addAnimation("idle", 1, "cr_raciya_1_idle_0");
	cr_raciya_animation_data.addAnimation("idle", 2, "cr_raciya_2_idle_0");
	cr_raciya_animation_data.addAnimation("idle", 3, "cr_raciya_3_idle_0");
	cr_raciya_animation_data.addAnimation("idle", 4, "cr_raciya_4_idle_0");
	cr_raciya_animation_data.addAnimation("idle", 8, "cr_raciya_8_idle_0");
	cr_raciya_animation_data.addAnimation("idle", 9, "cr_raciya_9_idle_0");
	cr_raciya_animation_data.addAnimation("idle", 10, "cr_raciya_10_idle_0");

	cr_raciya_animation_data.addAnimation("rnd", 0, "cr_raciya_0_talk_0");
	cr_raciya_animation_data.addAnimation("rnd", 1, "cr_raciya_1_talk_0");
	cr_raciya_animation_data.addAnimation("rnd", 2, "cr_raciya_2_talk_0");
	cr_raciya_animation_data.addAnimation("rnd", 3, "cr_raciya_3_talk_0");
	cr_raciya_animation_data.addAnimation("rnd", 4, "cr_raciya_4_talk_0");
	cr_raciya_animation_data.addAnimation("rnd", 8, "cr_raciya_8_talk_0");
	cr_raciya_animation_data.addAnimation("rnd", 9, "cr_raciya_9_talk_0");
	cr_raciya_animation_data.addAnimation("rnd", 10, "cr_raciya_10_talk_0");

	this->m_state_manager_animation_list["cr_raciya"] = cr_raciya_animation_data;

	StateManagerAnimationData psy_armed_animation_data;
	psy_armed_animation_data.setPropertiesMaxIdle(1);
	psy_armed_animation_data.setPropertiesSumIdle(1);
	psy_armed_animation_data.setPropertiesRandom(100);

	psy_armed_animation_data.addAnimation("into", 0, "idle_0_to_psy_0_idle_0");
	psy_armed_animation_data.addAnimation("into", 1, "idle_0_to_psy_1_idle_0");
	psy_armed_animation_data.addAnimation("out", 0, "psy_0_idle_0_to_idle_0");
	psy_armed_animation_data.addAnimation("out", 1, "psy_1_idle_0_to_idle_0");
	psy_armed_animation_data.addAnimation("idle", 0, "psy_0_idle_0");
	psy_armed_animation_data.addAnimation("idle", 1, "psy_1_idle_0");
	psy_armed_animation_data.addAnimation("rnd", 0, "psy_0_idle_1");
	psy_armed_animation_data.addAnimation("rnd", 0, "psy_0_idle_2");
	psy_armed_animation_data.addAnimation("rnd", 0, "psy_0_idle_3");
	psy_armed_animation_data.addAnimation("rnd", 1, "psy_1_idle_1");
	psy_armed_animation_data.addAnimation("rnd", 1, "psy_1_idle_2");
	psy_armed_animation_data.addAnimation("rnd", 1, "psy_1_idle_3");

	this->m_state_manager_animation_list["psy_armed"] = psy_armed_animation_data;

	StateManagerAnimationData psy_shoot_animation_data;
	psy_shoot_animation_data.setPropertiesMaxIdle(1);
	psy_shoot_animation_data.setPropertiesSumIdle(1);
	psy_shoot_animation_data.setPropertiesRandom(100);

	psy_shoot_animation_data.addAnimation("into", 1, "psy_1_shot_0");
	psy_shoot_animation_data.addAnimationHitPower("into", 1, 1000.0f);

	psy_shoot_animation_data.addAnimation("idle", 1, "psy_1_death_0");

	this->m_state_manager_animation_list["psy_shoot"] = psy_shoot_animation_data;

	StateManagerAnimationData lay_on_bed_animation_data;
	lay_on_bed_animation_data.setPropertiesMaxIdle(1);
	lay_on_bed_animation_data.setPropertiesSumIdle(1);
	lay_on_bed_animation_data.setPropertiesRandom(100);
	lay_on_bed_animation_data.setPropertiesMoving(true);

	lay_on_bed_animation_data.addAnimation("into", 0, "cut_scene_0_actor");

	this->m_state_manager_animation_list["lay_on_bed"] = lay_on_bed_animation_data;

	StateManagerAnimationData search_corpse_animation_data;
	search_corpse_animation_data.setPropertiesMaxIdle(1);
	search_corpse_animation_data.setPropertiesSumIdle(1);
	search_corpse_animation_data.setPropertiesRandom(100);

	search_corpse_animation_data.addAnimation("into", 0, "dinamit_1");
	//      search_corpse_animation_data.addAnimationFunction("into", 0, xr_corpse_detection.get_all_from_corpse);
	//      Lord: реализовать!

	this->m_state_manager_animation_list["search_corpse"] = search_corpse_animation_data;

	StateManagerAnimationData help_wounded_animation_data;
	help_wounded_animation_data.setPropertiesMaxIdle(1);
	help_wounded_animation_data.setPropertiesSumIdle(1);
	help_wounded_animation_data.setPropertiesRandom(100);

	help_wounded_animation_data.addAnimation("into", 0, "dinamit_1");
	//    help_wounded_animation_data.addAnimationFunction("into", 0, xr_help_wounded.help_wounded); Lord:
	//    реализовать!

	this->m_state_manager_animation_list["help_wounded"] = help_wounded_animation_data;

	StateManagerAnimationData dynamite_animation_data;
	dynamite_animation_data.setPropertiesMaxIdle(1);
	dynamite_animation_data.setPropertiesSumIdle(1);
	dynamite_animation_data.setPropertiesRandom(100);

	dynamite_animation_data.addAnimation("into", 0, "dinamit_1");

	this->m_state_manager_animation_list["dynamite"] = dynamite_animation_data;

	StateManagerAnimationData bloodsucker_panic_animation_data;
	bloodsucker_panic_animation_data.setPropertiesMaxIdle(1);
	bloodsucker_panic_animation_data.setPropertiesSumIdle(1);
	bloodsucker_panic_animation_data.setPropertiesRandom(100);

	bloodsucker_panic_animation_data.addAnimation("idle", 0, "norm_alert_attack_0");

	this->m_state_manager_animation_list["bloodsucker_panic"] = bloodsucker_panic_animation_data;

	StateManagerAnimationData bloodsucker_search_animation_data;
	bloodsucker_search_animation_data.setPropertiesMaxIdle(0);
	bloodsucker_search_animation_data.setPropertiesSumIdle(0);
	bloodsucker_search_animation_data.setPropertiesRandom(100);

	bloodsucker_search_animation_data.addAnimation("into", 0, "norm_alert_in_0");

	bloodsucker_search_animation_data.addAnimation("idle", 0, "norm_alert_idle_0");

	bloodsucker_search_animation_data.addAnimation("out", 0, "norm_alert_out_0");

	bloodsucker_search_animation_data.addAnimation("rnd", 0, "norm_alert_idle_0");
	bloodsucker_search_animation_data.addAnimation("rnd", 0, "norm_alert_idle_1");
	bloodsucker_search_animation_data.addAnimation("rnd", 0, "norm_alert_idle_3");

	this->m_state_manager_animation_list["bloodsucker_search"] = bloodsucker_search_animation_data;

	StateManagerAnimationData give_orders_animation_data;
	give_orders_animation_data.setPropertiesMaxIdle(1);
	give_orders_animation_data.setPropertiesSumIdle(1);
	give_orders_animation_data.setPropertiesRandom(100);

	give_orders_animation_data.addAnimation("into", 0, "norm_alert_idle_0");
	give_orders_animation_data.addAnimation("into", 0, "norm_alert_command_0");

	this->m_state_manager_animation_list["give_orders"] = give_orders_animation_data;
}

void Cordis::Scripts::Script_GlobalHelper::initialize_StateLib_Animpoints(void)
{
	StateManagerAnimationData animpoint_stay_wall_animation_data;
	animpoint_stay_wall_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_wall_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_wall_animation_data.setPropertiesRandom(80);
	animpoint_stay_wall_animation_data.setPropertiesMoving(true);

	animpoint_stay_wall_animation_data.addAnimation("idle", 0, "animpoint_stay_wall_idle_1");
	animpoint_stay_wall_animation_data.addAnimation("idle", 1, "animpoint_stay_wall_idle_1");

	animpoint_stay_wall_animation_data.addAnimation("rnd", 0, "animpoint_stay_wall_idle_rnd_1");
	animpoint_stay_wall_animation_data.addAnimation("rnd", 0, "animpoint_stay_wall_idle_rnd_2");
	animpoint_stay_wall_animation_data.addAnimation("rnd", 0, "animpoint_stay_wall_idle_rnd_3");
	animpoint_stay_wall_animation_data.addAnimation("rnd", 0, "animpoint_stay_wall_idle_rnd_4");

	animpoint_stay_wall_animation_data.addAnimation("rnd", 1, "animpoint_stay_wall_idle_rnd_1");
	animpoint_stay_wall_animation_data.addAnimation("rnd", 1, "animpoint_stay_wall_idle_rnd_2");
	animpoint_stay_wall_animation_data.addAnimation("rnd", 1, "animpoint_stay_wall_idle_rnd_3");
	animpoint_stay_wall_animation_data.addAnimation("rnd", 1, "animpoint_stay_wall_idle_rnd_4");

	this->m_state_manager_animation_list["animpoint_stay_wall"] = animpoint_stay_wall_animation_data;

	StateManagerAnimationData animpoint_stay_table_animation_data;
	animpoint_stay_table_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_table_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_table_animation_data.setPropertiesRandom(80);
	animpoint_stay_table_animation_data.setPropertiesMoving(true);

	animpoint_stay_table_animation_data.addAnimation("idle", 0, "animpoint_stay_table_idle_1");
	animpoint_stay_table_animation_data.addAnimation("idle", 1, "animpoint_stay_table_idle_1");

	animpoint_stay_table_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_rnd_1");
	animpoint_stay_table_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_rnd_2");
	animpoint_stay_table_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_rnd_3");
	animpoint_stay_table_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_rnd_4");
	animpoint_stay_table_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_rnd_5");

	animpoint_stay_table_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_rnd_1");
	animpoint_stay_table_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_rnd_2");
	animpoint_stay_table_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_rnd_3");
	animpoint_stay_table_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_rnd_4");
	animpoint_stay_table_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_rnd_5");

	this->m_state_manager_animation_list["animpoint_stay_table"] = animpoint_stay_table_animation_data;

	StateManagerAnimationData animpoint_sit_high_animation_data;
	animpoint_sit_high_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_high_animation_data.setPropertiesSumIdle(3);
	animpoint_sit_high_animation_data.setPropertiesRandom(80);
	animpoint_sit_high_animation_data.setPropertiesMoving(true);

	animpoint_sit_high_animation_data.addAnimation("idle", 0, "animpoint_stay_table_idle_1");
	animpoint_sit_high_animation_data.addAnimation("idle", 1, "animpoint_stay_table_idle_1");
	animpoint_sit_high_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_rnd_1");
	animpoint_sit_high_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_rnd_2");
	animpoint_sit_high_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_rnd_3");
	animpoint_sit_high_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_rnd_4");
	animpoint_sit_high_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_rnd_5");

	animpoint_sit_high_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_rnd_1");
	animpoint_sit_high_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_rnd_2");
	animpoint_sit_high_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_rnd_3");
	animpoint_sit_high_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_rnd_4");
	animpoint_sit_high_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_rnd_5");

	this->m_state_manager_animation_list["animpoint_sit_high"] = animpoint_sit_high_animation_data;

	StateManagerAnimationData animpoint_sit_normal_animation_data;
	animpoint_sit_normal_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_normal_animation_data.setPropertiesSumIdle(3);
	animpoint_sit_normal_animation_data.setPropertiesRandom(80);
	animpoint_sit_normal_animation_data.setPropertiesMoving(true);

	animpoint_sit_normal_animation_data.addAnimation("idle", 0, "animpoint_sit_normal_idle_1");
	animpoint_sit_normal_animation_data.addAnimation("idle", 1, "animpoint_sit_normal_idle_1");

	animpoint_sit_normal_animation_data.addAnimation("rnd", 0, "animpoint_sit_normal_idle_rnd_1");
	animpoint_sit_normal_animation_data.addAnimation("rnd", 0, "animpoint_sit_normal_idle_rnd_2");
	animpoint_sit_normal_animation_data.addAnimation("rnd", 0, "animpoint_sit_normal_idle_rnd_3");
	animpoint_sit_normal_animation_data.addAnimation("rnd", 0, "animpoint_sit_normal_idle_rnd_4");

	animpoint_sit_normal_animation_data.addAnimation("rnd", 1, "animpoint_sit_normal_idle_rnd_1");
	animpoint_sit_normal_animation_data.addAnimation("rnd", 1, "animpoint_sit_normal_idle_rnd_2");
	animpoint_sit_normal_animation_data.addAnimation("rnd", 1, "animpoint_sit_normal_idle_rnd_3");
	animpoint_sit_normal_animation_data.addAnimation("rnd", 1, "animpoint_sit_normal_idle_rnd_4");

	this->m_state_manager_animation_list["animpoint_sit_normal"] = animpoint_sit_normal_animation_data;

	StateManagerAnimationData animpoint_sit_low_animation_data;
	animpoint_sit_low_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_low_animation_data.setPropertiesSumIdle(3);
	animpoint_sit_low_animation_data.setPropertiesRandom(80);
	animpoint_sit_low_animation_data.setPropertiesMoving(true);

	animpoint_sit_low_animation_data.addAnimation("idle", 0, "animpoint_sit_low_idle_1");
	animpoint_sit_low_animation_data.addAnimation("idle", 1, "animpoint_sit_low_idle_1");

	animpoint_sit_low_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_idle_rnd_1");
	animpoint_sit_low_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_idle_rnd_2");
	animpoint_sit_low_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_idle_rnd_3");
	animpoint_sit_low_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_idle_rnd_4");

	animpoint_sit_low_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_idle_rnd_1");
	animpoint_sit_low_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_idle_rnd_2");
	animpoint_sit_low_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_idle_rnd_3");
	animpoint_sit_low_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_idle_rnd_4");

	this->m_state_manager_animation_list["animpoint_sit_low"] = animpoint_sit_low_animation_data;

	StateManagerAnimationData animpoint_stay_wall_eat_bread_animation_data;
	animpoint_stay_wall_eat_bread_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_wall_eat_bread_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_wall_eat_bread_animation_data.setPropertiesRandom(80);
	animpoint_stay_wall_eat_bread_animation_data.setPropertiesMoving(true);

	animpoint_stay_wall_eat_bread_animation_data.addAnimation("into", 0, "animpoint_stay_wall_eat_in_1");
	animpoint_stay_wall_eat_bread_animation_data.addAnimationAttachItemName("into", 0, "bread");
	animpoint_stay_wall_eat_bread_animation_data.addAnimation("into", 0, "animpoint_stay_wall_eat_in_2");

	animpoint_stay_wall_eat_bread_animation_data.addAnimation("into", 1, "animpoint_stay_wall_eat_in_1");
	animpoint_stay_wall_eat_bread_animation_data.addAnimationAttachItemName("into", 1, "bread");
	animpoint_stay_wall_eat_bread_animation_data.addAnimation("into", 1, "animpoint_stay_wall_eat_in_2");

	animpoint_stay_wall_eat_bread_animation_data.addAnimation("out", 0, "animpoint_stay_wall_eat_out_1");
	animpoint_stay_wall_eat_bread_animation_data.addAnimationDettachItemName("out", 0, "bread");
	animpoint_stay_wall_eat_bread_animation_data.addAnimation("out", 0, "animpoint_stay_wall_eat_out_2");

	animpoint_stay_wall_eat_bread_animation_data.addAnimation("out", 1, "animpoint_stay_wall_eat_out_1");
	animpoint_stay_wall_eat_bread_animation_data.addAnimationDettachItemName("out", 1, "bread");
	animpoint_stay_wall_eat_bread_animation_data.addAnimation("out", 1, "animpoint_stay_wall_eat_out_2");

	animpoint_stay_wall_eat_bread_animation_data.addAnimation("idle", 0, "animpoint_stay_wall_eat_idle_1");
	animpoint_stay_wall_eat_bread_animation_data.addAnimation("idle", 1, "animpoint_stay_wall_eat_idle_1");

	animpoint_stay_wall_eat_bread_animation_data.addAnimation("rnd", 0, "animpoint_stay_wall_eat_idle_rnd_1");
	animpoint_stay_wall_eat_bread_animation_data.addAnimation("rnd", 0, "animpoint_stay_wall_eat_idle_rnd_2");

	animpoint_stay_wall_eat_bread_animation_data.addAnimation("rnd", 1, "animpoint_stay_wall_eat_idle_rnd_1");
	animpoint_stay_wall_eat_bread_animation_data.addAnimation("rnd", 1, "animpoint_stay_wall_eat_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_stay_wall_eat_bread"] =
		animpoint_stay_wall_eat_bread_animation_data;

	StateManagerAnimationData animpoint_stay_wall_eat_kolbasa_animation_data;
	animpoint_stay_wall_eat_kolbasa_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_wall_eat_kolbasa_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_wall_eat_kolbasa_animation_data.setPropertiesRandom(80);
	animpoint_stay_wall_eat_kolbasa_animation_data.setPropertiesMoving(true);

	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("into", 0, "animpoint_stay_wall_eat_in_1");
	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimationAttachItemName("into", 0, "kolbasa");
	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("into", 0, "animpoint_stay_wall_eat_in_2");

	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("into", 1, "animpoint_stay_wall_eat_in_1");
	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimationAttachItemName("into", 1, "kolbasa");
	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("into", 1, "animpoint_stay_wall_eat_in_2");

	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("out", 0, "animpoint_stay_wall_eat_out_1");
	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimationDettachItemName("out", 0, "kolbasa");
	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("out", 0, "animpoint_stay_wall_eat_out_2");

	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("out", 1, "animpoint_stay_wall_eat_out_1");
	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimationDettachItemName("out", 1, "kolbasa");
	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("out", 1, "animpoint_stay_wall_eat_out_2");

	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("idle", 0, "animpoint_stay_wall_eat_idle_1");
	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("idle", 1, "animpoint_stay_wall_eat_idle_1");

	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("rnd", 0, "animpoint_stay_wall_eat_idle_rnd_1");
	animpoint_stay_wall_eat_kolbasa_animation_data.addAnimation("rnd", 1, "animpoint_stay_wall_eat_idle_rnd_1");

	this->m_state_manager_animation_list["animpoint_stay_wall_eat_kolbasa"] =
		animpoint_stay_wall_eat_kolbasa_animation_data;

	StateManagerAnimationData animpoint_stay_table_eat_bread_animation_data;
	animpoint_stay_table_eat_bread_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_table_eat_bread_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_table_eat_bread_animation_data.setPropertiesRandom(80);
	animpoint_stay_table_eat_bread_animation_data.setPropertiesMoving(true);

	animpoint_stay_table_eat_bread_animation_data.addAnimation("idle", 0, "animpoint_stay_table_idle_1");
	animpoint_stay_table_eat_bread_animation_data.addAnimation("idle", 1, "animpoint_stay_table_idle_1");

	animpoint_stay_table_eat_bread_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_1");
	animpoint_stay_table_eat_bread_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_1");

	this->m_state_manager_animation_list["animpoint_stay_table_eat_bread"] =
		animpoint_stay_table_eat_bread_animation_data;

	StateManagerAnimationData animpoint_stay_table_eat_kolbasa_animation_data;
	animpoint_stay_table_eat_kolbasa_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_table_eat_kolbasa_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_table_eat_kolbasa_animation_data.setPropertiesRandom(80);
	animpoint_stay_table_eat_kolbasa_animation_data.setPropertiesMoving(true);

	animpoint_stay_table_eat_kolbasa_animation_data.addAnimation("idle", 0, "animpoint_stay_table_idle_1");
	animpoint_stay_table_eat_kolbasa_animation_data.addAnimation("idle", 1, "animpoint_stay_table_idle_1");

	animpoint_stay_table_eat_kolbasa_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_1");
	animpoint_stay_table_eat_kolbasa_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_1");

	this->m_state_manager_animation_list["animpoint_stay_table_eat_kolbasa"] =
		animpoint_stay_table_eat_kolbasa_animation_data;

	StateManagerAnimationData animpoint_sit_high_eat_bread_animation_data;
	animpoint_sit_high_eat_bread_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_high_eat_bread_animation_data.setPropertiesSumIdle(3);
	animpoint_sit_high_eat_bread_animation_data.setPropertiesRandom(80);
	animpoint_sit_high_eat_bread_animation_data.setPropertiesMoving(true);

	animpoint_sit_high_eat_bread_animation_data.addAnimation("into", 0, "animpoint_sit_high_eat_in_1");
	animpoint_sit_high_eat_bread_animation_data.addAnimationAttachItemName("into", 0, "bread");
	animpoint_sit_high_eat_bread_animation_data.addAnimation("into", 0, "animpoint_sit_high_eat_in_2");

	animpoint_sit_high_eat_bread_animation_data.addAnimation("into", 1, "animpoint_sit_high_eat_in_1");
	animpoint_sit_high_eat_bread_animation_data.addAnimationAttachItemName("into", 1, "bread");
	animpoint_sit_high_eat_bread_animation_data.addAnimation("into", 1, "animpoint_sit_high_eat_in_2");

	animpoint_sit_high_eat_bread_animation_data.addAnimation("out", 0, "animpoint_sit_high_eat_out_1");
	animpoint_sit_high_eat_bread_animation_data.addAnimationAttachItemName("out", 0, "bread");
	animpoint_sit_high_eat_bread_animation_data.addAnimation("out", 0, "animpoint_sit_high_eat_out_2");

	animpoint_sit_high_eat_bread_animation_data.addAnimation("out", 1, "animpoint_sit_high_eat_out_1");
	animpoint_sit_high_eat_bread_animation_data.addAnimationAttachItemName("out", 1, "bread");
	animpoint_sit_high_eat_bread_animation_data.addAnimation("out", 1, "animpoint_sit_high_eat_out_2");

	animpoint_sit_high_eat_bread_animation_data.addAnimation("idle", 0, "animpoint_sit_high_eat_idle_1");
	animpoint_sit_high_eat_bread_animation_data.addAnimation("idle", 1, "animpoint_sit_high_eat_idle_1");

	animpoint_sit_high_eat_bread_animation_data.addAnimation("rnd", 0, "animpoint_sit_high_eat_idle_rnd_1");
	animpoint_sit_high_eat_bread_animation_data.addAnimation("rnd", 0, "animpoint_sit_high_eat_idle_rnd_2");

	animpoint_sit_high_eat_bread_animation_data.addAnimation("rnd", 1, "animpoint_sit_high_eat_idle_rnd_1");
	animpoint_sit_high_eat_bread_animation_data.addAnimation("rnd", 1, "animpoint_sit_high_eat_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_sit_high_eat_bread"] =
		animpoint_sit_high_eat_bread_animation_data;

	StateManagerAnimationData animpoint_sit_high_eat_kolbasa_animation_data;
	animpoint_sit_high_eat_kolbasa_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_high_eat_kolbasa_animation_data.setPropertiesSumIdle(3);
	animpoint_sit_high_eat_kolbasa_animation_data.setPropertiesRandom(80);
	animpoint_sit_high_eat_kolbasa_animation_data.setPropertiesMoving(true);

	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("into", 0, "animpoint_sit_high_eat_in_1");
	animpoint_sit_high_eat_kolbasa_animation_data.addAnimationAttachItemName("into", 0, "kolbasa");
	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("into", 0, "animpoint_sit_high_eat_in_2");

	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("into", 1, "animpoint_sit_high_eat_in_1");
	animpoint_sit_high_eat_kolbasa_animation_data.addAnimationAttachItemName("into", 1, "kolbasa");
	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("into", 1, "animpoint_sit_high_eat_in_2");

	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("out", 0, "animpoint_sit_high_eat_out_1");
	animpoint_sit_high_eat_kolbasa_animation_data.addAnimationDettachItemName("out", 0, "kolbasa");
	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("out", 0, "animpoint_sit_high_eat_out_2");

	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("out", 1, "animpoint_sit_high_eat_out_1");
	animpoint_sit_high_eat_kolbasa_animation_data.addAnimationDettachItemName("out", 1, "kolbasa");
	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("out", 1, "animpoint_sit_high_eat_out_2");

	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("idle", 0, "animpoint_sit_high_eat_idle_1");
	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("idle", 1, "animpoint_sit_high_eat_idle_1");

	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("rnd", 0, "animpoint_sit_high_eat_idle_rnd_1");
	animpoint_sit_high_eat_kolbasa_animation_data.addAnimation("rnd", 1, "animpoint_sit_high_eat_idle_rnd_1");

	this->m_state_manager_animation_list["animpoint_sit_high_eat_kolbasa"] =
		animpoint_sit_high_eat_kolbasa_animation_data;

	StateManagerAnimationData animpoint_sit_normal_eat_bread_animation_data;
	animpoint_sit_normal_eat_bread_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_normal_eat_bread_animation_data.setPropertiesSumIdle(3);
	animpoint_sit_normal_eat_bread_animation_data.setPropertiesRandom(80);
	animpoint_sit_normal_eat_bread_animation_data.setPropertiesMoving(true);

	animpoint_sit_normal_eat_bread_animation_data.addAnimation("into", 0, "animpoint_sit_normal_eat_in_1");
	animpoint_sit_normal_eat_bread_animation_data.addAnimationAttachItemName("into", 0, "bread");
	animpoint_sit_normal_eat_bread_animation_data.addAnimation("into", 0, "animpoint_sit_normal_eat_in_2");

	animpoint_sit_normal_eat_bread_animation_data.addAnimation("into", 1, "animpoint_sit_normal_eat_in_1");
	animpoint_sit_normal_eat_bread_animation_data.addAnimationAttachItemName("into", 1, "bread");
	animpoint_sit_normal_eat_bread_animation_data.addAnimation("into", 1, "animpoint_sit_normal_eat_in_2");

	animpoint_sit_normal_eat_bread_animation_data.addAnimation("out", 0, "animpoint_sit_normal_eat_out_1");
	animpoint_sit_normal_eat_bread_animation_data.addAnimationDettachItemName("out", 0, "bread");
	animpoint_sit_normal_eat_bread_animation_data.addAnimation("out", 0, "animpoint_sit_normal_eat_out_2");

	animpoint_sit_normal_eat_bread_animation_data.addAnimation("out", 1, "animpoint_sit_normal_eat_out_1");
	animpoint_sit_normal_eat_bread_animation_data.addAnimationDettachItemName("out", 1, "bread");
	animpoint_sit_normal_eat_bread_animation_data.addAnimation("out", 1, "animpoint_sit_normal_eat_out_2");

	animpoint_sit_normal_eat_bread_animation_data.addAnimation("idle", 0, "animpoint_sit_normal_eat_idle_1");
	animpoint_sit_normal_eat_bread_animation_data.addAnimation("idle", 1, "animpoint_sit_normal_eat_idle_1");

	animpoint_sit_normal_eat_bread_animation_data.addAnimation("rnd", 0, "animpoint_sit_normal_eat_idle_rnd_1");
	animpoint_sit_normal_eat_bread_animation_data.addAnimation("rnd", 0, "animpoint_sit_normal_eat_idle_rnd_2");

	animpoint_sit_normal_eat_bread_animation_data.addAnimation("rnd", 1, "animpoint_sit_normal_eat_idle_rnd_1");
	animpoint_sit_normal_eat_bread_animation_data.addAnimation("rnd", 1, "animpoint_sit_normal_eat_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_sit_normal_eat_bread"] =
		animpoint_sit_normal_eat_bread_animation_data;

	StateManagerAnimationData animpoint_sit_normal_eat_kolbasa_animation_data;
	animpoint_sit_normal_eat_kolbasa_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_normal_eat_kolbasa_animation_data.setPropertiesSumIdle(3);
	animpoint_sit_normal_eat_kolbasa_animation_data.setPropertiesRandom(80);
	animpoint_sit_normal_eat_kolbasa_animation_data.setPropertiesMoving(true);

	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("into", 0, "animpoint_sit_normal_eat_in_1");
	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimationAttachItemName("into", 0, "kolbasa");
	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("into", 0, "animpoint_sit_normal_eat_in_2");

	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("into", 1, "animpoint_sit_normal_eat_in_1");
	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimationAttachItemName("into", 1, "kolbasa");
	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("into", 1, "animpoint_sit_normal_eat_in_2");

	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("out", 0, "animpoint_sit_normal_eat_out_1");
	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimationDettachItemName("out", 0, "kolbasa");
	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("out", 0, "animpoint_sit_normal_eat_out_2");

	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("out", 1, "animpoint_sit_normal_eat_out_1");
	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimationDettachItemName("out", 1, "kolbasa");
	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("out", 1, "animpoint_sit_normal_eat_out_2");

	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("idle", 0, "animpoint_sit_normal_eat_idle_1");
	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("idle", 1, "animpoint_sit_normal_eat_idle_1");

	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("rnd", 0, "animpoint_sit_normal_eat_idle_1");
	animpoint_sit_normal_eat_kolbasa_animation_data.addAnimation("rnd", 1, "animpoint_sit_normal_eat_idle_1");

	this->m_state_manager_animation_list["animpoint_sit_normal_eat_kolbasa"] =
		animpoint_sit_normal_eat_kolbasa_animation_data;

	StateManagerAnimationData animpoint_sit_low_eat_bread_animation_data;
	animpoint_sit_low_eat_bread_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_low_eat_bread_animation_data.setPropertiesSumIdle(3);
	animpoint_sit_low_eat_bread_animation_data.setPropertiesRandom(80);
	animpoint_sit_low_eat_bread_animation_data.setPropertiesMoving(true);

	animpoint_sit_low_eat_bread_animation_data.addAnimation("into", 0, "animpoint_sit_low_eat_in_1");
	animpoint_sit_low_eat_bread_animation_data.addAnimationAttachItemName("into", 0, "bread");
	animpoint_sit_low_eat_bread_animation_data.addAnimation("into", 0, "animpoint_sit_low_eat_in_2");

	animpoint_sit_low_eat_bread_animation_data.addAnimation("into", 1, "animpoint_sit_low_eat_in_1");
	animpoint_sit_low_eat_bread_animation_data.addAnimationAttachItemName("into", 1, "bread");
	animpoint_sit_low_eat_bread_animation_data.addAnimation("into", 1, "animpoint_sit_low_eat_in_2");

	animpoint_sit_low_eat_bread_animation_data.addAnimation("out", 0, "animpoint_sit_low_eat_out_1");
	animpoint_sit_low_eat_bread_animation_data.addAnimationDettachItemName("out", 0, "bread");
	animpoint_sit_low_eat_bread_animation_data.addAnimation("out", 0, "animpoint_sit_low_eat_out_2");

	animpoint_sit_low_eat_bread_animation_data.addAnimation("out", 1, "animpoint_sit_low_eat_out_1");
	animpoint_sit_low_eat_bread_animation_data.addAnimationDettachItemName("out", 1, "bread");
	animpoint_sit_low_eat_bread_animation_data.addAnimation("out", 1, "animpoint_sit_low_eat_out_2");

	animpoint_sit_low_eat_bread_animation_data.addAnimation("idle", 0, "animpoint_sit_low_eat_idle_1");
	animpoint_sit_low_eat_bread_animation_data.addAnimation("idle", 1, "animpoint_sit_low_eat_idle_1");

	animpoint_sit_low_eat_bread_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_eat_idle_1");
	animpoint_sit_low_eat_bread_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_eat_idle_2");

	animpoint_sit_low_eat_bread_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_eat_idle_1");
	animpoint_sit_low_eat_bread_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_eat_idle_2");

	this->m_state_manager_animation_list["animpoint_sit_low_eat_bread"] =
		animpoint_sit_low_eat_bread_animation_data;

	StateManagerAnimationData animpoint_sit_low_eat_kolbasa_animation_data;
	animpoint_sit_low_eat_kolbasa_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_low_eat_kolbasa_animation_data.setPropertiesSumIdle(3);
	animpoint_sit_low_eat_kolbasa_animation_data.setPropertiesRandom(80);
	animpoint_sit_low_eat_kolbasa_animation_data.setPropertiesMoving(true);

	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("into", 0, "animpoint_sit_low_eat_in_1");
	animpoint_sit_low_eat_kolbasa_animation_data.addAnimationAttachItemName("into", 0, "kolbasa");
	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("into", 0, "animpoint_sit_low_eat_in_2");

	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("into", 1, "animpoint_sit_low_eat_in_1");
	animpoint_sit_low_eat_kolbasa_animation_data.addAnimationAttachItemName("into", 1, "kolbasa");
	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("into", 1, "animpoint_sit_low_eat_in_2");

	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("out", 0, "animpoint_sit_low_eat_out_1");
	animpoint_sit_low_eat_kolbasa_animation_data.addAnimationDettachItemName("out", 0, "kolbasa");
	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("out", 0, "animpoint_sit_low_eat_out_2");

	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("out", 1, "animpoint_sit_low_eat_out_1");
	animpoint_sit_low_eat_kolbasa_animation_data.addAnimationDettachItemName("out", 1, "kolbasa");
	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("out", 1, "animpoint_sit_low_eat_out_2");

	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("idle", 0, "animpoint_sit_low_eat_idle_1");
	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("idle", 1, "animpoint_sit_low_eat_idle_1");

	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_eat_idle_1");
	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_eat_idle_2");

	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_eat_idle_1");
	animpoint_sit_low_eat_kolbasa_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_eat_idle_2");

	this->m_state_manager_animation_list["animpoint_sit_low_eat_kolbasa"] =
		animpoint_sit_low_eat_kolbasa_animation_data;

	StateManagerAnimationData animpoint_stay_wall_drink_vodka_animation_data;
	animpoint_stay_wall_drink_vodka_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_wall_drink_vodka_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_wall_drink_vodka_animation_data.setPropertiesRandom(80);
	animpoint_stay_wall_drink_vodka_animation_data.setPropertiesMoving(true);

	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("into", 0, "animpoint_stay_wall_drink_in_1");
	animpoint_stay_wall_drink_vodka_animation_data.addAnimationAttachItemName("into", 0, "vodka");
	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("into", 0, "animpoint_stay_wall_drink_in_2");

	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("into", 1, "animpoint_stay_wall_drink_in_1");
	animpoint_stay_wall_drink_vodka_animation_data.addAnimationAttachItemName("into", 1, "vodka");
	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("into", 1, "animpoint_stay_wall_drink_in_2");

	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("out", 0, "animpoint_stay_wall_drink_out_1");
	animpoint_stay_wall_drink_vodka_animation_data.addAnimationDettachItemName("out", 0, "vodka");
	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("out", 0, "animpoint_stay_wall_drink_out_2");

	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("out", 1, "animpoint_stay_wall_drink_out_1");
	animpoint_stay_wall_drink_vodka_animation_data.addAnimationDettachItemName("out", 1, "vodka");
	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("out", 1, "animpoint_stay_wall_drink_out_2");

	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("idle", 0, "animpoint_stay_wall_drink_idle_1");
	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("idle", 1, "animpoint_stay_wall_drink_idle_1");

	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("rnd", 0, "animpoint_stay_wall_drink_idle_rnd_1");
	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("rnd", 0, "animpoint_stay_wall_drink_idle_rnd_2");

	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("rnd", 1, "animpoint_stay_wall_drink_idle_rnd_1");
	animpoint_stay_wall_drink_vodka_animation_data.addAnimation("rnd", 1, "animpoint_stay_wall_drink_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_stay_wall_drink_vodka"] =
		animpoint_stay_wall_drink_vodka_animation_data;

	StateManagerAnimationData animpoint_stay_wall_drink_energy_animation_data;
	animpoint_stay_wall_drink_energy_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_wall_drink_energy_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_wall_drink_energy_animation_data.setPropertiesRandom(80);
	animpoint_stay_wall_drink_energy_animation_data.setPropertiesMoving(true);

	animpoint_stay_wall_drink_energy_animation_data.addAnimation("into", 0, "animpoint_stay_wall_drink_in_1");
	animpoint_stay_wall_drink_energy_animation_data.addAnimationAttachItemName("into", 0, "energy_drink");
	animpoint_stay_wall_drink_energy_animation_data.addAnimation("into", 0, "animpoint_stay_wall_drink_in_2");

	animpoint_stay_wall_drink_energy_animation_data.addAnimation("into", 1, "animpoint_stay_wall_drink_in_1");
	animpoint_stay_wall_drink_energy_animation_data.addAnimationAttachItemName("into", 1, "energy_drink");
	animpoint_stay_wall_drink_energy_animation_data.addAnimation("into", 1, "animpoint_stay_wall_drink_in_2");

	animpoint_stay_wall_drink_energy_animation_data.addAnimation("out", 0, "animpoint_stay_wall_drink_out_1");
	animpoint_stay_wall_drink_energy_animation_data.addAnimationDettachItemName("out", 0, "energy_drink");
	animpoint_stay_wall_drink_energy_animation_data.addAnimation("out", 0, "animpoint_stay_wall_drink_out_2");

	animpoint_stay_wall_drink_energy_animation_data.addAnimation("out", 1, "animpoint_stay_wall_drink_out_1");
	animpoint_stay_wall_drink_energy_animation_data.addAnimationDettachItemName("out", 1, "energy_drink");
	animpoint_stay_wall_drink_energy_animation_data.addAnimation("out", 1, "animpoint_stay_wall_drink_out_2");

	animpoint_stay_wall_drink_energy_animation_data.addAnimation("idle", 0, "animpoint_stay_wall_drink_idle_1");
	animpoint_stay_wall_drink_energy_animation_data.addAnimation("idle", 1, "animpoint_stay_wall_drink_idle_1");

	animpoint_stay_wall_drink_energy_animation_data.addAnimation("rnd", 0, "animpoint_stay_wall_drink_idle_rnd_1");
	animpoint_stay_wall_drink_energy_animation_data.addAnimation("rnd", 0, "animpoint_stay_wall_drink_idle_rnd_2");

	animpoint_stay_wall_drink_energy_animation_data.addAnimation("rnd", 1, "animpoint_stay_wall_drink_idle_rnd_1");
	animpoint_stay_wall_drink_energy_animation_data.addAnimation("rnd", 1, "animpoint_stay_wall_drink_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_stay_wall_drink_energy"] =
		animpoint_stay_wall_drink_energy_animation_data;

	StateManagerAnimationData animpoint_stay_table_drink_vodka_aniamtion_data;
	animpoint_stay_table_drink_vodka_aniamtion_data.setPropertiesMaxIdle(5);
	animpoint_stay_table_drink_vodka_aniamtion_data.setPropertiesSumIdle(3);
	animpoint_stay_table_drink_vodka_aniamtion_data.setPropertiesRandom(80);
	animpoint_stay_table_drink_vodka_aniamtion_data.setPropertiesMoving(true);

	animpoint_stay_table_drink_vodka_aniamtion_data.addAnimation("idle", 0, "animpoint_stay_table_idle_1");
	animpoint_stay_table_drink_vodka_aniamtion_data.addAnimation("idle", 1, "animpoint_stay_table_idle_1");

	animpoint_stay_table_drink_vodka_aniamtion_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_1");
	animpoint_stay_table_drink_vodka_aniamtion_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_1");

	this->m_state_manager_animation_list["animpoint_stay_table_drink_vodka"] =
		animpoint_stay_table_drink_vodka_aniamtion_data;

	StateManagerAnimationData animpoint_stay_table_drink_energy_animation_data;
	animpoint_stay_table_drink_energy_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_table_drink_energy_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_table_drink_energy_animation_data.setPropertiesRandom(80);
	animpoint_stay_table_drink_energy_animation_data.setPropertiesMoving(true);

	animpoint_stay_table_drink_energy_animation_data.addAnimation("idle", 0, "animpoint_stay_table_idle_1");
	animpoint_stay_table_drink_energy_animation_data.addAnimation("idle", 1, "animpoint_stay_table_idle_1");

	animpoint_stay_table_drink_energy_animation_data.addAnimation("rnd", 0, "animpoint_stay_table_idle_1");
	animpoint_stay_table_drink_energy_animation_data.addAnimation("rnd", 1, "animpoint_stay_table_idle_1");

	this->m_state_manager_animation_list["animpoint_stay_table_drink_energy"] =
		animpoint_stay_table_drink_energy_animation_data;

	StateManagerAnimationData animpoint_sit_high_drink_vodka_animation_data;
	animpoint_sit_high_drink_vodka_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_high_drink_vodka_animation_data.setPropertiesMoving(true);
	animpoint_sit_high_drink_vodka_animation_data.setPropertiesRandom(80);
	animpoint_sit_high_drink_vodka_animation_data.setPropertiesSumIdle(3);

	animpoint_sit_high_drink_vodka_animation_data.addAnimation("into", 0, "animpoint_sit_high_drink_in_1");
	animpoint_sit_high_drink_vodka_animation_data.addAnimationAttachItemName("into", 0, "vodka");
	animpoint_sit_high_drink_vodka_animation_data.addAnimation("into", 0, "animpoint_sit_high_drink_in_2");

	animpoint_sit_high_drink_vodka_animation_data.addAnimation("into", 1, "animpoint_sit_high_drink_in_1");
	animpoint_sit_high_drink_vodka_animation_data.addAnimationAttachItemName("into", 1, "vodka");
	animpoint_sit_high_drink_vodka_animation_data.addAnimation("into", 1, "animpoint_sit_high_drink_in_2");

	animpoint_sit_high_drink_vodka_animation_data.addAnimation("out", 0, "animpoint_sit_high_drink_out_1");
	animpoint_sit_high_drink_vodka_animation_data.addAnimationDettachItemName("out", 0, "vodka");
	animpoint_sit_high_drink_vodka_animation_data.addAnimation("out", 0, "animpoint_sit_high_drink_out_2");

	animpoint_sit_high_drink_vodka_animation_data.addAnimation("out", 1, "animpoint_sit_high_drink_out_1");
	animpoint_sit_high_drink_vodka_animation_data.addAnimationDettachItemName("out", 1, "vodka");
	animpoint_sit_high_drink_vodka_animation_data.addAnimation("out", 1, "animpoint_sit_high_drink_out_2");

	animpoint_sit_high_drink_vodka_animation_data.addAnimation("idle", 0, "animpoint_sit_high_drink_idle_1");
	animpoint_sit_high_drink_vodka_animation_data.addAnimation("idle", 1, "animpoint_sit_high_drink_idle_1");

	animpoint_sit_high_drink_vodka_animation_data.addAnimation("rnd", 0, "animpoint_sit_high_drink_idle_rnd_1");
	animpoint_sit_high_drink_vodka_animation_data.addAnimation("rnd", 0, "animpoint_sit_high_drink_idle_rnd_2");

	animpoint_sit_high_drink_vodka_animation_data.addAnimation("rnd", 1, "animpoint_sit_high_drink_idle_rnd_1");
	animpoint_sit_high_drink_vodka_animation_data.addAnimation("rnd", 1, "animpoint_sit_high_drink_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_sit_high_drink_vodka"] =
		animpoint_sit_high_drink_vodka_animation_data;

	StateManagerAnimationData animpoint_sit_high_drink_energy_animation_data;
	animpoint_sit_high_drink_energy_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_high_drink_energy_animation_data.setPropertiesMoving(true);
	animpoint_sit_high_drink_energy_animation_data.setPropertiesRandom(80);
	animpoint_sit_high_drink_energy_animation_data.setPropertiesSumIdle(3);

	animpoint_sit_high_drink_energy_animation_data.addAnimation("into", 0, "animpoint_sit_high_drink_in_1");
	animpoint_sit_high_drink_energy_animation_data.addAnimationAttachItemName("into", 0, "energy_drink");
	animpoint_sit_high_drink_energy_animation_data.addAnimation("into", 0, "animpoint_sit_high_drink_in_2");

	animpoint_sit_high_drink_energy_animation_data.addAnimation("into", 1, "animpoint_sit_high_drink_in_1");
	animpoint_sit_high_drink_energy_animation_data.addAnimationAttachItemName("into", 1, "energy_drink");
	animpoint_sit_high_drink_energy_animation_data.addAnimation("into", 1, "animpoint_sit_high_drink_in_2");

	animpoint_sit_high_drink_energy_animation_data.addAnimation("out", 0, "animpoint_sit_high_drink_out_1");
	animpoint_sit_high_drink_energy_animation_data.addAnimationDettachItemName("out", 0, "energy_drink");
	animpoint_sit_high_drink_energy_animation_data.addAnimation("out", 0, "animpoint_sit_high_drink_out_2");

	animpoint_sit_high_drink_energy_animation_data.addAnimation("out", 1, "animpoint_sit_high_drink_out_1");
	animpoint_sit_high_drink_energy_animation_data.addAnimationDettachItemName("out", 1, "energy_drink");
	animpoint_sit_high_drink_energy_animation_data.addAnimation("out", 1, "animpoint_sit_high_drink_out_2");

	animpoint_sit_high_drink_energy_animation_data.addAnimation("idle", 0, "animpoint_sit_high_drink_idle_1");
	animpoint_sit_high_drink_energy_animation_data.addAnimation("idle", 1, "animpoint_sit_high_drink_idle_1");

	animpoint_sit_high_drink_energy_animation_data.addAnimation("rnd", 0, "animpoint_sit_high_drink_idle_rnd_1");
	animpoint_sit_high_drink_energy_animation_data.addAnimation("rnd", 0, "animpoint_sit_high_drink_idle_rnd_2");

	animpoint_sit_high_drink_energy_animation_data.addAnimation("rnd", 1, "animpoint_sit_high_drink_idle_rnd_1");
	animpoint_sit_high_drink_energy_animation_data.addAnimation("rnd", 1, "animpoint_sit_high_drink_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_sit_high_drink_energy"] =
		animpoint_sit_high_drink_energy_animation_data;

	StateManagerAnimationData animpoint_sit_normal_drink_vodka_animation_data;
	animpoint_sit_normal_drink_vodka_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_normal_drink_vodka_animation_data.setPropertiesMoving(true);
	animpoint_sit_normal_drink_vodka_animation_data.setPropertiesRandom(80);
	animpoint_sit_normal_drink_vodka_animation_data.setPropertiesSumIdle(3);

	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("into", 0, "animpoint_sit_normal_drink_in_1");
	animpoint_sit_normal_drink_vodka_animation_data.addAnimationAttachItemName("into", 0, "vodka");
	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("into", 0, "animpoint_sit_normal_drink_in_2");

	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("into", 1, "animpoint_sit_normal_drink_in_1");
	animpoint_sit_normal_drink_vodka_animation_data.addAnimationAttachItemName("into", 1, "vodka");
	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("into", 1, "animpoint_sit_normal_drink_in_2");

	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("out", 0, "animpoint_sit_normal_drink_out_1");
	animpoint_sit_normal_drink_vodka_animation_data.addAnimationDettachItemName("out", 0, "vodka");
	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("out", 0, "animpoint_sit_normal_drink_out_2");

	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("out", 1, "animpoint_sit_normal_drink_out_1");
	animpoint_sit_normal_drink_vodka_animation_data.addAnimationDettachItemName("out", 1, "vodka");
	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("out", 1, "animpoint_sit_normal_drink_out_2");

	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("idle", 0, "animpoint_sit_normal_drink_idle_1");
	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("idle", 1, "animpoint_sit_normal_drink_idle_1");

	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("rnd", 0, "animpoint_sit_normal_drink_idle_rnd_1");
	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("rnd", 0, "animpoint_sit_normal_drink_idle_rnd_2");

	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("rnd", 1, "animpoint_sit_normal_drink_idle_rnd_1");
	animpoint_sit_normal_drink_vodka_animation_data.addAnimation("rnd", 1, "animpoint_sit_normal_drink_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_sit_normal_drink_vodka"] =
		animpoint_sit_normal_drink_vodka_animation_data;

	StateManagerAnimationData animpoint_sit_normal_drink_energy_animation_data;
	animpoint_sit_normal_drink_energy_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_normal_drink_energy_animation_data.setPropertiesMoving(true);
	animpoint_sit_normal_drink_energy_animation_data.setPropertiesRandom(80);
	animpoint_sit_normal_drink_energy_animation_data.setPropertiesSumIdle(3);

	animpoint_sit_normal_drink_energy_animation_data.addAnimation("into", 0, "animpoint_sit_normal_drink_in_1");
	animpoint_sit_normal_drink_energy_animation_data.addAnimationAttachItemName("into", 0, "energy_drink");
	animpoint_sit_normal_drink_energy_animation_data.addAnimation("into", 0, "animpoint_sit_normal_drink_in_2");

	animpoint_sit_normal_drink_energy_animation_data.addAnimation("into", 1, "animpoint_sit_normal_drink_in_1");
	animpoint_sit_normal_drink_energy_animation_data.addAnimationAttachItemName("into", 1, "energy_drink");
	animpoint_sit_normal_drink_energy_animation_data.addAnimation("into", 1, "animpoint_sit_normal_drink_in_2");

	animpoint_sit_normal_drink_energy_animation_data.addAnimation("out", 0, "animpoint_sit_normal_drink_out_1");
	animpoint_sit_normal_drink_energy_animation_data.addAnimationDettachItemName("out", 0, "energy_drink");
	animpoint_sit_normal_drink_energy_animation_data.addAnimation("out", 0, "animpoint_sit_normal_drink_out_2");

	animpoint_sit_normal_drink_energy_animation_data.addAnimation("out", 1, "animpoint_sit_normal_drink_out_1");
	animpoint_sit_normal_drink_energy_animation_data.addAnimationDettachItemName("out", 1, "energy_drink");
	animpoint_sit_normal_drink_energy_animation_data.addAnimation("out", 1, "animpoint_sit_normal_drink_out_2");

	animpoint_sit_normal_drink_energy_animation_data.addAnimation("idle", 0, "animpoint_sit_normal_drink_idle_1");
	animpoint_sit_normal_drink_energy_animation_data.addAnimation("idle", 1, "animpoint_sit_normal_drink_idle_1");

	animpoint_sit_normal_drink_energy_animation_data.addAnimation(
		"rnd", 0, "animpoint_sit_normal_drink_idle_rnd_1");
	animpoint_sit_normal_drink_energy_animation_data.addAnimation(
		"rnd", 0, "animpoint_sit_normal_drink_idle_rnd_2");

	animpoint_sit_normal_drink_energy_animation_data.addAnimation(
		"rnd", 1, "animpoint_sit_normal_drink_idle_rnd_1");
	animpoint_sit_normal_drink_energy_animation_data.addAnimation(
		"rnd", 1, "animpoint_sit_normal_drink_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_sit_normal_drink_energy"] =
		animpoint_sit_normal_drink_energy_animation_data;

	StateManagerAnimationData animpoint_sit_low_drink_vodka_animation_data;
	animpoint_sit_low_drink_vodka_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_low_drink_vodka_animation_data.setPropertiesMoving(true);
	animpoint_sit_low_drink_vodka_animation_data.setPropertiesRandom(80);
	animpoint_sit_low_drink_vodka_animation_data.setPropertiesSumIdle(3);

	animpoint_sit_low_drink_vodka_animation_data.addAnimation("into", 0, "animpoint_sit_low_drink_in_1");
	animpoint_sit_low_drink_vodka_animation_data.addAnimationAttachItemName("into", 0, "vodka");
	animpoint_sit_low_drink_vodka_animation_data.addAnimation("into", 0, "animpoint_sit_low_drink_in_2");

	animpoint_sit_low_drink_vodka_animation_data.addAnimation("into", 1, "animpoint_sit_low_drink_in_1");
	animpoint_sit_low_drink_vodka_animation_data.addAnimationAttachItemName("into", 1, "vodka");
	animpoint_sit_low_drink_vodka_animation_data.addAnimation("into", 1, "animpoint_sit_low_drink_in_2");

	animpoint_sit_low_drink_vodka_animation_data.addAnimation("out", 0, "animpoint_sit_low_drink_out_1");
	animpoint_sit_low_drink_vodka_animation_data.addAnimationDettachItemName("out", 0, "vodka");
	animpoint_sit_low_drink_vodka_animation_data.addAnimation("out", 0, "animpoint_sit_low_drink_out_2");

	animpoint_sit_low_drink_vodka_animation_data.addAnimation("out", 1, "animpoint_sit_low_drink_out_1");
	animpoint_sit_low_drink_vodka_animation_data.addAnimationDettachItemName("out", 1, "vodka");
	animpoint_sit_low_drink_vodka_animation_data.addAnimation("out", 1, "animpoint_sit_low_drink_out_2");

	animpoint_sit_low_drink_vodka_animation_data.addAnimation("idle", 0, "animpoint_sit_low_drink_idle_1");
	animpoint_sit_low_drink_vodka_animation_data.addAnimation("idle", 1, "animpoint_sit_low_drink_idle_1");

	animpoint_sit_low_drink_vodka_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_drink_idle_rnd_1");
	animpoint_sit_low_drink_vodka_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_drink_idle_rnd_2");

	animpoint_sit_low_drink_vodka_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_drink_idle_rnd_1");
	animpoint_sit_low_drink_vodka_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_drink_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_sit_low_drink_vodka"] =
		animpoint_sit_low_drink_vodka_animation_data;

	StateManagerAnimationData animpoint_sit_low_drink_energy_animation_data;
	animpoint_sit_low_drink_energy_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_low_drink_energy_animation_data.setPropertiesMoving(true);
	animpoint_sit_low_drink_energy_animation_data.setPropertiesRandom(80);
	animpoint_sit_low_drink_energy_animation_data.setPropertiesSumIdle(3);

	animpoint_sit_low_drink_energy_animation_data.addAnimation("into", 0, "animpoint_sit_low_drink_in_1");
	animpoint_sit_low_drink_energy_animation_data.addAnimationAttachItemName("into", 0, "energy_drink");
	animpoint_sit_low_drink_energy_animation_data.addAnimation("into", 0, "animpoint_sit_low_drink_in_2");

	animpoint_sit_low_drink_energy_animation_data.addAnimation("into", 1, "animpoint_sit_low_drink_in_1");
	animpoint_sit_low_drink_energy_animation_data.addAnimationAttachItemName("into", 1, "energy_drink");
	animpoint_sit_low_drink_energy_animation_data.addAnimation("into", 1, "animpoint_sit_low_drink_in_2");

	animpoint_sit_low_drink_energy_animation_data.addAnimation("out", 0, "animpoint_sit_low_drink_out_1");
	animpoint_sit_low_drink_energy_animation_data.addAnimationDettachItemName("out", 0, "energy_drink");
	animpoint_sit_low_drink_energy_animation_data.addAnimation("out", 0, "animpoint_sit_low_drink_out_2");

	animpoint_sit_low_drink_energy_animation_data.addAnimation("out", 1, "animpoint_sit_low_drink_out_1");
	animpoint_sit_low_drink_energy_animation_data.addAnimationDettachItemName("out", 1, "energy_drink");
	animpoint_sit_low_drink_energy_animation_data.addAnimation("out", 1, "animpoint_sit_low_drink_out_2");

	animpoint_sit_low_drink_energy_animation_data.addAnimation("idle", 0, "animpoint_sit_low_drink_idle_1");
	animpoint_sit_low_drink_energy_animation_data.addAnimation("idle", 1, "animpoint_sit_low_drink_idle_1");

	animpoint_sit_low_drink_energy_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_drink_idle_rnd_1");
	animpoint_sit_low_drink_energy_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_drink_idle_rnd_2");

	animpoint_sit_low_drink_energy_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_drink_idle_rnd_1");
	animpoint_sit_low_drink_energy_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_drink_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_sit_low_drink_energy"] =
		animpoint_sit_low_drink_energy_animation_data;

	StateManagerAnimationData animpoint_stay_wall_guitar_animation_data;
	animpoint_stay_wall_guitar_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_wall_guitar_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_wall_guitar_animation_data.setPropertiesRandom(80);
	animpoint_stay_wall_guitar_animation_data.setPropertiesMoving(true);

	animpoint_stay_wall_guitar_animation_data.addAnimation("idle", 0, "idle_0_idle_1");
	animpoint_stay_wall_guitar_animation_data.addAnimation("idle", 1, "idle_0_idle_1");

	animpoint_stay_wall_guitar_animation_data.addAnimation("rnd", 0, "idle_0_idle_0");
	animpoint_stay_wall_guitar_animation_data.addAnimation("rnd", 1, "idle_0_idle_0");

	this->m_state_manager_animation_list["animpoint_stay_wall_guitar"] = animpoint_stay_wall_guitar_animation_data;

	StateManagerAnimationData animpoint_stay_table_guitar_animation_data;
	animpoint_stay_table_guitar_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_table_guitar_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_table_guitar_animation_data.setPropertiesRandom(80);
	animpoint_stay_table_guitar_animation_data.setPropertiesMoving(true);

	animpoint_stay_table_guitar_animation_data.addAnimation("idle", 0, "idle_0_idle_1");
	animpoint_stay_table_guitar_animation_data.addAnimation("idle", 1, "idle_0_idle_1");

	animpoint_stay_table_guitar_animation_data.addAnimation("rnd", 0, "idle_0_idle_0");
	animpoint_stay_table_guitar_animation_data.addAnimation("rnd", 1, "idle_0_idle_0");

	this->m_state_manager_animation_list["animpoint_stay_table_guitar"] =
		animpoint_stay_table_guitar_animation_data;

	StateManagerAnimationData animpoint_sit_high_guitar_animation_data;
	animpoint_sit_high_guitar_animation_data.setPropertiesMaxIdle(5);
	animpoint_sit_high_guitar_animation_data.setPropertiesSumIdle(3);
	animpoint_sit_high_guitar_animation_data.setPropertiesRandom(80);
	animpoint_sit_high_guitar_animation_data.setPropertiesMoving(true);

	animpoint_sit_high_guitar_animation_data.addAnimation("idle", 0, "idle_0_idle_1");
	animpoint_sit_high_guitar_animation_data.addAnimation("idle", 1, "idle_0_idle_1");

	animpoint_sit_high_guitar_animation_data.addAnimation("rnd", 0, "idle_0_idle_0");
	animpoint_sit_high_guitar_animation_data.addAnimation("rnd", 1, "idle_0_idle_0");

	this->m_state_manager_animation_list["animpoint_sit_high_guitar"] = animpoint_sit_high_guitar_animation_data;

	StateManagerAnimationData animpoint_sit_normal_guitar_animation_data;
	animpoint_sit_normal_guitar_animation_data.setPropertiesMaxIdle(0);
	animpoint_sit_normal_guitar_animation_data.setPropertiesSumIdle(0);
	animpoint_sit_normal_guitar_animation_data.setPropertiesRandom(80);
	animpoint_sit_normal_guitar_animation_data.setPropertiesMoving(true);

	animpoint_sit_normal_guitar_animation_data.addAnimation("into", 0, "animpoint_sit_normal_guitar_in_1");
	animpoint_sit_normal_guitar_animation_data.addAnimationAttachItemName("into", 0, "guitar_a");
	//    animpoint_sit_normal_guitar_animation_data.addAnimationFunction("into", 0, sr_camp.start_guitar); Lord:
	//    доделать!
	animpoint_sit_normal_guitar_animation_data.addAnimation("into", 0, "animpoint_sit_normal_guitar_in_2");

	animpoint_sit_normal_guitar_animation_data.addAnimation("into", 1, "animpoint_sit_normal_guitar_in_1");
	animpoint_sit_normal_guitar_animation_data.addAnimationAttachItemName("into", 1, "guitar_a");
	//    animpoint_sit_normal_guitar_animation_data.addAnimationFunction("into", 1, sr_camp.start_guitar); Lord:
	//    доделать!
	animpoint_sit_normal_guitar_animation_data.addAnimation("into", 1, "animpoint_sit_normal_guitar_in_2");

	animpoint_sit_normal_guitar_animation_data.addAnimation("out", 0, "animpoint_sit_normal_guitar_out_1");
	animpoint_sit_normal_guitar_animation_data.addAnimationDettachItemName("out", 0, "guitar_a");
	animpoint_sit_normal_guitar_animation_data.addAnimation("out", 0, "animpoint_sit_normal_guitar_out_2");

	animpoint_sit_normal_guitar_animation_data.addAnimation("out", 1, "animpoint_sit_normal_guitar_out_1");
	animpoint_sit_normal_guitar_animation_data.addAnimationDettachItemName("out", 1, "guitar_a");
	animpoint_sit_normal_guitar_animation_data.addAnimation("out", 1, "animpoint_sit_normal_guitar_out_2");

	animpoint_sit_normal_guitar_animation_data.addAnimation("idle", 0, "animpoint_sit_normal_guitar_idle_1");
	animpoint_sit_normal_guitar_animation_data.addAnimation("idle", 1, "animpoint_sit_normal_guitar_idle_1");

	animpoint_sit_normal_guitar_animation_data.addAnimation("rnd", 0, "animpoint_sit_normal_guitar_idle_rnd_1");
	animpoint_sit_normal_guitar_animation_data.addAnimation("rnd", 1, "animpoint_sit_normal_guitar_idle_rnd_1");

	this->m_state_manager_animation_list["animpoint_sit_normal_guitar"] =
		animpoint_sit_normal_guitar_animation_data;

	StateManagerAnimationData animpoint_sit_low_guitar_animation_data;
	animpoint_sit_low_guitar_animation_data.setPropertiesMaxIdle(0);
	animpoint_sit_low_guitar_animation_data.setPropertiesSumIdle(0);
	animpoint_sit_low_guitar_animation_data.setPropertiesRandom(80);
	animpoint_sit_low_guitar_animation_data.setPropertiesMoving(true);

	animpoint_sit_low_guitar_animation_data.addAnimation("into", 0, "animpoint_sit_low_guitar_in_1");
	animpoint_sit_low_guitar_animation_data.addAnimationAttachItemName("into", 0, "guitar_a");
	//    animpoint_sit_low_guitar_animation_data.addAnimationFunction("into", 0, sr_camp.start_guitar); Lord:
	//    доделать!
	animpoint_sit_low_guitar_animation_data.addAnimation("into", 0, "animpoint_sit_low_guitar_in_2");

	animpoint_sit_low_guitar_animation_data.addAnimation("into", 1, "animpoint_sit_low_guitar_in_1");
	animpoint_sit_low_guitar_animation_data.addAnimationAttachItemName("into", 1, "guitar_a");
	//    animpoint_sit_low_guitar.addAnimationFunction("into", 1, sr_camp.start_guitar); Lord:
	//    доделать!
	animpoint_sit_low_guitar_animation_data.addAnimation("into", 1, "animpoint_sit_low_guitar_in_2");

	animpoint_sit_low_guitar_animation_data.addAnimation("out", 0, "animpoint_sit_low_guitar_out_1");
	animpoint_sit_low_guitar_animation_data.addAnimationDettachItemName("out", 0, "guitar_a");
	animpoint_sit_low_guitar_animation_data.addAnimation("out", 0, "animpoint_sit_low_guitar_out_2");

	animpoint_sit_low_guitar_animation_data.addAnimation("out", 1, "animpoint_sit_low_guitar_out_1");
	animpoint_sit_low_guitar_animation_data.addAnimationDettachItemName("out", 1, "guitar_a");
	animpoint_sit_low_guitar_animation_data.addAnimation("out", 1, "animpoint_sit_low_guitar_out_2");

	animpoint_sit_low_guitar_animation_data.addAnimation("idle", 0, "animpoint_sit_low_guitar_idle_1");
	animpoint_sit_low_guitar_animation_data.addAnimation("idle", 1, "animpoint_sit_low_guitar_idle_1");

	animpoint_sit_low_guitar_animation_data.addAnimation("rnd", 0, "animpoint_sit_low_guitar_idle_rnd_2");
	animpoint_sit_low_guitar_animation_data.addAnimation("rnd", 1, "animpoint_sit_low_guitar_idle_rnd_2");

	this->m_state_manager_animation_list["animpoint_sit_low_guitar"] = animpoint_sit_low_guitar_animation_data;

	StateManagerAnimationData animpoint_stay_wall_harmonica_animation_data;
	animpoint_stay_wall_harmonica_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_wall_harmonica_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_wall_harmonica_animation_data.setPropertiesRandom(80);
	animpoint_stay_wall_harmonica_animation_data.setPropertiesMoving(true);

	animpoint_stay_wall_harmonica_animation_data.addAnimation("idle", 0, "idle_0_idle_1");
	animpoint_stay_wall_harmonica_animation_data.addAnimation("idle", 1, "idle_0_idle_1");

	animpoint_stay_wall_harmonica_animation_data.addAnimation("rnd", 0, "idle_0_idle_0");
	animpoint_stay_wall_harmonica_animation_data.addAnimation("rnd", 1, "idle_0_idle_0");

	this->m_state_manager_animation_list["animpoint_stay_wall_harmonica"] =
		animpoint_stay_wall_harmonica_animation_data;

	StateManagerAnimationData animpoint_stay_table_harmonica_animation_data;
	animpoint_stay_table_harmonica_animation_data.setPropertiesMaxIdle(5);
	animpoint_stay_table_harmonica_animation_data.setPropertiesSumIdle(3);
	animpoint_stay_table_harmonica_animation_data.setPropertiesRandom(80);
	animpoint_stay_table_harmonica_animation_data.setPropertiesMoving(true);

	animpoint_stay_table_harmonica_animation_data.addAnimation("idle", 0, "idle_0_idle_1");
	animpoint_stay_table_harmonica_animation_data.addAnimation("idle", 1, "idle_0_idle_1");

	animpoint_stay_table_harmonica_animation_data.addAnimation("rnd", 0, "idle_0_idle_0");
	animpoint_stay_table_harmonica_animation_data.addAnimation("rnd", 1, "idle_0_idle_0");

	this->m_state_manager_animation_list["animpoint_stay_table_harmonica"] =
		animpoint_stay_table_harmonica_animation_data;

	StateManagerAnimationData animpoint_sit_high_harmonica_animation_data;
	animpoint_sit_high_harmonica_animation_data.setPropertiesMaxIdle(0);
	animpoint_sit_high_harmonica_animation_data.setPropertiesSumIdle(0);
	animpoint_sit_high_harmonica_animation_data.setPropertiesRandom(100);
	animpoint_sit_high_harmonica_animation_data.setPropertiesMoving(true);

	animpoint_sit_high_harmonica_animation_data.addAnimation("into", 0, "animpoint_sit_high_harmonica_in_1");
	animpoint_sit_high_harmonica_animation_data.addAnimationAttachItemName("into", 0, "harmonica_a");
	//    animpoint_sit_high_harmonica_animation_data.addAnimationFunction("into", 0, sr_camp.start_harmonica);
	//    Lord: доделать!
	animpoint_sit_high_harmonica_animation_data.addAnimation("into", 0, "animpoint_sit_high_harmonica_in_2");

	animpoint_sit_high_harmonica_animation_data.addAnimation("into", 1, "animpoint_sit_high_harmonica_in_1");
	animpoint_sit_high_harmonica_animation_data.addAnimationAttachItemName("into", 1, "harmonica_a");
	//    animpoint_sit_low_guitar.addAnimationFunction("into", 1, sr_camp.start_harmonica); Lord:
	//    доделать!
	animpoint_sit_high_harmonica_animation_data.addAnimation("into", 1, "animpoint_sit_high_harmonica_in_2");

	animpoint_sit_high_harmonica_animation_data.addAnimation("out", 0, "animpoint_sit_high_harmonica_out_1");
	animpoint_sit_high_harmonica_animation_data.addAnimationDettachItemName("out", 0, "harmonica_a");
	animpoint_sit_high_harmonica_animation_data.addAnimation("out", 0, "animpoint_sit_high_harmonica_out_2");

	animpoint_sit_high_harmonica_animation_data.addAnimation("out", 1, "animpoint_sit_high_harmonica_out_1");
	animpoint_sit_high_harmonica_animation_data.addAnimationDettachItemName("out", 1, "harmonica_a");
	animpoint_sit_high_harmonica_animation_data.addAnimation("out", 1, "animpoint_sit_high_harmonica_out_2");

	animpoint_sit_high_harmonica_animation_data.addAnimation("idle", 0, "animpoint_sit_high_harmonica_idle_1");
	animpoint_sit_high_harmonica_animation_data.addAnimation("idle", 1, "animpoint_sit_high_harmonica_idle_1");

	this->m_state_manager_animation_list["animpoint_sit_high_harmonica"] =
		animpoint_sit_high_harmonica_animation_data;

	StateManagerAnimationData animpoint_sit_normal_harmonica_animation_data;
	animpoint_sit_normal_harmonica_animation_data.setPropertiesMaxIdle(0);
	animpoint_sit_normal_harmonica_animation_data.setPropertiesSumIdle(0);
	animpoint_sit_normal_harmonica_animation_data.setPropertiesRandom(100);
	animpoint_sit_normal_harmonica_animation_data.setPropertiesMoving(true);

	animpoint_sit_normal_harmonica_animation_data.addAnimation("idle", 0, "idle_0_idle_1");
	animpoint_sit_normal_harmonica_animation_data.addAnimation("idle", 1, "idle_0_idle_1");

	animpoint_sit_normal_harmonica_animation_data.addAnimation("rnd", 0, "idle_0_idle_0");
	animpoint_sit_normal_harmonica_animation_data.addAnimation("rnd", 1, "idle_0_idle_0");

	this->m_state_manager_animation_list["animpoint_sit_normal_harmonica"] =
		animpoint_sit_normal_harmonica_animation_data;

	StateManagerAnimationData animpoint_sit_low_harmonica_animation_data;
	animpoint_sit_low_harmonica_animation_data.setPropertiesMaxIdle(0);
	animpoint_sit_low_harmonica_animation_data.setPropertiesSumIdle(0);
	animpoint_sit_low_harmonica_animation_data.setPropertiesRandom(100);
	animpoint_sit_low_harmonica_animation_data.setPropertiesMoving(true);

	animpoint_sit_low_harmonica_animation_data.addAnimation("into", 0, "animpoint_sit_low_harmonica_in_1");
	animpoint_sit_low_harmonica_animation_data.addAnimationAttachItemName("into", 0, "harmonica_a");
	//    animpoint_sit_low_harmonica_animation_data.addAnimationFunction("into", 0, sr_camp.start_harmonica);
	//    Lord: доделать!
	animpoint_sit_low_harmonica_animation_data.addAnimation("into", 0, "animpoint_sit_low_harmonica_in_2");

	animpoint_sit_low_harmonica_animation_data.addAnimation("into", 1, "animpoint_sit_low_harmonica_in_1");
	animpoint_sit_low_harmonica_animation_data.addAnimationAttachItemName("into", 1, "harmonica_a");
	//    animpoint_sit_low_guitar.addAnimationFunction("into", 1, sr_camp.start_harmonica); Lord:
	//    доделать!
	animpoint_sit_low_harmonica_animation_data.addAnimation("into", 1, "animpoint_sit_low_harmonica_in_2");

	animpoint_sit_low_harmonica_animation_data.addAnimation("out", 0, "animpoint_sit_low_harmonica_out_1");
	animpoint_sit_low_harmonica_animation_data.addAnimationDettachItemName("out", 0, "harmonica_a");
	animpoint_sit_low_harmonica_animation_data.addAnimation("out", 0, "animpoint_sit_low_harmonica_out_2");

	animpoint_sit_low_harmonica_animation_data.addAnimation("out", 1, "animpoint_sit_low_harmonica_out_1");
	animpoint_sit_low_harmonica_animation_data.addAnimationDettachItemName("out", 1, "harmonica_a");
	animpoint_sit_low_harmonica_animation_data.addAnimation("out", 1, "animpoint_sit_low_harmonica_out_2");

	animpoint_sit_low_harmonica_animation_data.addAnimation("idle", 0, "animpoint_sit_low_harmonica_idle_1");
	animpoint_sit_low_harmonica_animation_data.addAnimation("idle", 1, "animpoint_sit_low_harmonica_idle_1");

	this->m_state_manager_animation_list["animpoint_sit_low_harmonica"] =
		animpoint_sit_low_harmonica_animation_data;

	StateManagerAnimationData animpoint_stay_wall_animstate_data;
	animpoint_stay_wall_animstate_data.setPropertiesMaxIdle(5);
	animpoint_stay_wall_animstate_data.setPropertiesSumIdle(3);
	animpoint_stay_wall_animstate_data.setPropertiesRandom(80);
	animpoint_stay_wall_animstate_data.setPropertiesMoving(true);

	animpoint_stay_wall_animstate_data.addAnimation("into", 0, "animpoint_stay_wall_in_1");
	animpoint_stay_wall_animstate_data.addAnimation("into", 1, "animpoint_stay_wall_in_1");

	animpoint_stay_wall_animstate_data.addAnimation("out", 0, "animpoint_stay_wall_out_1");
	animpoint_stay_wall_animstate_data.addAnimation("out", 1, "animpoint_stay_wall_out_1");

	animpoint_stay_wall_animstate_data.addAnimation("idle", 0, "animpoint_stay_wall_idle_1");
	animpoint_stay_wall_animstate_data.addAnimation("idle", 1, "animpoint_stay_wall_idle_1");

	animpoint_stay_wall_animstate_data.addAnimation("rnd", 0, "animpoint_stay_wall_idle_1");
	animpoint_stay_wall_animstate_data.addAnimation("rnd", 1, "animpoint_stay_wall_idle_1");

	this->m_state_manager_animationstate_list["animpoint_stay_wall"] = animpoint_stay_wall_animstate_data;

	StateManagerAnimationData animpoint_stay_table_animstate_data;
	animpoint_stay_table_animstate_data.setPropertiesMaxIdle(5);
	animpoint_stay_table_animstate_data.setPropertiesSumIdle(3);
	animpoint_stay_table_animstate_data.setPropertiesRandom(80);
	animpoint_stay_table_animstate_data.setPropertiesMoving(true);

	animpoint_stay_table_animstate_data.addAnimation("into", 0, "animpoint_stay_table_in_1");
	animpoint_stay_table_animstate_data.addAnimation("into", 1, "animpoint_stay_table_in_1");

	animpoint_stay_table_animstate_data.addAnimation("out", 0, "animpoint_stay_table_out_1");
	animpoint_stay_table_animstate_data.addAnimation("out", 1, "animpoint_stay_table_out_1");

	animpoint_stay_table_animstate_data.addAnimation("idle", 0, "animpoint_stay_table_idle_1");
	animpoint_stay_table_animstate_data.addAnimation("idle", 1, "animpoint_stay_table_idle_1");

	this->m_state_manager_animationstate_list["animpoint_stay_table"] = animpoint_stay_table_animstate_data;

	StateManagerAnimationData animpoint_sit_high_animstate_data;
	animpoint_sit_high_animstate_data.setPropertiesMaxIdle(5);
	animpoint_sit_high_animstate_data.setPropertiesSumIdle(3);
	animpoint_sit_high_animstate_data.setPropertiesRandom(80);
	animpoint_sit_high_animstate_data.setPropertiesMoving(true);

	animpoint_sit_high_animstate_data.addAnimation("into", 0, "animpoint_sit_high_in_1");
	animpoint_sit_high_animstate_data.addAnimation("into", 1, "animpoint_sit_high_in_1");

	animpoint_sit_high_animstate_data.addAnimation("out", 0, "animpoint_sit_high_out_1");
	animpoint_sit_high_animstate_data.addAnimation("out", 1, "animpoint_sit_high_out_1");

	animpoint_sit_high_animstate_data.addAnimation("idle", 0, "animpoint_sit_high_idle_1");
	animpoint_sit_high_animstate_data.addAnimation("idle", 1, "animpoint_sit_high_idle_1");

	this->m_state_manager_animationstate_list["animpoint_sit_high"] = animpoint_sit_high_animstate_data;

	StateManagerAnimationData animpoint_sit_normal_animstate_data;
	animpoint_sit_normal_animstate_data.setPropertiesMaxIdle(5);
	animpoint_sit_normal_animstate_data.setPropertiesSumIdle(3);
	animpoint_sit_normal_animstate_data.setPropertiesRandom(80);
	animpoint_sit_normal_animstate_data.setPropertiesMoving(true);

	animpoint_sit_normal_animstate_data.addAnimation("into", 0, "animpoint_sit_normal_in_1");
	animpoint_sit_normal_animstate_data.addAnimation("into", 1, "animpoint_sit_normal_in_1");

	animpoint_sit_normal_animstate_data.addAnimation("out", 0, "animpoint_sit_normal_out_1");
	animpoint_sit_normal_animstate_data.addAnimation("out", 1, "animpoint_sit_normal_out_1");

	animpoint_sit_normal_animstate_data.addAnimation("idle", 0, "animpoint_sit_normal_idle_1");
	animpoint_sit_normal_animstate_data.addAnimation("idle", 1, "animpoint_sit_normal_idle_1");

	this->m_state_manager_animationstate_list["animpoint_sit_normal"] = animpoint_sit_normal_animstate_data;

	StateManagerAnimationData animpoint_sit_low_animstate_data;
	animpoint_sit_low_animstate_data.setPropertiesMaxIdle(5);
	animpoint_sit_low_animstate_data.setPropertiesSumIdle(3);
	animpoint_sit_low_animstate_data.setPropertiesRandom(80);
	animpoint_sit_low_animstate_data.setPropertiesMoving(true);

	animpoint_sit_low_animstate_data.addAnimation("into", 0, "animpoint_sit_low_in_1");
	animpoint_sit_low_animstate_data.addAnimation("into", 1, "animpoint_sit_low_in_1");

	animpoint_sit_low_animstate_data.addAnimation("out", 0, "animpoint_sit_low_out_1");
	animpoint_sit_low_animstate_data.addAnimation("out", 1, "animpoint_sit_low_out_1");

	animpoint_sit_low_animstate_data.addAnimation("idle", 0, "animpoint_sit_low_idle_1");
	animpoint_sit_low_animstate_data.addAnimation("idle", 1, "animpoint_sit_low_idle_1");

	this->m_state_manager_animationstate_list["animpoint_sit_low"] = animpoint_sit_low_animstate_data;

	StateManagerAnimationData animpoint_stay_wall_weapon_animstate_data;
	animpoint_stay_wall_weapon_animstate_data.setPropertiesMaxIdle(5);
	animpoint_stay_wall_weapon_animstate_data.setPropertiesSumIdle(3);
	animpoint_stay_wall_weapon_animstate_data.setPropertiesRandom(80);
	animpoint_stay_wall_weapon_animstate_data.setPropertiesMoving(true);

	animpoint_stay_wall_weapon_animstate_data.addAnimation("into", 0, "animpoint_stay_wall_weapon_in_1");
	animpoint_stay_wall_weapon_animstate_data.addAnimation("into", 1, "animpoint_stay_wall_weapon_in_1");

	animpoint_stay_wall_weapon_animstate_data.addAnimation("out", 0, "animpoint_stay_wall_weapon_out_1");
	animpoint_stay_wall_weapon_animstate_data.addAnimation("out", 1, "animpoint_stay_wall_weapon_out_1");

	animpoint_stay_wall_weapon_animstate_data.addAnimation("idle", 0, "animpoint_stay_wall_weapon_idle_1");
	animpoint_stay_wall_weapon_animstate_data.addAnimation("idle", 1, "animpoint_stay_wall_weapon_idle_1");

	animpoint_stay_wall_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_stay_wall_weapon_idle_rnd_1");
	animpoint_stay_wall_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_stay_wall_weapon_idle_rnd_2");
	animpoint_stay_wall_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_stay_wall_weapon_idle_rnd_3");
	animpoint_stay_wall_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_stay_wall_weapon_idle_rnd_4");

	animpoint_stay_wall_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_stay_wall_weapon_idle_rnd_1");
	animpoint_stay_wall_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_stay_wall_weapon_idle_rnd_2");
	animpoint_stay_wall_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_stay_wall_weapon_idle_rnd_3");
	animpoint_stay_wall_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_stay_wall_weapon_idle_rnd_4");

	this->m_state_manager_animationstate_list["animpoint_stay_wall_weapon"] =
		animpoint_stay_wall_weapon_animstate_data;

	StateManagerAnimationData animpoint_stay_table_weapon_animstate_data;
	animpoint_stay_table_weapon_animstate_data.setPropertiesMaxIdle(5);
	animpoint_stay_table_weapon_animstate_data.setPropertiesSumIdle(3);
	animpoint_stay_table_weapon_animstate_data.setPropertiesRandom(80);
	animpoint_stay_table_weapon_animstate_data.setPropertiesMoving(true);

	animpoint_stay_table_weapon_animstate_data.addAnimation("into", 0, "animpoint_stay_table_weapon_in_1");
	animpoint_stay_table_weapon_animstate_data.addAnimation("into", 1, "animpoint_stay_table_weapon_in_1");

	animpoint_stay_table_weapon_animstate_data.addAnimation("out", 0, "animpoint_stay_table_weapon_out_1");
	animpoint_stay_table_weapon_animstate_data.addAnimation("out", 1, "animpoint_stay_table_weapon_out_1");

	animpoint_stay_table_weapon_animstate_data.addAnimation("idle", 0, "animpoint_stay_table_weapon_idle_1");
	animpoint_stay_table_weapon_animstate_data.addAnimation("idle", 1, "animpoint_stay_table_weapon_idle_1");

	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_stay_table_weapon_idle_rnd_1");
	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_stay_table_weapon_idle_rnd_2");
	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_stay_table_weapon_idle_rnd_3");
	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_stay_table_weapon_idle_rnd_4");
	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_stay_table_weapon_idle_rnd_5");
	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_stay_table_weapon_idle_rnd_6");

	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_stay_table_weapon_idle_rnd_1");
	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_stay_table_weapon_idle_rnd_2");
	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_stay_table_weapon_idle_rnd_3");
	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_stay_table_weapon_idle_rnd_4");
	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_stay_table_weapon_idle_rnd_5");
	animpoint_stay_table_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_stay_table_weapon_idle_rnd_6");

	this->m_state_manager_animationstate_list["animpoint_stay_table_weapon"] =
		animpoint_stay_table_weapon_animstate_data;

	StateManagerAnimationData animpoint_sit_high_weapon_animstate_data;
	animpoint_sit_high_weapon_animstate_data.setPropertiesMaxIdle(5);
	animpoint_sit_high_weapon_animstate_data.setPropertiesSumIdle(3);
	animpoint_sit_high_weapon_animstate_data.setPropertiesRandom(80);
	animpoint_sit_high_weapon_animstate_data.setPropertiesMoving(true);

	animpoint_sit_high_weapon_animstate_data.addAnimation("into", 0, "animpoint_sit_high_weapon_in_1");
	animpoint_sit_high_weapon_animstate_data.addAnimation("into", 1, "animpoint_sit_high_weapon_in_1");

	animpoint_sit_high_weapon_animstate_data.addAnimation("out", 0, "animpoint_sit_high_weapon_out_1");
	animpoint_sit_high_weapon_animstate_data.addAnimation("out", 1, "animpoint_sit_high_weapon_out_1");

	animpoint_sit_high_weapon_animstate_data.addAnimation("idle", 0, "animpoint_sit_high_weapon_idle_1");
	animpoint_sit_high_weapon_animstate_data.addAnimation("idle", 1, "animpoint_sit_high_weapon_idle_1");

	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_high_weapon_idle_rnd_1");
	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_high_weapon_idle_rnd_2");
	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_high_weapon_idle_rnd_3");
	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_high_weapon_idle_rnd_4");
	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_high_weapon_idle_rnd_5");
	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_high_weapon_idle_rnd_6");

	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_high_weapon_idle_rnd_1");
	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_high_weapon_idle_rnd_2");
	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_high_weapon_idle_rnd_3");
	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_high_weapon_idle_rnd_4");
	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_high_weapon_idle_rnd_5");
	animpoint_sit_high_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_high_weapon_idle_rnd_6");

	this->m_state_manager_animationstate_list["animpoint_sit_high_weapon"] =
		animpoint_sit_high_weapon_animstate_data;

	StateManagerAnimationData animpoint_sit_normal_weapon_animstate_data;
	animpoint_sit_normal_weapon_animstate_data.setPropertiesMaxIdle(5);
	animpoint_sit_normal_weapon_animstate_data.setPropertiesSumIdle(3);
	animpoint_sit_normal_weapon_animstate_data.setPropertiesRandom(80);
	animpoint_sit_normal_weapon_animstate_data.setPropertiesMoving(true);

	animpoint_sit_normal_weapon_animstate_data.addAnimation("into", 0, "animpoint_sit_normal_weapon_in_1");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("into", 1, "animpoint_sit_normal_weapon_in_1");

	animpoint_sit_normal_weapon_animstate_data.addAnimation("out", 0, "animpoint_sit_normal_weapon_out_1");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("out", 1, "animpoint_sit_normal_weapon_out_1");

	animpoint_sit_normal_weapon_animstate_data.addAnimation("idle", 0, "animpoint_sit_normal_weapon_idle_1");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("idle", 1, "animpoint_sit_normal_weapon_idle_1");

	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_normal_weapon_idle_rnd_1");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_normal_weapon_idle_rnd_2");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_normal_weapon_idle_rnd_3");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_normal_weapon_idle_rnd_4");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_normal_weapon_idle_rnd_5");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_normal_weapon_idle_rnd_6");

	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_normal_weapon_idle_rnd_1");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_normal_weapon_idle_rnd_2");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_normal_weapon_idle_rnd_3");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_normal_weapon_idle_rnd_4");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_normal_weapon_idle_rnd_5");
	animpoint_sit_normal_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_normal_weapon_idle_rnd_6");

	this->m_state_manager_animationstate_list["animpoint_sit_normal_weapon"] =
		animpoint_sit_normal_weapon_animstate_data;

	StateManagerAnimationData animpoint_sit_low_weapon_animstate_data;
	animpoint_sit_low_weapon_animstate_data.setPropertiesMaxIdle(5);
	animpoint_sit_low_weapon_animstate_data.setPropertiesSumIdle(3);
	animpoint_sit_low_weapon_animstate_data.setPropertiesRandom(80);
	animpoint_sit_low_weapon_animstate_data.setPropertiesMoving(true);

	animpoint_sit_low_weapon_animstate_data.addAnimation("into", 0, "animpoint_sit_low_weapon_in_1");
	animpoint_sit_low_weapon_animstate_data.addAnimation("into", 1, "animpoint_sit_low_weapon_in_1");

	animpoint_sit_low_weapon_animstate_data.addAnimation("out", 0, "animpoint_sit_low_weapon_out_1");
	animpoint_sit_low_weapon_animstate_data.addAnimation("out", 1, "animpoint_sit_low_weapon_out_1");

	animpoint_sit_low_weapon_animstate_data.addAnimation("idle", 0, "animpoint_sit_low_weapon_idle_1");
	animpoint_sit_low_weapon_animstate_data.addAnimation("idle", 1, "animpoint_sit_low_weapon_idle_1");

	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_low_weapon_idle_rnd_1");
	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_low_weapon_idle_rnd_2");
	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_low_weapon_idle_rnd_3");
	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_low_weapon_idle_rnd_4");
	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_low_weapon_idle_rnd_5");
	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 0, "animpoint_sit_low_weapon_idle_rnd_6");

	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_low_weapon_idle_rnd_1");
	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_low_weapon_idle_rnd_2");
	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_low_weapon_idle_rnd_3");
	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_low_weapon_idle_rnd_4");
	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_low_weapon_idle_rnd_5");
	animpoint_sit_low_weapon_animstate_data.addAnimation("rnd", 1, "animpoint_sit_low_weapon_idle_rnd_6");

	this->m_state_manager_animationstate_list["animpoint_sit_low_weapon"] = animpoint_sit_low_weapon_animstate_data;
}

void Cordis::Scripts::Script_GlobalHelper::initialize_StateLib_Zaton(void)
{
	StateManagerAnimationData zat_b14_give_artefact_idle_animation_data;
	zat_b14_give_artefact_idle_animation_data.setPropertiesMaxIdle(1);
	zat_b14_give_artefact_idle_animation_data.setPropertiesSumIdle(4);
	zat_b14_give_artefact_idle_animation_data.setPropertiesRandom(100);

	zat_b14_give_artefact_idle_animation_data.addAnimation("into", 0, "zat_b14_give_artefact_ible");
	zat_b14_give_artefact_idle_animation_data.addAnimationAttachItemName("into", 0, "af_quest_b14_twisted");

	zat_b14_give_artefact_idle_animation_data.addAnimation("idle", 0, "zat_b14_give_artefact_ible");

	this->m_state_manager_animation_list["zat_b14_give_artefact_idle"] = zat_b14_give_artefact_idle_animation_data;

	StateManagerAnimationData zat_b14_give_artefact_act_animation_data;
	zat_b14_give_artefact_act_animation_data.setPropertiesMaxIdle(1);
	zat_b14_give_artefact_act_animation_data.setPropertiesSumIdle(1);
	zat_b14_give_artefact_act_animation_data.setPropertiesRandom(100);

	zat_b14_give_artefact_act_animation_data.addAnimation("into", 0, "zat_b14_give_artefact_in");
	zat_b14_give_artefact_act_animation_data.addAnimationDettachItemName("into", 0, "af_quest_b14_twisted");
	zat_b14_give_artefact_act_animation_data.addAnimation("into", 0, "zat_b14_give_artefact_out");

	this->m_state_manager_animation_list["zat_b14_give_artefact_act"] = zat_b14_give_artefact_act_animation_data;

	StateManagerAnimationData zat_b14_stay_wall_animation_data;
	zat_b14_stay_wall_animation_data.setPropertiesRandom(100);
	zat_b14_stay_wall_animation_data.setPropertiesMoving(true);
	zat_b14_stay_wall_animation_data.setPropertiesMaxIdle(1);
	zat_b14_stay_wall_animation_data.setPropertiesSumIdle(1);

	zat_b14_stay_wall_animation_data.addAnimation("into", 0, "animpoint_stay_wall_in_1");
	zat_b14_stay_wall_animation_data.addAnimation("out", 0, "animpoint_stay_wall_out_1");
	zat_b14_stay_wall_animation_data.addAnimation("idle", 0, "animpoint_stay_wall_idle_1");

	this->m_state_manager_animation_list["zat_b14_stay_wall"] = zat_b14_stay_wall_animation_data;

	StateManagerAnimationData zat_b38_stalker_break_lock_animation_data;
	zat_b38_stalker_break_lock_animation_data.setPropertiesMaxIdle(1);
	zat_b38_stalker_break_lock_animation_data.setPropertiesSumIdle(1);
	zat_b38_stalker_break_lock_animation_data.setPropertiesRandom(100);
	zat_b38_stalker_break_lock_animation_data.setPropertiesMoving(true);

	zat_b38_stalker_break_lock_animation_data.addAnimation("into", 0, "zat_b38_stalker_break_lock");
	zat_b38_stalker_break_lock_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::zat_b38_underground_door_open);

	this->m_state_manager_animation_list["zat_b38_stalker_break_lock"] = zat_b38_stalker_break_lock_animation_data;

	StateManagerAnimationData zat_b38_stalker_turn_on_lift_animation_data;
	zat_b38_stalker_turn_on_lift_animation_data.setPropertiesMaxIdle(1);
	zat_b38_stalker_turn_on_lift_animation_data.setPropertiesSumIdle(1);
	zat_b38_stalker_turn_on_lift_animation_data.setPropertiesMoving(true);
	zat_b38_stalker_turn_on_lift_animation_data.setPropertiesRandom(100);

	zat_b38_stalker_turn_on_lift_animation_data.addAnimation("into", 0, "zat_b38_stalker_jump_lift_in_1");
	zat_b38_stalker_turn_on_lift_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::zat_b38_open_info);
	zat_b38_stalker_turn_on_lift_animation_data.addAnimation("into", 0, "zat_b38_stalker_jump_lift_in_2");
	zat_b38_stalker_turn_on_lift_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::zat_b38_switch_info);
	zat_b38_stalker_turn_on_lift_animation_data.addAnimation("into", 0, "zat_b38_stalker_jump_lift_in_3");
	zat_b38_stalker_turn_on_lift_animation_data.addAnimation("into", 0, "zat_b38_stalker_jump_lift_idle");
	zat_b38_stalker_turn_on_lift_animation_data.addAnimation("into", 0, "zat_b38_stalker_jump_lift_out");

	this->m_state_manager_animation_list["zat_b38_stalker_turn_on_lift"] =
		zat_b38_stalker_turn_on_lift_animation_data;

	StateManagerAnimationData zat_b38_stalker_jump_tonnel_animation_data;
	zat_b38_stalker_jump_tonnel_animation_data.setPropertiesMaxIdle(1);
	zat_b38_stalker_jump_tonnel_animation_data.setPropertiesSumIdle(1);
	zat_b38_stalker_jump_tonnel_animation_data.setPropertiesRandom(100);
	zat_b38_stalker_jump_tonnel_animation_data.setPropertiesMoving(true);

	zat_b38_stalker_jump_tonnel_animation_data.addAnimation("into", 0, "zat_b38_stalker_jump_tonnel");
	zat_b38_stalker_jump_tonnel_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::zat_b38_jump_tonnel_info);

	this->m_state_manager_animation_list["zat_b38_stalker_jump_tonnel"] =
		zat_b38_stalker_jump_tonnel_animation_data;

	StateManagerAnimationData zat_b20_noah_jump_animation_data;
	zat_b20_noah_jump_animation_data.setPropertiesMaxIdle(1);
	zat_b20_noah_jump_animation_data.setPropertiesSumIdle(1);
	zat_b20_noah_jump_animation_data.setPropertiesMoving(true);
	zat_b20_noah_jump_animation_data.setPropertiesRandom(100);

	zat_b20_noah_jump_animation_data.addAnimation("into", 0, "zat_b20_noah_jump");

	this->m_state_manager_animation_list["zat_b20_noah_jump"] = zat_b20_noah_jump_animation_data;

	StateManagerAnimationData zat_b38_stalker_alert_animation_data;
	zat_b38_stalker_alert_animation_data.setPropertiesMaxIdle(1);
	zat_b38_stalker_alert_animation_data.setPropertiesSumIdle(1);
	zat_b38_stalker_alert_animation_data.setPropertiesRandom(100);
	zat_b38_stalker_alert_animation_data.setPropertiesMoving(true);

	zat_b38_stalker_alert_animation_data.addAnimation("into", 0, "zat_b38_stalker_alert");
	zat_b38_stalker_alert_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::pri_a17_ice_climb_end);

	this->m_state_manager_animation_list["zat_b38_stalker_alert"] = zat_b38_stalker_alert_animation_data;

	StateManagerAnimationData zat_b106_wounded_idle_animation_data;
	zat_b106_wounded_idle_animation_data.setPropertiesMaxIdle(1);
	zat_b106_wounded_idle_animation_data.setPropertiesSumIdle(1);
	zat_b106_wounded_idle_animation_data.setPropertiesMoving(true);
	zat_b106_wounded_idle_animation_data.setPropertiesRandom(100);

	zat_b106_wounded_idle_animation_data.addAnimation("idle", 0, "cut_scene_0_actor_1");

	this->m_state_manager_animation_list["zat_b106_wounded_idle"] = zat_b106_wounded_idle_animation_data;

	StateManagerAnimationData zat_b38_cop_dead_animation_data;
	zat_b38_cop_dead_animation_data.setPropertiesMaxIdle(1);
	zat_b38_cop_dead_animation_data.setPropertiesSumIdle(1);
	zat_b38_cop_dead_animation_data.setPropertiesMoving(true);
	zat_b38_cop_dead_animation_data.setPropertiesRandom(100);

	zat_b38_cop_dead_animation_data.addAnimation("into", 0, "cut_scene_0_actor");
	zat_b38_cop_dead_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::zat_b38_cop_dead);

	zat_b38_cop_dead_animation_data.addAnimation("idle", 0, "cut_scene_0_actor");

	this->m_state_manager_animation_list["zat_b38_cop_dead"] = zat_b38_cop_dead_animation_data;

	StateManagerAnimationData zat_b100_heli_2_serch_animation_data;
	zat_b100_heli_2_serch_animation_data.setPropertiesMaxIdle(1);
	zat_b100_heli_2_serch_animation_data.setPropertiesSumIdle(1);
	zat_b100_heli_2_serch_animation_data.setPropertiesRandom(100);

	zat_b100_heli_2_serch_animation_data.addAnimationAttachItemName("into", 0, "device_pda");
	zat_b100_heli_2_serch_animation_data.addAnimation("into", 0, "zat_b100_heli_2_serch");

	zat_b100_heli_2_serch_animation_data.addAnimation("idle", 0, "zat_b100_heli_2_serch");

	this->m_state_manager_animation_list["zat_b100_heli_2_serch"] = zat_b100_heli_2_serch_animation_data;

	StateManagerAnimationData zat_b101_heli_5_serch_animation_data;
	zat_b101_heli_5_serch_animation_data.setPropertiesMaxIdle(1);
	zat_b101_heli_5_serch_animation_data.setPropertiesSumIdle(1);
	zat_b101_heli_5_serch_animation_data.setPropertiesRandom(100);

	zat_b101_heli_5_serch_animation_data.addAnimationAttachItemName("into", 0, "device_pda");
	zat_b101_heli_5_serch_animation_data.addAnimation("into", 0, "zat_b101_heli_5_serch");

	zat_b101_heli_5_serch_animation_data.addAnimation("idle", 0, "zat_b101_heli_5_serch");

	this->m_state_manager_animation_list["zat_b101_heli_5_serch"] = zat_b101_heli_5_serch_animation_data;

	StateManagerAnimationData zat_b28_heli3_serch_animation_data;
	zat_b28_heli3_serch_animation_data.setPropertiesMaxIdle(1);
	zat_b28_heli3_serch_animation_data.setPropertiesSumIdle(1);
	zat_b28_heli3_serch_animation_data.setPropertiesRandom(100);

	zat_b28_heli3_serch_animation_data.addAnimationAttachItemName("into", 0, "device_pda");
	zat_b28_heli3_serch_animation_data.addAnimation("into", 0, "zat_b28_heli3_serch");

	zat_b28_heli3_serch_animation_data.addAnimation("idle", 0, "zat_b28_heli3_serch");

	this->m_state_manager_animation_list["zat_b28_heli3_serch"] = zat_b28_heli3_serch_animation_data;

	StateManagerAnimationData zat_b3_tech_idle_animstate_data;
	zat_b3_tech_idle_animstate_data.setPropertiesMaxIdle(1);
	zat_b3_tech_idle_animstate_data.setPropertiesSumIdle(1);
	zat_b3_tech_idle_animstate_data.setPropertiesRandom(100);
	zat_b3_tech_idle_animstate_data.setPropertiesMoving(true);

	zat_b3_tech_idle_animstate_data.addAnimation("idle", 0, "zat_b3_tech_idle");
	zat_b3_tech_idle_animstate_data.addAnimation("idle", 1, "zat_b3_tech_idle");

	this->m_state_manager_animationstate_list["zat_b3_tech_idle"] = zat_b3_tech_idle_animstate_data;

	StateManagerAnimationData zat_b22_medic_turn_idle_animstate_data;
	zat_b22_medic_turn_idle_animstate_data.setPropertiesMaxIdle(1);
	zat_b22_medic_turn_idle_animstate_data.setPropertiesSumIdle(1);
	zat_b22_medic_turn_idle_animstate_data.setPropertiesRandom(100);
	zat_b22_medic_turn_idle_animstate_data.setPropertiesMoving(true);

	zat_b22_medic_turn_idle_animstate_data.addAnimation("idle", 0, "zat_b22_medic_turn_idle");
	zat_b22_medic_turn_idle_animstate_data.addAnimation("idle", 1, "zat_b22_medic_turn_idle");

	this->m_state_manager_animationstate_list["zat_b22_medic_turn_idle"] = zat_b22_medic_turn_idle_animstate_data;

	StateManagerAnimationData zat_b22_medic_turn_idle_animation_data;
	zat_b22_medic_turn_idle_animation_data.setPropertiesMaxIdle(1);
	zat_b22_medic_turn_idle_animation_data.setPropertiesSumIdle(1);
	zat_b22_medic_turn_idle_animation_data.setPropertiesMoving(true);

	zat_b22_medic_turn_idle_animation_data.addAnimation("idle", 0, "zat_b22_medic_turn_idle");

	this->m_state_manager_animation_list["zat_b22_medic_turn_idle"] = zat_b22_medic_turn_idle_animation_data;

	StateManagerAnimationData zat_b22_medic_turn_out_animation_data;
	zat_b22_medic_turn_out_animation_data.setPropertiesMaxIdle(1);
	zat_b22_medic_turn_out_animation_data.setPropertiesSumIdle(1);
	zat_b22_medic_turn_out_animation_data.setPropertiesMoving(true);

	zat_b22_medic_turn_out_animation_data.addAnimation("into", 0, "zat_b22_medic_turn_out");

	this->m_state_manager_animation_list["zat_b22_medic_turn_out"] = zat_b22_medic_turn_out_animation_data;

	StateManagerAnimationData zat_b22_medic_suicide_animation_data;
	zat_b22_medic_suicide_animation_data.setPropertiesMaxIdle(1);
	zat_b22_medic_suicide_animation_data.setPropertiesSumIdle(1);
	zat_b22_medic_suicide_animation_data.setPropertiesMoving(true);

	zat_b22_medic_suicide_animation_data.addAnimation("into", 0, "zat_b22_medic_suicide_in");
	zat_b22_medic_suicide_animation_data.addAnimation("idle", 0, "zat_b22_medic_suicide_idle");

	this->m_state_manager_animation_list["zat_b22_medic_suicide"] = zat_b22_medic_suicide_animation_data;

	StateManagerAnimationData zat_b3_tech_drunk_animation_data;
	zat_b3_tech_drunk_animation_data.setPropertiesMaxIdle(1);
	zat_b3_tech_drunk_animation_data.setPropertiesSumIdle(1);
	zat_b3_tech_drunk_animation_data.setPropertiesRandom(100);
	zat_b3_tech_drunk_animation_data.setPropertiesMoving(true);

	zat_b3_tech_drunk_animation_data.addAnimation("into", 0, "zat_b3_tech_drunk_in");

	zat_b3_tech_drunk_animation_data.addAnimation("out", 0, "zat_b3_tech_drunk_out");
	zat_b3_tech_drunk_animation_data.addAnimationFunction("out", 0, XR_EFFECTS::zat_b3_tech_waked_up);

	zat_b3_tech_drunk_animation_data.addAnimation("idle", 0, "zat_b3_tech_drunk_idle");

	this->m_state_manager_animation_list["zat_b3_tech_drunk"] = zat_b3_tech_drunk_animation_data;

	StateManagerAnimationData zat_b3_tech_idle_1_animation_data;
	zat_b3_tech_idle_1_animation_data.setPropertiesMaxIdle(1);
	zat_b3_tech_idle_1_animation_data.setPropertiesSumIdle(1);
	zat_b3_tech_idle_1_animation_data.setPropertiesRandom(100);
	zat_b3_tech_idle_1_animation_data.setPropertiesMoving(true);

	zat_b3_tech_idle_1_animation_data.addAnimation("idle", 0, "zat_b3_tech_idle_1");

	this->m_state_manager_animation_list["zat_b3_tech_idle_1"] = zat_b3_tech_idle_1_animation_data;

	StateManagerAnimationData zat_b3_tech_surprise_animation_data;
	zat_b3_tech_surprise_animation_data.setPropertiesMaxIdle(1);
	zat_b3_tech_surprise_animation_data.setPropertiesSumIdle(1);
	zat_b3_tech_surprise_animation_data.setPropertiesRandom(100);
	zat_b3_tech_surprise_animation_data.setPropertiesMoving(true);

	zat_b3_tech_surprise_animation_data.addAnimation("into", 0, "zat_b3_tech_surprise");
	zat_b3_tech_surprise_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::zat_b3_tech_surprise_anim_end);

	zat_b3_tech_surprise_animation_data.addAnimation("out", 0, "zat_b3_tech_drunk_idle");
	zat_b3_tech_surprise_animation_data.addAnimation("idle", 0, "zat_b3_tech_drunk_idle");

	this->m_state_manager_animation_list["zat_b3_tech_surprise"] = zat_b3_tech_surprise_animation_data;

	StateManagerAnimationData zat_b3_tech_drink_animation_data;
	zat_b3_tech_drink_animation_data.setPropertiesMaxIdle(1);
	zat_b3_tech_drink_animation_data.setPropertiesSumIdle(1);
	zat_b3_tech_drink_animation_data.setPropertiesMoving(true);
	zat_b3_tech_drink_animation_data.setPropertiesRandom(100);

	zat_b3_tech_drink_animation_data.addAnimation("into", 0, "zat_b3_tech_drink_in");
	zat_b3_tech_drink_animation_data.addAnimationAttachItemName("into", 0, "vodka");

	zat_b3_tech_drink_animation_data.addAnimationDettachItemName("out", 0, "vodka");
	zat_b3_tech_drink_animation_data.addAnimation("out", 0, "zat_b3_tech_drink_out");
	zat_b3_tech_drink_animation_data.addAnimationFunction("out", 0, XR_EFFECTS::zat_b3_tech_drinked_out);

	zat_b3_tech_drink_animation_data.addAnimation("idle", 0, "zat_b3_tech_drink_idle");

	this->m_state_manager_animation_list["zat_b3_tech_drink"] = zat_b3_tech_drink_animation_data;
}

void Cordis::Scripts::Script_GlobalHelper::initialize_StateLib_Jupiter(void)
{
	StateManagerAnimationData jup_b15_zulus_sit_drink_animation_data;
	jup_b15_zulus_sit_drink_animation_data.setPropertiesMaxIdle(1);
	jup_b15_zulus_sit_drink_animation_data.setPropertiesSumIdle(1);
	jup_b15_zulus_sit_drink_animation_data.setPropertiesMoving(true);
	jup_b15_zulus_sit_drink_animation_data.setPropertiesRandom(100);

	jup_b15_zulus_sit_drink_animation_data.addAnimation("into", 0, "jup_b15_zulus_sit_drink_in");
	jup_b15_zulus_sit_drink_animation_data.addAnimationAttachItemName("into", 0, "vodka");
	jup_b15_zulus_sit_drink_animation_data.addAnimation("into", 0, "jup_b15_zulus_sit_drink_idle");
	jup_b15_zulus_sit_drink_animation_data.addAnimationDettachItemName("into", 0, "vodka");
	jup_b15_zulus_sit_drink_animation_data.addAnimation("into", 0, "jup_b15_zulus_sit_drink_out");
	jup_b15_zulus_sit_drink_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::jup_b15_zulus_drink_anim_info);

	jup_b15_zulus_sit_drink_animation_data.addAnimation("idle", 0, "jup_b15_zulus_sit_idle_short");

	this->m_state_manager_animation_list["jup_b15_zulus_sit_drink"] = jup_b15_zulus_sit_drink_animation_data;

	StateManagerAnimationData jup_b15_zulus_sit_idle_animation_data;
	jup_b15_zulus_sit_idle_animation_data.setPropertiesMaxIdle(1);
	jup_b15_zulus_sit_idle_animation_data.setPropertiesSumIdle(1);
	jup_b15_zulus_sit_idle_animation_data.setPropertiesMoving(true);
	jup_b15_zulus_sit_idle_animation_data.setPropertiesRandom(100);

	jup_b15_zulus_sit_idle_animation_data.addAnimation("idle", 0, "jup_b15_zulus_sit_idle");

	this->m_state_manager_animation_list["jup_b15_zulus_sit_idle"] = jup_b15_zulus_sit_idle_animation_data;

	StateManagerAnimationData jup_b15_zulus_sit_idle_short_animation_data;
	jup_b15_zulus_sit_idle_short_animation_data.setPropertiesMaxIdle(1);
	jup_b15_zulus_sit_idle_short_animation_data.setPropertiesSumIdle(1);
	jup_b15_zulus_sit_idle_short_animation_data.setPropertiesMoving(true);
	jup_b15_zulus_sit_idle_short_animation_data.setPropertiesRandom(100);

	jup_b15_zulus_sit_idle_short_animation_data.addAnimation("idle", 0, "jup_b15_zulus_sit_idle_short");

	this->m_state_manager_animation_list["jup_b15_zulus_sit_idle_short"] =
		jup_b15_zulus_sit_idle_short_animation_data;

	StateManagerAnimationData jup_b15_zulus_sit_out_animation_data;
	jup_b15_zulus_sit_out_animation_data.setPropertiesMaxIdle(1);
	jup_b15_zulus_sit_out_animation_data.setPropertiesSumIdle(1);
	jup_b15_zulus_sit_out_animation_data.setPropertiesMoving(true);
	jup_b15_zulus_sit_out_animation_data.setPropertiesRandom(100);

	jup_b15_zulus_sit_out_animation_data.addAnimation("idle", 0, "jup_b15_zulus_sit_out");

	this->m_state_manager_animation_list["jup_b15_zulus_sit_out"] = jup_b15_zulus_sit_out_animation_data;

	StateManagerAnimationData jup_b219_actor_one_animation_data;
	jup_b219_actor_one_animation_data.setPropertiesMaxIdle(1);
	jup_b219_actor_one_animation_data.setPropertiesSumIdle(1);
	jup_b219_actor_one_animation_data.setPropertiesMoving(true);
	jup_b219_actor_one_animation_data.setPropertiesRandom(100);

	jup_b219_actor_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_actor_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_actor_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_actor_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_actor_one_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_ready");
	jup_b219_actor_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_actor_one_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::jup_b219_opening);
	jup_b219_actor_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_actor_one_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_go");
	jup_b219_actor_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	jup_b219_actor_one_animation_data.addAnimation("into", 1, "jup_b219_descent_actor_1");
	jup_b219_actor_one_animation_data.addAnimation("into", 1, "jup_b219_descent_actor_2");
	jup_b219_actor_one_animation_data.addAnimation("into", 1, "jup_b219_descent_actor_3");
	jup_b219_actor_one_animation_data.addAnimation("into", 1, "jup_b219_descent_actor_4");
	jup_b219_actor_one_animation_data.addAnimationSoundName("into", 1, "jup_b219_actor_ready");
	jup_b219_actor_one_animation_data.addAnimation("into", 1, "jup_b219_descent_actor_8");
	jup_b219_actor_one_animation_data.addAnimationFunction("into", 1, XR_EFFECTS::jup_b219_opening);
	jup_b219_actor_one_animation_data.addAnimation("into", 1, "jup_b219_descent_actor_9");
	jup_b219_actor_one_animation_data.addAnimationSoundName("into", 1, "jup_b219_actor_go");
	jup_b219_actor_one_animation_data.addAnimation("into", 1, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_actor_one"] = jup_b219_actor_one_animation_data;

	StateManagerAnimationData jup_b219_actor_one_vano_animation_data;
	jup_b219_actor_one_vano_animation_data.setPropertiesMaxIdle(1);
	jup_b219_actor_one_vano_animation_data.setPropertiesSumIdle(1);
	jup_b219_actor_one_vano_animation_data.setPropertiesMoving(true);
	jup_b219_actor_one_vano_animation_data.setPropertiesRandom(100);

	jup_b219_actor_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_actor_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_actor_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_actor_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_actor_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_5");
	jup_b219_actor_one_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_ready");
	jup_b219_actor_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_actor_one_vano_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::jup_b219_opening);
	jup_b219_actor_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_actor_one_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_go");
	jup_b219_actor_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_actor_one_vano"] = jup_b219_actor_one_vano_animation_data;

	StateManagerAnimationData jup_b219_actor_one_monolith_animation_data;
	jup_b219_actor_one_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_actor_one_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_actor_one_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_actor_one_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_actor_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_actor_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_actor_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_actor_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_actor_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_6");
	jup_b219_actor_one_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_ready");
	jup_b219_actor_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_actor_one_monolith_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::jup_b219_opening);
	jup_b219_actor_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_actor_one_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_go");
	jup_b219_actor_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_actor_one_monolith"] =
		jup_b219_actor_one_monolith_animation_data;

	StateManagerAnimationData jup_b219_actor_one_soldier_animation_data;
	jup_b219_actor_one_soldier_animation_data.setPropertiesMaxIdle(1);
	jup_b219_actor_one_soldier_animation_data.setPropertiesSumIdle(1);
	jup_b219_actor_one_soldier_animation_data.setPropertiesMoving(true);
	jup_b219_actor_one_soldier_animation_data.setPropertiesRandom(100);

	jup_b219_actor_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_actor_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_actor_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_actor_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_actor_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_7");
	jup_b219_actor_one_soldier_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_ready");
	jup_b219_actor_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_actor_one_soldier_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::jup_b219_opening);
	jup_b219_actor_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_actor_one_soldier_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_go");
	jup_b219_actor_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_actor_one_soldier"] = jup_b219_actor_one_soldier_animation_data;

	StateManagerAnimationData jup_b219_actor_all_animation_data;
	jup_b219_actor_all_animation_data.setPropertiesMaxIdle(1);
	jup_b219_actor_all_animation_data.setPropertiesSumIdle(1);
	jup_b219_actor_all_animation_data.setPropertiesMoving(true);
	jup_b219_actor_all_animation_data.setPropertiesRandom(100);

	jup_b219_actor_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_actor_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_actor_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_actor_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_actor_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_5");
	jup_b219_actor_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_6");
	jup_b219_actor_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_7");
	jup_b219_actor_all_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_ready");
	jup_b219_actor_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_actor_all_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::jup_b219_opening);
	jup_b219_actor_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_actor_all_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_go");
	jup_b219_actor_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_actor_all"] = jup_b219_actor_all_animation_data;

	StateManagerAnimationData jup_b219_actor_soldier_vano_animation_data;
	jup_b219_actor_soldier_vano_animation_data.setPropertiesMaxIdle(1);
	jup_b219_actor_soldier_vano_animation_data.setPropertiesSumIdle(1);
	jup_b219_actor_soldier_vano_animation_data.setPropertiesMoving(true);
	jup_b219_actor_soldier_vano_animation_data.setPropertiesRandom(100);

	jup_b219_actor_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_actor_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_actor_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_actor_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_actor_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_5");
	jup_b219_actor_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_7");
	jup_b219_actor_soldier_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_ready");
	jup_b219_actor_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_actor_soldier_vano_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::jup_b219_opening);
	jup_b219_actor_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_actor_soldier_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_go");
	jup_b219_actor_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_actor_soldier_vano"] =
		jup_b219_actor_soldier_vano_animation_data;

	StateManagerAnimationData jup_b219_actor_soldier_monolith_animation_data;
	jup_b219_actor_soldier_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_actor_soldier_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_actor_soldier_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_actor_soldier_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_actor_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_actor_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_actor_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_actor_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_actor_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_6");
	jup_b219_actor_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_7");
	jup_b219_actor_soldier_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_ready");
	jup_b219_actor_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_actor_soldier_monolith_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::jup_b219_opening);
	jup_b219_actor_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_actor_soldier_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_go");
	jup_b219_actor_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_actor_soldier_monolith"] =
		jup_b219_actor_soldier_monolith_animation_data;

	StateManagerAnimationData jup_b219_actor_vano_monolith_animation_data;
	jup_b219_actor_vano_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_actor_vano_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_actor_vano_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_actor_vano_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_actor_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_actor_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_actor_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_actor_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_actor_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_5");
	jup_b219_actor_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_6");
	jup_b219_actor_vano_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_ready");
	jup_b219_actor_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_actor_vano_monolith_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::jup_b219_opening);
	jup_b219_actor_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_actor_vano_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_actor_go");
	jup_b219_actor_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_actor_vano_monolith"] =
		jup_b219_actor_vano_monolith_animation_data;

	StateManagerAnimationData jup_b219_zulus_one_animation_data;
	jup_b219_zulus_one_animation_data.setPropertiesMaxIdle(1);
	jup_b219_zulus_one_animation_data.setPropertiesSumIdle(1);
	jup_b219_zulus_one_animation_data.setPropertiesMoving(true);
	jup_b219_zulus_one_animation_data.setPropertiesRandom(100);

	jup_b219_zulus_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_zulus_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_zulus_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_zulus_one_animation_data.addAnimationSoundName("into", 0, "jup_b219_duty_ready");
	jup_b219_zulus_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_zulus_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_zulus_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_zulus_one_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_zulus_one"] = jup_b219_zulus_one_animation_data;

	StateManagerAnimationData jup_b219_zulus_one_vano_animation_data;
	jup_b219_zulus_one_vano_animation_data.setPropertiesMaxIdle(1);
	jup_b219_zulus_one_vano_animation_data.setPropertiesSumIdle(1);
	jup_b219_zulus_one_vano_animation_data.setPropertiesMoving(true);
	jup_b219_zulus_one_vano_animation_data.setPropertiesRandom(100);

	jup_b219_zulus_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_zulus_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_zulus_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_zulus_one_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_duty_ready");
	jup_b219_zulus_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_zulus_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_5");
	jup_b219_zulus_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_zulus_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_zulus_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_zulus_one_vano"] = jup_b219_zulus_one_vano_animation_data;

	StateManagerAnimationData jup_b219_zulus_one_monolith_animation_data;
	jup_b219_zulus_one_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_zulus_one_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_zulus_one_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_zulus_one_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_zulus_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_zulus_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_zulus_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_zulus_one_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_duty_ready");
	jup_b219_zulus_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_zulus_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_6");
	jup_b219_zulus_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_zulus_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_zulus_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_zulus_one_monolith"] =
		jup_b219_zulus_one_monolith_animation_data;

	StateManagerAnimationData jup_b219_zulus_one_soldier_animation_data;
	jup_b219_zulus_one_soldier_animation_data.setPropertiesMaxIdle(1);
	jup_b219_zulus_one_soldier_animation_data.setPropertiesSumIdle(1);
	jup_b219_zulus_one_soldier_animation_data.setPropertiesMoving(true);
	jup_b219_zulus_one_soldier_animation_data.setPropertiesRandom(100);

	jup_b219_zulus_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_zulus_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_zulus_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_zulus_one_soldier_animation_data.addAnimationSoundName("into", 0, "jup_b219_duty_ready");
	jup_b219_zulus_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_zulus_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_7");
	jup_b219_zulus_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_zulus_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_zulus_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_zulus_one_soldier"] = jup_b219_zulus_one_soldier_animation_data;

	StateManagerAnimationData jup_b219_zulus_all_animation_data;
	jup_b219_zulus_all_animation_data.setPropertiesMaxIdle(1);
	jup_b219_zulus_all_animation_data.setPropertiesSumIdle(1);
	jup_b219_zulus_all_animation_data.setPropertiesMoving(true);
	jup_b219_zulus_all_animation_data.setPropertiesRandom(100);

	jup_b219_zulus_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_zulus_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_zulus_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_zulus_all_animation_data.addAnimationSoundName("into", 0, "jup_b219_duty_ready");
	jup_b219_zulus_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_zulus_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_5");
	jup_b219_zulus_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_6");
	jup_b219_zulus_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_7");
	jup_b219_zulus_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_zulus_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_zulus_all_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_zulus_all"] = jup_b219_zulus_all_animation_data;

	StateManagerAnimationData jup_b219_zulus_soldier_vano_animation_data;
	jup_b219_zulus_soldier_vano_animation_data.setPropertiesMaxIdle(1);
	jup_b219_zulus_soldier_vano_animation_data.setPropertiesSumIdle(1);
	jup_b219_zulus_soldier_vano_animation_data.setPropertiesMoving(true);
	jup_b219_zulus_soldier_vano_animation_data.setPropertiesRandom(100);

	jup_b219_zulus_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_zulus_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_zulus_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_zulus_soldier_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_duty_ready");
	jup_b219_zulus_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_zulus_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_5");
	jup_b219_zulus_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_7");
	jup_b219_zulus_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_zulus_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_zulus_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_zulus_soldier_vano"] =
		jup_b219_zulus_soldier_vano_animation_data;

	StateManagerAnimationData jup_b219_zulus_soldier_monolith_animation_data;
	jup_b219_zulus_soldier_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_zulus_soldier_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_zulus_soldier_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_zulus_soldier_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_zulus_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_zulus_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_zulus_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_zulus_soldier_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_duty_ready");
	jup_b219_zulus_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_zulus_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_6");
	jup_b219_zulus_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_7");
	jup_b219_zulus_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_zulus_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_zulus_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_zulus_soldier_monolith"] =
		jup_b219_zulus_soldier_monolith_animation_data;

	StateManagerAnimationData jup_b219_zulus_vano_monolith_animation_data;
	jup_b219_zulus_vano_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_zulus_vano_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_zulus_vano_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_zulus_vano_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_zulus_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_1");
	jup_b219_zulus_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_2");
	jup_b219_zulus_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_3");
	jup_b219_zulus_vano_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_duty_ready");
	jup_b219_zulus_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_4");
	jup_b219_zulus_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_5");
	jup_b219_zulus_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_6");
	jup_b219_zulus_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_8");
	jup_b219_zulus_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_9");
	jup_b219_zulus_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_actor_10");

	this->m_state_manager_animation_list["jup_b219_zulus_vano_monolith"] =
		jup_b219_zulus_vano_monolith_animation_data;

	StateManagerAnimationData jup_b219_soldier_one_animation_data;
	jup_b219_soldier_one_animation_data.setPropertiesMaxIdle(1);
	jup_b219_soldier_one_animation_data.setPropertiesSumIdle(1);
	jup_b219_soldier_one_animation_data.setPropertiesMoving(true);
	jup_b219_soldier_one_animation_data.setPropertiesRandom(100);

	jup_b219_soldier_one_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_1");
	jup_b219_soldier_one_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_2");
	jup_b219_soldier_one_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_3");
	jup_b219_soldier_one_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_4");
	jup_b219_soldier_one_animation_data.addAnimationSoundName("into", 0, "jup_b219_soldier_ready");
	jup_b219_soldier_one_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_7");
	jup_b219_soldier_one_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_8");
	jup_b219_soldier_one_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_9");
	jup_b219_soldier_one_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_10");

	this->m_state_manager_animation_list["jup_b219_soldier_one"] = jup_b219_soldier_one_animation_data;

	StateManagerAnimationData jup_b219_soldier_all_animation_data;
	jup_b219_soldier_all_animation_data.setPropertiesMaxIdle(1);
	jup_b219_soldier_all_animation_data.setPropertiesSumIdle(1);
	jup_b219_soldier_all_animation_data.setPropertiesMoving(true);
	jup_b219_soldier_all_animation_data.setPropertiesRandom(100);

	jup_b219_soldier_all_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_1");
	jup_b219_soldier_all_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_2");
	jup_b219_soldier_all_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_3");
	jup_b219_soldier_all_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_4");
	jup_b219_soldier_all_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_5");
	jup_b219_soldier_all_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_6");
	jup_b219_soldier_all_animation_data.addAnimationSoundName("into", 0, "jup_b219_soldier_ready");
	jup_b219_soldier_all_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_7");
	jup_b219_soldier_all_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_8");
	jup_b219_soldier_all_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_9");
	jup_b219_soldier_all_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_10");

	this->m_state_manager_animation_list["jup_b219_soldier_all"] = jup_b219_soldier_all_animation_data;

	StateManagerAnimationData jup_b219_soldier_soldier_vano_animation_data;
	jup_b219_soldier_soldier_vano_animation_data.setPropertiesMaxIdle(1);
	jup_b219_soldier_soldier_vano_animation_data.setPropertiesSumIdle(1);
	jup_b219_soldier_soldier_vano_animation_data.setPropertiesMoving(true);
	jup_b219_soldier_soldier_vano_animation_data.setPropertiesRandom(100);

	jup_b219_soldier_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_1");
	jup_b219_soldier_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_2");
	jup_b219_soldier_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_3");
	jup_b219_soldier_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_4");
	jup_b219_soldier_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_5");
	jup_b219_soldier_soldier_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_soldier_ready");
	jup_b219_soldier_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_7");
	jup_b219_soldier_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_8");
	jup_b219_soldier_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_9");
	jup_b219_soldier_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_10");

	this->m_state_manager_animation_list["jup_b219_soldier_soldier_vano"] =
		jup_b219_soldier_soldier_vano_animation_data;

	StateManagerAnimationData jup_b219_soldier_soldier_monolith_animation_data;
	jup_b219_soldier_soldier_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_soldier_soldier_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_soldier_soldier_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_soldier_soldier_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_soldier_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_1");
	jup_b219_soldier_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_2");
	jup_b219_soldier_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_3");
	jup_b219_soldier_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_4");
	jup_b219_soldier_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_5");
	jup_b219_soldier_soldier_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_soldier_ready");
	jup_b219_soldier_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_7");
	jup_b219_soldier_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_8");
	jup_b219_soldier_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_9");
	jup_b219_soldier_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_soldier_10");

	this->m_state_manager_animation_list["jup_b219_soldier_soldier_monolith"] =
		jup_b219_soldier_soldier_monolith_animation_data;

	StateManagerAnimationData jup_b219_monolith_one_animation_data;
	jup_b219_monolith_one_animation_data.setPropertiesMaxIdle(1);
	jup_b219_monolith_one_animation_data.setPropertiesSumIdle(1);
	jup_b219_monolith_one_animation_data.setPropertiesMoving(true);
	jup_b219_monolith_one_animation_data.setPropertiesRandom(100);

	jup_b219_monolith_one_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_1");
	jup_b219_monolith_one_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_2");
	jup_b219_monolith_one_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_3");
	jup_b219_monolith_one_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_4");
	jup_b219_monolith_one_animation_data.addAnimationSoundName("into", 0, "jup_b219_monolith_ready");
	jup_b219_monolith_one_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_6");
	jup_b219_monolith_one_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_8");
	jup_b219_monolith_one_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_9");
	jup_b219_monolith_one_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_10");

	this->m_state_manager_animation_list["jup_b219_monolith_one"] = jup_b219_monolith_one_animation_data;

	StateManagerAnimationData jup_b219_monolith_all_animation_data;
	jup_b219_monolith_all_animation_data.setPropertiesMaxIdle(1);
	jup_b219_monolith_all_animation_data.setPropertiesSumIdle(1);
	jup_b219_monolith_all_animation_data.setPropertiesMoving(true);
	jup_b219_monolith_all_animation_data.setPropertiesRandom(100);

	jup_b219_monolith_all_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_1");
	jup_b219_monolith_all_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_2");
	jup_b219_monolith_all_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_3");
	jup_b219_monolith_all_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_4");
	jup_b219_monolith_all_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_5");
	jup_b219_monolith_all_animation_data.addAnimationSoundName("into", 0, "jup_b219_monolith_ready");
	jup_b219_monolith_all_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_6");
	jup_b219_monolith_all_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_7");
	jup_b219_monolith_all_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_8");
	jup_b219_monolith_all_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_9");
	jup_b219_monolith_all_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_10");

	this->m_state_manager_animation_list["jup_b219_monolith_all"] = jup_b219_monolith_all_animation_data;

	StateManagerAnimationData jup_b219_monolith_soldier_monolith_animation_data;
	jup_b219_monolith_soldier_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_monolith_soldier_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_monolith_soldier_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_monolith_soldier_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_monolith_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_1");
	jup_b219_monolith_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_2");
	jup_b219_monolith_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_3");
	jup_b219_monolith_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_4");
	jup_b219_monolith_soldier_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_monolith_ready");
	jup_b219_monolith_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_6");
	jup_b219_monolith_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_7");
	jup_b219_monolith_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_8");
	jup_b219_monolith_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_9");
	jup_b219_monolith_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_10");

	this->m_state_manager_animation_list["jup_b219_monolith_soldier_monolith"] =
		jup_b219_monolith_soldier_monolith_animation_data;

	StateManagerAnimationData jup_b219_monolith_vano_monolith_animation_data;
	jup_b219_monolith_vano_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_monolith_vano_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_monolith_vano_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_monolith_vano_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_monolith_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_1");
	jup_b219_monolith_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_2");
	jup_b219_monolith_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_3");
	jup_b219_monolith_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_4");
	jup_b219_monolith_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_5");
	jup_b219_monolith_vano_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_monolith_ready");
	jup_b219_monolith_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_6");
	jup_b219_monolith_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_8");
	jup_b219_monolith_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_9");
	jup_b219_monolith_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_monolit_10");

	this->m_state_manager_animation_list["jup_b219_monolith_vano_monolith"] =
		jup_b219_monolith_vano_monolith_animation_data;

	StateManagerAnimationData jup_b219_vano_one_animation_data;
	jup_b219_vano_one_animation_data.setPropertiesMaxIdle(1);
	jup_b219_vano_one_animation_data.setPropertiesSumIdle(1);
	jup_b219_vano_one_animation_data.setPropertiesMoving(true);
	jup_b219_vano_one_animation_data.setPropertiesRandom(100);

	jup_b219_vano_one_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_1");
	jup_b219_vano_one_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_2");
	jup_b219_vano_one_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_3");
	jup_b219_vano_one_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_4");
	jup_b219_vano_one_animation_data.addAnimationSoundName("into", 0, "jup_b219_stalker_ready");
	jup_b219_vano_one_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_5");
	jup_b219_vano_one_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_8");
	jup_b219_vano_one_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_9");
	jup_b219_vano_one_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_10");

	this->m_state_manager_animation_list["jup_b219_vano_one"] = jup_b219_vano_one_animation_data;

	StateManagerAnimationData jup_b219_vano_all_animation_data;
	jup_b219_vano_all_animation_data.setPropertiesMaxIdle(1);
	jup_b219_vano_all_animation_data.setPropertiesSumIdle(1);
	jup_b219_vano_all_animation_data.setPropertiesMoving(true);
	jup_b219_vano_all_animation_data.setPropertiesRandom(100);

	jup_b219_vano_all_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_1");
	jup_b219_vano_all_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_2");
	jup_b219_vano_all_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_3");
	jup_b219_vano_all_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_4");
	jup_b219_vano_all_animation_data.addAnimationSoundName("into", 0, "jup_b219_stalker_ready");
	jup_b219_vano_all_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_5");
	jup_b219_vano_all_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_6");
	jup_b219_vano_all_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_7");
	jup_b219_vano_all_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_8");
	jup_b219_vano_all_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_9");
	jup_b219_vano_all_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_10");

	this->m_state_manager_animation_list["jup_b219_vano_all"] = jup_b219_vano_all_animation_data;

	StateManagerAnimationData jup_b219_vano_soldier_vano_animation_data;
	jup_b219_vano_soldier_vano_animation_data.setPropertiesMaxIdle(1);
	jup_b219_vano_soldier_vano_animation_data.setPropertiesSumIdle(1);
	jup_b219_vano_soldier_vano_animation_data.setPropertiesMoving(true);
	jup_b219_vano_soldier_vano_animation_data.setPropertiesRandom(100);

	jup_b219_vano_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_1");
	jup_b219_vano_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_2");
	jup_b219_vano_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_3");
	jup_b219_vano_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_4");
	jup_b219_vano_soldier_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_stalker_ready");
	jup_b219_vano_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_5");
	jup_b219_vano_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_7");
	jup_b219_vano_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_8");
	jup_b219_vano_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_9");
	jup_b219_vano_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_10");

	this->m_state_manager_animation_list["jup_b219_vano_soldier_vano"] = jup_b219_vano_soldier_vano_animation_data;

	StateManagerAnimationData jup_b219_vano_vano_monolith_animation_data;
	jup_b219_vano_vano_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_vano_vano_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_vano_vano_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_vano_vano_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_vano_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_1");
	jup_b219_vano_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_2");
	jup_b219_vano_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_3");
	jup_b219_vano_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_4");
	jup_b219_vano_vano_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_stalker_ready");
	jup_b219_vano_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_5");
	jup_b219_vano_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_6");
	jup_b219_vano_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_8");
	jup_b219_vano_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_9");
	jup_b219_vano_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_stalker_10");

	this->m_state_manager_animation_list["jup_b219_vano_vano_monolith"] =
		jup_b219_vano_vano_monolith_animation_data;

	StateManagerAnimationData jup_b219_azot_one_animation_data;
	jup_b219_azot_one_animation_data.setPropertiesMaxIdle(1);
	jup_b219_azot_one_animation_data.setPropertiesSumIdle(1);
	jup_b219_azot_one_animation_data.setPropertiesMoving(true);
	jup_b219_azot_one_animation_data.setPropertiesRandom(100);

	jup_b219_azot_one_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_damn");
	jup_b219_azot_one_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1");
	jup_b219_azot_one_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_success");
	jup_b219_azot_one_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1_1");
	jup_b219_azot_one_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_2");
	jup_b219_azot_one_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_ready");
	jup_b219_azot_one_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_3");
	jup_b219_azot_one_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_4");
	jup_b219_azot_one_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_8");
	jup_b219_azot_one_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_opening");
	jup_b219_azot_one_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_9");
	jup_b219_azot_one_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_10");
	jup_b219_azot_one_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_to_duty");

	this->m_state_manager_animation_list["jup_b219_azot_one"] = jup_b219_azot_one_animation_data;

	StateManagerAnimationData jup_b219_azot_one_vano_animation_data;
	jup_b219_azot_one_vano_animation_data.setPropertiesMaxIdle(1);
	jup_b219_azot_one_vano_animation_data.setPropertiesSumIdle(1);
	jup_b219_azot_one_vano_animation_data.setPropertiesMoving(true);
	jup_b219_azot_one_vano_animation_data.setPropertiesRandom(100);

	jup_b219_azot_one_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_damn");
	jup_b219_azot_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1");
	jup_b219_azot_one_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_success");
	jup_b219_azot_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1_1");
	jup_b219_azot_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_2");
	jup_b219_azot_one_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_ready");
	jup_b219_azot_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_3");
	jup_b219_azot_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_4");
	jup_b219_azot_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_5");
	jup_b219_azot_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_8");
	jup_b219_azot_one_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_opening");
	jup_b219_azot_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_9");
	jup_b219_azot_one_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_10");
	jup_b219_azot_one_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_to_duty");

	this->m_state_manager_animation_list["jup_b219_azot_one_vano"] = jup_b219_azot_one_vano_animation_data;

	StateManagerAnimationData jup_b219_azot_one_monolith_animation_data;
	jup_b219_azot_one_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_azot_one_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_azot_one_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_azot_one_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_azot_one_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_damn");
	jup_b219_azot_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1");
	jup_b219_azot_one_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_success");
	jup_b219_azot_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1_1");
	jup_b219_azot_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_2");
	jup_b219_azot_one_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_ready");
	jup_b219_azot_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_3");
	jup_b219_azot_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_4");
	jup_b219_azot_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_6");
	jup_b219_azot_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_8");
	jup_b219_azot_one_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_opening");
	jup_b219_azot_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_9");
	jup_b219_azot_one_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_10");
	jup_b219_azot_one_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_to_duty");

	this->m_state_manager_animation_list["jup_b219_azot_one_monolith"] = jup_b219_azot_one_monolith_animation_data;

	StateManagerAnimationData jup_b219_azot_one_soldier_animation_data;
	jup_b219_azot_one_soldier_animation_data.setPropertiesMaxIdle(1);
	jup_b219_azot_one_soldier_animation_data.setPropertiesSumIdle(1);
	jup_b219_azot_one_soldier_animation_data.setPropertiesMoving(true);
	jup_b219_azot_one_soldier_animation_data.setPropertiesRandom(100);

	jup_b219_azot_one_soldier_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_damn");
	jup_b219_azot_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1");
	jup_b219_azot_one_soldier_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_success");
	jup_b219_azot_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1_1");
	jup_b219_azot_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_2");
	jup_b219_azot_one_soldier_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_ready");
	jup_b219_azot_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_3");
	jup_b219_azot_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_4");
	jup_b219_azot_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_7");
	jup_b219_azot_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_8");
	jup_b219_azot_one_soldier_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_opening");
	jup_b219_azot_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_9");
	jup_b219_azot_one_soldier_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_10");
	jup_b219_azot_one_soldier_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_to_duty");

	this->m_state_manager_animation_list["jup_b219_azot_one_soldier"] = jup_b219_azot_one_soldier_animation_data;

	StateManagerAnimationData jup_b219_azot_soldier_vano_animation_data;
	jup_b219_azot_soldier_vano_animation_data.setPropertiesMaxIdle(1);
	jup_b219_azot_soldier_vano_animation_data.setPropertiesSumIdle(1);
	jup_b219_azot_soldier_vano_animation_data.setPropertiesMoving(true);
	jup_b219_azot_soldier_vano_animation_data.setPropertiesRandom(100);

	jup_b219_azot_soldier_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_damn");
	jup_b219_azot_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1");
	jup_b219_azot_soldier_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_success");
	jup_b219_azot_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1_1");
	jup_b219_azot_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_2");
	jup_b219_azot_soldier_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_ready");
	jup_b219_azot_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_3");
	jup_b219_azot_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_4");
	jup_b219_azot_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_7");
	jup_b219_azot_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_8");
	jup_b219_azot_soldier_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_opening");
	jup_b219_azot_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_9");
	jup_b219_azot_soldier_vano_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_10");
	jup_b219_azot_soldier_vano_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_to_duty");

	this->m_state_manager_animation_list["jup_b219_azot_soldier_vano"] = jup_b219_azot_soldier_vano_animation_data;

	StateManagerAnimationData jup_b219_azot_soldier_monolith_animation_data;
	jup_b219_azot_soldier_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_azot_soldier_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_azot_soldier_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_azot_soldier_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_azot_soldier_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_damn");
	jup_b219_azot_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1");
	jup_b219_azot_soldier_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_success");
	jup_b219_azot_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1_1");
	jup_b219_azot_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_2");
	jup_b219_azot_soldier_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_ready");
	jup_b219_azot_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_3");
	jup_b219_azot_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_4");
	jup_b219_azot_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_5");
	jup_b219_azot_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_7");
	jup_b219_azot_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_8");
	jup_b219_azot_soldier_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_opening");
	jup_b219_azot_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_9");
	jup_b219_azot_soldier_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_10");
	jup_b219_azot_soldier_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_to_duty");

	this->m_state_manager_animation_list["jup_b219_azot_soldier_monolith"] =
		jup_b219_azot_soldier_monolith_animation_data;

	StateManagerAnimationData jup_b219_azot_vano_monolith_animation_data;
	jup_b219_azot_vano_monolith_animation_data.setPropertiesMaxIdle(1);
	jup_b219_azot_vano_monolith_animation_data.setPropertiesSumIdle(1);
	jup_b219_azot_vano_monolith_animation_data.setPropertiesMoving(true);
	jup_b219_azot_vano_monolith_animation_data.setPropertiesRandom(100);

	jup_b219_azot_vano_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_damn");
	jup_b219_azot_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1");
	jup_b219_azot_vano_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_success");
	jup_b219_azot_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1_1");
	jup_b219_azot_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_2");
	jup_b219_azot_vano_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_ready");
	jup_b219_azot_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_3");
	jup_b219_azot_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_4");
	jup_b219_azot_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_5");
	jup_b219_azot_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_6");
	jup_b219_azot_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_8");
	jup_b219_azot_vano_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_opening");
	jup_b219_azot_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_9");
	jup_b219_azot_vano_monolith_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_10");
	jup_b219_azot_vano_monolith_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_to_duty");

	this->m_state_manager_animation_list["jup_b219_azot_vano_monolith"] =
		jup_b219_azot_vano_monolith_animation_data;

	StateManagerAnimationData jup_b219_azot_all_animation_data;
	jup_b219_azot_all_animation_data.setPropertiesMaxIdle(1);
	jup_b219_azot_all_animation_data.setPropertiesSumIdle(1);
	jup_b219_azot_all_animation_data.setPropertiesMoving(true);
	jup_b219_azot_all_animation_data.setPropertiesRandom(100);

	jup_b219_azot_all_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_damn");
	jup_b219_azot_all_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1");
	jup_b219_azot_all_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_success");
	jup_b219_azot_all_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_1_1");
	jup_b219_azot_all_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_2");
	jup_b219_azot_all_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_ready");
	jup_b219_azot_all_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_3");
	jup_b219_azot_all_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_4");
	jup_b219_azot_all_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_5");
	jup_b219_azot_all_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_6");
	jup_b219_azot_all_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_7");
	jup_b219_azot_all_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_8");
	jup_b219_azot_all_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_opening");
	jup_b219_azot_all_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_9");
	jup_b219_azot_all_animation_data.addAnimation("into", 0, "jup_b219_descent_tech_10");
	jup_b219_azot_all_animation_data.addAnimationSoundName("into", 0, "jup_b219_tech_to_duty");

	this->m_state_manager_animation_list["jup_b219_azot_all"] = jup_b219_azot_all_animation_data;

	StateManagerAnimationData jup_a9_cam1_actor_animation_data;
	jup_a9_cam1_actor_animation_data.setPropertiesMaxIdle(1);
	jup_a9_cam1_actor_animation_data.setPropertiesSumIdle(1);
	jup_a9_cam1_actor_animation_data.setPropertiesRandom(100);

	jup_a9_cam1_actor_animation_data.addAnimation("into", 0, "poisk_8_idle_2");
	jup_a9_cam1_actor_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::jup_a9_cam1_actor_anim_end);

	this->m_state_manager_animation_list["jup_a9_cam1_actor"] = jup_a9_cam1_actor_animation_data;

	StateManagerAnimationData jup_a9_cam2_actor_animation_data;
	jup_a9_cam2_actor_animation_data.setPropertiesMaxIdle(1);
	jup_a9_cam2_actor_animation_data.setPropertiesSumIdle(1);
	jup_a9_cam2_actor_animation_data.setPropertiesRandom(100);

	jup_a9_cam2_actor_animation_data.addAnimation("into", 0, "poisk_2_idle_1");

	this->m_state_manager_animationstate_list["jup_a9_cam2_actor"] = jup_a9_cam2_actor_animation_data;

	StateManagerAnimationData jup_a9_cam3_actor_animation_data;
	jup_a9_cam3_actor_animation_data.setPropertiesMaxIdle(1);
	jup_a9_cam3_actor_animation_data.setPropertiesSumIdle(1);
	jup_a9_cam3_actor_animation_data.setPropertiesRandom(100);

	jup_a9_cam3_actor_animation_data.addAnimation("into", 0, "poisk_2_idle_1");

	this->m_state_manager_animation_list["jup_a9_cam3_actor"] = jup_a9_cam3_actor_animation_data;

	StateManagerAnimationData jup_b217_nitro_straight_animation_data;
	jup_b217_nitro_straight_animation_data.setPropertiesMaxIdle(1);
	jup_b217_nitro_straight_animation_data.setPropertiesSumIdle(1);
	jup_b217_nitro_straight_animation_data.setPropertiesRandom(100);

	jup_b217_nitro_straight_animation_data.addAnimation("idle", 0, "idle_0_idle_1");

	this->m_state_manager_animation_list["jup_b217_nitro_straight"] = jup_b217_nitro_straight_animation_data;

	StateManagerAnimationData jup_b217_guide_stand_animation_data;
	jup_b217_guide_stand_animation_data.setPropertiesMaxIdle(1);
	jup_b217_guide_stand_animation_data.setPropertiesSumIdle(1);
	jup_b217_guide_stand_animation_data.setPropertiesMoving(true);
	jup_b217_guide_stand_animation_data.setPropertiesRandom(100);

	jup_b217_guide_stand_animation_data.addAnimation("into", 0, "jup_b217_guide_stand");

	this->m_state_manager_animation_list["jup_b217_guide_stand"] = jup_b217_guide_stand_animation_data;

	StateManagerAnimationData jup_b217_nitro_stand_animation_data;
	jup_b217_nitro_stand_animation_data.setPropertiesMaxIdle(1);
	jup_b217_nitro_stand_animation_data.setPropertiesSumIdle(1);
	jup_b217_nitro_stand_animation_data.setPropertiesMoving(true);
	jup_b217_nitro_stand_animation_data.setPropertiesRandom(100);

	jup_b217_nitro_stand_animation_data.addAnimation("into", 0, "jup_b217_nitro_stand");

	this->m_state_manager_animation_list["jup_b217_nitro_stand"] = jup_b217_nitro_stand_animation_data;

	StateManagerAnimationData jup_b41_novikov_stand_animation_data;
	jup_b41_novikov_stand_animation_data.setPropertiesMaxIdle(10);
	jup_b41_novikov_stand_animation_data.setPropertiesSumIdle(8);
	jup_b41_novikov_stand_animation_data.setPropertiesMoving(true);
	jup_b41_novikov_stand_animation_data.setPropertiesRandom(80);

	jup_b41_novikov_stand_animation_data.addAnimation("into", 0, "lead_1_in_0");
	jup_b41_novikov_stand_animation_data.addAnimation("out", 0, "lead_1_out_0");
	jup_b41_novikov_stand_animation_data.addAnimation("idle", 0, "lead_1_idle");
	jup_b41_novikov_stand_animation_data.addAnimation("rnd", 0, "lead_1_idle_0");
	jup_b41_novikov_stand_animation_data.addAnimation("rnd", 0, "lead_1_idle_1");
	jup_b41_novikov_stand_animation_data.addAnimation("rnd", 0, "lead_1_idle_2");
	jup_b41_novikov_stand_animation_data.addAnimation("rnd", 0, "lead_1_idle_3");
	jup_b41_novikov_stand_animation_data.addAnimation("rnd", 0, "lead_1_idle_4");
	jup_b41_novikov_stand_animation_data.addAnimation("rnd", 0, "lead_1_idle_5");

	this->m_state_manager_animation_list["jup_b41_novikov_stand"] = jup_b41_novikov_stand_animation_data;

	StateManagerAnimationData jup_b15_zulus_sit_idle_short_animstate_data;
	jup_b15_zulus_sit_idle_short_animstate_data.setPropertiesMaxIdle(1);
	jup_b15_zulus_sit_idle_short_animstate_data.setPropertiesSumIdle(1);
	jup_b15_zulus_sit_idle_short_animstate_data.setPropertiesRandom(100);
	jup_b15_zulus_sit_idle_short_animstate_data.setPropertiesMoving(true);

	jup_b15_zulus_sit_idle_short_animstate_data.addAnimation("idle", 0, "jup_b15_zulus_sit_idle_short");
	jup_b15_zulus_sit_idle_short_animstate_data.addAnimation("idle", 1, "jup_b15_zulus_sit_idle_short");

	this->m_state_manager_animationstate_list["jup_b15_zulus_sit_idle_short"] =
		jup_b15_zulus_sit_idle_short_animstate_data;

	StateManagerAnimationData jup_b10_drunk_ravings_animation_data;
	jup_b10_drunk_ravings_animation_data.setPropertiesMaxIdle(1);
	jup_b10_drunk_ravings_animation_data.setPropertiesSumIdle(1);
	jup_b10_drunk_ravings_animation_data.setPropertiesRandom(100);
	jup_b10_drunk_ravings_animation_data.setPropertiesMoving(true);

	jup_b10_drunk_ravings_animation_data.addAnimation("idle", 0, "zat_b3_tech_drunk_idle");

	this->m_state_manager_animation_list["jup_b10_drunk_ravings"] = jup_b10_drunk_ravings_animation_data;
}

void Cordis::Scripts::Script_GlobalHelper::initialize_StateLib_Pripyat(void)
{
	StateManagerAnimationData pri_a25_psy_medic_idle_animation_data;
	pri_a25_psy_medic_idle_animation_data.setPropertiesMaxIdle(1);
	pri_a25_psy_medic_idle_animation_data.setPropertiesSumIdle(1);
	pri_a25_psy_medic_idle_animation_data.setPropertiesRandom(100);

	pri_a25_psy_medic_idle_animation_data.addAnimation("idle", 0, "psy_0_idle_0");
	this->m_state_manager_animation_list["pri_a25_psy_medic_idle"] = pri_a25_psy_medic_idle_animation_data;

	StateManagerAnimationData pri_a25_psy_medic_out_animation_data;
	pri_a25_psy_medic_out_animation_data.setPropertiesMaxIdle(1);
	pri_a25_psy_medic_out_animation_data.setPropertiesSumIdle(1);
	pri_a25_psy_medic_out_animation_data.setPropertiesRandom(100);

	pri_a25_psy_medic_out_animation_data.addAnimation("into", 0, "psy_0_idle_0_to_idle_0");
	this->m_state_manager_animation_list["pri_a25_psy_medic_out"] = pri_a25_psy_medic_out_animation_data;

	StateManagerAnimationData pri_a15_idle_none_animation_data;
	pri_a15_idle_none_animation_data.setPropertiesMaxIdle(1);
	pri_a15_idle_none_animation_data.setPropertiesSumIdle(1);
	pri_a15_idle_none_animation_data.setPropertiesMoving(true);
	pri_a15_idle_none_animation_data.setPropertiesRandom(100);

	pri_a15_idle_none_animation_data.addAnimation("into", 0, "chest_0_idle_0");
	pri_a15_idle_none_animation_data.addAnimation("idle", 0, "chest_0_idle_0");

	this->m_state_manager_animation_list["pri_a15_idle_none"] = pri_a15_idle_none_animation_data;

	StateManagerAnimationData pri_a15_idle_unstrap_animation_data;
	pri_a15_idle_unstrap_animation_data.setPropertiesMaxIdle(1);
	pri_a15_idle_unstrap_animation_data.setPropertiesSumIdle(1);
	pri_a15_idle_unstrap_animation_data.setPropertiesMoving(true);
	pri_a15_idle_unstrap_animation_data.setPropertiesRandom(100);

	pri_a15_idle_unstrap_animation_data.addAnimation("into", 0, "chest_0_idle_0");
	pri_a15_idle_unstrap_animation_data.addAnimation("idle", 0, "chest_0_idle_0");

	this->m_state_manager_animation_list["pri_a15_idle_unstrap"] = pri_a15_idle_unstrap_animation_data;

	StateManagerAnimationData pri_a15_vano_all_animation_data;
	pri_a15_vano_all_animation_data.setPropertiesMaxIdle(1);
	pri_a15_vano_all_animation_data.setPropertiesSumIdle(1);
	pri_a15_vano_all_animation_data.setPropertiesMoving(true);
	pri_a15_vano_all_animation_data.setPropertiesRandom(100);

	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam1");
	pri_a15_vano_all_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_wincheaster1300");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam2");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam3");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam4");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam5");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam6");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_1");
	pri_a15_vano_all_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_2");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam8");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam9");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam10");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam11");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam12");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam13");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam14");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam15");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam16");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17_1");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam18");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam19");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam20");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam21");
	pri_a15_vano_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_vano_speech_one");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam22");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam23");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam24");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25_1");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam26");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam27");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam28");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam29");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam30");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam31");
	pri_a15_vano_all_animation_data.addAnimation("into", 0, "pri_a15_vano_cam32");

	this->m_state_manager_animation_list["pri_a15_vano_all"] = pri_a15_vano_all_animation_data;

	StateManagerAnimationData pri_a15_vano_1_sokolov_animation_data;
	pri_a15_vano_1_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_vano_1_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_vano_1_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_vano_1_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam1");
	pri_a15_vano_1_sokolov_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_wincheaster1300");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam2");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam3");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam4");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam5");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam6");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_1");
	pri_a15_vano_1_sokolov_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_2");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam8");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam9");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam10");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam12");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam13");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam14");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam15");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam16");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17_1");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam18");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam19");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam21");
	pri_a15_vano_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_vano_speech_one");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam22");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam23");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam24");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25_1");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam26");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam27");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam28");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam29");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam30");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam31");
	pri_a15_vano_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_vano_cam32");

	this->m_state_manager_animation_list["pri_a15_vano_1_sokolov"] = pri_a15_vano_1_sokolov_animation_data;

	StateManagerAnimationData pri_a15_vano_1_zulus_animation_data;
	pri_a15_vano_1_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_vano_1_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_vano_1_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_vano_1_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam1");
	pri_a15_vano_1_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_wincheaster1300");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam2");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam3");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam4");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam6");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_1");
	pri_a15_vano_1_zulus_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_2");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam8");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam9");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam10");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam11");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam12");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam13");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam14");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam15");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam16");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17_1");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam18");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam20");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam21");
	pri_a15_vano_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_vano_speech_one");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam22");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam23");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam24");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam30");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam31");
	pri_a15_vano_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam32");

	this->m_state_manager_animation_list["pri_a15_vano_1_zulus"] = pri_a15_vano_1_zulus_animation_data;

	StateManagerAnimationData pri_a15_vano_1_wanderer_animation_data;
	pri_a15_vano_1_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_vano_1_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_vano_1_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_vano_1_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam1");
	pri_a15_vano_1_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_wincheaster1300");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam2");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam3");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam4");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam5");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam6");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_1");
	pri_a15_vano_1_wanderer_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_2");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam8");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam9");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam10");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam11");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam12");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam13");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam14");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam15");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam16");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17_1");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam18");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam19");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam20");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam21");
	pri_a15_vano_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_vano_speech_one");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam22");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam23");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam24");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25_1");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam26");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam27");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam28");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam29");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam30");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam31");
	pri_a15_vano_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam32");

	this->m_state_manager_animation_list["pri_a15_vano_1_wanderer"] = pri_a15_vano_1_wanderer_animation_data;

	StateManagerAnimationData pri_a15_vano_2_sokolov_zulus_animation_data;
	pri_a15_vano_2_sokolov_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_vano_2_sokolov_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_vano_2_sokolov_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_vano_2_sokolov_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam1");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_wincheaster1300");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam2");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam3");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam4");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam6");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_1");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_2");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam8");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam9");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam10");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam12");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam13");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam14");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam15");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam16");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17_1");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam18");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_vano_speech_one");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam22");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam23");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam24");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam30");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam31");
	pri_a15_vano_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_vano_cam32");

	this->m_state_manager_animation_list["pri_a15_vano_2_sokolov_zulus"] =
		pri_a15_vano_2_sokolov_zulus_animation_data;

	StateManagerAnimationData pri_a15_vano_2_sokolov_wanderer_animation_data;
	pri_a15_vano_2_sokolov_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_vano_2_sokolov_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_vano_2_sokolov_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_vano_2_sokolov_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam1");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimationAttachItemName(
		"into", 0, "pri_a15_wpn_wincheaster1300");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam2");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam3");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam4");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam5");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam6");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_1");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_2");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam8");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam9");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam10");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam12");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam13");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam14");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam15");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam16");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17_1");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam18");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam19");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam21");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_vano_speech_one");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam22");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam23");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam24");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25_1");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam26");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam27");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam28");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam29");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam30");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam31");
	pri_a15_vano_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam32");

	this->m_state_manager_animation_list["pri_a15_vano_2_sokolov_wanderer"] =
		pri_a15_vano_2_sokolov_wanderer_animation_data;

	StateManagerAnimationData pri_a15_vano_2_zulus_wanderer_animation_data;
	pri_a15_vano_2_zulus_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_vano_2_zulus_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_vano_2_zulus_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_vano_2_zulus_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam1");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimationAttachItemName(
		"into", 0, "pri_a15_wpn_wincheaster1300");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam2");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam3");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam4");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam6");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_1");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_2");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam8");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam9");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam10");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam11");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam12");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam13");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam14");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam15");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam16");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17_1");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam18");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam20");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam21");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_vano_speech_one");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam22");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam23");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam24");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam30");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam31");
	pri_a15_vano_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_vano_cam32");

	this->m_state_manager_animation_list["pri_a15_vano_2_zulus_wanderer"] =
		pri_a15_vano_2_zulus_wanderer_animation_data;

	StateManagerAnimationData pri_a15_vano_3_vano_alive_animation_data;
	pri_a15_vano_3_vano_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_vano_3_vano_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_vano_3_vano_alive_animation_data.setPropertiesMoving(true);
	pri_a15_vano_3_vano_alive_animation_data.setPropertiesRandom(100);

	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam1");
	pri_a15_vano_3_vano_alive_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_wincheaster1300");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam2");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam3");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam4");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam6");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_1");
	pri_a15_vano_3_vano_alive_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam7_2");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam8");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam9");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam10");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam12");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam13");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam14");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam15");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam16");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam17_1");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam18");
	pri_a15_vano_3_vano_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_vano_speech_one");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam22");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam23");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam24");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam25");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam30");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam31");
	pri_a15_vano_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_vano_cam32");

	this->m_state_manager_animation_list["pri_a15_vano_3_vano_alive"] = pri_a15_vano_3_vano_alive_animation_data;

	StateManagerAnimationData pri_a15_sokolov_all_animation_data;
	pri_a15_sokolov_all_animation_data.setPropertiesMaxIdle(1);
	pri_a15_sokolov_all_animation_data.setPropertiesSumIdle(1);
	pri_a15_sokolov_all_animation_data.setPropertiesMoving(true);
	pri_a15_sokolov_all_animation_data.setPropertiesRandom(100);

	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam1");
	pri_a15_sokolov_all_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74u");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam2");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam3");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam4");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam5");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam6");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam7");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_1");
	pri_a15_sokolov_all_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_2");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam9");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam10");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_1");
	pri_a15_sokolov_all_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_sokolov_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_introduce");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_2");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam12");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam13");
	pri_a15_sokolov_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_wonder");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam14");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam15");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam16");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17_1");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam18");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam19");
	pri_a15_sokolov_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_conjecture");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam20");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam21");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam22");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam23");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam24");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25_1");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam26");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam27");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam28");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam29");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam30");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam31");
	pri_a15_sokolov_all_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam32");

	this->m_state_manager_animation_list["pri_a15_sokolov_all"] = pri_a15_sokolov_all_animation_data;

	StateManagerAnimationData pri_a15_sokolov_1_vano_animation_data;
	pri_a15_sokolov_1_vano_animation_data.setPropertiesMaxIdle(1);
	pri_a15_sokolov_1_vano_animation_data.setPropertiesSumIdle(1);
	pri_a15_sokolov_1_vano_animation_data.setPropertiesMoving(true);
	pri_a15_sokolov_1_vano_animation_data.setPropertiesRandom(100);

	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam1");
	pri_a15_sokolov_1_vano_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74u");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam2");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam3");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam4");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam5");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam6");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam7");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_1");
	pri_a15_sokolov_1_vano_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_2");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam9");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam10");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_1");
	pri_a15_sokolov_1_vano_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_sokolov_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_introduce");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_2");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam12");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam13");
	pri_a15_sokolov_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_wonder");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam14");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam15");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam16");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17_1");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam18");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam19");
	pri_a15_sokolov_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_conjecture");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam20");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam21");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25_1");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam26");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam27");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam28");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam29");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam30");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam31");
	pri_a15_sokolov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam32");

	this->m_state_manager_animation_list["pri_a15_sokolov_1_vano"] = pri_a15_sokolov_1_vano_animation_data;

	StateManagerAnimationData pri_a15_sokolov_1_zulus_animation_data;
	pri_a15_sokolov_1_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_sokolov_1_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_sokolov_1_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_sokolov_1_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam1");
	pri_a15_sokolov_1_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74u");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam2");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam3");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam4");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam6");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam7");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_1");
	pri_a15_sokolov_1_zulus_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);

	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_2");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam9");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam10");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_1");
	pri_a15_sokolov_1_zulus_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_sokolov_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_introduce");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_2");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam12");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam13");
	pri_a15_sokolov_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_wonder");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam14");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam15");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam16");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17_1");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam18");
	pri_a15_sokolov_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_conjecture");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam20");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam21");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam22");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam23");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam24");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam30");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam31");
	pri_a15_sokolov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam32");

	this->m_state_manager_animation_list["pri_a15_sokolov_1_zulus"] = pri_a15_sokolov_1_zulus_animation_data;

	StateManagerAnimationData pri_a15_sokolov_1_wanderer_animation_data;
	pri_a15_sokolov_1_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_sokolov_1_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_sokolov_1_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_sokolov_1_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam1");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74u");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam2");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam3");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam4");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam5");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam6");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam7");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_1");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);

	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_2");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam9");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam10");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_1");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_sokolov_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_introduce");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_2");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam12");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam13");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_wonder");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam14");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam15");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam16");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17_1");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam18");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam19");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_conjecture");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam20");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam21");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam22");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam23");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam24");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25_1");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam26");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam27");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam28");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam29");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam30");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam31");
	pri_a15_sokolov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam32");

	this->m_state_manager_animation_list["pri_a15_sokolov_1_wanderer"] = pri_a15_sokolov_1_wanderer_animation_data;

	StateManagerAnimationData pri_a15_sokolov_2_vano_zulus_animation_data;
	pri_a15_sokolov_2_vano_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_sokolov_2_vano_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_sokolov_2_vano_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_sokolov_2_vano_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam1");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74u");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam2");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam3");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam4");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam6");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam7");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_1");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_2");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam9");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam10");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_1");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_introduce");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_2");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam12");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam13");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_wonder");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam14");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam15");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam16");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17_1");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam18");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_conjecture");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam20");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam21");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam30");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam31");
	pri_a15_sokolov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam32");

	this->m_state_manager_animation_list["pri_a15_sokolov_2_vano_zulus"] =
		pri_a15_sokolov_2_vano_zulus_animation_data;

	StateManagerAnimationData pri_a15_sokolov_2_vano_wanderer_animation_data;
	pri_a15_sokolov_2_vano_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_sokolov_2_vano_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_sokolov_2_vano_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_sokolov_2_vano_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam1");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74u");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam2");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam3");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam4");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam5");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam6");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam7");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_1");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_2");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam9");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam10");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_1");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_introduce");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_2");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam12");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam13");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_wonder");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam14");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam15");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam16");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17_1");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam18");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam19");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_conjecture");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam20");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam21");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25_1");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam26");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam27");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam28");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam29");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam30");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam31");
	pri_a15_sokolov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam32");

	this->m_state_manager_animation_list["pri_a15_sokolov_2_vano_wanderer"] =
		pri_a15_sokolov_2_vano_wanderer_animation_data;

	StateManagerAnimationData pri_a15_sokolov_2_zulus_wanderer_animation_data;
	pri_a15_sokolov_2_zulus_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_sokolov_2_zulus_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_sokolov_2_zulus_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_sokolov_2_zulus_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam1");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74u");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam2");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam3");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam4");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam6");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam7");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_1");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_2");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam9");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam10");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_1");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_introduce");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_2");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam12");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam13");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_wonder");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam14");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam15");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam16");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17_1");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam18");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_conjecture");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam20");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam21");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam22");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam23");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam24");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam30");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam31");
	pri_a15_sokolov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam32");

	this->m_state_manager_animation_list["pri_a15_sokolov_2_zulus_wanderer"] =
		pri_a15_sokolov_2_zulus_wanderer_animation_data;

	StateManagerAnimationData pri_a15_sokolov_3_sokolov_alive_animation_data;
	pri_a15_sokolov_3_sokolov_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_sokolov_3_sokolov_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_sokolov_3_sokolov_alive_animation_data.setPropertiesMoving(true);
	pri_a15_sokolov_3_sokolov_alive_animation_data.setPropertiesRandom(100);

	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam1");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74u");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam2");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam3");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam4");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_1");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam8_2");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam9");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam10");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_1");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_introduce");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam11_2");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam12");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam13");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_wonder");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam14");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam15");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam16");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam17_1");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam18");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_sokolov_conjecture");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam20");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam21");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam25");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam30");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam31");
	pri_a15_sokolov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_cokolov_cam32");

	this->m_state_manager_animation_list["pri_a15_sokolov_3_sokolov_alive"] =
		pri_a15_sokolov_3_sokolov_alive_animation_data;

	StateManagerAnimationData pri_a15_zulus_all_animation_data;
	pri_a15_zulus_all_animation_data.setPropertiesMaxIdle(1);
	pri_a15_zulus_all_animation_data.setPropertiesSumIdle(1);
	pri_a15_zulus_all_animation_data.setPropertiesMoving(true);
	pri_a15_zulus_all_animation_data.setPropertiesRandom(100);

	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam1");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam2");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam3");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam4");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam5");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam6");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam7");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam9");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam10");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam11");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam12");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam13");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam14");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam15");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam16");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17_1");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam18");
	pri_a15_zulus_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_wonder");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam19");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam20");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam21");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam22");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam23");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam24");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25");
	pri_a15_zulus_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_not_me");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25_1");
	pri_a15_zulus_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_no_business_with_army");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam26");
	pri_a15_zulus_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_go");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam27");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam28");
	pri_a15_zulus_all_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam29");

	this->m_state_manager_animation_list["pri_a15_zulus_all"] = pri_a15_zulus_all_animation_data;

	StateManagerAnimationData pri_a15_zulus_1_vano_animation_data;
	pri_a15_zulus_1_vano_animation_data.setPropertiesMaxIdle(1);
	pri_a15_zulus_1_vano_animation_data.setPropertiesSumIdle(1);
	pri_a15_zulus_1_vano_animation_data.setPropertiesMoving(true);
	pri_a15_zulus_1_vano_animation_data.setPropertiesRandom(100);

	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam1");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam2");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam3");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam4");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam5");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam6");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam7");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam9");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam10");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam11");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam12");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam13");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam14");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam15");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam16");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17_1");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam18");
	pri_a15_zulus_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_wonder");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam19");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam20");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam21");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25");
	pri_a15_zulus_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_not_me");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25_1");
	pri_a15_zulus_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_no_business_with_army");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam26");
	pri_a15_zulus_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_go");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam27");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam28");
	pri_a15_zulus_1_vano_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam29");

	this->m_state_manager_animation_list["pri_a15_zulus_1_vano"] = pri_a15_zulus_1_vano_animation_data;

	StateManagerAnimationData pri_a15_zulus_1_sokolov_animation_data;
	pri_a15_zulus_1_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_zulus_1_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_zulus_1_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_zulus_1_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam1");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam2");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam3");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam4");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam5");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam6");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam7");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam9");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam10");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam12");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam13");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam14");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam15");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam16");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17_1");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam18");
	pri_a15_zulus_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_wonder");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam19");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam21");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam22");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam23");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam24");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25");
	pri_a15_zulus_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_not_me");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25_1");
	pri_a15_zulus_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_no_business_with_army");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam26");
	pri_a15_zulus_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_go");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam27");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam28");
	pri_a15_zulus_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam29");

	this->m_state_manager_animation_list["pri_a15_zulus_1_sokolov"] = pri_a15_zulus_1_sokolov_animation_data;

	StateManagerAnimationData pri_a15_zulus_1_wanderer_animation_data;
	pri_a15_zulus_1_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_zulus_1_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_zulus_1_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_zulus_1_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam1");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam2");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam3");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam4");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam5");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam6");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam7");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam9");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam10");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam11");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam12");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam13");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam14");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam15");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam16");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17_1");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam18");
	pri_a15_zulus_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_wonder");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam19");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam20");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam21");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam22");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam23");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam24");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25");
	pri_a15_zulus_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_not_me");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25_1");
	pri_a15_zulus_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_no_business_with_army");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam26");
	pri_a15_zulus_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_go");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam27");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam28");
	pri_a15_zulus_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam29");

	this->m_state_manager_animation_list["pri_a15_zulus_1_wanderer"] = pri_a15_zulus_1_wanderer_animation_data;

	StateManagerAnimationData pri_a15_zulus_2_vano_sokolov_animation_data;
	pri_a15_zulus_2_vano_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_zulus_2_vano_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_zulus_2_vano_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_zulus_2_vano_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam1");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam2");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam3");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam4");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam5");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam6");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam7");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam9");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam10");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam12");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam13");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam14");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam15");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam16");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17_1");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam18");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_wonder");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam19");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam21");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_not_me");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25_1");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_zulus_no_business_with_army");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam26");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_go");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam27");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam28");
	pri_a15_zulus_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam29");

	this->m_state_manager_animation_list["pri_a15_zulus_2_vano_sokolov"] =
		pri_a15_zulus_2_vano_sokolov_animation_data;

	StateManagerAnimationData pri_a15_zulus_2_vano_wanderer_animation_data;
	pri_a15_zulus_2_vano_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_zulus_2_vano_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_zulus_2_vano_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_zulus_2_vano_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam1");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam2");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam3");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam4");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam5");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam6");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam7");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam9");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam10");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam11");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam12");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam13");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam14");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam15");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam16");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17_1");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam18");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_wonder");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam19");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam20");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam21");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_not_me");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25_1");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_zulus_no_business_with_army");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam26");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_go");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam27");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam28");
	pri_a15_zulus_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam29");

	this->m_state_manager_animation_list["pri_a15_zulus_2_vano_wanderer"] =
		pri_a15_zulus_2_vano_wanderer_animation_data;

	StateManagerAnimationData pri_a15_zulus_2_sokolov_wanderer_animation_data;
	pri_a15_zulus_2_sokolov_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_zulus_2_sokolov_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_zulus_2_sokolov_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_zulus_2_sokolov_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam1");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam2");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam3");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam4");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam5");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam6");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam7");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam9");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam10");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam12");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam13");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam14");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam15");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam16");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17_1");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam18");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_wonder");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam19");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam21");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam22");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam23");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam24");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_not_me");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25_1");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_zulus_no_business_with_army");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam26");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_go");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam27");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam28");
	pri_a15_zulus_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam29");

	this->m_state_manager_animation_list["pri_a15_zulus_2_sokolov_wanderer"] =
		pri_a15_zulus_2_sokolov_wanderer_animation_data;

	StateManagerAnimationData pri_a15_zulus_3_zulus_alive_animation_data;
	pri_a15_zulus_3_zulus_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_zulus_3_zulus_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_zulus_3_zulus_alive_animation_data.setPropertiesMoving(true);
	pri_a15_zulus_3_zulus_alive_animation_data.setPropertiesRandom(100);

	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam1");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam2");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam3");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam4");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam5");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam6");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam7");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam9");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam10");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam12");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam13");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam14");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam15");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam16");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam17_1");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam18");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_wonder");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam19");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam21");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_not_me");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam25_1");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_zulus_no_business_with_army");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam26");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_zulus_go");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam27");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam28");
	pri_a15_zulus_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_zulus_cam29");

	this->m_state_manager_animation_list["pri_a15_zulus_3_zulus_alive"] =
		pri_a15_zulus_3_zulus_alive_animation_data;

	StateManagerAnimationData pri_a15_wanderer_all_animation_data;
	pri_a15_wanderer_all_animation_data.setPropertiesMaxIdle(1);
	pri_a15_wanderer_all_animation_data.setPropertiesSumIdle(1);
	pri_a15_wanderer_all_animation_data.setPropertiesMoving(true);
	pri_a15_wanderer_all_animation_data.setPropertiesRandom(100);

	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam1");
	pri_a15_wanderer_all_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_svu");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam2");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam3");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam4");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam5");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_1");
	pri_a15_wanderer_all_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_2");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam7");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam8");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam9");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam10");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam11");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam12");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam13");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam14");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam15");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam16");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17_1");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam18");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam19");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam20");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam21");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam22");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam23");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam24");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25_1");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam26");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam27");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam28");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam29");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam30");
	pri_a15_wanderer_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_wanderer_about_actor");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam31");
	pri_a15_wanderer_all_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam32");

	this->m_state_manager_animation_list["pri_a15_wanderer_all"] = pri_a15_wanderer_all_animation_data;

	StateManagerAnimationData pri_a15_wanderer_1_vano_animation_data;
	pri_a15_wanderer_1_vano_animation_data.setPropertiesMaxIdle(1);
	pri_a15_wanderer_1_vano_animation_data.setPropertiesSumIdle(1);
	pri_a15_wanderer_1_vano_animation_data.setPropertiesMoving(true);
	pri_a15_wanderer_1_vano_animation_data.setPropertiesRandom(100);

	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam1");
	pri_a15_wanderer_1_vano_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_svu");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam2");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam3");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam4");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam5");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_1");
	pri_a15_wanderer_1_vano_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_2");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam7");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam8");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam9");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam10");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam11");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam12");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam13");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam14");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam15");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam16");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17_1");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam18");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam19");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam20");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam21");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25_1");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam26");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam27");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam28");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam29");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam30");
	pri_a15_wanderer_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_wanderer_about_actor");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam31");
	pri_a15_wanderer_1_vano_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam32");

	this->m_state_manager_animation_list["pri_a15_wanderer_1_vano"] = pri_a15_wanderer_1_vano_animation_data;

	StateManagerAnimationData pri_a15_wanderer_1_sokolov_animation_data;
	pri_a15_wanderer_1_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_wanderer_1_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_wanderer_1_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_wanderer_1_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam1");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_svu");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam2");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam3");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam4");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam5");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_1");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_2");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam7");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam8");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam9");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam10");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam12");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam13");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam14");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam15");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam16");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17_1");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam18");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam19");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam21");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam22");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam23");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam24");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25_1");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam26");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam27");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam28");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam29");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam30");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_wanderer_about_actor");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam31");
	pri_a15_wanderer_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam32");

	this->m_state_manager_animation_list["pri_a15_wanderer_1_sokolov"] = pri_a15_wanderer_1_sokolov_animation_data;

	StateManagerAnimationData pri_a15_wanderer_1_zulus_animation_data;
	pri_a15_wanderer_1_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_wanderer_1_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_wanderer_1_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_wanderer_1_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam1");
	pri_a15_wanderer_1_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_svu");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam2");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam3");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam4");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam5");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_1");
	pri_a15_wanderer_1_zulus_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_2");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam7");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam8");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam9");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam10");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam11");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam12");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam13");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam14");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam15");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam16");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17_1");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam18");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam20");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam21");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam22");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam23");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam24");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam30");
	pri_a15_wanderer_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_wanderer_about_actor");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam31");
	pri_a15_wanderer_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam32");

	this->m_state_manager_animation_list["pri_a15_wanderer_1_zulus"] = pri_a15_wanderer_1_zulus_animation_data;

	StateManagerAnimationData pri_a15_wanderer_2_vano_sokolov_animation_data;
	pri_a15_wanderer_2_vano_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_wanderer_2_vano_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_wanderer_2_vano_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_wanderer_2_vano_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam1");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_svu");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam2");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam3");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam4");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam5");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_1");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_2");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam7");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam8");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam9");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam10");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam12");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam13");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam14");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam15");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam16");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17_1");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam18");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam19");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam21");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25_1");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam26");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam27");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam28");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam29");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam30");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_wanderer_about_actor");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam31");
	pri_a15_wanderer_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam32");

	this->m_state_manager_animation_list["pri_a15_wanderer_2_vano_sokolov"] =
		pri_a15_wanderer_2_vano_sokolov_animation_data;

	StateManagerAnimationData pri_a15_wanderer_2_vano_zulus_animation_data;
	pri_a15_wanderer_2_vano_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_wanderer_2_vano_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_wanderer_2_vano_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_wanderer_2_vano_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam1");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_svu");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam2");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam3");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam4");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_1");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_2");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam7");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam8");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam9");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam10");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam11");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam12");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam13");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam14");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam15");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam16");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17_1");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam18");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam20");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam21");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam30");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_wanderer_about_actor");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam31");
	pri_a15_wanderer_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam32");

	this->m_state_manager_animation_list["pri_a15_wanderer_2_vano_zulus"] =
		pri_a15_wanderer_2_vano_zulus_animation_data;

	StateManagerAnimationData pri_a15_wanderer_2_sokolov_zulus_animation_data;
	pri_a15_wanderer_2_sokolov_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_wanderer_2_sokolov_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_wanderer_2_sokolov_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_wanderer_2_sokolov_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam1");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_svu");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam2");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam3");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam4");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_1");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_2");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam7");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam8");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam9");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam10");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam12");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam13");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam14");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam15");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam16");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17_1");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam18");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam21");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam22");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam23");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam24");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam30");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_wanderer_about_actor");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam31");
	pri_a15_wanderer_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam32");

	this->m_state_manager_animation_list["pri_a15_wanderer_2_sokolov_zulus"] =
		pri_a15_wanderer_2_sokolov_zulus_animation_data;

	StateManagerAnimationData pri_a15_wanderer_3_wanderer_alive_animation_data;
	pri_a15_wanderer_3_wanderer_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_wanderer_3_wanderer_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_wanderer_3_wanderer_alive_animation_data.setPropertiesMoving(true);
	pri_a15_wanderer_3_wanderer_alive_animation_data.setPropertiesRandom(100);

	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam1");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_svu");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam2");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam3");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam4");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_1");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam6_2");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam7");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam8");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam9");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam10");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam12");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam13");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam14");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam15");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam16");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam17_1");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam18");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam21");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam25");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam30");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_wanderer_about_actor");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam31");
	pri_a15_wanderer_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_monolit_cam32");

	this->m_state_manager_animation_list["pri_a15_wanderer_3_wanderer_alive"] =
		pri_a15_wanderer_3_wanderer_alive_animation_data;

	StateManagerAnimationData pri_a15_actor_all_animation_data;
	pri_a15_actor_all_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_all_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_all_animation_data.setPropertiesMoving(true);
	pri_a15_actor_all_animation_data.setPropertiesRandom(100);

	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_all_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_all_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_all_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam5");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_all_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam11");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_all_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_all_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_all_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam19");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam20");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam22");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam23");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam24");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25_1");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam26");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam27");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam28");
	pri_a15_actor_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_leave_him");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam29");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_all_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_all_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_all"] = pri_a15_actor_all_animation_data;

	StateManagerAnimationData pri_a15_actor_1_vano_animation_data;
	pri_a15_actor_1_vano_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_1_vano_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_1_vano_animation_data.setPropertiesMoving(true);
	pri_a15_actor_1_vano_animation_data.setPropertiesRandom(100);

	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_1_vano_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_1_vano_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_1_vano_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam5");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_1_vano_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam11");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_1_vano_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_1_vano_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_1_vano_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam19");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam20");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25_1");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam26");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam27");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam28");
	pri_a15_actor_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_leave_him");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam29");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_1_vano_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_1_vano_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_1_vano"] = pri_a15_actor_1_vano_animation_data;

	StateManagerAnimationData pri_a15_actor_1_sokolov_animation_data;
	pri_a15_actor_1_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_1_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_1_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_actor_1_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_1_sokolov_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_1_sokolov_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_1_sokolov_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam5");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_1_sokolov_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_1_sokolov_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_1_sokolov_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_1_sokolov_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_1_sokolov_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam19");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam22");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam23");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam24");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25_1");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam26");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam27");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam28");
	pri_a15_actor_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_leave_him");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam29");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_1_sokolov_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_1_sokolov"] = pri_a15_actor_1_sokolov_animation_data;

	StateManagerAnimationData pri_a15_actor_1_zulus_animation_data;
	pri_a15_actor_1_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_1_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_1_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_actor_1_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_1_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_1_zulus_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_1_zulus_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_1_zulus_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam11");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_1_zulus_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_1_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_1_zulus_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam20");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam22");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam23");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam24");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_1_zulus_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_1_zulus"] = pri_a15_actor_1_zulus_animation_data;

	StateManagerAnimationData pri_a15_actor_1_wanderer_animation_data;
	pri_a15_actor_1_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_1_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_1_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_actor_1_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_1_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_1_wanderer_animation_data.addAnimationFunction("into", 0, Globals::break_fence);

	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_1_wanderer_animation_data.addAnimationFunction("into", 0, Globals::lights_off);

	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam5");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_1_wanderer_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam11");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_1_wanderer_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_1_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_1_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_1_wanderer_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam19");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam20");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam22");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam23");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam24");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25_1");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam26");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam27");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam28");
	pri_a15_actor_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_leave_him");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam29");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_1_wanderer_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_1_wanderer"] = pri_a15_actor_1_wanderer_animation_data;

	StateManagerAnimationData pri_a15_actor_2_vano_sokolov_animation_data;
	pri_a15_actor_2_vano_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_2_vano_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_2_vano_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_actor_2_vano_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam5");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam19");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25_1");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam26");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam27");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam28");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_leave_him");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam29");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_2_vano_sokolov"] =
		pri_a15_actor_2_vano_sokolov_animation_data;

	StateManagerAnimationData pri_a15_actor_2_vano_zulus_animation_data;
	pri_a15_actor_2_vano_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_2_vano_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_2_vano_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_actor_2_vano_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimationFunction("into", 0, Globals::break_fence);

	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam11");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_2_vano_zulus_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam20");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_2_vano_zulus_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_2_vano_zulus"] = pri_a15_actor_2_vano_zulus_animation_data;

	StateManagerAnimationData pri_a15_actor_2_vano_wanderer_animation_data;
	pri_a15_actor_2_vano_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_2_vano_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_2_vano_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_actor_2_vano_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam5");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam11");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam19");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam20");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25_1");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam26");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam27");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam28");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_leave_him");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam29");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_2_vano_wanderer"] =
		pri_a15_actor_2_vano_wanderer_animation_data;

	StateManagerAnimationData pri_a15_actor_2_sokolov_zulus_animation_data;
	pri_a15_actor_2_sokolov_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_2_sokolov_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_2_sokolov_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_actor_2_sokolov_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam22");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam23");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam24");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_2_sokolov_zulus"] =
		pri_a15_actor_2_sokolov_zulus_animation_data;

	StateManagerAnimationData pri_a15_actor_2_sokolov_wanderer_animation_data;
	pri_a15_actor_2_sokolov_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_2_sokolov_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_2_sokolov_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_actor_2_sokolov_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam5");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam19");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam22");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam23");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam24");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25_1");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam26");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam27");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam28");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_leave_him");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam29");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_2_sokolov_wanderer"] =
		pri_a15_actor_2_sokolov_wanderer_animation_data;

	StateManagerAnimationData pri_a15_actor_2_zulus_wanderer_animation_data;
	pri_a15_actor_2_zulus_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_2_zulus_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_2_zulus_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_actor_2_zulus_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam11");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam20");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam22");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam23");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam24");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_2_zulus_wanderer"] =
		pri_a15_actor_2_zulus_wanderer_animation_data;

	StateManagerAnimationData pri_a15_actor_3_vano_alive_animation_data;
	pri_a15_actor_3_vano_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_3_vano_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_3_vano_alive_animation_data.setPropertiesMoving(true);
	pri_a15_actor_3_vano_alive_animation_data.setPropertiesRandom(100);

	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_3_vano_alive_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_3_vano_alive_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_3_vano_alive_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_3_vano_alive_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_3_vano_alive_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_3_vano_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_3_vano_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_3_vano_alive_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_3_vano_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_3_vano_alive_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam22");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam23");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam24");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_3_vano_alive_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_3_vano_alive"] = pri_a15_actor_3_vano_alive_animation_data;

	StateManagerAnimationData pri_a15_actor_3_sokolov_alive_animation_data;
	pri_a15_actor_3_sokolov_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_3_sokolov_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_3_sokolov_alive_animation_data.setPropertiesMoving(true);
	pri_a15_actor_3_sokolov_alive_animation_data.setPropertiesRandom(100);

	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam11");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam20");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_3_sokolov_alive"] =
		pri_a15_actor_3_sokolov_alive_animation_data;

	StateManagerAnimationData pri_a15_actor_3_zulus_alive_animation_data;
	pri_a15_actor_3_zulus_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_actor_3_zulus_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_actor_3_zulus_alive_animation_data.setPropertiesMoving(true);
	pri_a15_actor_3_zulus_alive_animation_data.setPropertiesRandom(100);

	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam5");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam19");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam21");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25_1");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam26");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam27");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam28");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_leave_him");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam29");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_3_zulus_alive_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_3_zulus_alive"] =
		pri_a15_actor_3_zulus_alive_animation_data;

	StateManagerAnimationData pri_a15_actor_3_wanderer_alive_animation_data;
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam6");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam7");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce_squad");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17_1");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam18");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_3_wanderer_alive"] =
		pri_a15_actor_3_wanderer_alive_animation_data;

	StateManagerAnimationData pri_a15_actor_all_dead_animation_data;
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam1");
	pri_a15_actor_all_dead_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_wpn_ak74");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam2");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam3");
	pri_a15_actor_all_dead_animation_data.addAnimationFunction("into", 0, Globals::break_fence);
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam4");
	pri_a15_actor_all_dead_animation_data.addAnimationFunction("into", 0, Globals::lights_off);
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam8");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_1");
	pri_a15_actor_all_dead_animation_data.addAnimationFunction("into", 0, Globals::unstrap_weapon);
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam9_2");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam10");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam12");
	pri_a15_actor_all_dead_animation_data.addAnimationFunction("into", 0, Globals::strap_weapon);
	pri_a15_actor_all_dead_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_actor_need_talk_with_commander");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam13");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam14");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam15");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_1");
	pri_a15_actor_all_dead_animation_data.addAnimationSoundName("into", 0, "pri_a15_actor_introduce");
	pri_a15_actor_all_dead_animation_data.addAnimationAttachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam16_2");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam17");
	pri_a15_actor_all_dead_animation_data.addAnimationDettachItemName("into", 0, "pri_a15_documents");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam25");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam30");
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam31");
	pri_a15_actor_all_dead_animation_data.addAnimationFunction("into", 0, Globals::end_scene);
	pri_a15_actor_all_dead_animation_data.addAnimation("into", 0, "pri_a15_igrok_cam32");

	this->m_state_manager_animation_list["pri_a15_actor_all_dead"] = pri_a15_actor_all_dead_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_all_animation_data;
	pri_a15_military_tarasov_all_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_all_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_all_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_all_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam5");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_all_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam11");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam19");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam20");
	pri_a15_military_tarasov_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam22");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam23");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam24");
	pri_a15_military_tarasov_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25_1");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam26");
	pri_a15_military_tarasov_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_stop");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam27");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam28");
	pri_a15_military_tarasov_all_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_leave");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam29");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_all"] =
		pri_a15_military_tarasov_all_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_1_vano_animation_data;
	pri_a15_military_tarasov_1_vano_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_1_vano_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_1_vano_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_1_vano_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam5");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam11");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam19");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam20");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25_1");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam26");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_stop");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam27");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam28");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_leave");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam29");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_1_vano"] =
		pri_a15_military_tarasov_1_vano_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_1_sokolov_animation_data;
	pri_a15_military_tarasov_1_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_1_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_1_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_1_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam5");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam19");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam22");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam23");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam24");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25_1");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam26");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_stop");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam27");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam28");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_leave");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam29");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_1_sokolov"] =
		pri_a15_military_tarasov_1_sokolov_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_1_zulus_animation_data;
	pri_a15_military_tarasov_1_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_1_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_1_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_1_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam11");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam20");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam22");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam23");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam24");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_1_zulus"] =
		pri_a15_military_tarasov_1_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_1_wanderer_animation_data;
	pri_a15_military_tarasov_1_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_1_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_1_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_1_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam5");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam11");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam19");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam20");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam22");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam23");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam24");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25_1");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam26");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_stop");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam27");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam28");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_leave");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam29");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_1_wanderer"] =
		pri_a15_military_tarasov_1_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_2_vano_sokolov_animation_data;
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam5");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam19");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25_1");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam26");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_stop");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam27");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam28");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_leave");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam29");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_2_vano_sokolov"] =
		pri_a15_military_tarasov_2_vano_sokolov_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_2_vano_zulus_animation_data;
	pri_a15_military_tarasov_2_vano_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_2_vano_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_2_vano_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_2_vano_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam11");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam20");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_2_vano_zulus"] =
		pri_a15_military_tarasov_2_vano_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_2_vano_wanderer_animation_data;
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam5");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam11");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam19");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam20");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25_1");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam26");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_stop");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam27");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam28");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_leave");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam29");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_2_vano_wanderer"] =
		pri_a15_military_tarasov_2_vano_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_2_sokolov_zulus_animation_data;
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam22");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam23");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam24");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_2_sokolov_zulus"] =
		pri_a15_military_tarasov_2_sokolov_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_2_sokolov_wanderer_animation_data;
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam5");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation(
		"into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam19");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam22");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam23");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam24");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation(
		"into", 0, "pri_a15_soldier_kam_cam25_1");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam26");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_stop");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam27");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam28");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_leave");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam29");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_2_sokolov_wanderer"] =
		pri_a15_military_tarasov_2_sokolov_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_2_zulus_wanderer_animation_data;
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam11");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam20");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam22");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam23");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam24");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_2_zulus_wanderer"] =
		pri_a15_military_tarasov_2_zulus_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_3_vano_alive_animation_data;
	pri_a15_military_tarasov_3_vano_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_3_vano_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_3_vano_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_3_vano_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam22");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam23");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam24");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_3_vano_alive"] =
		pri_a15_military_tarasov_3_vano_alive_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_3_sokolov_alive_animation_data;
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam11");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam20");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_3_sokolov_alive"] =
		pri_a15_military_tarasov_3_sokolov_alive_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_3_zulus_alive_animation_data;
	pri_a15_military_tarasov_3_zulus_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_3_zulus_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_3_zulus_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_3_zulus_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam5");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimationFunction("into", 0,
		Globals::lights_on);
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam19");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam21");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25_1");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam26");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_stop");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam27");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam28");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_leave");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam29");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_3_zulus_alive"] =
		pri_a15_military_tarasov_3_zulus_alive_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_3_wanderer_alive_animation_data;
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17_1");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam18");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimationSoundName(
		"into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_3_wanderer_alive"] =
		pri_a15_military_tarasov_3_wanderer_alive_animation_data;

	StateManagerAnimationData pri_a15_military_tarasov_all_dead_animation_data;
	pri_a15_military_tarasov_all_dead_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_tarasov_all_dead_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_tarasov_all_dead_animation_data.setPropertiesMoving(true);
	pri_a15_military_tarasov_all_dead_animation_data.setPropertiesRandom(100);

	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam1");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam2");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam3");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam4");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam6");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam7");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam8");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam9");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_hide_weapon");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimationFunction("into", 0, Globals::lights_on);
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam10");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam12");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam13");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam14");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_who_a_you");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam15");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam16");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam17");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_joke");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimationSoundName("into", 0, "pri_a15_army_go_with_me");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam25");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_army_go");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam30");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam31");
	pri_a15_military_tarasov_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_kam_cam32");

	this->m_state_manager_animation_list["pri_a15_military_tarasov_all_dead"] =
		pri_a15_military_tarasov_all_dead_animation_data;

	StateManagerAnimationData pri_a15_military_2_all_animation_data;
	pri_a15_military_2_all_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_all_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_all_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_all_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam5");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam11");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam19");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam20");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam22");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam23");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam24");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25_1");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam26");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam27");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam28");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam29");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_all"] = pri_a15_military_2_all_animation_data;

	StateManagerAnimationData pri_a15_military_2_1_vano_animation_data;
	pri_a15_military_2_1_vano_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_1_vano_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_1_vano_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_1_vano_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam5");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam11");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam19");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam20");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25_1");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam26");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam27");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam28");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam29");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_1_vano"] = pri_a15_military_2_1_vano_animation_data;

	StateManagerAnimationData pri_a15_military_2_1_sokolov_animation_data;
	pri_a15_military_2_1_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_1_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_1_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_1_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam5");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam19");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam22");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam23");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam24");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25_1");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam26");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam27");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam28");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam29");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_1_sokolov"] =
		pri_a15_military_2_1_sokolov_animation_data;

	StateManagerAnimationData pri_a15_military_2_1_zulus_animation_data;
	pri_a15_military_2_1_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_1_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_1_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_1_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam11");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam20");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam22");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam23");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam24");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_1_zulus"] = pri_a15_military_2_1_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_2_1_wanderer_animation_data;
	pri_a15_military_2_1_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_1_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_1_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_1_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam5");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam11");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam19");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam20");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam22");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam23");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam24");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25_1");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam26");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam27");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam28");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam29");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_1_wanderer"] =
		pri_a15_military_2_1_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_2_2_vano_sokolov_animation_data;
	pri_a15_military_2_2_vano_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_2_vano_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_2_vano_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_2_vano_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam5");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam19");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25_1");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam26");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam27");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam28");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam29");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_2_vano_sokolov"] =
		pri_a15_military_2_2_vano_sokolov_animation_data;

	StateManagerAnimationData pri_a15_military_2_2_vano_zulus_animation_data;
	pri_a15_military_2_2_vano_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_2_vano_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_2_vano_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_2_vano_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam11");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam20");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_2_vano_zulus"] =
		pri_a15_military_2_2_vano_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_2_2_vano_wanderer_animation_data;
	pri_a15_military_2_2_vano_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_2_vano_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_2_vano_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_2_vano_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam5");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam11");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam19");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam20");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25_1");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam26");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam27");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam28");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam29");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_2_vano_wanderer"] =
		pri_a15_military_2_2_vano_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_2_2_sokolov_zulus_animation_data;
	pri_a15_military_2_2_sokolov_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_2_sokolov_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_2_sokolov_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_2_sokolov_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam22");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam23");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam24");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_2_sokolov_zulus"] =
		pri_a15_military_2_2_sokolov_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_2_2_sokolov_wanderer_animation_data;
	pri_a15_military_2_2_sokolov_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_2_sokolov_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_2_sokolov_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_2_sokolov_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam5");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam19");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam22");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam23");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam24");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25_1");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam26");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam27");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam28");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam29");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_2_sokolov_wanderer"] =
		pri_a15_military_2_2_sokolov_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_2_2_zulus_wanderer_animation_data;
	pri_a15_military_2_2_zulus_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_2_zulus_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_2_zulus_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_2_zulus_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam11");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam20");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam22");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam23");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam24");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_2_zulus_wanderer"] =
		pri_a15_military_2_2_zulus_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_2_3_vano_alive_animation_data;
	pri_a15_military_2_3_vano_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_3_vano_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_3_vano_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_3_vano_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam22");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam23");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam24");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_3_vano_alive"] =
		pri_a15_military_2_3_vano_alive_animation_data;

	StateManagerAnimationData pri_a15_military_2_3_sokolov_alive_animation_data;
	pri_a15_military_2_3_sokolov_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_3_sokolov_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_3_sokolov_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_3_sokolov_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam11");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam20");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_3_sokolov_alive"] =
		pri_a15_military_2_3_sokolov_alive_animation_data;

	StateManagerAnimationData pri_a15_military_2_3_zulus_alive_animation_data;
	pri_a15_military_2_3_zulus_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_3_zulus_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_3_zulus_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_3_zulus_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam5");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam19");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam21");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25_1");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam26");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam27");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam28");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam29");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_3_zulus_alive"] =
		pri_a15_military_2_3_zulus_alive_animation_data;

	StateManagerAnimationData pri_a15_military_2_3_wanderer_alive_animation_data;
	pri_a15_military_2_3_wanderer_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_3_wanderer_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_3_wanderer_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_3_wanderer_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17_1");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam18");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_3_wanderer_alive"] =
		pri_a15_military_2_3_wanderer_alive_animation_data;

	StateManagerAnimationData pri_a15_military_2_all_dead_animation_data;
	pri_a15_military_2_all_dead_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_2_all_dead_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_2_all_dead_animation_data.setPropertiesMoving(true);
	pri_a15_military_2_all_dead_animation_data.setPropertiesRandom(100);

	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam1");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam2");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam3");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam4");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam6");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam7");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam8");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam9");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam10");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam12");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam13");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam14");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam15");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam16");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam17");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam25");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam30");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam31");
	pri_a15_military_2_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_1_cam32");

	this->m_state_manager_animation_list["pri_a15_military_2_all_dead"] =
		pri_a15_military_2_all_dead_animation_data;

	StateManagerAnimationData pri_a15_military_3_all_animation_data;
	pri_a15_military_3_all_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_all_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_all_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_all_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam5");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam11");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam19");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam20");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam22");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam23");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam24");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25_1");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam26");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam27");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam28");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam29");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_all"] = pri_a15_military_3_all_animation_data;

	StateManagerAnimationData pri_a15_military_3_1_vano_animation_data;
	pri_a15_military_3_1_vano_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_1_vano_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_1_vano_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_1_vano_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam5");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam11");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam19");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam20");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25_1");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam26");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam27");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam28");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam29");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_1_vano"] = pri_a15_military_3_1_vano_animation_data;

	StateManagerAnimationData pri_a15_military_3_1_sokolov_animation_data;
	pri_a15_military_3_1_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_1_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_1_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_1_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam5");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam19");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam22");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam23");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam24");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25_1");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam26");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam27");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam28");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam29");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_1_sokolov"] =
		pri_a15_military_3_1_sokolov_animation_data;

	StateManagerAnimationData pri_a15_military_3_1_zulus_animation_data;
	pri_a15_military_3_1_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_1_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_1_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_1_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam11");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam20");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam22");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam23");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam24");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_1_zulus"] = pri_a15_military_3_1_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_3_1_wanderer_animation_data;
	pri_a15_military_3_1_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_1_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_1_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_1_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam5");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam11");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam19");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam20");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam22");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam23");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam24");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25_1");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam26");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam27");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam28");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam29");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_1_wanderer"] =
		pri_a15_military_3_1_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_3_2_vano_sokolov_animation_data;
	pri_a15_military_3_2_vano_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_2_vano_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_2_vano_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_2_vano_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam5");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam19");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25_1");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam26");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam27");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam28");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam29");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_2_vano_sokolov"] =
		pri_a15_military_3_2_vano_sokolov_animation_data;

	StateManagerAnimationData pri_a15_military_3_2_vano_zulus_animation_data;
	pri_a15_military_3_2_vano_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_2_vano_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_2_vano_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_2_vano_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam11");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam20");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_2_vano_zulus"] =
		pri_a15_military_3_2_vano_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_3_2_vano_wanderer_animation_data;
	pri_a15_military_3_2_vano_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_2_vano_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_2_vano_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_2_vano_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam5");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam11");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam19");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam20");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25_1");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam26");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam27");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam28");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam29");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_2_vano_wanderer"] =
		pri_a15_military_3_2_vano_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_3_2_sokolov_zulus_animation_data;
	pri_a15_military_3_2_sokolov_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_2_sokolov_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_2_sokolov_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_2_sokolov_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam22");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam23");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam24");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_2_sokolov_zulus"] =
		pri_a15_military_3_2_sokolov_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_3_2_sokolov_wanderer_animation_data;
	pri_a15_military_3_2_sokolov_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_2_sokolov_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_2_sokolov_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_2_sokolov_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam5");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam19");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam22");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam23");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam24");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25_1");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam26");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam27");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam28");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam29");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_2_sokolov_wanderer"] =
		pri_a15_military_3_2_sokolov_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_3_2_zulus_wanderer_animation_data;
	pri_a15_military_3_2_zulus_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_2_zulus_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_2_zulus_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_2_zulus_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam11");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam20");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam22");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam23");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam24");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_2_zulus_wanderer"] =
		pri_a15_military_3_2_zulus_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_3_3_vano_alive_animation_data;
	pri_a15_military_3_3_vano_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_3_vano_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_3_vano_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_3_vano_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam22");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam23");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam24");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_3_vano_alive"] =
		pri_a15_military_3_3_vano_alive_animation_data;

	StateManagerAnimationData pri_a15_military_3_3_sokolov_alive_animation_data;
	pri_a15_military_3_3_sokolov_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_3_sokolov_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_3_sokolov_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_3_sokolov_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam11");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam20");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_3_sokolov_alive"] =
		pri_a15_military_3_3_sokolov_alive_animation_data;

	StateManagerAnimationData pri_a15_military_3_3_zulus_alive_animation_data;
	pri_a15_military_3_3_zulus_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_3_zulus_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_3_zulus_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_3_zulus_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam5");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam19");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam21");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25_1");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam26");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam27");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam28");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam29");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_3_zulus_alive"] =
		pri_a15_military_3_3_zulus_alive_animation_data;

	StateManagerAnimationData pri_a15_military_3_3_wanderer_alive_animation_data;
	pri_a15_military_3_3_wanderer_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_3_wanderer_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_3_wanderer_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_3_wanderer_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17_1");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam18");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_3_wanderer_alive"] =
		pri_a15_military_3_3_wanderer_alive_animation_data;

	StateManagerAnimationData pri_a15_military_3_all_dead_animation_data;
	pri_a15_military_3_all_dead_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_3_all_dead_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_3_all_dead_animation_data.setPropertiesMoving(true);
	pri_a15_military_3_all_dead_animation_data.setPropertiesRandom(100);

	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam1");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam2");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam3");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam4");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam6");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam7");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam8");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam9");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam10");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam12");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam13");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam14");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam15");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam16");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam17");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam25");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam30");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam31");
	pri_a15_military_3_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_2_cam32");

	this->m_state_manager_animation_list["pri_a15_military_3_all_dead"] =
		pri_a15_military_3_all_dead_animation_data;

	StateManagerAnimationData pri_a15_military_4_all_animation_data;
	pri_a15_military_4_all_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_all_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_all_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_all_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam5");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam11");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam19");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam20");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam22");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam23");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam24");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25_1");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam26");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam27");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam28");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam29");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_all_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_all"] = pri_a15_military_4_all_animation_data;

	StateManagerAnimationData pri_a15_military_4_1_vano_animation_data;
	pri_a15_military_4_1_vano_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_1_vano_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_1_vano_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_1_vano_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam5");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam11");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam19");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam20");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25_1");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam26");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam27");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam28");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam29");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_1_vano_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_1_vano"] = pri_a15_military_4_1_vano_animation_data;

	StateManagerAnimationData pri_a15_military_4_1_sokolov_animation_data;
	pri_a15_military_4_1_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_1_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_1_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_1_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam5");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam19");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam22");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam23");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam24");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25_1");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam26");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam27");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam28");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam29");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_1_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_1_sokolov"] =
		pri_a15_military_4_1_sokolov_animation_data;

	StateManagerAnimationData pri_a15_military_4_1_zulus_animation_data;
	pri_a15_military_4_1_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_1_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_1_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_1_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam11");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam20");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam22");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam23");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam24");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_1_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_1_zulus"] = pri_a15_military_4_1_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_4_1_wanderer_animation_data;
	pri_a15_military_4_1_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_1_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_1_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_1_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam5");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam11");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam19");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam20");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam22");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam23");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam24");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25_1");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam26");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam27");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam28");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam29");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_1_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_1_wanderer"] =
		pri_a15_military_4_1_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_4_2_vano_sokolov_animation_data;
	pri_a15_military_4_2_vano_sokolov_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_2_vano_sokolov_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_2_vano_sokolov_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_2_vano_sokolov_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam5");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam19");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25_1");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam26");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam27");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam28");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam29");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_2_vano_sokolov_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_2_vano_sokolov"] =
		pri_a15_military_4_2_vano_sokolov_animation_data;

	StateManagerAnimationData pri_a15_military_4_2_vano_zulus_animation_data;
	pri_a15_military_4_2_vano_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_2_vano_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_2_vano_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_2_vano_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam11");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam20");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_2_vano_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_2_vano_zulus"] =
		pri_a15_military_4_2_vano_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_4_2_vano_wanderer_animation_data;
	pri_a15_military_4_2_vano_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_2_vano_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_2_vano_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_2_vano_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam5");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam11");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam19");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam20");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25_1");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam26");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam27");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam28");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam29");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_2_vano_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_2_vano_wanderer"] =
		pri_a15_military_4_2_vano_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_4_2_sokolov_zulus_animation_data;
	pri_a15_military_4_2_sokolov_zulus_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_2_sokolov_zulus_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_2_sokolov_zulus_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_2_sokolov_zulus_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam22");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam23");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam24");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_2_sokolov_zulus_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_2_sokolov_zulus"] =
		pri_a15_military_4_2_sokolov_zulus_animation_data;

	StateManagerAnimationData pri_a15_military_4_2_sokolov_wanderer_animation_data;
	pri_a15_military_4_2_sokolov_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_2_sokolov_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_2_sokolov_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_2_sokolov_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam5");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam19");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam22");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam23");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam24");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25_1");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam26");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam27");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam28");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam29");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_2_sokolov_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_2_sokolov_wanderer"] =
		pri_a15_military_4_2_sokolov_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_4_2_zulus_wanderer_animation_data;
	pri_a15_military_4_2_zulus_wanderer_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_2_zulus_wanderer_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_2_zulus_wanderer_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_2_zulus_wanderer_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam11");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam20");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam22");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam23");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam24");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_2_zulus_wanderer_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_2_zulus_wanderer"] =
		pri_a15_military_4_2_zulus_wanderer_animation_data;

	StateManagerAnimationData pri_a15_military_4_3_vano_alive_animation_data;
	pri_a15_military_4_3_vano_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_3_vano_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_3_vano_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_3_vano_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam22");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam23");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam24");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_3_vano_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_3_vano_alive"] =
		pri_a15_military_4_3_vano_alive_animation_data;

	StateManagerAnimationData pri_a15_military_4_3_sokolov_alive_animation_data;
	pri_a15_military_4_3_sokolov_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_3_sokolov_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_3_sokolov_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_3_sokolov_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam11");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam20");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_3_sokolov_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_3_sokolov_alive"] =
		pri_a15_military_4_3_sokolov_alive_animation_data;

	StateManagerAnimationData pri_a15_military_4_3_zulus_alive_animation_data;
	pri_a15_military_4_3_zulus_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_3_zulus_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_3_zulus_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_3_zulus_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam5");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam19");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam21");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25_1");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam26");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam27");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam28");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam29");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_3_zulus_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_3_zulus_alive"] =
		pri_a15_military_4_3_zulus_alive_animation_data;

	StateManagerAnimationData pri_a15_military_4_3_wanderer_alive_animation_data;
	pri_a15_military_4_3_wanderer_alive_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_3_wanderer_alive_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_3_wanderer_alive_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_3_wanderer_alive_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17_1");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam18");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_3_wanderer_alive_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_3_wanderer_alive"] =
		pri_a15_military_4_3_wanderer_alive_animation_data;

	StateManagerAnimationData pri_a15_military_4_all_dead_animation_data;
	pri_a15_military_4_all_dead_animation_data.setPropertiesMaxIdle(1);
	pri_a15_military_4_all_dead_animation_data.setPropertiesSumIdle(1);
	pri_a15_military_4_all_dead_animation_data.setPropertiesMoving(true);
	pri_a15_military_4_all_dead_animation_data.setPropertiesRandom(100);

	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam1");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam2");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam3");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam4");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam6");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam7");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam8");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam9");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam10");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam12");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam13");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam14");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam15");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam16");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam17");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam25");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam30");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam31");
	pri_a15_military_4_all_dead_animation_data.addAnimation("into", 0, "pri_a15_soldier_3_cam32");

	this->m_state_manager_animation_list["pri_a15_military_4_all_dead"] =
		pri_a15_military_4_all_dead_animation_data;

	StateManagerAnimationData pri_a17_ice_climb_animation_data;
	pri_a17_ice_climb_animation_data.setPropertiesMaxIdle(1);
	pri_a17_ice_climb_animation_data.setPropertiesSumIdle(1);
	pri_a17_ice_climb_animation_data.setPropertiesMoving(true);
	pri_a17_ice_climb_animation_data.setPropertiesRandom(100);

	pri_a17_ice_climb_animation_data.addAnimation("into", 0, "pri_a17_sniper_climbing");

	this->m_state_manager_animation_list["pri_a17_ice_climb"] = pri_a17_ice_climb_animation_data;

	StateManagerAnimationData pri_a17_fall_down_animation_data;
	pri_a17_fall_down_animation_data.setPropertiesMaxIdle(1);
	pri_a17_fall_down_animation_data.setPropertiesSumIdle(1);
	pri_a17_fall_down_animation_data.setPropertiesRandom(100);
	pri_a17_fall_down_animation_data.setPropertiesMoving(true);

	pri_a17_fall_down_animation_data.addAnimation("into", 0, "ragdoll_sniper_body_front_2");
	pri_a17_fall_down_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::pri_a17_preacher_death);

	this->m_state_manager_animation_list["pri_a17_fall_down"] = pri_a17_fall_down_animation_data;

	StateManagerAnimationData pri_a17_pray_in_animation_data;
	pri_a17_pray_in_animation_data.setPropertiesMaxIdle(1);
	pri_a17_pray_in_animation_data.setPropertiesSumIdle(1);
	pri_a17_pray_in_animation_data.setPropertiesRandom(100);
	pri_a17_pray_in_animation_data.setPropertiesMoving(true);

	pri_a17_pray_in_animation_data.addAnimation("into", 0, "pri_a17_preacher_sermon_in");
	pri_a17_pray_in_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::pri_a17_pray_start);
	pri_a17_pray_in_animation_data.addAnimation("into", 0, "pri_a17_preacher_sermon_out");

	this->m_state_manager_animation_list["pri_a17_pray_in"] = pri_a17_pray_in_animation_data;

	StateManagerAnimationData pri_a17_pray_animation_data;
	pri_a17_pray_animation_data.setPropertiesMaxIdle(1);
	pri_a17_pray_animation_data.setPropertiesSumIdle(1);
	pri_a17_pray_animation_data.setPropertiesMoving(true);
	pri_a17_pray_animation_data.setPropertiesRandom(100);

	pri_a17_pray_animation_data.addAnimation("idle", 0, "pri_a17_preacher_sermon_out");

	this->m_state_manager_animation_list["pri_a17_pray"] = pri_a17_pray_animation_data;

	StateManagerAnimationData pri_a21_sentry_madness_idle_animstate_data;
	pri_a21_sentry_madness_idle_animstate_data.setPropertiesMaxIdle(1);
	pri_a21_sentry_madness_idle_animstate_data.setPropertiesSumIdle(1);
	pri_a21_sentry_madness_idle_animstate_data.setPropertiesRandom(100);
	pri_a21_sentry_madness_idle_animstate_data.setPropertiesMoving(true);

	pri_a21_sentry_madness_idle_animstate_data.addAnimation("idle", 0, "jup_b15_zulus_sit_idle_short");
	pri_a21_sentry_madness_idle_animstate_data.addAnimation("idle", 1, "jup_b15_zulus_sit_idle_short");

	this->m_state_manager_animationstate_list["pri_a21_sentry_madness_idle"] =
		pri_a21_sentry_madness_idle_animstate_data;

	StateManagerAnimationData pri_a20_colonel_radio_animstate_data;
	pri_a20_colonel_radio_animstate_data.setPropertiesMaxIdle(1);
	pri_a20_colonel_radio_animstate_data.setPropertiesSumIdle(1);
	pri_a20_colonel_radio_animstate_data.setPropertiesRandom(100);
	pri_a20_colonel_radio_animstate_data.setPropertiesMoving(true);

	pri_a20_colonel_radio_animstate_data.addAnimation("into", 0, "pri_a20_colonel_radio_in");
	pri_a20_colonel_radio_animstate_data.addAnimationFunction("idle", 0, XR_EFFECTS::pri_a20_radio_start);
	pri_a20_colonel_radio_animstate_data.addAnimation("out", 0, "pri_a20_colonel_radio_out");
	pri_a20_colonel_radio_animstate_data.addAnimation("idle", 0, "pri_a20_colonel_radio_idle");

	this->m_state_manager_animationstate_list["pri_a20_colonel_radio"] = pri_a20_colonel_radio_animstate_data;

	StateManagerAnimationData pri_a22_colonel_lean_on_table_animstate_data;
	pri_a22_colonel_lean_on_table_animstate_data.setPropertiesMaxIdle(1);
	pri_a22_colonel_lean_on_table_animstate_data.setPropertiesSumIdle(1);
	pri_a22_colonel_lean_on_table_animstate_data.setPropertiesRandom(100);
	pri_a22_colonel_lean_on_table_animstate_data.setPropertiesMoving(true);

	pri_a22_colonel_lean_on_table_animstate_data.addAnimation("into", 0, "pri_a22_colonel_lean_on_tabl_in");
	pri_a22_colonel_lean_on_table_animstate_data.addAnimationFunction("idle", 0, XR_EFFECTS::pri_a22_kovalski_speak);
	pri_a22_colonel_lean_on_table_animstate_data.addAnimation("out", 0, "pri_a22_colonel_lean_on_tabl_out");
	pri_a22_colonel_lean_on_table_animstate_data.addAnimation("idle", 0, "pri_a22_colonel_lean_on_tabl_idle");

	this->m_state_manager_animationstate_list["pri_a22_colonel_lean_on_table"] =
		pri_a22_colonel_lean_on_table_animstate_data;

	StateManagerAnimationData sit_animation_data;
	sit_animation_data.setPropertiesMaxIdle(5);
	sit_animation_data.setPropertiesSumIdle(3);
	sit_animation_data.setPropertiesRandom(80);

	sit_animation_data.addAnimation("into", 0, "idle_0_to_sit_0");

	sit_animation_data.addAnimation("out", 0, "sit_0_to_idle_0");

	sit_animation_data.addAnimation("idle", 0, "sit_0_idle_0");

	sit_animation_data.addAnimation("rnd", 0, "sit_0_idle_1");
	sit_animation_data.addAnimation("rnd", 0, "sit_0_idle_2");
	sit_animation_data.addAnimation("rnd", 0, "sit_0_idle_3");

	this->m_state_manager_animationstate_list["sit"] = sit_animation_data;

	StateManagerAnimationData sit_knee_animation_data;
	sit_knee_animation_data.setPropertiesMaxIdle(5);
	sit_knee_animation_data.setPropertiesSumIdle(3);
	sit_knee_animation_data.setPropertiesRandom(80);

	sit_knee_animation_data.addAnimation("into", 0, "idle_0_to_sit_1");

	sit_knee_animation_data.addAnimation("out", 0, "sit_1_to_idle_0");

	sit_knee_animation_data.addAnimation("idle", 0, "sit_1_idle_0");

	sit_knee_animation_data.addAnimation("rnd", 0, "sit_1_idle_1");
	sit_knee_animation_data.addAnimation("rnd", 0, "sit_1_idle_2");
	sit_knee_animation_data.addAnimation("rnd", 0, "sit_1_idle_3");

	this->m_state_manager_animationstate_list["sit_knee"] = sit_knee_animation_data;

	StateManagerAnimationData sit_ass_animation_data;
	sit_ass_animation_data.setPropertiesMaxIdle(5);
	sit_ass_animation_data.setPropertiesSumIdle(3);
	sit_ass_animation_data.setPropertiesRandom(80);

	sit_ass_animation_data.addAnimation("into", 0, "idle_0_to_sit_2");

	sit_ass_animation_data.addAnimation("out", 0, "sit_2_to_idle_0");

	sit_ass_animation_data.addAnimation("idle", 0, "sit_2_idle_0");

	sit_ass_animation_data.addAnimation("rnd", 0, "sit_2_idle_1");
	sit_ass_animation_data.addAnimation("rnd", 0, "sit_2_idle_2");
	sit_ass_animation_data.addAnimation("rnd", 0, "sit_2_idle_3");

	this->m_state_manager_animationstate_list["sit_ass"] = sit_ass_animation_data;

	StateManagerAnimationData pas_b400_vano_probe_animation_data;
	pas_b400_vano_probe_animation_data.setPropertiesMaxIdle(0);
	pas_b400_vano_probe_animation_data.setPropertiesSumIdle(0);
	pas_b400_vano_probe_animation_data.setPropertiesRandom(100);

	pas_b400_vano_probe_animation_data.addAnimation("into", 0, "metering_anomalys_0_draw_0");
	pas_b400_vano_probe_animation_data.addAnimationAttachItemName("into", 0, "detector_elite");
	pas_b400_vano_probe_animation_data.addAnimation("into", 0, "metering_anomalys_0_draw_1");

	pas_b400_vano_probe_animation_data.addAnimation("out", 0, "metering_anomalys_0_hide_0");
	pas_b400_vano_probe_animation_data.addAnimationDettachItemName("out", 0, "detector_elite");
	pas_b400_vano_probe_animation_data.addAnimation("out", 0, "metering_anomalys_0_hide_1");

	pas_b400_vano_probe_animation_data.addAnimation("idle", 0, "metering_anomalys_0_idle_0");

	this->m_state_manager_animation_list["pas_b400_vano_probe"] = pas_b400_vano_probe_animation_data;

	StateManagerAnimationData pri_a28_kirillov_sit_high_radio_animation_data;
	pri_a28_kirillov_sit_high_radio_animation_data.setPropertiesMaxIdle(0);
	pri_a28_kirillov_sit_high_radio_animation_data.setPropertiesSumIdle(0);
	pri_a28_kirillov_sit_high_radio_animation_data.setPropertiesRandom(100);

	pri_a28_kirillov_sit_high_radio_animation_data.addAnimation("into", 0, "pri_a28_kirillov_radio_on_in");
	pri_a28_kirillov_sit_high_radio_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::pri_a28_kirillov_hq_online);

	pri_a28_kirillov_sit_high_radio_animation_data.addAnimation("out", 0, "pri_a28_kirillov_radio_on_out");

	pri_a28_kirillov_sit_high_radio_animation_data.addAnimation("idle", 0, "pri_a28_kirillov_radio_on_idle");

	this->m_state_manager_animation_list["pri_a28_kirillov_sit_high_radio"] =
		pri_a28_kirillov_sit_high_radio_animation_data;

	StateManagerAnimationData pri_a18_inspert_monolit_actor_animation_data;
	pri_a18_inspert_monolit_actor_animation_data.setPropertiesRandom(0);
	pri_a18_inspert_monolit_actor_animation_data.setPropertiesMaxIdle(1);
	pri_a18_inspert_monolit_actor_animation_data.setPropertiesSumIdle(1);
	pri_a18_inspert_monolit_actor_animation_data.setPropertiesMoving(true);

	pri_a18_inspert_monolit_actor_animation_data.addAnimationAttachItemName("into", 0, "hand_radio_r");
	pri_a18_inspert_monolit_actor_animation_data.addAnimation("into", 0, "pri_a18_inspert_monolit_actor_in");
	pri_a18_inspert_monolit_actor_animation_data.addAnimationFunction("into", 0, XR_EFFECTS::pri_a18_radio_start);
	pri_a18_inspert_monolit_actor_animation_data.addAnimation("into", 0, "pri_a18_inspert_monolit_actor_idle");
	pri_a18_inspert_monolit_actor_animation_data.addAnimation("into", 0, "pri_a18_inspert_monolit_actor_idle");
	pri_a18_inspert_monolit_actor_animation_data.addAnimation("into", 0, "pri_a18_inspert_monolit_actor_idle");
	pri_a18_inspert_monolit_actor_animation_data.addAnimation("into", 0, "pri_a18_inspert_monolit_actor_out");
	pri_a18_inspert_monolit_actor_animation_data.addAnimationDettachItemName("into", 0, "hand_radio_r");

	this->m_state_manager_animation_list["pri_a18_inspert_monolit_actor"] =
		pri_a18_inspert_monolit_actor_animation_data;

	StateManagerAnimationData pri_a21_sentry_madness_animation_data;
	pri_a21_sentry_madness_animation_data.setPropertiesMaxIdle(1);
	pri_a21_sentry_madness_animation_data.setPropertiesSumIdle(1);
	pri_a21_sentry_madness_animation_data.setPropertiesMoving(true);

	pri_a21_sentry_madness_animation_data.addAnimation("idle", 0, "pri_a21_sentry_madness_idle");

	this->m_state_manager_animation_list["pri_a21_sentry_madness"] = pri_a21_sentry_madness_animation_data;

	StateManagerAnimationData pri_a21_sentry_madness_suicide_animation_data;
	pri_a21_sentry_madness_suicide_animation_data.setPropertiesMaxIdle(1);
	pri_a21_sentry_madness_suicide_animation_data.setPropertiesSumIdle(1);
	pri_a21_sentry_madness_suicide_animation_data.setPropertiesMoving(true);

	pri_a21_sentry_madness_suicide_animation_data.addAnimation("into", 0, "pri_a21_sentry_madness_suicide");

	pri_a21_sentry_madness_suicide_animation_data.addAnimation("out", 0, "pri_a21_sentry_madness_suicide_idle");

	this->m_state_manager_animation_list["pri_a21_sentry_madness_suicide"] =
		pri_a21_sentry_madness_suicide_animation_data;

	StateManagerAnimationData pri_a22_colonel_lean_on_table_in_animation_data;
	pri_a22_colonel_lean_on_table_in_animation_data.setPropertiesMaxIdle(1);
	pri_a22_colonel_lean_on_table_in_animation_data.setPropertiesSumIdle(1);
	pri_a22_colonel_lean_on_table_in_animation_data.setPropertiesRandom(100);
	pri_a22_colonel_lean_on_table_in_animation_data.setPropertiesMoving(true);

	pri_a22_colonel_lean_on_table_in_animation_data.addAnimation("into", 0, "pri_a22_colonel_lean_on_tadl_in");

	pri_a22_colonel_lean_on_table_in_animation_data.addAnimation("idle", 0, "pri_a22_colonel_lean_on_tadl_idle");

	this->m_state_manager_animation_list["pri_a22_colonel_lean_on_table_in"] =
		pri_a22_colonel_lean_on_table_in_animation_data;

	StateManagerAnimationData pri_a22_colonel_lean_on_table_idle_animation_data;
	pri_a22_colonel_lean_on_table_idle_animation_data.setPropertiesMaxIdle(1);
	pri_a22_colonel_lean_on_table_idle_animation_data.setPropertiesSumIdle(1);
	pri_a22_colonel_lean_on_table_idle_animation_data.setPropertiesRandom(100);

	pri_a22_colonel_lean_on_table_idle_animation_data.addAnimation("idle", 0, "pri_a22_colonel_lean_on_tadl_idle");

	this->m_state_manager_animation_list["pri_a22_colonel_lean_on_table_idle"] =
		pri_a22_colonel_lean_on_table_idle_animation_data;

	StateManagerAnimationData pri_a22_colonel_stand_from_table_animation_data;
	pri_a22_colonel_stand_from_table_animation_data.setPropertiesMaxIdle(1);
	pri_a22_colonel_stand_from_table_animation_data.setPropertiesSumIdle(1);
	pri_a22_colonel_stand_from_table_animation_data.setPropertiesMoving(true);
	pri_a22_colonel_stand_from_table_animation_data.setPropertiesRandom(100);

	pri_a22_colonel_stand_from_table_animation_data.addAnimation("into", 0, "pri_a22_colonel_lean_on_tadl_out");

	this->m_state_manager_animation_list["pri_a22_colonel_stand_from_table"] =
		pri_a22_colonel_stand_from_table_animation_data;

	StateManagerAnimationData pri_a28_army_trance_out_animation_data;
	pri_a28_army_trance_out_animation_data.setPropertiesMaxIdle(1);
	pri_a28_army_trance_out_animation_data.setPropertiesSumIdle(1);
	pri_a28_army_trance_out_animation_data.setPropertiesMoving(true);

	pri_a28_army_trance_out_animation_data.addAnimation("into", 0, "pri_a28_army_trance_out_in");
	pri_a28_army_trance_out_animation_data.addAnimation("out", 0, "pri_a28_army_trance_out_out");
	pri_a28_army_trance_out_animation_data.addAnimation("idle", 0, "pri_a28_army_trance_out_idle");

	this->m_state_manager_animation_list["pri_a28_army_trance_out"] = pri_a28_army_trance_out_animation_data;

	StateManagerAnimationData pri_b305_actor_animation_data;
	pri_b305_actor_animation_data.setPropertiesMaxIdle(1);
	pri_b305_actor_animation_data.setPropertiesSumIdle(1);
	pri_b305_actor_animation_data.setPropertiesMoving(true);
	pri_b305_actor_animation_data.setPropertiesRandom(100);

	pri_b305_actor_animation_data.addAnimation("into", 0, "pri_b305_actor");

	this->m_state_manager_animation_list["pri_b305_actor"] = pri_b305_actor_animation_data;
}

void Cordis::Scripts::Script_GlobalHelper::load_XREFFECTS_Functions(void)
{
	this->m_registered_functions_xr_effects["update_npc_logic"] = XR_EFFECTS::update_npc_logic;
	this->m_registered_functions_xr_effects["update_obj_logic"] = XR_EFFECTS::update_obj_logic;
	this->m_registered_functions_xr_effects["disable_ui"] = XR_EFFECTS::disable_ui;
	this->m_registered_functions_xr_effects["disable_ui_only"] = XR_EFFECTS::disable_ui_only;
	this->m_registered_functions_xr_effects["enable_ui"] = XR_EFFECTS::enable_ui;
	this->m_registered_functions_xr_effects["run_cam_effector"] = XR_EFFECTS::run_cam_effector;
	this->m_registered_functions_xr_effects["stop_cam_effector"] = XR_EFFECTS::stop_cam_effector;
	this->m_registered_functions_xr_effects["run_cam_effector_global"] = XR_EFFECTS::run_cam_effector_global;
	this->m_registered_functions_xr_effects["cam_effector_callback"] = XR_EFFECTS::cam_effector_callback;
	this->m_registered_functions_xr_effects["run_postprocess"] = XR_EFFECTS::run_postprocess;
	this->m_registered_functions_xr_effects["stop_postprocess"] = XR_EFFECTS::stop_postprocess;
	this->m_registered_functions_xr_effects["run_tutorial"] = XR_EFFECTS::run_tutorial;
	this->m_registered_functions_xr_effects["jup_b32_place_scanner"] = XR_EFFECTS::jup_b32_place_scanner;
	this->m_registered_functions_xr_effects["jup_b32_pda_check"] = XR_EFFECTS::jup_b32_pda_check;
	this->m_registered_functions_xr_effects["pri_b306_generator_start"] = XR_EFFECTS::pri_b306_generator_start;
	this->m_registered_functions_xr_effects["jup_b206_get_plant"] = XR_EFFECTS::jup_b206_get_plant;
	this->m_registered_functions_xr_effects["pas_b400_switcher"] = XR_EFFECTS::pas_b400_switcher;
	this->m_registered_functions_xr_effects["jup_b209_place_scanner"] = XR_EFFECTS::jup_b209_place_scanner;
	this->m_registered_functions_xr_effects["jup_b9_heli_1_searching"] = XR_EFFECTS::jup_b9_heli_1_searching;
	this->m_registered_functions_xr_effects["pri_a18_use_idol"] = XR_EFFECTS::pri_a18_use_idol;
	this->m_registered_functions_xr_effects["jup_b8_heli_4_searching"] = XR_EFFECTS::jup_b8_heli_4_searching;
	this->m_registered_functions_xr_effects["jup_b10_ufo_searching"] = XR_EFFECTS::jup_b10_ufo_searching;
	this->m_registered_functions_xr_effects["zat_b101_heli_5_searching"] = XR_EFFECTS::zat_b101_heli_5_searching;
	this->m_registered_functions_xr_effects["zat_b28_heli_3_searching"] = XR_EFFECTS::zat_b28_heli_3_searching;
	this->m_registered_functions_xr_effects["zat_b100_heli_2_searching"] = XR_EFFECTS::zat_b100_heli_2_searching;
	this->m_registered_functions_xr_effects["teleport_actor"] = XR_EFFECTS::teleport_actor;
	this->m_registered_functions_xr_effects["teleport_npc"] = XR_EFFECTS::teleport_npc;
	this->m_registered_functions_xr_effects["teleport_npc_by_story_id"] = XR_EFFECTS::teleport_npc_by_story_id;
	this->m_registered_functions_xr_effects["teleport_squad"] = XR_EFFECTS::teleport_squad;
	this->m_registered_functions_xr_effects["jup_teleport_actor"] = XR_EFFECTS::jup_teleport_actor;
	this->m_registered_functions_xr_effects["give_items"] = XR_EFFECTS::give_items;
	this->m_registered_functions_xr_effects["give_item"] = XR_EFFECTS::give_item;
	this->m_registered_functions_xr_effects["play_particle_on_path"] = XR_EFFECTS::play_particle_on_path;
	this->m_registered_functions_xr_effects["send_tip"] = XR_EFFECTS::send_tip;
	this->m_registered_functions_xr_effects["hit_npc"] = XR_EFFECTS::hit_npc;
	this->m_registered_functions_xr_effects["hit_obj"] = XR_EFFECTS::hit_obj;
	this->m_registered_functions_xr_effects["hit_by_killer"] = XR_EFFECTS::hit_by_killer;
	this->m_registered_functions_xr_effects["hit_npc_from_actor"] = XR_EFFECTS::hit_npc_from_actor;
	this->m_registered_functions_xr_effects["restore_health"] = XR_EFFECTS::restore_health;
	this->m_registered_functions_xr_effects["make_enemy"] = XR_EFFECTS::make_enemy;
	this->m_registered_functions_xr_effects["sniper_fire_mode"] = XR_EFFECTS::sniper_fire_mode;
	this->m_registered_functions_xr_effects["kill_npc"] = XR_EFFECTS::kill_npc;
	this->m_registered_functions_xr_effects["remove_npc"] = XR_EFFECTS::remove_npc;
	this->m_registered_functions_xr_effects["inc_counter"] = XR_EFFECTS::inc_counter;
	this->m_registered_functions_xr_effects["dec_counter"] = XR_EFFECTS::dec_counter;
	this->m_registered_functions_xr_effects["set_counter"] = XR_EFFECTS::set_counter;
	this->m_registered_functions_xr_effects["actor_punch"] = XR_EFFECTS::actor_punch;
	this->m_registered_functions_xr_effects["clearAbuse"] = XR_EFFECTS::clearAbuse;
	this->m_registered_functions_xr_effects["turn_off_underpass_lamps"] = XR_EFFECTS::turn_off_underpass_lamps;
	this->m_registered_functions_xr_effects["turn_off"] = XR_EFFECTS::turn_off;
	this->m_registered_functions_xr_effects["turn_off_object"] = XR_EFFECTS::turn_off_object;
	this->m_registered_functions_xr_effects["turn_on"] = XR_EFFECTS::turn_on;
	this->m_registered_functions_xr_effects["turn_on_and_force"] = XR_EFFECTS::turn_on_and_force;
	this->m_registered_functions_xr_effects["turn_off_and_force"] = XR_EFFECTS::turn_off_and_force;
	this->m_registered_functions_xr_effects["turn_on_object"] = XR_EFFECTS::turn_on_object;
	this->m_registered_functions_xr_effects["turn_off_object"] = XR_EFFECTS::turn_off_object;
	this->m_registered_functions_xr_effects["disable_combat_handler"] = XR_EFFECTS::disable_combat_handler;
	this->m_registered_functions_xr_effects["disable_combat_ignore_handler"] = XR_EFFECTS::disable_combat_ignore_handler;
	this->m_registered_functions_xr_effects["set_weather"] = XR_EFFECTS::set_weather;
	this->m_registered_functions_xr_effects["game_disconnect"] = XR_EFFECTS::game_disconnect;
	this->m_registered_functions_xr_effects["game_credits"] = XR_EFFECTS::game_credits;
	this->m_registered_functions_xr_effects["game_over"] = XR_EFFECTS::game_over;
	this->m_registered_functions_xr_effects["after_credits"] = XR_EFFECTS::after_credits;
	this->m_registered_functions_xr_effects["before_credits"] = XR_EFFECTS::before_credits;
	this->m_registered_functions_xr_effects["on_tutor_gameover_stop"] = XR_EFFECTS::on_tutor_gameover_stop;
	this->m_registered_functions_xr_effects["on_tutor_gameover_quickload"] = XR_EFFECTS::on_tutor_gameover_quickload;
	this->m_registered_functions_xr_effects["switch_to_desired_job"] = XR_EFFECTS::switch_to_desired_job;
	this->m_registered_functions_xr_effects["spawn_object"] = XR_EFFECTS::spawn_object;
	this->m_registered_functions_xr_effects["jup_b219_save_pos"] = XR_EFFECTS::jup_b219_save_pos;
	this->m_registered_functions_xr_effects["jup_b219_restore_gate"] = XR_EFFECTS::jup_b219_restore_gate;
	this->m_registered_functions_xr_effects["spawn_corpse"] = XR_EFFECTS::spawn_corpse;
	this->m_registered_functions_xr_effects["spawn_object_in"] = XR_EFFECTS::spawn_object_in;
	this->m_registered_functions_xr_effects["destroy_object"] = XR_EFFECTS::destroy_object;
	this->m_registered_functions_xr_effects["give_actor"] = XR_EFFECTS::give_actor;
	this->m_registered_functions_xr_effects["anim_obj_forward"] = XR_EFFECTS::anim_obj_forward;
	this->m_registered_functions_xr_effects["anim_obj_backward"] = XR_EFFECTS::anim_obj_backward;
	this->m_registered_functions_xr_effects["anim_obj_stop"] = XR_EFFECTS::anim_obj_stop;
	this->m_registered_functions_xr_effects["play_sound"] = XR_EFFECTS::play_sound;
	this->m_registered_functions_xr_effects["play_sound_by_story"] = XR_EFFECTS::play_sound_by_story;
	this->m_registered_functions_xr_effects["stop_sound"] = XR_EFFECTS::stop_sound;
	this->m_registered_functions_xr_effects["play_sound_looped"] = XR_EFFECTS::play_sound_looped;
	this->m_registered_functions_xr_effects["stop_sound_looped"] = XR_EFFECTS::stop_sound_looped;
	this->m_registered_functions_xr_effects["barrel_explode"] = XR_EFFECTS::barrel_explode;
	this->m_registered_functions_xr_effects["create_squad"] = XR_EFFECTS::create_squad;
	this->m_registered_functions_xr_effects["create_squad_member"] = XR_EFFECTS::create_squad_member;
	this->m_registered_functions_xr_effects["remove_squad"] = XR_EFFECTS::remove_squad;
	this->m_registered_functions_xr_effects["kill_squad"] = XR_EFFECTS::kill_squad;
	this->m_registered_functions_xr_effects["heal_squad"] = XR_EFFECTS::heal_squad;
	this->m_registered_functions_xr_effects["clear_smart_terrain"] = XR_EFFECTS::clear_smart_terrain;
	this->m_registered_functions_xr_effects["give_task"] = XR_EFFECTS::give_task;
	this->m_registered_functions_xr_effects["set_active_task"] = XR_EFFECTS::set_active_task;
	this->m_registered_functions_xr_effects["actor_friend"] = XR_EFFECTS::actor_friend;
	this->m_registered_functions_xr_effects["actor_neutral"] = XR_EFFECTS::actor_neutral;
	this->m_registered_functions_xr_effects["actor_enemy"] = XR_EFFECTS::actor_enemy;
	this->m_registered_functions_xr_effects["set_squad_neutral_to_actor"] = XR_EFFECTS::set_squad_neutral_to_actor;
	this->m_registered_functions_xr_effects["set_squad_friend_to_actor"] = XR_EFFECTS::set_squad_friend_to_actor;
	this->m_registered_functions_xr_effects["set_squad_enemy_to_actor"] = XR_EFFECTS::set_squad_enemy_to_actor;
	this->m_registered_functions_xr_effects["set_squad_goodwill"] = XR_EFFECTS::set_squad_goodwill;
	this->m_registered_functions_xr_effects["set_squad_goodwill_to_npc"] = XR_EFFECTS::set_squad_goodwill_to_npc;
	this->m_registered_functions_xr_effects["inc_faction_goodwill_to_actor"] = XR_EFFECTS::inc_faction_goodwill_to_actor;
	this->m_registered_functions_xr_effects["dec_faction_goodwill_to_actor"] = XR_EFFECTS::dec_faction_goodwill_to_actor;
	this->m_registered_functions_xr_effects["kill_actor"] = XR_EFFECTS::kill_actor;
	this->m_registered_functions_xr_effects["give_treasure"] = XR_EFFECTS::give_treasure;
	this->m_registered_functions_xr_effects["start_surge"] = XR_EFFECTS::start_surge;
	this->m_registered_functions_xr_effects["stop_surge"] = XR_EFFECTS::stop_surge;
	this->m_registered_functions_xr_effects["set_surge_mess_and_task"] = XR_EFFECTS::set_surge_mess_and_task;
	this->m_registered_functions_xr_effects["make_actor_visible_to_squad"] = XR_EFFECTS::make_actor_visible_to_squad;
	this->m_registered_functions_xr_effects["stop_sr_cutscene"] = XR_EFFECTS::stop_sr_cutscene;
	this->m_registered_functions_xr_effects["enable_anomaly"] = XR_EFFECTS::enable_anomaly;
	this->m_registered_functions_xr_effects["disable_anomaly"] = XR_EFFECTS::disable_anomaly;
	this->m_registered_functions_xr_effects["add_cs_text"] = XR_EFFECTS::add_cs_text;
	this->m_registered_functions_xr_effects["del_cs_text"] = XR_EFFECTS::del_cs_text;
	this->m_registered_functions_xr_effects["spawn_item_to_npc"] = XR_EFFECTS::spawn_item_to_npc;
	this->m_registered_functions_xr_effects["give_money_to_npc"] = XR_EFFECTS::give_money_to_npc;
	this->m_registered_functions_xr_effects["seize_money_to_npc"] = XR_EFFECTS::seize_money_to_npc;
	this->m_registered_functions_xr_effects["relocate_item"] = XR_EFFECTS::relocate_item;
	this->m_registered_functions_xr_effects["set_squads_enemies"] = XR_EFFECTS::set_squads_enemies;
	this->m_registered_functions_xr_effects["set_bloodsucker_state"] = XR_EFFECTS::set_bloodsucker_state;
	this->m_registered_functions_xr_effects["remove_item"] = XR_EFFECTS::remove_item;
	this->m_registered_functions_xr_effects["scenario_autosave"] = XR_EFFECTS::scenario_autosave;
	this->m_registered_functions_xr_effects["zat_b29_create_random_infop"] = XR_EFFECTS::zat_b29_create_random_infop;
	this->m_registered_functions_xr_effects["give_item_b29"] = XR_EFFECTS::give_item_b29;
	this->m_registered_functions_xr_effects["relocate_item_b29"] = XR_EFFECTS::relocate_item_b29;
	this->m_registered_functions_xr_effects["reset_sound_npc"] = XR_EFFECTS::reset_sound_npc;
	this->m_registered_functions_xr_effects["jup_b202_inventory_box_relocate"] = XR_EFFECTS::jup_b202_inventory_box_relocate;
	this->m_registered_functions_xr_effects["clear_box"] = XR_EFFECTS::clear_box;
	this->m_registered_functions_xr_effects["activate_weapon"] = XR_EFFECTS::activate_weapon;
	this->m_registered_functions_xr_effects["set_game_time"] = XR_EFFECTS::set_game_time;
	this->m_registered_functions_xr_effects["forward_game_time"] = XR_EFFECTS::forward_game_time;
	this->m_registered_functions_xr_effects["stop_tutorial"] = XR_EFFECTS::stop_tutorial;
	this->m_registered_functions_xr_effects["jup_b10_spawn_drunk_dead_items"] = XR_EFFECTS::jup_b10_spawn_drunk_dead_items;
	this->m_registered_functions_xr_effects["pick_artefact_from_anomaly"] = XR_EFFECTS::pick_artefact_from_anomaly;
	this->m_registered_functions_xr_effects["anomaly_turn_off"] = XR_EFFECTS::anomaly_turn_off;
	this->m_registered_functions_xr_effects["anomaly_turn_on"] = XR_EFFECTS::anomaly_turn_on;
	this->m_registered_functions_xr_effects["zat_b202_spawn_random_loot"] = XR_EFFECTS::zat_b202_spawn_random_loot;
	this->m_registered_functions_xr_effects["zat_a1_tutorial_end_give"] = XR_EFFECTS::zat_a1_tutorial_end_give;
	this->m_registered_functions_xr_effects["oasis_heal"] = XR_EFFECTS::oasis_heal;
	this->m_registered_functions_xr_effects["jup_b221_play_main"] = XR_EFFECTS::jup_b221_play_main;
	this->m_registered_functions_xr_effects["pas_b400_play_particle"] = XR_EFFECTS::pas_b400_play_particle;
	this->m_registered_functions_xr_effects["pas_b400_stop_particle"] = XR_EFFECTS::pas_b400_stop_particle;
	this->m_registered_functions_xr_effects["damage_actor_items_on_start"] = XR_EFFECTS::damage_actor_items_on_start;
	this->m_registered_functions_xr_effects["damage_pri_a17_gauss"] = XR_EFFECTS::damage_pri_a17_gauss;
	this->m_registered_functions_xr_effects["jup_b217_hard_animation_reset"] = XR_EFFECTS::jup_b217_hard_animation_reset;
	/*        this->m_registered_functions_xr_effects["sleep"] = XR_EFFECTS::sleep;*/
	this->m_registered_functions_xr_effects["mech_discount"] = XR_EFFECTS::mech_discount;
	this->m_registered_functions_xr_effects["polter_actor_ignore"] = XR_EFFECTS::polter_actor_ignore;
	this->m_registered_functions_xr_effects["burer_force_gravi_attack"] = XR_EFFECTS::burer_force_gravi_attack;
	this->m_registered_functions_xr_effects["burer_force_anti_aim"] = XR_EFFECTS::burer_force_anti_aim;
	this->m_registered_functions_xr_effects["show_freeplay_dialog"] = XR_EFFECTS::show_freeplay_dialog;
	this->m_registered_functions_xr_effects["get_best_detector"] = XR_EFFECTS::get_best_detector;
	this->m_registered_functions_xr_effects["hide_best_detector"] = XR_EFFECTS::hide_best_detector;
	this->m_registered_functions_xr_effects["pri_a18_radio_start"] = XR_EFFECTS::pri_a18_radio_start;
	this->m_registered_functions_xr_effects["pri_a17_ice_climb_end"] = XR_EFFECTS::pri_a17_ice_climb_end;
	this->m_registered_functions_xr_effects["jup_b219_opening"] = XR_EFFECTS::jup_b219_opening;
	this->m_registered_functions_xr_effects["jup_b219_entering_underpass"] = XR_EFFECTS::jup_b219_entering_underpass;
	this->m_registered_functions_xr_effects["pri_a17_pray_start"] = XR_EFFECTS::pri_a17_pray_start;
	this->m_registered_functions_xr_effects["zat_b38_open_info"] = XR_EFFECTS::zat_b38_open_info;
	this->m_registered_functions_xr_effects["zat_b38_switch_info"] = XR_EFFECTS::zat_b38_switch_info;
	this->m_registered_functions_xr_effects["zat_b38_cop_dead"] = XR_EFFECTS::zat_b38_cop_dead;
	this->m_registered_functions_xr_effects["jup_b15_zulus_drink_anim_info"] = XR_EFFECTS::jup_b15_zulus_drink_anim_info;
	this->m_registered_functions_xr_effects["pri_a17_preacher_death"] = XR_EFFECTS::pri_a17_preacher_death;
	this->m_registered_functions_xr_effects["zat_b3_tech_surprise_anim_end"] = XR_EFFECTS::zat_b3_tech_surprise_anim_end;
	this->m_registered_functions_xr_effects["zat_b3_tech_waked_up"] = XR_EFFECTS::zat_b3_tech_waked_up;
	this->m_registered_functions_xr_effects["zat_b3_tech_drinked_out"] = XR_EFFECTS::zat_b3_tech_drinked_out;
	this->m_registered_functions_xr_effects["pri_a28_kirillov_hq_online"] = XR_EFFECTS::pri_a28_kirillov_hq_online;
	this->m_registered_functions_xr_effects["pri_a20_radio_start"] = XR_EFFECTS::pri_a20_radio_start;
	this->m_registered_functions_xr_effects["pri_a22_kovalski_speak"] = XR_EFFECTS::pri_a22_kovalski_speak;
	this->m_registered_functions_xr_effects["zat_b38_underground_door_open"] = XR_EFFECTS::zat_b38_underground_door_open;
	this->m_registered_functions_xr_effects["zat_b38_jump_tonnel_info"] = XR_EFFECTS::zat_b38_jump_tonnel_info;
	this->m_registered_functions_xr_effects["jup_a9_cam1_actor_anim_end"] = XR_EFFECTS::jup_a9_cam1_actor_anim_end;
	this->m_registered_functions_xr_effects["pri_a28_talk_ssu_video_end"] = XR_EFFECTS::pri_a28_talk_ssu_video_end;
	this->m_registered_functions_xr_effects["disable_actor_nightvision"] = XR_EFFECTS::disable_actor_nightvision;
	this->m_registered_functions_xr_effects["enable_actor_nightvision"] = XR_EFFECTS::enable_actor_nightvision;
	this->m_registered_functions_xr_effects["disable_actor_torch"] = XR_EFFECTS::disable_actor_torch;
	this->m_registered_functions_xr_effects["enable_actor_torch"] = XR_EFFECTS::enable_actor_torch;
	this->m_registered_functions_xr_effects["create_cutscene_actor_with_weapon"] = XR_EFFECTS::create_cutscene_actor_with_weapon;
	this->m_registered_functions_xr_effects["set_force_sleep_animation"] = XR_EFFECTS::set_force_sleep_animation;
	this->m_registered_functions_xr_effects["release_force_sleep_animation"] = XR_EFFECTS::release_force_sleep_animation;
	this->m_registered_functions_xr_effects["zat_b33_pic_snag_container"] = XR_EFFECTS::zat_b33_pic_snag_container;
	this->m_registered_functions_xr_effects["set_visual_memory_enabled"] = XR_EFFECTS::set_visual_memory_enabled;
	this->m_registered_functions_xr_effects["disable_memory_object"] = XR_EFFECTS::disable_memory_object;
	this->m_registered_functions_xr_effects["zat_b202_spawn_b33_loot"] = XR_EFFECTS::zat_b202_spawn_b33_loot;
	this->m_registered_functions_xr_effects["save_actor_position"] = XR_EFFECTS::save_actor_position;
	this->m_registered_functions_xr_effects["restore_actor_position"] = XR_EFFECTS::restore_actor_position;
	this->m_registered_functions_xr_effects["upgrade_hint"] = XR_EFFECTS::upgrade_hint;
	this->m_registered_functions_xr_effects["force_obj"] = XR_EFFECTS::force_obj;
	this->m_registered_functions_xr_effects["pri_a28_check_zones"] = XR_EFFECTS::pri_a28_check_zones;
	this->m_registered_functions_xr_effects["eat_vodka_script"] = XR_EFFECTS::eat_vodka_script;
	this->m_registered_functions_xr_effects["jup_b200_count_found"] = XR_EFFECTS::jup_b200_count_found;
}

void Cordis::Scripts::Script_GlobalHelper::initialize_SmartCovers(void)
{
#pragma region Cordis SmartCovers Initialzing

#pragma region Cordis Combat Prone Smart Cover
	SmartCoverData combat_prone_smartcover;
	SmartCoverLoopholeData combat_prone_loophole;

#pragma region Cordis Loophole
	combat_prone_loophole.m_id = "prone";
	combat_prone_loophole.m_is_usable = true;
	combat_prone_loophole.m_is_exitable = true;
	combat_prone_loophole.m_is_enterable = true;
	combat_prone_loophole.m_fieldofview = 60.0f;
	combat_prone_loophole.m_fieldofview_danger = 90.0f;
	combat_prone_loophole.m_range = 70.0f;
	combat_prone_loophole.m_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.0f);
	combat_prone_loophole.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_prone_loophole.m_danger_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.0f);
	combat_prone_loophole.m_enter_direction = Fvector().set(-1.0f, 0.0f, 0.0f);

	SmartCoverLoopholeData::SmartCoverActionsData combat_prone_action1;
	combat_prone_action1.m_id = "idle";
	combat_prone_action1.register_animation("idle", "loophole_9_idle_0");

	combat_prone_loophole.register_action(combat_prone_action1);

	SmartCoverLoopholeData::SmartCoverActionsData combat_prone_action2;
	combat_prone_action2.m_id = "lookout";
	combat_prone_action2.register_animation("idle", "loophole_9_look_idle_0");

	combat_prone_loophole.register_action(combat_prone_action2);

	SmartCoverLoopholeData::SmartCoverActionsData combat_prone_action3;
	combat_prone_action3.m_id = "fire";
	combat_prone_action3.register_animation("idle", "loophole_9_attack_idle_0");
	combat_prone_action3.register_animation("shoot", "loophole_9_attack_shoot_0");
	combat_prone_action3.register_animation("shoot", "loophole_9_attack_shoot_1");

	combat_prone_loophole.register_action(combat_prone_action3);

	SmartCoverLoopholeData::SmartCoverActionsData combat_prone_action4;
	combat_prone_action4.m_id = "fire_no_lookout";
	combat_prone_action4.register_animation("idle", "loophole_9_attack_idle_0");
	combat_prone_action4.register_animation("shoot", "loophole_9_attack_shoot_0");
	combat_prone_action4.register_animation("shoot", "loophole_9_attack_shoot_1");

	combat_prone_loophole.register_action(combat_prone_action4);

	SmartCoverLoopholeData::SmartCoverActionsData combat_prone_action5;
	combat_prone_action5.m_id = "reload";
	combat_prone_action5.register_animation("idle", "loophole_9_reload_0");

	combat_prone_loophole.register_action(combat_prone_action5);

	SmartCoverLoopholeData::SmartCoverTransitionsData combat_prone_transition1;
	combat_prone_transition1.m_action_from = "idle";
	combat_prone_transition1.m_action_to = "lookout";
	combat_prone_transition1.m_weight = 1.2f;
	combat_prone_transition1.m_animations.push_back("loophole_9_look_in_0");

	combat_prone_loophole.register_transition(combat_prone_transition1);

	SmartCoverLoopholeData::SmartCoverTransitionsData combat_prone_transition2;
	combat_prone_transition2.m_action_from = "lookout";
	combat_prone_transition2.m_action_to = "idle";
	combat_prone_transition2.m_animations.push_back("loophole_9_look_out_0");
	combat_prone_transition2.m_weight = 1.2f;

	combat_prone_loophole.register_transition(combat_prone_transition2);

	SmartCoverLoopholeData::SmartCoverTransitionsData combat_prone_transition3;
	combat_prone_transition3.m_action_from = "idle";
	combat_prone_transition3.m_action_to = "fire";
	combat_prone_transition3.m_weight = 1.2f;
	combat_prone_transition3.m_animations.push_back("loophole_9_attack_in_0");

	combat_prone_loophole.register_transition(combat_prone_transition3);

	SmartCoverLoopholeData::SmartCoverTransitionsData combat_prone_transition4;
	combat_prone_transition4.m_action_from = "fire";
	combat_prone_transition4.m_action_to = "idle";
	combat_prone_transition4.m_weight = 1.2f;
	combat_prone_transition4.m_animations.push_back("loophole_9_attack_out_0");

	combat_prone_loophole.register_transition(combat_prone_transition4);

	SmartCoverLoopholeData::SmartCoverTransitionsData combat_prone_transition5;
	combat_prone_transition5.m_action_from = "idle";
	combat_prone_transition5.m_action_to = "fire_no_lookout";
	combat_prone_transition5.m_weight = 1.2f;
	combat_prone_transition5.m_animations.push_back("loophole_9_attack_in_0");

	combat_prone_loophole.register_transition(combat_prone_transition5);

	SmartCoverLoopholeData::SmartCoverTransitionsData combat_prone_transition6;
	combat_prone_transition6.m_action_from = "fire_no_lookout";
	combat_prone_transition6.m_action_to = "idle";
	combat_prone_transition6.m_weight = 1.2f;
	combat_prone_transition6.m_animations.push_back("loophole_9_attack_out_0");

	combat_prone_loophole.register_transition(combat_prone_transition6);
#pragma endregion Cordis Loophole

#pragma region Cordis Transition
	SmartCoverData::SmartCoverTransitionsData combat_prone_smartcover_transition1;
	combat_prone_smartcover_transition1.m_vertex0 = "";
	combat_prone_smartcover_transition1.m_vertex1 = "prone";
	combat_prone_smartcover_transition1.m_weight = 1.0f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_prone_smartcover_transition1_action1;
	combat_prone_smartcover_transition1_action1.m_action.m_animation = "loophole_9_in_front_0";
	combat_prone_smartcover_transition1_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_prone_smartcover_transition1_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_prone_smartcover_transition1_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_prone_smartcover_transition1_action1.m_precondition_functor = "true";
	combat_prone_smartcover_transition1_action1.m_preconditions_params = "";

	combat_prone_smartcover_transition1.m_actions.push_back(combat_prone_smartcover_transition1_action1);

	SmartCoverData::SmartCoverTransitionsData combat_prone_smartcover_transition2;
	combat_prone_smartcover_transition2.m_vertex0 = "";
	combat_prone_smartcover_transition2.m_vertex1 = "prone";
	combat_prone_smartcover_transition2.m_weight = 1.1f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_prone_smartcover_transition2_action1;
	combat_prone_smartcover_transition2_action1.m_action.m_animation = "loophole_9_jump_1";
	combat_prone_smartcover_transition2_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_prone_smartcover_transition2_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_prone_smartcover_transition2_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_prone_smartcover_transition2_action1.m_precondition_functor = "true";
	combat_prone_smartcover_transition2_action1.m_preconditions_params = "";

	combat_prone_smartcover_transition2.m_actions.push_back(combat_prone_smartcover_transition2_action1);

#pragma endregion Cordis Transition

	combat_prone_smartcover.setNeedWeapon(true);
	combat_prone_smartcover.register_loophole(combat_prone_loophole);
	combat_prone_smartcover.register_transition(combat_prone_smartcover_transition1);
	combat_prone_smartcover.register_transition(combat_prone_smartcover_transition2);
	this->m_registered_smartcovers["combat_prone"] = combat_prone_smartcover;
#pragma endregion Cordis Combat Prone Smart Cover

#pragma region Cordis Combat Front Smart Cover
	SmartCoverData combat_front_smartcover;

#pragma region Cordis Loophole
	SmartCoverLoopholeData combat_front_loophole_crouch_front_left;
	combat_front_loophole_crouch_front_left.m_id = "crouch_front_left";
	combat_front_loophole_crouch_front_left.m_is_usable = true;
	combat_front_loophole_crouch_front_left.m_is_exitable = true;
	combat_front_loophole_crouch_front_left.m_is_enterable = true;
	combat_front_loophole_crouch_front_left.m_fieldofview = 70.0f;
	combat_front_loophole_crouch_front_left.m_fieldofview_danger = 90.0f;
	combat_front_loophole_crouch_front_left.m_range = 70.0f;
	combat_front_loophole_crouch_front_left.m_fieldofview_direction = Fvector().set(-1.0f, 0.0f, -0.7f);
	combat_front_loophole_crouch_front_left.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_loophole_crouch_front_left.m_danger_fieldofview_direction = Fvector().set(-1.0f, 0.0f, -1.0f);
	combat_front_loophole_crouch_front_left.m_enter_direction = Fvector().set(0.0f, 0.0f, 0.0f);

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_left_action;
		combat_front_loophole_crouch_front_left_action.m_id = "idle";
		combat_front_loophole_crouch_front_left_action.register_animation(
			"idle", "loophole_crouch_front_left_idle_0");

		combat_front_loophole_crouch_front_left.register_action(combat_front_loophole_crouch_front_left_action);
	} // 1

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_left_action;
		combat_front_loophole_crouch_front_left_action.m_id = "lookout";
		combat_front_loophole_crouch_front_left_action.register_animation(
			"idle", "loophole_crouch_front_left_look_idle_0");

		combat_front_loophole_crouch_front_left.register_action(combat_front_loophole_crouch_front_left_action);
	} // 2

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_left_action;
		combat_front_loophole_crouch_front_left_action.m_id = "fire";
		combat_front_loophole_crouch_front_left_action.register_animation(
			"idle", "loophole_crouch_front_left_attack_idle_0");
		combat_front_loophole_crouch_front_left_action.register_animation(
			"shoot", "loophole_crouch_front_left_attack_shoot_0");
		combat_front_loophole_crouch_front_left_action.register_animation(
			"shoot", "loophole_crouch_front_left_attack_shoot_1");

		combat_front_loophole_crouch_front_left.register_action(combat_front_loophole_crouch_front_left_action);
	} // 3

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_left_action;
		combat_front_loophole_crouch_front_left_action.m_id = "fire_no_lookout";
		combat_front_loophole_crouch_front_left_action.register_animation(
			"idle", "loophole_crouch_front_left_attack_idle_0");
		combat_front_loophole_crouch_front_left_action.register_animation(
			"shoot", "loophole_crouch_front_left_attack_idle_0");

		combat_front_loophole_crouch_front_left.register_action(combat_front_loophole_crouch_front_left_action);
	} // 4

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_left_action;
		combat_front_loophole_crouch_front_left_action.m_id = "reload";
		combat_front_loophole_crouch_front_left_action.register_animation(
			"idle", "loophole_crouch_front_left_reload_0");

		combat_front_loophole_crouch_front_left.register_action(combat_front_loophole_crouch_front_left_action);
	} // 5

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_left_transition;
		combat_front_loophole_crouch_front_left_transition.m_action_from = "idle";
		combat_front_loophole_crouch_front_left_transition.m_action_to = "lookout";
		combat_front_loophole_crouch_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_left_transition.m_animations.push_back(
			"loophole_crouch_front_left_look_in_0");

		combat_front_loophole_crouch_front_left.register_transition(
			combat_front_loophole_crouch_front_left_transition);
	} // 11

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_left_transition;
		combat_front_loophole_crouch_front_left_transition.m_action_from = "lookout";
		combat_front_loophole_crouch_front_left_transition.m_action_to = "idle";
		combat_front_loophole_crouch_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_left_transition.m_animations.push_back(
			"loophole_crouch_front_left_look_out_0");

		combat_front_loophole_crouch_front_left.register_transition(
			combat_front_loophole_crouch_front_left_transition);
	} // 12

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_left_transition;
		combat_front_loophole_crouch_front_left_transition.m_action_from = "idle";
		combat_front_loophole_crouch_front_left_transition.m_action_to = "fire";
		combat_front_loophole_crouch_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_left_transition.m_animations.push_back(
			"loophole_crouch_front_left_attack_in_0");

		combat_front_loophole_crouch_front_left.register_transition(
			combat_front_loophole_crouch_front_left_transition);
	} // 13

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_left_transition;
		combat_front_loophole_crouch_front_left_transition.m_action_from = "fire";
		combat_front_loophole_crouch_front_left_transition.m_action_to = "idle";
		combat_front_loophole_crouch_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_left_transition.m_animations.push_back(
			"loophole_crouch_front_left_attack_out_0");

		combat_front_loophole_crouch_front_left.register_transition(
			combat_front_loophole_crouch_front_left_transition);
	} // 14

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_left_transition;
		combat_front_loophole_crouch_front_left_transition.m_action_from = "idle";
		combat_front_loophole_crouch_front_left_transition.m_action_to = "fire_no_lookout";
		combat_front_loophole_crouch_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_left_transition.m_animations.push_back(
			"loophole_crouch_front_left_attack_in_0");

		combat_front_loophole_crouch_front_left.register_transition(
			combat_front_loophole_crouch_front_left_transition);
	} // 15

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_left_transition;
		combat_front_loophole_crouch_front_left_transition.m_action_from = "fire_no_lookout";
		combat_front_loophole_crouch_front_left_transition.m_action_to = "idle";
		combat_front_loophole_crouch_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_left_transition.m_animations.push_back(
			"loophole_crouch_front_left_attack_out_0");

		combat_front_loophole_crouch_front_left.register_transition(
			combat_front_loophole_crouch_front_left_transition);
	} // 16
#pragma endregion Cordis Loophole

#pragma region Cordis Loophole
	SmartCoverLoopholeData combat_front_loophole_crouch_front_right;
	combat_front_loophole_crouch_front_right.m_id = "crouch_front_right";
	combat_front_loophole_crouch_front_right.m_is_usable = true;
	combat_front_loophole_crouch_front_right.m_is_exitable = true;
	combat_front_loophole_crouch_front_right.m_is_enterable = true;
	combat_front_loophole_crouch_front_right.m_fieldofview = 70.0f;
	combat_front_loophole_crouch_front_right.m_fieldofview_danger = 90.0f;
	combat_front_loophole_crouch_front_right.m_range = 70.0f;
	combat_front_loophole_crouch_front_right.m_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.7f);
	combat_front_loophole_crouch_front_right.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_loophole_crouch_front_right.m_danger_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 1.0f);
	combat_front_loophole_crouch_front_right.m_enter_direction = Fvector().set(-1.0f, 0.0f, 0.0f);

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_right_action;
		combat_front_loophole_crouch_front_right_action.m_id = "idle";
		combat_front_loophole_crouch_front_right_action.register_animation(
			"idle", "loophole_crouch_front_right_idle_0");

		combat_front_loophole_crouch_front_right.register_action(combat_front_loophole_crouch_front_right_action);
	} // 1

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_right_action;
		combat_front_loophole_crouch_front_right_action.m_id = "lookout";
		combat_front_loophole_crouch_front_right_action.register_animation(
			"idle", "loophole_crouch_front_right_look_idle_0");

		combat_front_loophole_crouch_front_right.register_action(combat_front_loophole_crouch_front_right_action);
	} // 2

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_right_action;
		combat_front_loophole_crouch_front_right_action.m_id = "fire";
		combat_front_loophole_crouch_front_right_action.register_animation(
			"idle", "loophole_crouch_front_right_attack_idle_0");
		combat_front_loophole_crouch_front_right_action.register_animation(
			"shoot", "loophole_crouch_front_right_attack_shoot_0");
		combat_front_loophole_crouch_front_right_action.register_animation(
			"shoot", "loophole_crouch_front_right_attack_shoot_1");

		combat_front_loophole_crouch_front_right.register_action(combat_front_loophole_crouch_front_right_action);
	} // 3

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_right_action;
		combat_front_loophole_crouch_front_right_action.m_id = "fire_no_lookout";
		combat_front_loophole_crouch_front_right_action.register_animation(
			"idle", "loophole_crouch_front_right_attack_idle_0");
		combat_front_loophole_crouch_front_right_action.register_animation(
			"shoot", "loophole_crouch_front_right_attack_shoot_0");
		combat_front_loophole_crouch_front_right_action.register_animation(
			"shoot", "loophole_crouch_front_right_attack_shoot_1");

		combat_front_loophole_crouch_front_right.register_action(combat_front_loophole_crouch_front_right_action);
	} // 4

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_right_action;
		combat_front_loophole_crouch_front_right_action.m_id = "reload";
		combat_front_loophole_crouch_front_right_action.register_animation(
			"idle", "loophole_crouch_front_right_reload_0");

		combat_front_loophole_crouch_front_right.register_action(combat_front_loophole_crouch_front_right_action);
	} // 5

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_right_transition;
		combat_front_loophole_crouch_front_right_transition.m_action_from = "idle";
		combat_front_loophole_crouch_front_right_transition.m_action_to = "lookout";
		combat_front_loophole_crouch_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_right_transition.m_animations.push_back(
			"loophole_crouch_front_right_look_in_0");

		combat_front_loophole_crouch_front_right.register_transition(
			combat_front_loophole_crouch_front_right_transition);
	} // 11

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_right_transition;
		combat_front_loophole_crouch_front_right_transition.m_action_from = "lookout";
		combat_front_loophole_crouch_front_right_transition.m_action_to = "idle";
		combat_front_loophole_crouch_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_right_transition.m_animations.push_back(
			"loophole_crouch_front_right_look_out_0");

		combat_front_loophole_crouch_front_right.register_transition(
			combat_front_loophole_crouch_front_right_transition);
	} // 12

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_right_transition;
		combat_front_loophole_crouch_front_right_transition.m_action_from = "idle";
		combat_front_loophole_crouch_front_right_transition.m_action_to = "fire";
		combat_front_loophole_crouch_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_right_transition.m_animations.push_back(
			"loophole_crouch_front_right_attack_in_0");

		combat_front_loophole_crouch_front_right.register_transition(
			combat_front_loophole_crouch_front_right_transition);
	} // 13

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_right_transition;
		combat_front_loophole_crouch_front_right_transition.m_action_from = "fire";
		combat_front_loophole_crouch_front_right_transition.m_action_to = "idle";
		combat_front_loophole_crouch_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_right_transition.m_animations.push_back(
			"loophole_crouch_front_right_attack_out_0");

		combat_front_loophole_crouch_front_right.register_transition(
			combat_front_loophole_crouch_front_right_transition);
	} // 14

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_right_transition;
		combat_front_loophole_crouch_front_right_transition.m_action_from = "idle";
		combat_front_loophole_crouch_front_right_transition.m_action_to = "fire_no_lookout";
		combat_front_loophole_crouch_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_right_transition.m_animations.push_back(
			"loophole_crouch_front_right_attack_in_0");

		combat_front_loophole_crouch_front_right.register_transition(
			combat_front_loophole_crouch_front_right_transition);
	} // 15

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_right_transition;
		combat_front_loophole_crouch_front_right_transition.m_action_from = "fire_no_lookout";
		combat_front_loophole_crouch_front_right_transition.m_action_to = "idle";
		combat_front_loophole_crouch_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_right_transition.m_animations.push_back(
			"loophole_crouch_front_right_attack_out_0");

		combat_front_loophole_crouch_front_right.register_transition(
			combat_front_loophole_crouch_front_right_transition);
	} // 16
#pragma endregion Cordis Loophole

#pragma region Cordis Loophole
	SmartCoverLoopholeData combat_front_loophole_crouch_front;
	combat_front_loophole_crouch_front.m_id = "crouch_front";
	combat_front_loophole_crouch_front.m_is_usable = true;
	combat_front_loophole_crouch_front.m_is_exitable = true;
	combat_front_loophole_crouch_front.m_is_enterable = true;
	combat_front_loophole_crouch_front.m_fieldofview = 70.0f;
	combat_front_loophole_crouch_front.m_fieldofview_danger = 110.0f;
	combat_front_loophole_crouch_front.m_range = 70.0f;
	combat_front_loophole_crouch_front.m_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.0f);
	combat_front_loophole_crouch_front.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_loophole_crouch_front.m_danger_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.0f);
	combat_front_loophole_crouch_front.m_enter_direction = Fvector().set(-1.0f, 0.0f, 0.0f);

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_action;
		combat_front_loophole_crouch_front_action.m_id = "idle";
		combat_front_loophole_crouch_front_action.register_animation("idle", "loophole_crouch_front_idle_0");

		combat_front_loophole_crouch_front.register_action(combat_front_loophole_crouch_front_action);
	} // 1

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_action;
		combat_front_loophole_crouch_front_action.m_id = "lookout";
		combat_front_loophole_crouch_front_action.register_animation("idle", "loophole_crouch_front_look_idle_0");

		combat_front_loophole_crouch_front.register_action(combat_front_loophole_crouch_front_action);
	} // 2

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_action;
		combat_front_loophole_crouch_front_action.m_id = "fire";
		combat_front_loophole_crouch_front_action.register_animation("idle", "loophole_crouch_front_attack_idle_0");
		combat_front_loophole_crouch_front_action.register_animation(
			"shoot", "loophole_crouch_front_attack_shoot_0");
		combat_front_loophole_crouch_front_action.register_animation(
			"shoot", "loophole_crouch_front_attack_shoot_1");

		combat_front_loophole_crouch_front.register_action(combat_front_loophole_crouch_front_action);
	} // 3

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_action;
		combat_front_loophole_crouch_front_action.m_id = "fire_no_lookout";
		combat_front_loophole_crouch_front_action.register_animation("idle", "loophole_crouch_front_attack_idle_0");
		combat_front_loophole_crouch_front_action.register_animation(
			"shoot", "loophole_crouch_front_attack_shoot_0");
		combat_front_loophole_crouch_front_action.register_animation(
			"shoot", "loophole_crouch_front_attack_shoot_1");

		combat_front_loophole_crouch_front.register_action(combat_front_loophole_crouch_front_action);
	} // 4

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_crouch_front_action;
		combat_front_loophole_crouch_front_action.m_id = "reload";
		combat_front_loophole_crouch_front_action.register_animation("idle", "loophole_crouch_front_reload_0");

		combat_front_loophole_crouch_front.register_action(combat_front_loophole_crouch_front_action);
	} // 5

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_transition;
		combat_front_loophole_crouch_front_transition.m_action_from = "idle";
		combat_front_loophole_crouch_front_transition.m_action_to = "lookout";
		combat_front_loophole_crouch_front_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_transition.m_animations.push_back("loophole_crouch_front_look_in_0");

		combat_front_loophole_crouch_front.register_transition(combat_front_loophole_crouch_front_transition);
	} // 11

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_transition;
		combat_front_loophole_crouch_front_transition.m_action_from = "lookout";
		combat_front_loophole_crouch_front_transition.m_action_to = "idle";
		combat_front_loophole_crouch_front_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_transition.m_animations.push_back("loophole_crouch_front_look_out_0");

		combat_front_loophole_crouch_front.register_transition(combat_front_loophole_crouch_front_transition);
	} // 12

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_transition;
		combat_front_loophole_crouch_front_transition.m_action_from = "idle";
		combat_front_loophole_crouch_front_transition.m_action_to = "fire";
		combat_front_loophole_crouch_front_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_transition.m_animations.push_back("loophole_crouch_front_attack_in_0");

		combat_front_loophole_crouch_front.register_transition(combat_front_loophole_crouch_front_transition);
	} // 13

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_transition;
		combat_front_loophole_crouch_front_transition.m_action_from = "fire";
		combat_front_loophole_crouch_front_transition.m_action_to = "idle";
		combat_front_loophole_crouch_front_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_transition.m_animations.push_back("loophole_crouch_front_attack_out_0");

		combat_front_loophole_crouch_front.register_transition(combat_front_loophole_crouch_front_transition);
	} // 14

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_transition;
		combat_front_loophole_crouch_front_transition.m_action_from = "idle";
		combat_front_loophole_crouch_front_transition.m_action_to = "fire_no_lookout";
		combat_front_loophole_crouch_front_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_transition.m_animations.push_back("loophole_crouch_front_attack_in_0");

		combat_front_loophole_crouch_front.register_transition(combat_front_loophole_crouch_front_transition);
	} // 15

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_crouch_front_transition;
		combat_front_loophole_crouch_front_transition.m_action_from = "fire_no_lookout";
		combat_front_loophole_crouch_front_transition.m_action_to = "idle";
		combat_front_loophole_crouch_front_transition.m_weight = 1.2f;
		combat_front_loophole_crouch_front_transition.m_animations.push_back("loophole_crouch_front_attack_out_0");

		combat_front_loophole_crouch_front.register_transition(combat_front_loophole_crouch_front_transition);
	} // 16
#pragma endregion Cordis Loophole

#pragma region Cordis Loophole
	SmartCoverLoopholeData combat_front_loophole_stand_front_left;
	combat_front_loophole_stand_front_left.m_id = "stand_front_left";
	combat_front_loophole_stand_front_left.m_is_usable = true;
	combat_front_loophole_stand_front_left.m_is_exitable = true;
	combat_front_loophole_stand_front_left.m_is_enterable = true;
	combat_front_loophole_stand_front_left.m_fieldofview = 60.0f;
	combat_front_loophole_stand_front_left.m_fieldofview_danger = 90.0f;
	combat_front_loophole_stand_front_left.m_range = 50.0f;
	combat_front_loophole_stand_front_left.m_fieldofview_direction = Fvector().set(-1.0f, 0.0f, -0.7f);
	combat_front_loophole_stand_front_left.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_loophole_stand_front_left.m_danger_fieldofview_direction = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_loophole_stand_front_left.m_enter_direction = Fvector().set(-1.0f, 0.0f, 0.0f);

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_stand_front_left_action;
		combat_front_loophole_stand_front_left_action.m_id = "idle";
		combat_front_loophole_stand_front_left_action.register_animation("idle", "loophole_stand_back_idle_0");

		combat_front_loophole_stand_front_left.register_action(combat_front_loophole_stand_front_left_action);
	} // 1

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_stand_front_left_action;
		combat_front_loophole_stand_front_left_action.m_id = "lookout";
		combat_front_loophole_stand_front_left_action.register_animation("idle", "loophole_stand_back_idle_0");

		combat_front_loophole_stand_front_left.register_action(combat_front_loophole_stand_front_left_action);
	} // 2

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_stand_front_left_action;
		combat_front_loophole_stand_front_left_action.m_id = "fire";
		combat_front_loophole_stand_front_left_action.register_animation(
			"idle", "loophole_stand_back_attack_idle_0");
		combat_front_loophole_stand_front_left_action.register_animation(
			"shoot", "loophole_stand_back_attack_shoot_0");
		combat_front_loophole_stand_front_left_action.register_animation(
			"shoot", "loophole_stand_back_attack_shoot_1");

		combat_front_loophole_stand_front_left.register_action(combat_front_loophole_stand_front_left_action);
	} // 3

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_stand_front_left_action;
		combat_front_loophole_stand_front_left_action.m_id = "fire_no_lookout";
		combat_front_loophole_stand_front_left_action.register_animation("idle", "loophole_stand_back_idle_0");
		combat_front_loophole_stand_front_left_action.register_animation(
			"shoot", "loophole_stand_back_attack_shoot_0");
		combat_front_loophole_stand_front_left_action.register_animation(
			"shoot", "loophole_stand_back_attack_shoot_1");

		combat_front_loophole_stand_front_left.register_action(combat_front_loophole_stand_front_left_action);
	} // 4

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_stand_front_left_action;
		combat_front_loophole_stand_front_left_action.m_id = "reload";
		combat_front_loophole_stand_front_left_action.register_animation("idle", "loophole_stand_back_reload_0");

		combat_front_loophole_stand_front_left.register_action(combat_front_loophole_stand_front_left_action);
	} // 5

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_left_transition;
		combat_front_loophole_stand_front_left_transition.m_action_from = "idle";
		combat_front_loophole_stand_front_left_transition.m_action_to = "lookout";
		combat_front_loophole_stand_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_left_transition.m_animations.push_back("loophole_stand_back_idle_0");

		combat_front_loophole_stand_front_left.register_transition(
			combat_front_loophole_stand_front_left_transition);
	} // 11

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_left_transition;
		combat_front_loophole_stand_front_left_transition.m_action_from = "lookout";
		combat_front_loophole_stand_front_left_transition.m_action_to = "idle";
		combat_front_loophole_stand_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_left_transition.m_animations.push_back("loophole_stand_back_idle_0");

		combat_front_loophole_stand_front_left.register_transition(
			combat_front_loophole_stand_front_left_transition);
	} // 12

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_left_transition;
		combat_front_loophole_stand_front_left_transition.m_action_from = "idle";
		combat_front_loophole_stand_front_left_transition.m_action_to = "fire";
		combat_front_loophole_stand_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_left_transition.m_animations.push_back("loophole_stand_back_attack_in_0");

		combat_front_loophole_stand_front_left.register_transition(
			combat_front_loophole_stand_front_left_transition);
	} // 13

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_left_transition;
		combat_front_loophole_stand_front_left_transition.m_action_from = "fire";
		combat_front_loophole_stand_front_left_transition.m_action_to = "idle";
		combat_front_loophole_stand_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_left_transition.m_animations.push_back(
			"loophole_stand_back_attack_out_0");

		combat_front_loophole_stand_front_left.register_transition(
			combat_front_loophole_stand_front_left_transition);
	} // 14

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_left_transition;
		combat_front_loophole_stand_front_left_transition.m_action_from = "idle";
		combat_front_loophole_stand_front_left_transition.m_action_to = "fire_no_lookout";
		combat_front_loophole_stand_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_left_transition.m_animations.push_back("loophole_stand_back_attack_in_0");

		combat_front_loophole_stand_front_left.register_transition(
			combat_front_loophole_stand_front_left_transition);
	} // 15

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_left_transition;
		combat_front_loophole_stand_front_left_transition.m_action_from = "fire_no_lookout";
		combat_front_loophole_stand_front_left_transition.m_action_to = "idle";
		combat_front_loophole_stand_front_left_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_left_transition.m_animations.push_back(
			"loophole_stand_back_attack_out_0");

		combat_front_loophole_stand_front_left.register_transition(
			combat_front_loophole_stand_front_left_transition);
	} // 16
#pragma endregion Cordis Loophole

#pragma region Cordis Loophole
	SmartCoverLoopholeData combat_front_loophole_stand_front_right;
	combat_front_loophole_stand_front_right.m_id = "stand_front_right";
	combat_front_loophole_stand_front_right.m_is_usable = true;
	combat_front_loophole_stand_front_right.m_is_exitable = true;
	combat_front_loophole_stand_front_right.m_is_enterable = true;
	combat_front_loophole_stand_front_right.m_fieldofview = 60.0f;
	combat_front_loophole_stand_front_right.m_fieldofview_danger = 90.0f;
	combat_front_loophole_stand_front_right.m_range = 50.0f;
	combat_front_loophole_stand_front_right.m_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.7f);
	combat_front_loophole_stand_front_right.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_loophole_stand_front_right.m_danger_fieldofview_direction = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_loophole_stand_front_right.m_enter_direction = Fvector().set(-1.0f, 0.0f, 0.0f);

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_stand_front_right_action;
		combat_front_loophole_stand_front_right_action.m_id = "idle";
		combat_front_loophole_stand_front_right_action.register_animation("idle", "loophole_stand_back_idle_0");

		combat_front_loophole_stand_front_right.register_action(combat_front_loophole_stand_front_right_action);
	} // 1

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_stand_front_right_action;
		combat_front_loophole_stand_front_right_action.m_id = "lookout";
		combat_front_loophole_stand_front_right_action.register_animation("idle", "loophole_stand_back_idle_0");

		combat_front_loophole_stand_front_right.register_action(combat_front_loophole_stand_front_right_action);
	} // 2

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_stand_front_right_action;
		combat_front_loophole_stand_front_right_action.m_id = "fire";
		combat_front_loophole_stand_front_right_action.register_animation(
			"idle", "loophole_stand_back_attack_idle_0");
		combat_front_loophole_stand_front_right_action.register_animation(
			"shoot", "loophole_stand_back_attack_shoot_0");
		combat_front_loophole_stand_front_right_action.register_animation(
			"shoot", "loophole_stand_back_attack_shoot_1");

		combat_front_loophole_stand_front_right.register_action(combat_front_loophole_stand_front_right_action);
	} // 3

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_stand_front_right_action;
		combat_front_loophole_stand_front_right_action.m_id = "fire_no_lookout";
		combat_front_loophole_stand_front_right_action.register_animation(
			"idle", "loophole_stand_back_attack_idle_0");
		combat_front_loophole_stand_front_right_action.register_animation(
			"shoot", "loophole_stand_back_attack_shoot_0");
		combat_front_loophole_stand_front_right_action.register_animation(
			"shoot", "loophole_stand_back_attack_shoot_1");

		combat_front_loophole_stand_front_right.register_action(combat_front_loophole_stand_front_right_action);
	} // 4

	{
		SmartCoverLoopholeData::SmartCoverActionsData combat_front_loophole_stand_front_right_action;
		combat_front_loophole_stand_front_right_action.m_id = "reload";
		combat_front_loophole_stand_front_right_action.register_animation("idle", "loophole_stand_back_reload_0");

		combat_front_loophole_stand_front_right.register_action(combat_front_loophole_stand_front_right_action);
	} // 5

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_right_transition;
		combat_front_loophole_stand_front_right_transition.m_action_from = "idle";
		combat_front_loophole_stand_front_right_transition.m_action_to = "lookout";
		combat_front_loophole_stand_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_right_transition.m_animations.push_back("loophole_stand_back_idle_0");

		combat_front_loophole_stand_front_right.register_transition(
			combat_front_loophole_stand_front_right_transition);
	} // 11

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_right_transition;
		combat_front_loophole_stand_front_right_transition.m_action_from = "lookout";
		combat_front_loophole_stand_front_right_transition.m_action_to = "idle";
		combat_front_loophole_stand_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_right_transition.m_animations.push_back("loophole_stand_back_idle_0");

		combat_front_loophole_stand_front_right.register_transition(
			combat_front_loophole_stand_front_right_transition);
	} // 12

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_right_transition;
		combat_front_loophole_stand_front_right_transition.m_action_from = "idle";
		combat_front_loophole_stand_front_right_transition.m_action_to = "fire";
		combat_front_loophole_stand_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_right_transition.m_animations.push_back(
			"loophole_stand_back_attack_in_0");

		combat_front_loophole_stand_front_right.register_transition(
			combat_front_loophole_stand_front_right_transition);
	} // 13

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_right_transition;
		combat_front_loophole_stand_front_right_transition.m_action_from = "fire";
		combat_front_loophole_stand_front_right_transition.m_action_to = "idle";
		combat_front_loophole_stand_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_right_transition.m_animations.push_back(
			"loophole_stand_back_attack_out_0");

		combat_front_loophole_stand_front_right.register_transition(
			combat_front_loophole_stand_front_right_transition);
	} // 14

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_right_transition;
		combat_front_loophole_stand_front_right_transition.m_action_from = "idle";
		combat_front_loophole_stand_front_right_transition.m_action_to = "fire_no_lookout";
		combat_front_loophole_stand_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_right_transition.m_animations.push_back(
			"loophole_stand_back_attack_in_0");

		combat_front_loophole_stand_front_right.register_transition(
			combat_front_loophole_stand_front_right_transition);
	} // 15

	{
		SmartCoverLoopholeData::SmartCoverTransitionsData combat_front_loophole_stand_front_right_transition;
		combat_front_loophole_stand_front_right_transition.m_action_from = "fire_no_lookout";
		combat_front_loophole_stand_front_right_transition.m_action_to = "idle";
		combat_front_loophole_stand_front_right_transition.m_weight = 1.2f;
		combat_front_loophole_stand_front_right_transition.m_animations.push_back(
			"loophole_stand_back_attack_out_0");

		combat_front_loophole_stand_front_right.register_transition(
			combat_front_loophole_stand_front_right_transition);
	} // 16

#pragma endregion Cordis Loophole

#pragma region Cordis Transition
	SmartCoverData::SmartCoverTransitionsData combat_front_transition1;
	combat_front_transition1.m_vertex0 = "";
	combat_front_transition1.m_vertex1 = "crouch_front_left";
	combat_front_transition1.m_weight = 1.0f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition1_action1;
	combat_front_transition1_action1.m_action.m_animation = "loophole_crouch_in_front_left_0";
	combat_front_transition1_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition1_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition1_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition1_action1.m_precondition_functor = "true";
	combat_front_transition1_action1.m_preconditions_params = "";

	combat_front_transition1.m_actions.push_back(combat_front_transition1_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition2;
	combat_front_transition2.m_vertex0 = "";
	combat_front_transition2.m_vertex1 = "crouch_front";
	combat_front_transition2.m_weight = 1.0f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition2_action1;
	combat_front_transition2_action1.m_action.m_animation = "loophole_crouch_in_front_0";
	combat_front_transition2_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition2_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition2_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition2_action1.m_precondition_functor = "true";
	combat_front_transition2_action1.m_preconditions_params = "";

	combat_front_transition2.m_actions.push_back(combat_front_transition2_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition3;
	combat_front_transition3.m_vertex0 = "";
	combat_front_transition3.m_vertex1 = "crouch_front_right";
	combat_front_transition3.m_weight = 1.0f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition3_action1;
	combat_front_transition3_action1.m_action.m_animation = "loophole_crouch_in_front_right_0";
	combat_front_transition3_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition3_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition3_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition3_action1.m_precondition_functor = "true";
	combat_front_transition3_action1.m_preconditions_params = "";

	combat_front_transition3.m_actions.push_back(combat_front_transition3_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition4;
	combat_front_transition4.m_vertex0 = "";
	combat_front_transition4.m_vertex1 = "stand_front_left";
	combat_front_transition4.m_weight = 1.0f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition4_action1;
	combat_front_transition4_action1.m_action.m_animation = "loophole_stand_in_front_left_0";
	combat_front_transition4_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition4_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition4_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition4_action1.m_precondition_functor = "true";
	combat_front_transition4_action1.m_preconditions_params = "";

	combat_front_transition4.m_actions.push_back(combat_front_transition4_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition5;
	combat_front_transition5.m_vertex0 = "";
	combat_front_transition5.m_vertex1 = "stand_front_right";
	combat_front_transition5.m_weight = 1.0f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition5_action1;
	combat_front_transition5_action1.m_action.m_animation = "loophole_stand_in_front_right_0";
	combat_front_transition5_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition5_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition5_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition5_action1.m_precondition_functor = "true";
	combat_front_transition5_action1.m_preconditions_params = "";

	combat_front_transition5.m_actions.push_back(combat_front_transition5_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition6;
	combat_front_transition6.m_vertex0 = "crouch_front";
	combat_front_transition6.m_vertex1 = "crouch_front_left";
	combat_front_transition6.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition6_action1;
	combat_front_transition6_action1.m_action.m_animation = "crouch_front_to_crouch_front_left";
	combat_front_transition6_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition6_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition6_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition6_action1.m_precondition_functor = "true";
	combat_front_transition6_action1.m_preconditions_params = "";

	combat_front_transition6.m_actions.push_back(combat_front_transition6_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition7;
	combat_front_transition7.m_vertex0 = "crouch_front";
	combat_front_transition7.m_vertex1 = "crouch_front_right";
	combat_front_transition7.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition7_action1;
	combat_front_transition7_action1.m_action.m_animation = "crouch_front_to_crouch_front_right";
	combat_front_transition7_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition7_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition7_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition7_action1.m_precondition_functor = "true";
	combat_front_transition7_action1.m_preconditions_params = "";

	combat_front_transition7.m_actions.push_back(combat_front_transition7_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition8;
	combat_front_transition8.m_vertex0 = "crouch_front";
	combat_front_transition8.m_vertex1 = "stand_front_left";
	combat_front_transition8.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition8_action1;
	combat_front_transition8_action1.m_action.m_animation = "crouch_front_to_stand_front_left";
	combat_front_transition8_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition8_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition8_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition8_action1.m_precondition_functor = "true";
	combat_front_transition8_action1.m_preconditions_params = "";

	combat_front_transition8.m_actions.push_back(combat_front_transition8_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition9;
	combat_front_transition9.m_vertex0 = "crouch_front";
	combat_front_transition9.m_vertex1 = "stand_front_right";
	combat_front_transition9.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition9_action1;
	combat_front_transition9_action1.m_action.m_animation = "crouch_front_to_stand_front_right";
	combat_front_transition9_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition9_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition9_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition9_action1.m_precondition_functor = "true";
	combat_front_transition9_action1.m_preconditions_params = "";

	combat_front_transition9.m_actions.push_back(combat_front_transition9_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition10;
	combat_front_transition10.m_vertex0 = "crouch_front_right";
	combat_front_transition10.m_vertex1 = "crouch_front";
	combat_front_transition10.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition10_action1;
	combat_front_transition10_action1.m_action.m_animation = "crouch_front_right_to_crouch_front";
	combat_front_transition10_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition10_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition10_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition10_action1.m_precondition_functor = "true";
	combat_front_transition10_action1.m_preconditions_params = "";

	combat_front_transition10.m_actions.push_back(combat_front_transition10_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition11;
	combat_front_transition11.m_vertex0 = "crouch_front_right";
	combat_front_transition11.m_vertex1 = "crouch_front_left";
	combat_front_transition11.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition11_action1;
	combat_front_transition11_action1.m_action.m_animation = "crouch_front_right_to_crouch_front_left";
	combat_front_transition11_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition11_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition11_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition11_action1.m_precondition_functor = "true";
	combat_front_transition11_action1.m_preconditions_params = "";

	combat_front_transition11.m_actions.push_back(combat_front_transition11_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition12;
	combat_front_transition12.m_vertex0 = "crouch_front_right";
	combat_front_transition12.m_vertex1 = "stand_front_left";
	combat_front_transition12.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition12_action1;
	combat_front_transition12_action1.m_action.m_animation = "crouch_front_right_to_stand_front_left";
	combat_front_transition12_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition12_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition12_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition12_action1.m_precondition_functor = "true";
	combat_front_transition12_action1.m_preconditions_params = "";

	combat_front_transition12.m_actions.push_back(combat_front_transition12_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition13;
	combat_front_transition13.m_vertex0 = "crouch_front_right";
	combat_front_transition13.m_vertex1 = "stand_front_right";
	combat_front_transition13.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition13_action1;
	combat_front_transition13_action1.m_action.m_animation = "crouch_front_right_to_stand_front_right";
	combat_front_transition13_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition13_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition13_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition13_action1.m_precondition_functor = "true";
	combat_front_transition13_action1.m_preconditions_params = "";

	combat_front_transition13.m_actions.push_back(combat_front_transition13_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition14;
	combat_front_transition14.m_vertex0 = "crouch_front_left";
	combat_front_transition14.m_vertex1 = "crouch_front";
	combat_front_transition14.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition14_action1;
	combat_front_transition14_action1.m_action.m_animation = "crouch_front_left_to_crouch_front";
	combat_front_transition14_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition14_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition14_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition14_action1.m_precondition_functor = "true";
	combat_front_transition14_action1.m_preconditions_params = "";

	combat_front_transition14.m_actions.push_back(combat_front_transition14_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition15;
	combat_front_transition15.m_vertex0 = "crouch_front_left";
	combat_front_transition15.m_vertex1 = "crouch_front_right";
	combat_front_transition15.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition15_action1;
	combat_front_transition15_action1.m_action.m_animation = "crouch_front_left_to_crouch_front_right";
	combat_front_transition15_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition15_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition15_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition15_action1.m_precondition_functor = "true";
	combat_front_transition15_action1.m_preconditions_params = "";

	combat_front_transition15.m_actions.push_back(combat_front_transition15_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition16;
	combat_front_transition16.m_vertex0 = "crouch_front_left";
	combat_front_transition16.m_vertex1 = "stand_front_left";
	combat_front_transition16.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition16_action1;
	combat_front_transition16_action1.m_action.m_animation = "crouch_front_left_to_stand_front_left";
	combat_front_transition16_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition16_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition16_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition16_action1.m_precondition_functor = "true";
	combat_front_transition16_action1.m_preconditions_params = "";

	combat_front_transition16.m_actions.push_back(combat_front_transition16_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition17;
	combat_front_transition17.m_vertex0 = "crouch_front_left";
	combat_front_transition17.m_vertex1 = "stand_front_right";
	combat_front_transition17.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition17_action1;
	combat_front_transition17_action1.m_action.m_animation = "crouch_front_left_to_stand_front_right";
	combat_front_transition17_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition17_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition17_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition17_action1.m_precondition_functor = "true";
	combat_front_transition17_action1.m_preconditions_params = "";

	combat_front_transition17.m_actions.push_back(combat_front_transition17_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition18;
	combat_front_transition18.m_vertex0 = "stand_front_left";
	combat_front_transition18.m_vertex1 = "crouch_front";
	combat_front_transition18.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition18_action1;
	combat_front_transition18_action1.m_action.m_animation = "stand_front_left_to_crouch_front";
	combat_front_transition18_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition18_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition18_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition18_action1.m_precondition_functor = "true";
	combat_front_transition18_action1.m_preconditions_params = "";

	combat_front_transition18.m_actions.push_back(combat_front_transition18_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition19;
	combat_front_transition19.m_vertex0 = "stand_front_left";
	combat_front_transition19.m_vertex1 = "crouch_front_left";
	combat_front_transition19.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition19_action1;
	combat_front_transition19_action1.m_action.m_animation = "stand_front_left_to_crouch_front_left";
	combat_front_transition19_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition19_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition19_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition19_action1.m_precondition_functor = "true";
	combat_front_transition19_action1.m_preconditions_params = "";

	combat_front_transition19.m_actions.push_back(combat_front_transition19_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition20;
	combat_front_transition20.m_vertex0 = "stand_front_left";
	combat_front_transition20.m_vertex1 = "crouch_front_right";
	combat_front_transition20.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition20_action1;
	combat_front_transition20_action1.m_action.m_animation = "stand_front_left_to_crouch_front_right";
	combat_front_transition20_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition20_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition20_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition20_action1.m_precondition_functor = "true";
	combat_front_transition20_action1.m_preconditions_params = "";

	combat_front_transition20.m_actions.push_back(combat_front_transition20_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition21;
	combat_front_transition21.m_vertex0 = "stand_front_left";
	combat_front_transition21.m_vertex1 = "stand_front_right";
	combat_front_transition21.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition21_action1;
	combat_front_transition21_action1.m_action.m_animation = "stand_front_left_to_stand_front_right";
	combat_front_transition21_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition21_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition21_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition21_action1.m_precondition_functor = "true";
	combat_front_transition21_action1.m_preconditions_params = "";

	combat_front_transition21.m_actions.push_back(combat_front_transition21_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition22;
	combat_front_transition22.m_vertex0 = "stand_front_right";
	combat_front_transition22.m_vertex1 = "crouch_front";
	combat_front_transition22.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition22_action1;
	combat_front_transition22_action1.m_action.m_animation = "stand_front_right_to_crouch_front";
	combat_front_transition22_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition22_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition22_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition22_action1.m_precondition_functor = "true";
	combat_front_transition22_action1.m_preconditions_params = "";

	combat_front_transition22.m_actions.push_back(combat_front_transition22_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition23;
	combat_front_transition23.m_vertex0 = "stand_front_right";
	combat_front_transition23.m_vertex1 = "crouch_front_left";
	combat_front_transition23.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition23_action1;
	combat_front_transition23_action1.m_action.m_animation = "stand_front_right_to_crouch_front_left";
	combat_front_transition23_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition23_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition23_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition23_action1.m_precondition_functor = "true";
	combat_front_transition23_action1.m_preconditions_params = "";

	combat_front_transition23.m_actions.push_back(combat_front_transition23_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition24;
	combat_front_transition24.m_vertex0 = "stand_front_right";
	combat_front_transition24.m_vertex1 = "crouch_front_right";
	combat_front_transition24.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition24_action1;
	combat_front_transition24_action1.m_action.m_animation = "stand_front_right_to_crouch_front_right";
	combat_front_transition24_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition24_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition24_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition24_action1.m_precondition_functor = "true";
	combat_front_transition24_action1.m_preconditions_params = "";

	combat_front_transition24.m_actions.push_back(combat_front_transition24_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition25;
	combat_front_transition25.m_vertex0 = "stand_front_right";
	combat_front_transition25.m_vertex1 = "stand_front_left";
	combat_front_transition25.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition25_action1;
	combat_front_transition25_action1.m_action.m_animation = "stand_front_right_to_stand_front_left";
	combat_front_transition25_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition25_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition25_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition25_action1.m_precondition_functor = "true";
	combat_front_transition25_action1.m_preconditions_params = "";

	combat_front_transition25.m_actions.push_back(combat_front_transition25_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition26;
	combat_front_transition26.m_vertex0 = "crouch_front_left";
	combat_front_transition26.m_vertex1 = "";
	combat_front_transition26.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition26_action1;
	combat_front_transition26_action1.m_action.m_animation = "";
	combat_front_transition26_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition26_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition26_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition26_action1.m_precondition_functor = "true";
	combat_front_transition26_action1.m_preconditions_params = "";

	combat_front_transition26.m_actions.push_back(combat_front_transition26_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition27;
	combat_front_transition27.m_vertex0 = "crouch_front";
	combat_front_transition27.m_vertex1 = "";
	combat_front_transition27.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition27_action1;
	combat_front_transition27_action1.m_action.m_animation = "";
	combat_front_transition27_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition27_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition27_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition27_action1.m_precondition_functor = "true";
	combat_front_transition27_action1.m_preconditions_params = "";

	combat_front_transition27.m_actions.push_back(combat_front_transition27_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition28;
	combat_front_transition28.m_vertex0 = "crouch_front_right";
	combat_front_transition28.m_vertex1 = "";
	combat_front_transition28.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition28_action1;
	combat_front_transition28_action1.m_action.m_animation = "";
	combat_front_transition28_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition28_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition28_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition28_action1.m_precondition_functor = "true";
	combat_front_transition28_action1.m_preconditions_params = "";

	combat_front_transition28.m_actions.push_back(combat_front_transition28_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition29;
	combat_front_transition29.m_vertex0 = "stand_front_left";
	combat_front_transition29.m_vertex1 = "";
	combat_front_transition29.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition29_action1;
	combat_front_transition29_action1.m_action.m_animation = "";
	combat_front_transition29_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition29_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition29_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition29_action1.m_precondition_functor = "true";
	combat_front_transition29_action1.m_preconditions_params = "";

	combat_front_transition29.m_actions.push_back(combat_front_transition29_action1);

	SmartCoverData::SmartCoverTransitionsData combat_front_transition30;
	combat_front_transition30.m_vertex0 = "stand_front_right";
	combat_front_transition30.m_vertex1 = "";
	combat_front_transition30.m_weight = 1.1f;
	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData combat_front_transition30_action1;
	combat_front_transition30_action1.m_action.m_animation = "";
	combat_front_transition30_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	combat_front_transition30_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	combat_front_transition30_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	combat_front_transition30_action1.m_precondition_functor = "true";
	combat_front_transition30_action1.m_preconditions_params = "";

	combat_front_transition30.m_actions.push_back(combat_front_transition30_action1);
#pragma endregion

	combat_front_smartcover.setNeedWeapon(true);
	combat_front_smartcover.register_loophole(combat_front_loophole_crouch_front_left);
	combat_front_smartcover.register_loophole(combat_front_loophole_crouch_front);
	combat_front_smartcover.register_loophole(combat_front_loophole_crouch_front_right);
	combat_front_smartcover.register_loophole(combat_front_loophole_stand_front_left);
	combat_front_smartcover.register_loophole(combat_front_loophole_stand_front_right);
	combat_front_smartcover.register_transition(combat_front_transition1);
	combat_front_smartcover.register_transition(combat_front_transition2);
	combat_front_smartcover.register_transition(combat_front_transition3);
	combat_front_smartcover.register_transition(combat_front_transition4);
	combat_front_smartcover.register_transition(combat_front_transition5);
	combat_front_smartcover.register_transition(combat_front_transition6);
	combat_front_smartcover.register_transition(combat_front_transition7);
	combat_front_smartcover.register_transition(combat_front_transition8);
	combat_front_smartcover.register_transition(combat_front_transition9);
	combat_front_smartcover.register_transition(combat_front_transition10);
	combat_front_smartcover.register_transition(combat_front_transition11);
	combat_front_smartcover.register_transition(combat_front_transition12);
	combat_front_smartcover.register_transition(combat_front_transition13);
	combat_front_smartcover.register_transition(combat_front_transition14);
	combat_front_smartcover.register_transition(combat_front_transition15);
	combat_front_smartcover.register_transition(combat_front_transition16);
	combat_front_smartcover.register_transition(combat_front_transition17);
	combat_front_smartcover.register_transition(combat_front_transition18);
	combat_front_smartcover.register_transition(combat_front_transition19);
	combat_front_smartcover.register_transition(combat_front_transition20);
	combat_front_smartcover.register_transition(combat_front_transition21);
	combat_front_smartcover.register_transition(combat_front_transition22);
	combat_front_smartcover.register_transition(combat_front_transition23);
	combat_front_smartcover.register_transition(combat_front_transition24);
	combat_front_smartcover.register_transition(combat_front_transition25);
	combat_front_smartcover.register_transition(combat_front_transition26);
	combat_front_smartcover.register_transition(combat_front_transition27);
	combat_front_smartcover.register_transition(combat_front_transition28);
	combat_front_smartcover.register_transition(combat_front_transition29);
	combat_front_smartcover.register_transition(combat_front_transition30);
	this->m_registered_smartcovers["combat_front"] = combat_front_smartcover;
#pragma endregion Cordis Combat Front Smart Cover

#pragma region Cordis Animpoint Stay Wall Smart Cover Initialization
	SmartCoverData animpoint_stay_wall_smartcover;
	SmartCoverLoopholeData animpoint_stay_wall_loophole;

#pragma region Cordis Loophole
	animpoint_stay_wall_loophole.m_id = "animpoint_stay_wall";
	animpoint_stay_wall_loophole.m_is_usable = true;
	animpoint_stay_wall_loophole.m_is_exitable = false;
	animpoint_stay_wall_loophole.m_is_enterable = false;
	animpoint_stay_wall_loophole.m_fieldofview = 45.0f;
	animpoint_stay_wall_loophole.m_fieldofview_danger = 45.0f;
	animpoint_stay_wall_loophole.m_range = 70.0f;
	animpoint_stay_wall_loophole.m_fieldofview_direction = Fvector().set(0.0f, 0.0f, -1.0f);
	animpoint_stay_wall_loophole.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_stay_wall_loophole.m_danger_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.0f);
	animpoint_stay_wall_loophole.m_enter_direction = Fvector().set(0.0f, 0.0f, -1.0f);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_stay_wall_loophole_action1;
	animpoint_stay_wall_loophole_action1.m_id = "idle";
	animpoint_stay_wall_loophole_action1.register_animation("idle", "animpoint_stay_wall_idle_1");

	animpoint_stay_wall_loophole.register_action(animpoint_stay_wall_loophole_action1);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_stay_wall_loophole_action2;
	animpoint_stay_wall_loophole_action2.m_id = "lookout";
	animpoint_stay_wall_loophole_action2.register_animation("idle", "animpoint_stay_wall_idle_1");

	animpoint_stay_wall_loophole.register_action(animpoint_stay_wall_loophole_action2);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_stay_wall_loophole_action3;
	animpoint_stay_wall_loophole_action3.m_id = "fire";
	animpoint_stay_wall_loophole_action3.register_animation("idle", "animpoint_stay_wall_idle_1");
	animpoint_stay_wall_loophole_action3.register_animation("shoot", "animpoint_stay_wall_idle_1");

	animpoint_stay_wall_loophole.register_action(animpoint_stay_wall_loophole_action3);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_stay_wall_loophole_action4;
	animpoint_stay_wall_loophole_action4.m_id = "fire_no_lookout";
	animpoint_stay_wall_loophole_action4.register_animation("idle", "animpoint_stay_wall_idle_1");
	animpoint_stay_wall_loophole_action4.register_animation("shoot", "animpoint_stay_wall_idle_1");

	animpoint_stay_wall_loophole.register_action(animpoint_stay_wall_loophole_action4);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_stay_wall_loophole_action5;
	animpoint_stay_wall_loophole_action5.m_id = "reload";
	animpoint_stay_wall_loophole_action5.register_animation("idle", "animpoint_stay_wall_idle_1");

	animpoint_stay_wall_loophole.register_action(animpoint_stay_wall_loophole_action5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_wall_loophole_transition1;
	animpoint_stay_wall_loophole_transition1.m_action_from = "idle";
	animpoint_stay_wall_loophole_transition1.m_action_to = "lookout";
	animpoint_stay_wall_loophole_transition1.m_animations.push_back("animpoint_stay_wall_in_1");
	animpoint_stay_wall_loophole_transition1.m_weight = 1.2f;

	animpoint_stay_wall_loophole.register_transition(animpoint_stay_wall_loophole_transition1);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_wall_loophole_transition2;
	animpoint_stay_wall_loophole_transition2.m_action_from = "lookout";
	animpoint_stay_wall_loophole_transition2.m_action_to = "idle";
	animpoint_stay_wall_loophole_transition2.m_animations.push_back("animpoint_stay_wall_in_1");
	animpoint_stay_wall_loophole_transition2.m_weight = 1.2f;

	animpoint_stay_wall_loophole.register_transition(animpoint_stay_wall_loophole_transition2);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_wall_loophole_transition3;
	animpoint_stay_wall_loophole_transition3.m_action_from = "idle";
	animpoint_stay_wall_loophole_transition3.m_action_to = "fire";
	animpoint_stay_wall_loophole_transition3.m_animations.push_back("animpoint_stay_wall_in_1");
	animpoint_stay_wall_loophole_transition3.m_weight = 1.2f;

	animpoint_stay_wall_loophole.register_transition(animpoint_stay_wall_loophole_transition3);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_wall_loophole_transition4;
	animpoint_stay_wall_loophole_transition4.m_action_from = "fire";
	animpoint_stay_wall_loophole_transition4.m_action_to = "idle";
	animpoint_stay_wall_loophole_transition4.m_animations.push_back("animpoint_stay_wall_in_1");
	animpoint_stay_wall_loophole_transition4.m_weight = 1.2f;

	animpoint_stay_wall_loophole.register_transition(animpoint_stay_wall_loophole_transition4);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_wall_loophole_transition5;
	animpoint_stay_wall_loophole_transition5.m_action_from = "idle";
	animpoint_stay_wall_loophole_transition5.m_action_to = "fire_no_lookout";
	animpoint_stay_wall_loophole_transition5.m_animations.push_back("animpoint_stay_wall_in_1");
	animpoint_stay_wall_loophole_transition5.m_weight = 1.2f;

	animpoint_stay_wall_loophole.register_transition(animpoint_stay_wall_loophole_transition5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_wall_loophole_transition6;
	animpoint_stay_wall_loophole_transition6.m_action_from = "fire_no_lookout";
	animpoint_stay_wall_loophole_transition6.m_action_to = "idle";
	animpoint_stay_wall_loophole_transition6.m_animations.push_back("animpoint_stay_wall_in_1");
	animpoint_stay_wall_loophole_transition6.m_weight = 1.2f;

	animpoint_stay_wall_loophole.register_transition(animpoint_stay_wall_loophole_transition6);

#pragma endregion

#pragma region Cordis Transition
	SmartCoverData::SmartCoverTransitionsData animpoint_stay_wall_transition;
	animpoint_stay_wall_transition.m_vertex0 = "";
	animpoint_stay_wall_transition.m_vertex1 = "animpoint_stay_wall";
	animpoint_stay_wall_transition.m_weight = 1.0f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_stay_wall_transition_action1;
	animpoint_stay_wall_transition_action1.m_action.m_animation = "animpoint_stay_wall_in_1";
	animpoint_stay_wall_transition_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_stay_wall_transition_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	animpoint_stay_wall_transition_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_stay_wall_transition_action1.m_precondition_functor = "true";
	animpoint_stay_wall_transition_action1.m_preconditions_params = "";

	animpoint_stay_wall_transition.m_actions.push_back(animpoint_stay_wall_transition_action1);

	/*
			SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_stay_wall_transition_action2;
			animpoint_stay_wall_transition_action2.m_action.m_animation = "animpoint_stay_wall_out_1";
			animpoint_stay_wall_transition_action2.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
			animpoint_stay_wall_transition_action2.m_action.m_body_state = MonsterSpace::eBodyStateStand;
			animpoint_stay_wall_transition_action2.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
			animpoint_stay_wall_transition_action2.m_precondition_functor = "true";
			animpoint_stay_wall_transition_action2.m_preconditions_params = "";

			animpoint_stay_wall_transition.m_actions.push_back(animpoint_stay_wall_transition_action2);
			*/

	SmartCoverData::SmartCoverTransitionsData animpoint_stay_wall_transition1;
	animpoint_stay_wall_transition1.m_vertex0 = "animpoint_stay_wall";
	animpoint_stay_wall_transition1.m_vertex1 = "";
	animpoint_stay_wall_transition1.m_weight = 1.1f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_stay_wall_transition1_action1;
	animpoint_stay_wall_transition1_action1.m_action.m_animation = "animpoint_stay_wall_out_1";
	animpoint_stay_wall_transition1_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_stay_wall_transition1_action1.m_action.m_body_state = MonsterSpace::eBodyStateStand;
	animpoint_stay_wall_transition1_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_stay_wall_transition1_action1.m_precondition_functor = "true";
	animpoint_stay_wall_transition1_action1.m_preconditions_params = "";

	animpoint_stay_wall_transition1.m_actions.push_back(animpoint_stay_wall_transition1_action1);
#pragma endregion

	animpoint_stay_wall_smartcover.setNeedWeapon(false);
	animpoint_stay_wall_smartcover.register_loophole(animpoint_stay_wall_loophole);
	animpoint_stay_wall_smartcover.register_transition(animpoint_stay_wall_transition);
	animpoint_stay_wall_smartcover.register_transition(animpoint_stay_wall_transition1);
	this->m_registered_smartcovers["animpoint_stay_wall"] = animpoint_stay_wall_smartcover;
#pragma endregion

#pragma region Cordis Animpoint Stay Table Smart Cover
	SmartCoverData animpoint_stay_table_smartcover;
	SmartCoverLoopholeData animpoint_stay_table_loophole;

#pragma region Cordis Loophole
	animpoint_stay_table_loophole.m_id = "animpoint_stay_table";
	animpoint_stay_table_loophole.m_is_usable = true;
	animpoint_stay_table_loophole.m_is_exitable = true;
	animpoint_stay_table_loophole.m_is_enterable = true;
	animpoint_stay_table_loophole.m_fieldofview = 45.0f;
	animpoint_stay_table_loophole.m_fieldofview_danger = 45.0f;
	animpoint_stay_table_loophole.m_range = 70.0f;
	animpoint_stay_table_loophole.m_fieldofview_direction = Fvector().set(0.0f, 0.0f, -1.0f);
	animpoint_stay_table_loophole.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_stay_table_loophole.m_danger_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.0f);
	animpoint_stay_table_loophole.m_enter_direction = Fvector().set(0.0f, 0.0f, -1.0f);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_stay_table_loophole_action1;
	animpoint_stay_table_loophole_action1.m_id = "idle";
	animpoint_stay_table_loophole_action1.register_animation("idle", "animpoint_stay_table_idle_1");

	animpoint_stay_table_loophole.register_action(animpoint_stay_table_loophole_action1);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_stay_table_loophole_action2;
	animpoint_stay_table_loophole_action2.m_id = "lookout";
	animpoint_stay_table_loophole_action2.register_animation("idle", "animpoint_stay_table_idle_1");

	animpoint_stay_table_loophole.register_action(animpoint_stay_table_loophole_action2);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_stay_table_loophole_action3;
	animpoint_stay_table_loophole_action3.m_id = "fire";
	animpoint_stay_table_loophole_action3.register_animation("idle", "animpoint_stay_table_idle_1");
	animpoint_stay_table_loophole_action3.register_animation("shoot", "animpoint_stay_table_idle_1");

	animpoint_stay_table_loophole.register_action(animpoint_stay_table_loophole_action3);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_stay_table_loophole_action4;
	animpoint_stay_table_loophole_action4.m_id = "fire_no_lookout";
	animpoint_stay_table_loophole_action4.register_animation("idle", "animpoint_stay_table_idle_1");
	animpoint_stay_table_loophole_action4.register_animation("shoot", "animpoint_stay_table_idle_1");

	animpoint_stay_table_loophole.register_action(animpoint_stay_table_loophole_action4);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_stay_table_loophole_action5;
	animpoint_stay_table_loophole_action5.m_id = "reload";
	animpoint_stay_table_loophole_action5.register_animation("idle", "animpoint_stay_table_idle_1");

	animpoint_stay_table_loophole.register_action(animpoint_stay_table_loophole_action5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_table_loophole_transition1;
	animpoint_stay_table_loophole_transition1.m_action_from = "idle";
	animpoint_stay_table_loophole_transition1.m_action_to = "lookout";
	animpoint_stay_table_loophole_transition1.m_animations.push_back("animpoint_stay_table_in_1");
	animpoint_stay_table_loophole_transition1.m_weight = 1.2f;

	animpoint_stay_table_loophole.register_transition(animpoint_stay_table_loophole_transition1);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_table_loophole_transition2;
	animpoint_stay_table_loophole_transition2.m_action_from = "lookout";
	animpoint_stay_table_loophole_transition2.m_action_to = "idle";
	animpoint_stay_table_loophole_transition2.m_animations.push_back("animpoint_stay_table_in_1");
	animpoint_stay_table_loophole_transition2.m_weight = 1.2f;

	animpoint_stay_table_loophole.register_transition(animpoint_stay_table_loophole_transition2);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_table_loophole_transition3;
	animpoint_stay_table_loophole_transition3.m_action_from = "idle";
	animpoint_stay_table_loophole_transition3.m_action_to = "fire";
	animpoint_stay_table_loophole_transition3.m_animations.push_back("animpoint_stay_table_in_1");
	animpoint_stay_table_loophole_transition3.m_weight = 1.2f;

	animpoint_stay_table_loophole.register_transition(animpoint_stay_table_loophole_transition3);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_table_loophole_transition4;
	animpoint_stay_table_loophole_transition4.m_action_from = "fire";
	animpoint_stay_table_loophole_transition4.m_action_to = "idle";
	animpoint_stay_table_loophole_transition4.m_animations.push_back("animpoint_stay_table_in_1");
	animpoint_stay_table_loophole_transition4.m_weight = 1.2f;

	animpoint_stay_table_loophole.register_transition(animpoint_stay_table_loophole_transition4);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_table_loophole_transition5;
	animpoint_stay_table_loophole_transition5.m_action_from = "idle";
	animpoint_stay_table_loophole_transition5.m_action_to = "fire_no_lookout";
	animpoint_stay_table_loophole_transition5.m_animations.push_back("animpoint_stay_table_in_1");
	animpoint_stay_table_loophole_transition5.m_weight = 1.2f;

	animpoint_stay_table_loophole.register_transition(animpoint_stay_table_loophole_transition5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_stay_table_loophole_transition6;
	animpoint_stay_table_loophole_transition6.m_action_from = "fire_no_lookout";
	animpoint_stay_table_loophole_transition6.m_action_to = "idle";
	animpoint_stay_table_loophole_transition6.m_animations.push_back("animpoint_stay_table_in_1");
	animpoint_stay_table_loophole_transition6.m_weight = 1.2f;

	animpoint_stay_table_loophole.register_transition(animpoint_stay_table_loophole_transition6);
#pragma endregion

#pragma region Cordis Transition
	SmartCoverData::SmartCoverTransitionsData animpoint_stay_table_transition;
	animpoint_stay_table_transition.m_vertex0 = "";
	animpoint_stay_table_transition.m_vertex1 = "animpoint_stay_table";
	animpoint_stay_table_transition.m_weight = 1.0f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_stay_table_transition_action1;
	animpoint_stay_table_transition_action1.m_action.m_animation = "animpoint_stay_table_in_1";
	animpoint_stay_table_transition_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_stay_table_transition_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	animpoint_stay_table_transition_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_stay_table_transition_action1.m_precondition_functor = "true";
	animpoint_stay_table_transition_action1.m_preconditions_params = "";

	animpoint_stay_table_transition.m_actions.push_back(animpoint_stay_table_transition_action1);

	SmartCoverData::SmartCoverTransitionsData animpoint_stay_table_transition1;
	animpoint_stay_table_transition1.m_vertex0 = "animpoint_stay_table";
	animpoint_stay_table_transition1.m_vertex1 = "";
	animpoint_stay_table_transition1.m_weight = 1.1f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_stay_table_transition1_action1;
	animpoint_stay_table_transition1_action1.m_action.m_animation = "animpoint_stay_table_out_1";
	animpoint_stay_table_transition1_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_stay_table_transition1_action1.m_action.m_body_state = MonsterSpace::eBodyStateStand;
	animpoint_stay_table_transition1_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_stay_table_transition1_action1.m_precondition_functor = "true";
	animpoint_stay_table_transition1_action1.m_preconditions_params = "";

	animpoint_stay_table_transition1.m_actions.push_back(animpoint_stay_table_transition1_action1);
#pragma endregion

	animpoint_stay_table_smartcover.setNeedWeapon(false);
	animpoint_stay_table_smartcover.register_loophole(animpoint_stay_table_loophole);
	animpoint_stay_table_smartcover.register_transition(animpoint_stay_table_transition);
	animpoint_stay_table_smartcover.register_transition(animpoint_stay_table_transition1);
	this->m_registered_smartcovers["animpoint_stay_table"] = animpoint_stay_table_smartcover;
#pragma endregion

#pragma region Cordis Animpoint Sit High Smart Cover
	SmartCoverData animpoint_sit_high_smartcover;
	SmartCoverLoopholeData animpoint_sit_high_loophole;

#pragma region Cordis Loophole
	animpoint_sit_high_loophole.m_id = "animpoint_sit_high";
	animpoint_sit_high_loophole.m_is_usable = true;
	animpoint_sit_high_loophole.m_is_exitable = false;
	animpoint_sit_high_loophole.m_is_enterable = false;
	animpoint_sit_high_loophole.m_fieldofview = 45.0f;
	animpoint_sit_high_loophole.m_fieldofview_danger = 45.0f;
	animpoint_sit_high_loophole.m_range = 70.0f;
	animpoint_sit_high_loophole.m_fieldofview_direction = Fvector().set(0.0f, 0.0f, -1.0f);
	animpoint_sit_high_loophole.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_sit_high_loophole.m_danger_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.0f);
	animpoint_sit_high_loophole.m_enter_direction = Fvector().set(0.0f, 0.0f, -1.0f);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_high_loophole_action1;
	animpoint_sit_high_loophole_action1.m_id = "idle";
	animpoint_sit_high_loophole_action1.register_animation("idle", "animpoint_sit_high_idle_1");

	animpoint_sit_high_loophole.register_action(animpoint_sit_high_loophole_action1);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_high_loophole_action2;
	animpoint_sit_high_loophole_action2.m_id = "lookout";
	animpoint_sit_high_loophole_action2.register_animation("idle", "animpoint_sit_high_idle_1");

	animpoint_sit_high_loophole.register_action(animpoint_sit_high_loophole_action2);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_high_loophole_action3;
	animpoint_sit_high_loophole_action3.m_id = "fire";
	animpoint_sit_high_loophole_action3.register_animation("idle", "animpoint_sit_high_idle_1");
	animpoint_sit_high_loophole_action3.register_animation("shoot", "animpoint_sit_high_idle_1");

	animpoint_sit_high_loophole.register_action(animpoint_sit_high_loophole_action3);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_high_loophole_action4;
	animpoint_sit_high_loophole_action4.m_id = "fire_no_lookout";
	animpoint_sit_high_loophole_action4.register_animation("idle", "animpoint_sit_high_idle_1");
	animpoint_sit_high_loophole_action4.register_animation("shoot", "animpoint_sit_high_idle_1");

	animpoint_sit_high_loophole.register_action(animpoint_sit_high_loophole_action4);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_high_loophole_action5;
	animpoint_sit_high_loophole_action5.m_id = "reload";
	animpoint_sit_high_loophole_action5.register_animation("idle", "animpoint_sit_high_idle_1");

	animpoint_sit_high_loophole.register_action(animpoint_sit_high_loophole_action5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_high_loophole_transition1;
	animpoint_sit_high_loophole_transition1.m_action_from = "idle";
	animpoint_sit_high_loophole_transition1.m_action_to = "lookout";
	animpoint_sit_high_loophole_transition1.m_animations.push_back("animpoint_sit_high_in_1");
	animpoint_sit_high_loophole_transition1.m_weight = 1.2f;

	animpoint_sit_high_loophole.register_transition(animpoint_sit_high_loophole_transition1);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_high_loophole_transition2;
	animpoint_sit_high_loophole_transition2.m_action_from = "lookout";
	animpoint_sit_high_loophole_transition2.m_action_to = "idle";
	animpoint_sit_high_loophole_transition2.m_animations.push_back("animpoint_sit_high_in_1");
	animpoint_sit_high_loophole_transition2.m_weight = 1.2f;

	animpoint_sit_high_loophole.register_transition(animpoint_sit_high_loophole_transition2);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_high_loophole_transition3;
	animpoint_sit_high_loophole_transition3.m_action_from = "idle";
	animpoint_sit_high_loophole_transition3.m_action_to = "fire";
	animpoint_sit_high_loophole_transition3.m_animations.push_back("animpoint_sit_high_in_1");
	animpoint_sit_high_loophole_transition3.m_weight = 1.2f;

	animpoint_sit_high_loophole.register_transition(animpoint_sit_high_loophole_transition3);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_high_loophole_transition4;
	animpoint_sit_high_loophole_transition4.m_action_from = "fire";
	animpoint_sit_high_loophole_transition4.m_action_to = "idle";
	animpoint_sit_high_loophole_transition4.m_animations.push_back("animpoint_sit_high_in_1");
	animpoint_sit_high_loophole_transition4.m_weight = 1.2f;

	animpoint_sit_high_loophole.register_transition(animpoint_sit_high_loophole_transition4);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_high_loophole_transition5;
	animpoint_sit_high_loophole_transition5.m_action_from = "idle";
	animpoint_sit_high_loophole_transition5.m_action_to = "fire_no_lookout";
	animpoint_sit_high_loophole_transition5.m_animations.push_back("animpoint_sit_high_in_1");
	animpoint_sit_high_loophole_transition5.m_weight = 1.2f;

	animpoint_sit_high_loophole.register_transition(animpoint_sit_high_loophole_transition5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_high_loophole_transition6;
	animpoint_sit_high_loophole_transition6.m_action_from = "fire_no_lookout";
	animpoint_sit_high_loophole_transition6.m_action_to = "idle";
	animpoint_sit_high_loophole_transition6.m_animations.push_back("animpoint_sit_high_in_1");
	animpoint_sit_high_loophole_transition6.m_weight = 1.2f;

	animpoint_sit_high_loophole.register_transition(animpoint_sit_high_loophole_transition6);
#pragma endregion

#pragma region Cordis Transition
	SmartCoverData::SmartCoverTransitionsData animpoint_sit_high_transition;
	animpoint_sit_high_transition.m_vertex0 = "";
	animpoint_sit_high_transition.m_vertex1 = "animpoint_sit_high";
	animpoint_sit_high_transition.m_weight = 1.0f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_sit_high_transition_action1;
	animpoint_sit_high_transition_action1.m_action.m_animation = "animpoint_sit_high_in_1";
	animpoint_sit_high_transition_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_sit_high_transition_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	animpoint_sit_high_transition_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_sit_high_transition_action1.m_precondition_functor = "true";
	animpoint_sit_high_transition_action1.m_preconditions_params = "";

	animpoint_sit_high_transition.m_actions.push_back(animpoint_sit_high_transition_action1);

	SmartCoverData::SmartCoverTransitionsData animpoint_sit_high_transition1;
	animpoint_sit_high_transition1.m_vertex0 = "animpoint_sit_high";
	animpoint_sit_high_transition1.m_vertex1 = "";
	animpoint_sit_high_transition1.m_weight = 1.1f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_sit_high_transition1_action1;
	animpoint_sit_high_transition1_action1.m_action.m_animation = "animpoint_sit_high_out_1";
	animpoint_sit_high_transition1_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_sit_high_transition1_action1.m_action.m_body_state = MonsterSpace::eBodyStateStand;
	animpoint_sit_high_transition1_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_sit_high_transition1_action1.m_precondition_functor = "true";
	animpoint_sit_high_transition1_action1.m_preconditions_params = "";

	animpoint_sit_high_transition1.m_actions.push_back(animpoint_sit_high_transition1_action1);
#pragma endregion

	animpoint_sit_high_smartcover.setNeedWeapon(false);
	animpoint_sit_high_smartcover.register_loophole(animpoint_sit_high_loophole);
	animpoint_sit_high_smartcover.register_transition(animpoint_sit_high_transition);
	animpoint_sit_high_smartcover.register_transition(animpoint_sit_high_transition1);
	this->m_registered_smartcovers["animpoint_sit_high"] = animpoint_sit_high_smartcover;
#pragma endregion

#pragma region Cordis Animpoint Sit Normal
	SmartCoverData animpoint_sit_normal_smartcover;
	SmartCoverLoopholeData animpoint_sit_normal_loophole;

#pragma region Cordis Loophole
	animpoint_sit_normal_loophole.m_id = "animpoint_sit_normal";
	animpoint_sit_normal_loophole.m_is_usable = true;
	animpoint_sit_normal_loophole.m_is_exitable = false;
	animpoint_sit_normal_loophole.m_is_enterable = false;
	animpoint_sit_normal_loophole.m_fieldofview = 45.0f;
	animpoint_sit_normal_loophole.m_fieldofview_danger = 45.0f;
	animpoint_sit_normal_loophole.m_range = 70.0f;
	animpoint_sit_normal_loophole.m_fieldofview_direction = Fvector().set(0.0f, 0.0f, -1.0f);
	animpoint_sit_normal_loophole.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_sit_normal_loophole.m_danger_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.0f);
	animpoint_sit_normal_loophole.m_enter_direction = Fvector().set(0.0f, 0.0f, -1.0f);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_normal_loophole_action1;
	animpoint_sit_normal_loophole_action1.m_id = "idle";
	animpoint_sit_normal_loophole_action1.register_animation("idle", "animpoint_sit_normal_idle_1");

	animpoint_sit_normal_loophole.register_action(animpoint_sit_normal_loophole_action1);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_normal_loophole_action2;
	animpoint_sit_normal_loophole_action2.m_id = "lookout";
	animpoint_sit_normal_loophole_action2.register_animation("idle", "animpoint_sit_normal_idle_1");

	animpoint_sit_normal_loophole.register_action(animpoint_sit_normal_loophole_action2);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_normal_loophole_action3;
	animpoint_sit_normal_loophole_action3.m_id = "fire";
	animpoint_sit_normal_loophole_action3.register_animation("idle", "animpoint_sit_normal_idle_1");
	animpoint_sit_normal_loophole_action3.register_animation("shoot", "animpoint_sit_normal_idle_1");

	animpoint_sit_normal_loophole.register_action(animpoint_sit_normal_loophole_action3);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_normal_loophole_action4;
	animpoint_sit_normal_loophole_action4.m_id = "fire_no_lookout";
	animpoint_sit_normal_loophole_action4.register_animation("idle", "animpoint_sit_normal_idle_1");
	animpoint_sit_normal_loophole_action4.register_animation("shoot", "animpoint_sit_normal_idle_1");

	animpoint_sit_normal_loophole.register_action(animpoint_sit_normal_loophole_action4);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_normal_loophole_action5;
	animpoint_sit_normal_loophole_action5.m_id = "reload";
	animpoint_sit_normal_loophole_action5.register_animation("idle", "animpoint_sit_normal_idle_1");

	animpoint_sit_normal_loophole.register_action(animpoint_sit_normal_loophole_action5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_normal_loophole_transition1;
	animpoint_sit_normal_loophole_transition1.m_action_from = "idle";
	animpoint_sit_normal_loophole_transition1.m_action_to = "lookout";
	animpoint_sit_normal_loophole_transition1.m_animations.push_back("animpoint_sit_normal_in_1");
	animpoint_sit_normal_loophole_transition1.m_weight = 1.2f;

	animpoint_sit_normal_loophole.register_transition(animpoint_sit_normal_loophole_transition1);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_normal_loophole_transition2;
	animpoint_sit_normal_loophole_transition2.m_action_from = "lookout";
	animpoint_sit_normal_loophole_transition2.m_action_to = "idle";
	animpoint_sit_normal_loophole_transition2.m_animations.push_back("animpoint_sit_normal_in_1");
	animpoint_sit_normal_loophole_transition2.m_weight = 1.2f;

	animpoint_sit_normal_loophole.register_transition(animpoint_sit_normal_loophole_transition2);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_normal_loophole_transition3;
	animpoint_sit_normal_loophole_transition3.m_action_from = "idle";
	animpoint_sit_normal_loophole_transition3.m_action_to = "fire";
	animpoint_sit_normal_loophole_transition3.m_animations.push_back("animpoint_sit_normal_in_1");
	animpoint_sit_normal_loophole_transition3.m_weight = 1.2f;

	animpoint_sit_normal_loophole.register_transition(animpoint_sit_normal_loophole_transition3);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_normal_loophole_transition4;
	animpoint_sit_normal_loophole_transition4.m_action_from = "fire";
	animpoint_sit_normal_loophole_transition4.m_action_to = "idle";
	animpoint_sit_normal_loophole_transition4.m_animations.push_back("animpoint_sit_normal_in_1");
	animpoint_sit_normal_loophole_transition4.m_weight = 1.2f;

	animpoint_sit_normal_loophole.register_transition(animpoint_sit_normal_loophole_transition4);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_normal_loophole_transition5;
	animpoint_sit_normal_loophole_transition5.m_action_from = "idle";
	animpoint_sit_normal_loophole_transition5.m_action_to = "fire_no_lookout";
	animpoint_sit_normal_loophole_transition5.m_animations.push_back("animpoint_sit_normal_in_1");
	animpoint_sit_normal_loophole_transition5.m_weight = 1.2f;

	animpoint_sit_normal_loophole.register_transition(animpoint_sit_normal_loophole_transition5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_normal_loophole_transition6;
	animpoint_sit_normal_loophole_transition6.m_action_from = "fire_no_lookout";
	animpoint_sit_normal_loophole_transition6.m_action_to = "idle";
	animpoint_sit_normal_loophole_transition6.m_animations.push_back("animpoint_sit_normal_in_1");
	animpoint_sit_normal_loophole_transition6.m_weight = 1.2f;

	animpoint_sit_normal_loophole.register_transition(animpoint_sit_normal_loophole_transition6);
#pragma endregion

#pragma region Cordis Transition
	SmartCoverData::SmartCoverTransitionsData animpoint_sit_normal_transition;
	animpoint_sit_normal_transition.m_vertex0 = "";
	animpoint_sit_normal_transition.m_vertex1 = "animpoint_sit_normal";
	animpoint_sit_normal_transition.m_weight = 1.0f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_sit_normal_transition_action1;
	animpoint_sit_normal_transition_action1.m_action.m_animation = "animpoint_sit_normal_in_1";
	animpoint_sit_normal_transition_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_sit_normal_transition_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	animpoint_sit_normal_transition_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_sit_normal_transition_action1.m_precondition_functor = "true";
	animpoint_sit_normal_transition_action1.m_preconditions_params = "";

	animpoint_sit_normal_transition.m_actions.push_back(animpoint_sit_normal_transition_action1);

	SmartCoverData::SmartCoverTransitionsData animpoint_sit_normal_transition1;
	animpoint_sit_normal_transition1.m_vertex0 = "animpoint_sit_normal";
	animpoint_sit_normal_transition1.m_vertex1 = "";
	animpoint_sit_normal_transition1.m_weight = 1.1f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_sit_normal_transition1_action1;
	animpoint_sit_normal_transition1_action1.m_action.m_animation = "animpoint_sit_normal_out_1";
	animpoint_sit_normal_transition1_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_sit_normal_transition1_action1.m_action.m_body_state = MonsterSpace::eBodyStateStand;
	animpoint_sit_normal_transition1_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_sit_normal_transition1_action1.m_precondition_functor = "true";
	animpoint_sit_normal_transition1_action1.m_preconditions_params = "";

	animpoint_sit_normal_transition1.m_actions.push_back(animpoint_sit_normal_transition1_action1);
#pragma endregion

	animpoint_sit_normal_smartcover.setNeedWeapon(false);
	animpoint_sit_normal_smartcover.register_loophole(animpoint_sit_normal_loophole);
	animpoint_sit_normal_smartcover.register_transition(animpoint_sit_normal_transition);
	animpoint_sit_normal_smartcover.register_transition(animpoint_sit_normal_transition1);
	this->m_registered_smartcovers["animpoint_sit_normal"] = animpoint_sit_normal_smartcover;
#pragma endregion

#pragma region Cordis Animpoint Sit Low
	SmartCoverData animpoint_sit_low_smartcover;
	SmartCoverLoopholeData animpoint_sit_low_loophole;

#pragma region Cordis Loophole
	animpoint_sit_low_loophole.m_id = "animpoint_sit_low";
	animpoint_sit_low_loophole.m_is_usable = true;
	animpoint_sit_low_loophole.m_is_exitable = false;
	animpoint_sit_low_loophole.m_is_enterable = false;
	animpoint_sit_low_loophole.m_fieldofview = 45.0f;
	animpoint_sit_low_loophole.m_fieldofview_danger = 45.0f;
	animpoint_sit_low_loophole.m_range = 70.0f;
	animpoint_sit_low_loophole.m_fieldofview_direction = Fvector().set(0.0f, 0.0f, -1.0f);
	animpoint_sit_low_loophole.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_sit_low_loophole.m_danger_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.0f);
	animpoint_sit_low_loophole.m_enter_direction = Fvector().set(0.0f, 0.0f, -1.0f);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_low_loophole_action1;
	animpoint_sit_low_loophole_action1.m_id = "idle";
	animpoint_sit_low_loophole_action1.register_animation("idle", "animpoint_sit_low_idle_1");

	animpoint_sit_low_loophole.register_action(animpoint_sit_low_loophole_action1);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_low_loophole_action2;
	animpoint_sit_low_loophole_action2.m_id = "lookout";
	animpoint_sit_low_loophole_action2.register_animation("idle", "animpoint_sit_low_in_1");

	animpoint_sit_low_loophole.register_action(animpoint_sit_low_loophole_action2);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_low_loophole_action3;
	animpoint_sit_low_loophole_action3.m_id = "fire";
	animpoint_sit_low_loophole_action3.register_animation("idle", "animpoint_sit_low_in_1");
	animpoint_sit_low_loophole_action3.register_animation("shoot", "animpoint_sit_low_in_1");

	animpoint_sit_low_loophole.register_action(animpoint_sit_low_loophole_action3);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_low_loophole_action4;
	animpoint_sit_low_loophole_action4.m_id = "fire_no_lookout";
	animpoint_sit_low_loophole_action4.register_animation("idle", "animpoint_sit_low_in_1");
	animpoint_sit_low_loophole_action4.register_animation("shoot", "animpoint_sit_low_in_1");

	animpoint_sit_low_loophole.register_action(animpoint_sit_low_loophole_action4);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_sit_low_loophole_action5;
	animpoint_sit_low_loophole_action5.m_id = "reload";
	animpoint_sit_low_loophole_action5.register_animation("idle", "animpoint_sit_low_in_1");

	animpoint_sit_low_loophole.register_action(animpoint_sit_low_loophole_action5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_low_loophole_transition1;
	animpoint_sit_low_loophole_transition1.m_action_from = "idle";
	animpoint_sit_low_loophole_transition1.m_action_to = "lookout";
	animpoint_sit_low_loophole_transition1.m_animations.push_back("animpoint_sit_low_in_1");
	animpoint_sit_low_loophole_transition1.m_weight = 1.2f;

	animpoint_sit_low_loophole.register_transition(animpoint_sit_low_loophole_transition1);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_low_loophole_transition2;
	animpoint_sit_low_loophole_transition2.m_action_from = "lookout";
	animpoint_sit_low_loophole_transition2.m_action_to = "idle";
	animpoint_sit_low_loophole_transition2.m_animations.push_back("animpoint_sit_low_in_1");
	animpoint_sit_low_loophole_transition2.m_weight = 1.2f;

	animpoint_sit_low_loophole.register_transition(animpoint_sit_low_loophole_transition2);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_low_loophole_transition3;
	animpoint_sit_low_loophole_transition3.m_action_from = "idle";
	animpoint_sit_low_loophole_transition3.m_action_to = "fire";
	animpoint_sit_low_loophole_transition3.m_animations.push_back("animpoint_sit_low_in_1");
	animpoint_sit_low_loophole_transition3.m_weight = 1.2f;

	animpoint_sit_low_loophole.register_transition(animpoint_sit_low_loophole_transition3);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_low_loophole_transition4;
	animpoint_sit_low_loophole_transition4.m_action_from = "fire";
	animpoint_sit_low_loophole_transition4.m_action_to = "idle";
	animpoint_sit_low_loophole_transition4.m_animations.push_back("animpoint_sit_low_in_1");
	animpoint_sit_low_loophole_transition4.m_weight = 1.2f;

	animpoint_sit_low_loophole.register_transition(animpoint_sit_low_loophole_transition4);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_low_loophole_transition5;
	animpoint_sit_low_loophole_transition5.m_action_from = "idle";
	animpoint_sit_low_loophole_transition5.m_action_to = "fire_no_lookout";
	animpoint_sit_low_loophole_transition5.m_animations.push_back("animpoint_sit_low_in_1");
	animpoint_sit_low_loophole_transition5.m_weight = 1.2f;

	animpoint_sit_low_loophole.register_transition(animpoint_sit_low_loophole_transition5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_sit_low_loophole_transition6;
	animpoint_sit_low_loophole_transition6.m_action_from = "fire_no_lookout";
	animpoint_sit_low_loophole_transition6.m_action_to = "idle";
	animpoint_sit_low_loophole_transition6.m_animations.push_back("animpoint_sit_low_in_1");
	animpoint_sit_low_loophole_transition6.m_weight = 1.2f;

	animpoint_sit_low_loophole.register_transition(animpoint_sit_low_loophole_transition6);
#pragma endregion

#pragma region Cordis Transition
	SmartCoverData::SmartCoverTransitionsData animpoint_sit_low_transition;
	animpoint_sit_low_transition.m_vertex0 = "";
	animpoint_sit_low_transition.m_vertex1 = "animpoint_sit_low";
	animpoint_sit_low_transition.m_weight = 1.0f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_sit_low_transition_action1;
	animpoint_sit_low_transition_action1.m_action.m_animation = "animpoint_sit_low_in_1";
	animpoint_sit_low_transition_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_sit_low_transition_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	animpoint_sit_low_transition_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_sit_low_transition_action1.m_precondition_functor = "true";
	animpoint_sit_low_transition_action1.m_preconditions_params = "";

	animpoint_sit_low_transition.m_actions.push_back(animpoint_sit_low_transition_action1);

	SmartCoverData::SmartCoverTransitionsData animpoint_sit_low_transition1;
	animpoint_sit_low_transition1.m_vertex0 = "animpoint_sit_low";
	animpoint_sit_low_transition1.m_vertex1 = "";
	animpoint_sit_low_transition1.m_weight = 1.1f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_sit_low_transition1_action1;
	animpoint_sit_low_transition1_action1.m_action.m_animation = "animpoint_sit_low_out_1";
	animpoint_sit_low_transition1_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_sit_low_transition1_action1.m_action.m_body_state = MonsterSpace::eBodyStateStand;
	animpoint_sit_low_transition1_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_sit_low_transition1_action1.m_precondition_functor = "true";
	animpoint_sit_low_transition1_action1.m_preconditions_params = "";

	animpoint_sit_low_transition1.m_actions.push_back(animpoint_sit_low_transition1_action1);
#pragma endregion

	animpoint_sit_low_smartcover.setNeedWeapon(false);
	animpoint_sit_low_smartcover.register_loophole(animpoint_sit_low_loophole);
	animpoint_sit_low_smartcover.register_transition(animpoint_sit_low_transition);
	animpoint_sit_low_smartcover.register_transition(animpoint_sit_low_transition1);
	this->m_registered_smartcovers["animpoint_sit_low"] = animpoint_sit_low_smartcover;
#pragma endregion

#pragma region Cordis Animpoint Pri A15
	SmartCoverData animpoint_pri_a15_smartcover;
	SmartCoverLoopholeData animpoint_pri_a15_loophole;

#pragma region Cordis Loophole
	animpoint_pri_a15_loophole.m_id = "animpoint_pri_a15";
	animpoint_pri_a15_loophole.m_is_usable = true;
	animpoint_pri_a15_loophole.m_is_exitable = false;
	animpoint_pri_a15_loophole.m_is_enterable = false;
	animpoint_pri_a15_loophole.m_fieldofview = 45.0f;
	animpoint_pri_a15_loophole.m_fieldofview_danger = 45.0f;
	animpoint_pri_a15_loophole.m_range = 70.0f;
	animpoint_pri_a15_loophole.m_fieldofview_direction = Fvector().set(0.0f, 0.0f, -1.0f);
	animpoint_pri_a15_loophole.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_pri_a15_loophole.m_danger_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.0f);
	animpoint_pri_a15_loophole.m_enter_direction = Fvector().set(0.0f, 0.0f, -1.0f);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_pri_a15_loophole_action1;
	animpoint_pri_a15_loophole_action1.m_id = "idle";
	animpoint_pri_a15_loophole_action1.register_animation("idle", "idle_0_idle_0");

	animpoint_pri_a15_loophole.register_action(animpoint_pri_a15_loophole_action1);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_pri_a15_loophole_action2;
	animpoint_pri_a15_loophole_action2.m_id = "lookout";
	animpoint_pri_a15_loophole_action2.register_animation("idle", "idle_0_idle_0");

	animpoint_pri_a15_loophole.register_action(animpoint_pri_a15_loophole_action2);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_pri_a15_loophole_action3;
	animpoint_pri_a15_loophole_action3.m_id = "fire";
	animpoint_pri_a15_loophole_action3.register_animation("idle", "idle_0_idle_0");
	animpoint_pri_a15_loophole_action3.register_animation("shoot", "idle_0_idle_0");

	animpoint_pri_a15_loophole.register_action(animpoint_pri_a15_loophole_action3);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_pri_a15_loophole_action4;
	animpoint_pri_a15_loophole_action4.m_id = "fire_no_lookout";
	animpoint_pri_a15_loophole_action4.register_animation("idle", "idle_0_idle_0");
	animpoint_pri_a15_loophole_action4.register_animation("shoot", "idle_0_idle_0");

	animpoint_pri_a15_loophole.register_action(animpoint_pri_a15_loophole_action4);

	SmartCoverLoopholeData::SmartCoverActionsData animpoint_pri_a15_loophole_action5;
	animpoint_pri_a15_loophole_action5.m_id = "reload";
	animpoint_pri_a15_loophole_action5.register_animation("idle", "idle_0_idle_0");

	animpoint_pri_a15_loophole.register_action(animpoint_pri_a15_loophole_action5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_pri_a15_loophole_transition1;
	animpoint_pri_a15_loophole_transition1.m_action_from = "idle";
	animpoint_pri_a15_loophole_transition1.m_action_to = "lookout";
	animpoint_pri_a15_loophole_transition1.m_animations.push_back("idle_0_idle_0");
	animpoint_pri_a15_loophole_transition1.m_weight = 1.2f;

	animpoint_pri_a15_loophole.register_transition(animpoint_pri_a15_loophole_transition1);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_pri_a15_loophole_transition2;
	animpoint_pri_a15_loophole_transition2.m_action_from = "lookout";
	animpoint_pri_a15_loophole_transition2.m_action_to = "idle";
	animpoint_pri_a15_loophole_transition2.m_animations.push_back("idle_0_idle_0");
	animpoint_pri_a15_loophole_transition2.m_weight = 1.2f;

	animpoint_pri_a15_loophole.register_transition(animpoint_pri_a15_loophole_transition2);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_pri_a15_loophole_transition3;
	animpoint_pri_a15_loophole_transition3.m_action_from = "idle";
	animpoint_pri_a15_loophole_transition3.m_action_to = "fire";
	animpoint_pri_a15_loophole_transition3.m_animations.push_back("idle_0_idle_0");
	animpoint_pri_a15_loophole_transition3.m_weight = 1.2f;

	animpoint_pri_a15_loophole.register_transition(animpoint_pri_a15_loophole_transition3);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_pri_a15_loophole_transition4;
	animpoint_pri_a15_loophole_transition4.m_action_from = "fire";
	animpoint_pri_a15_loophole_transition4.m_action_to = "idle";
	animpoint_pri_a15_loophole_transition4.m_animations.push_back("idle_0_idle_0");
	animpoint_pri_a15_loophole_transition4.m_weight = 1.2f;

	animpoint_pri_a15_loophole.register_transition(animpoint_pri_a15_loophole_transition4);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_pri_a15_loophole_transition5;
	animpoint_pri_a15_loophole_transition5.m_action_from = "idle";
	animpoint_pri_a15_loophole_transition5.m_action_to = "fire_no_lookout";
	animpoint_pri_a15_loophole_transition5.m_animations.push_back("idle_0_idle_0");
	animpoint_pri_a15_loophole_transition5.m_weight = 1.2f;

	animpoint_pri_a15_loophole.register_transition(animpoint_pri_a15_loophole_transition5);

	SmartCoverLoopholeData::SmartCoverTransitionsData animpoint_pri_a15_loophole_transition6;
	animpoint_pri_a15_loophole_transition6.m_action_from = "fire_no_lookout";
	animpoint_pri_a15_loophole_transition6.m_action_to = "idle";
	animpoint_pri_a15_loophole_transition6.m_animations.push_back("idle_0_idle_0");
	animpoint_pri_a15_loophole_transition6.m_weight = 1.2f;

	animpoint_pri_a15_loophole.register_transition(animpoint_pri_a15_loophole_transition6);
#pragma endregion

#pragma region Cordis Transition
	SmartCoverData::SmartCoverTransitionsData animpoint_pri_a15_transition;
	animpoint_pri_a15_transition.m_vertex0 = "";
	animpoint_pri_a15_transition.m_vertex1 = "animpoint_pri_a15";
	animpoint_pri_a15_transition.m_weight = 1.0f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_pri_a15_transition_action1;
	animpoint_pri_a15_transition_action1.m_action.m_animation = "idle_0_idle_0";
	animpoint_pri_a15_transition_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_pri_a15_transition_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	animpoint_pri_a15_transition_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_pri_a15_transition_action1.m_precondition_functor = "true";
	animpoint_pri_a15_transition_action1.m_preconditions_params = "";

	animpoint_pri_a15_transition.m_actions.push_back(animpoint_pri_a15_transition_action1);

	SmartCoverData::SmartCoverTransitionsData animpoint_pri_a15_transition1;
	animpoint_pri_a15_transition1.m_vertex0 = "animpoint_pri_a15";
	animpoint_pri_a15_transition1.m_vertex1 = "";
	animpoint_pri_a15_transition1.m_weight = 1.1f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData animpoint_pri_a15_transition1_action1;
	animpoint_pri_a15_transition1_action1.m_action.m_animation = "idle_0_idle_0";
	animpoint_pri_a15_transition1_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	animpoint_pri_a15_transition1_action1.m_action.m_body_state = MonsterSpace::eBodyStateStand;
	animpoint_pri_a15_transition1_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	animpoint_pri_a15_transition1_action1.m_precondition_functor = "true";
	animpoint_pri_a15_transition1_action1.m_preconditions_params = "";

	animpoint_pri_a15_transition1.m_actions.push_back(animpoint_pri_a15_transition1_action1);
#pragma endregion

	animpoint_pri_a15_smartcover.setNeedWeapon(false);
	animpoint_pri_a15_smartcover.register_loophole(animpoint_pri_a15_loophole);
	animpoint_pri_a15_smartcover.register_transition(animpoint_pri_a15_transition);
	animpoint_pri_a15_smartcover.register_transition(animpoint_pri_a15_transition1);
	this->m_registered_smartcovers["animpoint_pri_a15"] = animpoint_pri_a15_smartcover;
#pragma endregion

#pragma region Cordis Anim Pri a15
	SmartCoverData anim_pri_a15_smartcover;
	SmartCoverLoopholeData anim_pri_a15_loophole;

#pragma region Cordis Loophole
	anim_pri_a15_loophole.m_id = "anim_pri_a15";
	anim_pri_a15_loophole.m_is_usable = true;
	anim_pri_a15_loophole.m_is_exitable = false;
	anim_pri_a15_loophole.m_is_enterable = false;
	anim_pri_a15_loophole.m_fieldofview = 45.0f;
	anim_pri_a15_loophole.m_fieldofview_danger = 45.0f;
	anim_pri_a15_loophole.m_range = 70.0f;
	anim_pri_a15_loophole.m_fieldofview_direction = Fvector().set(0.0f, 0.0f, -1.0f);
	anim_pri_a15_loophole.m_fieldofview_position = Fvector().set(0.0f, 0.0f, 0.0f);
	anim_pri_a15_loophole.m_danger_fieldofview_direction = Fvector().set(-1.0f, 0.0f, 0.0f);
	anim_pri_a15_loophole.m_enter_direction = Fvector().set(0.0f, 0.0f, -1.0f);

	SmartCoverLoopholeData::SmartCoverActionsData anim_pri_a15_loophole_action1;
	anim_pri_a15_loophole_action1.m_id = "idle";
	anim_pri_a15_loophole_action1.register_animation("idle", "pri_a22_colonel_lean_on_tabl_in");

	anim_pri_a15_loophole.register_action(anim_pri_a15_loophole_action1);

	SmartCoverLoopholeData::SmartCoverActionsData anim_pri_a15_loophole_action2;
	anim_pri_a15_loophole_action2.m_id = "lookout";
	anim_pri_a15_loophole_action2.register_animation("idle", "pri_a22_colonel_lean_on_tabl_in");

	anim_pri_a15_loophole.register_action(anim_pri_a15_loophole_action2);

	SmartCoverLoopholeData::SmartCoverActionsData anim_pri_a15_loophole_action3;
	anim_pri_a15_loophole_action3.m_id = "fire";
	anim_pri_a15_loophole_action3.register_animation("idle", "pri_a22_colonel_lean_on_tabl_in");
	anim_pri_a15_loophole_action3.register_animation("shoot", "pri_a22_colonel_lean_on_tabl_in");

	anim_pri_a15_loophole.register_action(anim_pri_a15_loophole_action3);

	SmartCoverLoopholeData::SmartCoverActionsData anim_pri_a15_loophole_action4;
	anim_pri_a15_loophole_action4.m_id = "fire_no_lookout";
	anim_pri_a15_loophole_action4.register_animation("idle", "pri_a22_colonel_lean_on_tabl_in");
	anim_pri_a15_loophole_action4.register_animation("shoot", "pri_a22_colonel_lean_on_tabl_in");

	anim_pri_a15_loophole.register_action(anim_pri_a15_loophole_action4);

	SmartCoverLoopholeData::SmartCoverActionsData anim_pri_a15_loophole_action5;
	anim_pri_a15_loophole_action5.m_id = "reload";
	anim_pri_a15_loophole_action5.register_animation("idle", "pri_a22_colonel_lean_on_tabl_in");

	anim_pri_a15_loophole.register_action(anim_pri_a15_loophole_action5);

	SmartCoverLoopholeData::SmartCoverTransitionsData anim_pri_a15_loophole_transition1;
	anim_pri_a15_loophole_transition1.m_action_from = "idle";
	anim_pri_a15_loophole_transition1.m_action_to = "lookout";
	anim_pri_a15_loophole_transition1.m_animations.push_back("pri_a22_colonel_lean_on_tabl_in");
	anim_pri_a15_loophole_transition1.m_weight = 1.2f;

	anim_pri_a15_loophole.register_transition(anim_pri_a15_loophole_transition1);

	SmartCoverLoopholeData::SmartCoverTransitionsData anim_pri_a15_loophole_transition2;
	anim_pri_a15_loophole_transition2.m_action_from = "lookout";
	anim_pri_a15_loophole_transition2.m_action_to = "idle";
	anim_pri_a15_loophole_transition2.m_animations.push_back("pri_a22_colonel_lean_on_tabl_in");
	anim_pri_a15_loophole_transition2.m_weight = 1.2f;

	anim_pri_a15_loophole.register_transition(anim_pri_a15_loophole_transition2);

	SmartCoverLoopholeData::SmartCoverTransitionsData anim_pri_a15_loophole_transition3;
	anim_pri_a15_loophole_transition3.m_action_from = "idle";
	anim_pri_a15_loophole_transition3.m_action_to = "fire";
	anim_pri_a15_loophole_transition3.m_animations.push_back("pri_a22_colonel_lean_on_tabl_in");
	anim_pri_a15_loophole_transition3.m_weight = 1.2f;

	anim_pri_a15_loophole.register_transition(anim_pri_a15_loophole_transition3);

	SmartCoverLoopholeData::SmartCoverTransitionsData anim_pri_a15_loophole_transition4;
	anim_pri_a15_loophole_transition4.m_action_from = "fire";
	anim_pri_a15_loophole_transition4.m_action_to = "idle";
	anim_pri_a15_loophole_transition4.m_animations.push_back("pri_a22_colonel_lean_on_tabl_in");
	anim_pri_a15_loophole_transition4.m_weight = 1.2f;

	anim_pri_a15_loophole.register_transition(anim_pri_a15_loophole_transition4);

	SmartCoverLoopholeData::SmartCoverTransitionsData anim_pri_a15_loophole_transition5;
	anim_pri_a15_loophole_transition5.m_action_from = "idle";
	anim_pri_a15_loophole_transition5.m_action_to = "fire_no_lookout";
	anim_pri_a15_loophole_transition5.m_animations.push_back("pri_a22_colonel_lean_on_tabl_in");
	anim_pri_a15_loophole_transition5.m_weight = 1.2f;

	anim_pri_a15_loophole.register_transition(anim_pri_a15_loophole_transition5);

	SmartCoverLoopholeData::SmartCoverTransitionsData anim_pri_a15_loophole_transition6;
	anim_pri_a15_loophole_transition6.m_action_from = "fire_no_lookout";
	anim_pri_a15_loophole_transition6.m_action_to = "idle";
	anim_pri_a15_loophole_transition6.m_animations.push_back("pri_a22_colonel_lean_on_tabl_in");
	anim_pri_a15_loophole_transition6.m_weight = 1.2f;

	anim_pri_a15_loophole.register_transition(anim_pri_a15_loophole_transition6);
#pragma endregion

#pragma region Cordis Transition
	SmartCoverData::SmartCoverTransitionsData anim_pri_a15_transition;
	anim_pri_a15_transition.m_vertex0 = "";
	anim_pri_a15_transition.m_vertex1 = "anim_pri_a15";
	anim_pri_a15_transition.m_weight = 1.0f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData anim_pri_a15_transition_action1;
	anim_pri_a15_transition_action1.m_action.m_animation = "pri_a22_colonel_lean_on_tabl_in";
	anim_pri_a15_transition_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	anim_pri_a15_transition_action1.m_action.m_body_state = MonsterSpace::eBodyStateCrouch;
	anim_pri_a15_transition_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	anim_pri_a15_transition_action1.m_precondition_functor = "true";
	anim_pri_a15_transition_action1.m_preconditions_params = "";

	anim_pri_a15_transition.m_actions.push_back(anim_pri_a15_transition_action1);

	SmartCoverData::SmartCoverTransitionsData anim_pri_a15_transition1;
	anim_pri_a15_transition1.m_vertex0 = "anim_pri_a15";
	anim_pri_a15_transition1.m_vertex1 = "";
	anim_pri_a15_transition1.m_weight = 1.1f;

	SmartCoverData::SmartCoverTransitionsData::SmartCoverActionsData anim_pri_a15_transition1_action1;
	anim_pri_a15_transition1_action1.m_action.m_animation = "pri_a22_colonel_lean_on_tabl_in";
	anim_pri_a15_transition1_action1.m_action.m_position = Fvector().set(0.0f, 0.0f, 0.0f);
	anim_pri_a15_transition1_action1.m_action.m_body_state = MonsterSpace::eBodyStateStand;
	anim_pri_a15_transition1_action1.m_action.m_movement_type = MonsterSpace::eMovementTypeRun;
	anim_pri_a15_transition1_action1.m_precondition_functor = "true";
	anim_pri_a15_transition1_action1.m_preconditions_params = "";

	anim_pri_a15_transition1.m_actions.push_back(anim_pri_a15_transition1_action1);
#pragma endregion

	anim_pri_a15_smartcover.setNeedWeapon(false);
	anim_pri_a15_smartcover.register_loophole(anim_pri_a15_loophole);
	anim_pri_a15_smartcover.register_transition(anim_pri_a15_transition);
	anim_pri_a15_smartcover.register_transition(anim_pri_a15_transition1);
	this->m_registered_smartcovers["anim_pri_a15"] = anim_pri_a15_smartcover;
#pragma endregion

#pragma endregion
}
