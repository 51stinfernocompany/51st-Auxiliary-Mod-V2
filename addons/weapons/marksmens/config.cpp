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
            "IDA_Ammo",
            "IDA_Republic",
            "IDA_Imperial",
            "3AS_Weapons",
            "3AS_Weapons_Republic_Valken38X",
            "ShadowLegion_Aux_Weapons",
        };
        units[]={};
        ammo[] =
        {
            "ic51_dc15x_ammo",
            "ic51_dc15x_ammo_red",
            "ic51_blasterbolt_Amp",
            "ic51_valken38_ammo"
        };
        magazines[] =
        {
            "ic51_dc15x_magazine",
            "ic51_dc15x_magazine_red",
            "ic51_773FP_magazine",
            "ic51_valken38x_mag"
        };
        weapons[] =
        {
            "ic51_DC15X",
            "ic51_773Firepuncher",
            "ic51_Valken38X",
            "ic51_optic_vk38x"
        };
    };
};
class CfgAmmo {
    #include "marksmen_ammo.hpp"
};
class CfgMagazines {
    #include "marksmen_magazines.hpp"
};
class CfgWeapons {
    #include "marksmen_weapons.hpp"
};
