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
            QCLASS(barricade_base),
            QCLASS(citadel_barricade)
        };
        magazines[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    #include "CfgVehicles.hpp"
};
