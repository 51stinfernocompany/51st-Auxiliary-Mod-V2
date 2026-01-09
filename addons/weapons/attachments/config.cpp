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
            "ic51_bipod",
            "ic51_dc15le_optic",
            "ic51_dc15x_optic",
            "ic51_e30b_optic",
            "ic51_e30c_optic",
            "ic51_valken_optic",
            "ic51_westar_optic",
            "ic51_dc15le_optic",
            "ic51_reflex_optic",
            "ic51_reflex2_optic",
            "ic51_reflex3_optic",
            "ic51_dc15_supp",
            "ic51_dc19_supp",
            "ic51_dc15le_muzzel",
            "ic51_westar_supp",
            "ic51_dc21_barrel",

        };
    };
};
class CfgWeapons {
    #include "muzzles.hpp"
    #include "underbarrel.hpp"
    #include "optics.hpp"
};
