#include "..\BaseControls.hpp"
#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON
    {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "IDA_Ammo",
            "A3_Weapons_F",
            "3AS_Equipment"
        };
        units[]={};
        ammo[] =
        {
            "ic51_detonator_ammo",
            "ic51_sonic_ammo",
            "ic51_SmokeShellGreen",
            "ic51_SmokeShellBlue",
            "ic51_SmokeShellPurple",
            "ic51_SmokeShellYellow",
            "ic51_SmokeShellRed",
            "ic51_SmokeShellOrange",
            "ic51_SmokeShellWhite",
            "ic51_weaponshield_ammo"
        };
        magazines[] =
        {
            "ic51_ThermalDetonator",
            "ic51_SonicDetonator",
            "ic51_SmokeBlue",
            "ic51_SmokeGreen",
            "ic51_SmokeOrange",
            "ic51_SmokePurple",
            "ic51_SmokeRed",
            "ic51_SmokeWhite",
            "ic51_SmokeYellow",
            "ic51_weaponshield"
        };
        weapons[] = {};
    };
};
class CfgAmmo {
    #include "throwables_ammo.hpp"
};

class CfgMagazines {
    #include "throwables_magazines.hpp"
};

class CfgWeapons {
    #include "throwables_weapons.hpp"
};

