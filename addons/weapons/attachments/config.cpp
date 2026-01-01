#include "..\BaseControls.hpp"
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
            "ShadowLegion_Aux_Weapons",
        };
        units[]={};
        weapons[] =
        {
            ""
        };
    };
};
class CfgWeapons {
    #include "muzzles.hpp"
    #include "underbarrel.hpp"
    #include "optics.hpp"
};
