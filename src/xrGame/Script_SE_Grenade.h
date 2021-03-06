#pragma once

namespace Cordis
{
namespace Scripts
{
class Script_SE_Grenade : public CSE_ALifeItemGrenade
{
    using inherited = CSE_ALifeItemGrenade;

public:
    Script_SE_Grenade(LPCSTR section_name);
    virtual ~Script_SE_Grenade(void);

    virtual void on_register(void);
    virtual void on_unregister(void);
    virtual bool can_switch_online(void) const;

private:
    bool m_is_secret_item;
};
} // namespace Scripts
} // namespace Cordis
