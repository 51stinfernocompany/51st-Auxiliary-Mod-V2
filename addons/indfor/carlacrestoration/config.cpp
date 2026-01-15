#include "script_component.hpp"
 
class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {

        };
        units[] =
        {
            "ic51_indfor_carlac_base",
            "ic51_indfor_carlac_rifleman",
            "ic51_indfor_carlac_marksmen",
            "ic51_indfor_carlac_leader"
        };
        weapons[] = {
            "ic51_a280",
            "ic51_iqa11",
            "ic51_cinnagaran",
        };
        magazines[] = {};
        ammo[] = {};
    };
};

class CfgEditorSubcategories
{
    class ic51_indfor_carlacs
    {
        displayName="Carlac Fighters";
        side = 2;
    };
};

class CfgVehicles {
    #include "units.hpp"
};

class CfgGroups
{
    class Indep
    {
        class ic51_indfor_carlac
        {
            name = "[51st INDFOR] Carlac Restoration";
            displayName = "51st INDFOR Carlac Restoration";
            #include "group.hpp"
        };
    };
};
class CfgWeapons {
    #include "weap_weapons.hpp"
};
