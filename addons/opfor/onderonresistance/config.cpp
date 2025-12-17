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
            "ic51_opfor_onderon_base",
            "ic51_opfor_onderon_rifleman",
            "ic51_opfor_onderon_marksmen",
            "ic51_opfor_onderon_autorifle",
            "ic51_opfor_onderon_heavy",
            "ic51_opfor_onderon_commando"
        };
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class CfgEditorSubcategories
{
    class ic51_opfor_onderons
    {
        displayName="Onderon Resistance Fighters";
    };
};

class CfgVehicles {
    #include "units.hpp"
};

class CfgGroups
{
    class East
    {
        class ic51_opfor_onderon
        {
            name = "[51st OPFOR] Onderon";
            displayName = "51st OPFOR Onderon";
            #include "group.hpp"
        };
    };
};
