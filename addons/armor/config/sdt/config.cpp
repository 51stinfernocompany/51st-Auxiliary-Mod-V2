// INHERITS JLTS EXTENDED ARSENAL

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
            "SEA_GalacticMarine"
        };
        units[]=
        {
            /*
            "ic51_unit_hazmat",
            "ic51_unit_hazmatofficer"
            */
        };
        weapons[] =
        {
            /*
            "ic51_helmet_hazmat",
            "ic51_helmet_hazmat_officer",
            "ic51_uniform_hazmat",
            "ic51_uniform_hazmat_officer",
            "ic51_vest_hazard",
            "ic51_vest_hazard_officer"
            */
        };
    };
};
/*

class CfgWeapons
{
    #include "CfgWeapons.hpp"
};
class CfgVehicles
{
    #include "CfgVehicles.hpp"
};
*/
