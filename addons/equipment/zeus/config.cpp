#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder",
            "A3_Modules_F_Curator_SmokeShells",
            "A3_Modules_F_Curator_Ordnance",
            "IDA_Ammo"
        };
        units[] =
        {
            "ic51_modules_smokewhite",
            "ic51_modules_cosmetic_arty"
        };
        magazines[] = {};
        weapons[] = {};
        ammo[] = {"ic51_155mm_AMOS_Cinematic"};
    };
};

class CfgVehicles
{
    #include "CfgVehicles.hpp"
};
class CfgAmmo
{
    #include "CfgAmmo.hpp"
};
