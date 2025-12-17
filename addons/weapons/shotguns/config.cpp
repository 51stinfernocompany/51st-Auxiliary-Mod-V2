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
            "3AS_Weapons_Republic_DP23",
            "3AS_Weapons_Scattergun"
        };
        units[]={};
        ammo[] =
        {
            "ic51_blasterbolt_dc23",
            "ic51_blasterbolt_scatterbolt_slug",
            "ic51_blasterbolt_scatterbolt_pellet"
        };
        magazines[] =
        {
            "ic51_dc23_mag",
            "ic51_scattergun_slug",
            "ic51_scattergun_pellet"
        };
        weapons[] =
        {
            "ic51_dc23",
            "ic51_dp23",
            "ic51_dp23_gl",
            "ic51_scattergun"
        };
    };
};
class CfgAmmo {
    #include "shotguns_ammo.hpp"
};
class CfgMagazines {
    #include "shotguns_magazines.hpp"
};
class CfgWeapons {
    #include "shotguns_weapons.hpp"
};
