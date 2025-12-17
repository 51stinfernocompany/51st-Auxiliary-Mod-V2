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
        //skipWhenMissingDependencies = 1; // This will skip requiredaddons if one of them are missing. Adding this as we pull the 717th Disruptor.
        requiredAddons[] =
        {
            "3AS_Weapons",
            "3AS_Weapons_PLX1",
            "IDA_Republic"
        };
        units[]={};
        ammo[] =
        {
            "ic51_hh12_ion_ammo"
        };
        magazines[] =
        {
            "ic51_plx_aa",
            "ic51_plx_he",
            "ic51_plx_at",
            "ic51_rps6_rocket",
            "ic51_rps6_rocket_disposable",
            "ic51_hh12_ion",
            "ic51_hh12_at"
        };
        weapons[] =
        {
            "ic51_plx_launcher",
            "ic51_rps6",
            "ic51_rps6_disposable",
            "ic51_rps6_disposable_loaded",
            "ic51_rps6_disposable_used",
            "ic51_hh12",
        };
    };
};

#define LAUNCHER_MASS 66
#define LAUNCHER_MAGAZINE_MASS 60

class CBA_DisposableLaunchers {
    ic51_rps6_disposable[] = {"ic51_rps6_disposable_loaded","ic51_rps6_disposable_used"};
};

class CfgAmmo {
    #include "launchers_ammo.hpp"
};
class CfgMagazines {
    #include "launchers_magazines.hpp"
};
class CfgWeapons {
    #include "launchers_weapons.hpp"
};
