#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder"
        };
        units[] =
        {
            "ic51_rations_wookiemeat",
            "ic51_rations_dietwater"
        };
        magazines[] = {};
        weapons[] = {};
    };
};

class CfgWeapons
{
    #include "CfgWeapons.hpp"
};
