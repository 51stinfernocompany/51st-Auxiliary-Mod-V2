#include "script_component.hpp"
class CfgPatches {
    class SUBADDON {
        author = "Tommo";
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main","ace_common"};
        units[] = {};
        magazines[] = {};
        weapons[] = {};
    };
};

class Extended_PostInit_EventHandlers
{
	class tHeal_PostInit
	{
		Init = "call compile preprocessFileLineNumbers '\x\ic51\addons\community_scripts\hidehud\XEH_postInit.sqf'";
	};
};
