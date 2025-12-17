#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        units[] =
        {
            "ic51_dietwater"
        };
        magazines[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    #include "small_items.hpp"
};
