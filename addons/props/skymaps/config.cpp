#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ls_props_staticships"};
        units[] =
        {
            "ic51_skymap_coursaunt"
        };
        magazines[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    #include "skymap.hpp"
};
