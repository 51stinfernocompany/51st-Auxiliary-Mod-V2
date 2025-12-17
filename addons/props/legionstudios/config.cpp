#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_props_staticships"
        };
        units[] =
        {
            // Venators
            "ic51_venator_open",
            "ic51_venator_hollow_open",
            // All Venator Parts
            "ic51_ven_body1_1",
            "ic51_ven_body1_2",
            "ic51_ven_body2_1",
            "ic51_ven_body2_2",
            "ic51_ven_body2_3",
            "ic51_ven_body3",
            "ic51_ven_body4",
            "ic51_ven_body5",
            "ic51_ven_body6",
            "ic51_ven_body7",
            "ic51_ven_body8",
            "ic51_ven_body9",
            "ic51_ven_body10",
            "ic51_ven_engine",
            "ic51_ven_bridge",
            "ic51_ven_door",
            "ic51_ven_door2",
            // Acclamamtor
            "ic51_acclamator_landed_hollow",
            "ic51_acclamator_hollow",
            // Flags
            "ic51_staticflag_51st"
        };
    };
};

class CfgVehicles {
    #include "venator.hpp"
    #include "acclamator.hpp"
    #include "flags.hpp"
};
