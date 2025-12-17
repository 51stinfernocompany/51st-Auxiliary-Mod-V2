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
            "JLTS_weapons_Core",
            "JLTS_weapons_Z6",
        };
        units[]={};
        ammo[] ={};
        magazines[] =
        {
            // "ic51_dlt15_mag",
            "ic51_dc15le_mag",
            "ic51_z6_mag",
            "ic51_z6_mag_explosive",
            "ic51_dc42h_mag"
        };
        weapons[] =
        {
            //"ic51_dlt15",
            //"ic51_Bipod_dlt15"
            "ic51_dc15le",
            "ic51_z6",
            "ic51_dc42h"
        };
    };
};
class CfgMagazines {
    #include "heavy_magazines.hpp"
};
class CfgWeapons {
    #include "heavy_weapons.hpp"
};
