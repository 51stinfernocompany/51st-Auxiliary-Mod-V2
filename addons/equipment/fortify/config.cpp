#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ACE_Fortify"
        };
        units[] = {};
        magazines[] = {};
        weapons[] = {};
        ammo[] = {};
    };
};

#include "preset.hpp"
