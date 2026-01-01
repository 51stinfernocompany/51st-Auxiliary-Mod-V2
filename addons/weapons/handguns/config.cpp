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
            "IDA_Republic",
            "3AS_Weapons_Republic_DC17S"
        };
        units[]={};
        magazines[] =
        {
            "ic51_dc15sa_mag",
            "ic51_dc17_mag",
            "ic51_dc21_mag"
        };
        weapons[] =
        {
            "ic51_dc15sa",
            "ic51_dc17",
            "ic51_vibroblade",
            "ic51_vibroblade_rotated",
            "ic51_dc21",
        };
    };
};
class CfgAmmo {
    #include "handguns_ammo.hpp"
};
class CfgMagazines {
    #include "handguns_magazines.hpp"
};
class CfgWeapons {
    #include "handguns_weapons.hpp"
};
