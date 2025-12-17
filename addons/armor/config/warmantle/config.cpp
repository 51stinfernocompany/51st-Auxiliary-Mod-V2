// INHERITS WARMANTLE AND 717TH AUX

#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON
    {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        skipWhenMissingDependencies = 1;
        requiredAddons[] =
        {
            "WM_ImperialCore",
            "WM_ImperialCore_Units"
        };
        units[]=
        {
            "ic51_unit_navalofficer",
            "ic51_unit_navaladmiral"
        };
        weapons[] =
        {
            "ic51_uniform_navalofficer",
            "ic51_uniform_navaladmiral",
            "ic51_helmet_navalofficer",
            "ic51_helmet_navaladmiral"
        };
    };
};

class CfgWeapons
{
    #include "CfgWeapons.hpp"
};
class CfgVehicles
{
    #include "CfgVehicles.hpp"
};
