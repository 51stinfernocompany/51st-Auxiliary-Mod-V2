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
            "cba_main",
            "A3_Modules_F"
        };
        units[] = {"IC51_Module_SpreadGroup"};
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class CfgFunctions
{
    class ic51
    {
        tag = "ic51";
        class groupdispersion
        {
            file = "\x\ic51\addons\logistics\groupdispersion\functions";
            class moduleSpreadGroup {};
            class doSpreadGroup {};
        };
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class ModuleDescription { class Anything; };
    };

    class IC51_Module_SpreadGroup : Module_F
    {
        //SCOPE_PUBLIC;
        scope = 2;
        scopeCurator = 2;
        displayName = "Group Dispersion";
        category = "ic51_modules";
        icon = "iconModule";
        function = "ic51_fnc_moduleSpreadGroup";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 1;

        class ModuleDescription: ModuleDescription
        {
            description = "Place on an AI unit to spread its group randomly within the chosen radius around that unit.";
            position = 1;
        };
    };
};
