#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_medical",
            "ace_medical_treatment"
        };
        units[] = {};
        magazines[] = {};
        weapons[] = {};
    };
};


class CfgFunctions {
    class ic51 {
        class logistics {
            file = "\x\ic51\addons\logistics\medical\functions";
            class bactainjection {};
            class medisensor {};
            class medisensorLocal {};
        };
    };
};

#include "bacta_injector.hpp"
