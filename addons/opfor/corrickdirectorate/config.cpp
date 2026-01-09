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
            "ic51_opfor_corrick_base",
            "ic51_opfor_corrick_rifleman",
            "ic51_opfor_corrick_marksmen",
            "ic51_opfor_corrick_leader"
        };
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class CfgFactionClasses
{
    class ic51_opfor_corrick
    {
        displayName="[51st OPFOR] Corrick Directorate";
        icon = "";
        priority = 1;
    };
};
class CfgEditorSubcategories
{
    class ic51_opfor_corrick_troops
    {
        displayName="Corrick Fighters";
    };
};

class CfgVehicles {
    #include "units.hpp"
};

class CfgGroups
{
    class East
    {
        class ic51_opfor_corrick
        {
            name = "[51st OPFOR] Corrick Directorate";
            displayName = "51st OPFOR Corrick Directorate";
            #include "group.hpp"
        };
    };
};
