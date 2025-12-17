#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_explosives",
            "ls_weapons_explosives"
        };
        //ammo[] = {"ic51_explosive_breachCharge_ammo"};
        //magazines[] = {"ic51_explosive_breachCharge_mag"};
        units[] = {"ic51_explosive_breachCharge_place"};
    };
};

class CfgAmmo {
    #include "ammo.hpp"
};

class CfgMagazines {
    #include "magazines.hpp" 
};

class CfgVehicles {
    #include "CfgVehicles.hpp"
};
