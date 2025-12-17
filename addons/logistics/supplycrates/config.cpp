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
            "A3_Data_F_Decade_Loadorder",
            "3AS_Equipment",
            "3AS_Prop_Crates",
            "ic51_weapons"
        };
        units[]=
        {
            // Large Crates
            "ic51_crate_large_base",
            "ic51_crate_large",

            // Small Crates
            "ic51_crate_small_base",
            "ic51_crate_small"
        };
        magazines[] = {};
        weapons[] = {};
    };
};
class CfgVehicles {
    #include "crates_base.hpp"
    #include "crates_large_common.hpp"
    #include "crates_small_common.hpp"
};
