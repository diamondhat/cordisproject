#pragma once

namespace Cordis
{
namespace Scripts
{
class Script_SchemeMobRemark : public Script_ISchemeMonster
{
    using inherited_scheme = Script_ISchemeMonster;
public:
    Script_SchemeMobRemark(void) = delete;
    Script_SchemeMobRemark(CScriptGameObject* p_client_object, DataBase::Script_ComponentScheme_MobRemark* storage);
    ~Script_SchemeMobRemark(void);

    virtual void reset_scheme(const bool, CScriptGameObject* const p_client_object);
    virtual void update(const float delta);

    // @ PRIVATE uses, in XR_LOGIC
    static inline void add_to_binder(CScriptGameObject* const p_client_object, CScriptIniFile* const p_ini,
        const xr_string& scheme_name, const xr_string& section_name, DataBase::Script_IComponentScheme* storage)
    {
        if (!p_client_object)
        {
            R_ASSERT2(false, "object is null!");
            return;
        }

        if (!p_ini)
        {
            R_ASSERT2(false, "object is null!");
            return;
        }

        MESSAGEI("added scheme to binder, name=%s scheme=%s section=%s",
            p_client_object->Name(), scheme_name.c_str(), section_name.c_str());

        Script_ISchemeEntity* action = new Script_SchemeMobRemark(p_client_object, static_cast<DataBase::Script_ComponentScheme_MobRemark*>(storage));
        DataBase::Storage::getInstance().setStorageSchemesActions(
            p_client_object->ID(), action->getSchemeName(), action);
    }

    // @ PRIVATE, uses in XR_LOGIC
    static void set_scheme(CScriptGameObject* const p_client_object, CScriptIniFile* const p_ini,
        const xr_string& scheme_name, const xr_string& section_name, const xr_string& gulag_name);

private:
    bool m_is_tip_sent;
    bool m_is_action_end_signalled;
    DataBase::Script_ComponentScheme_MobRemark* m_p_storage;
};




} // namespace Scripts
} // namespace Cordis
