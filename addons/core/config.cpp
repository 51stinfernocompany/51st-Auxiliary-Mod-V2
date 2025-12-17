#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		author = AUTHOR;
		name = CSTRING(component);
		requiredVersion = REQUIRED_VERSION;
		url = URL;
		authors[]= {"Cassius", "Revan", "Kakapo", "Frost", "Hacket", "Flash", "Magika", "Balance", "Dart", "Atticus", "Freelancer", "Cabur"};
		requiredAddons[] = { "cba_main" };
		units[] = {};
		weapons[] = {};
		VERSION_CONFIG;
	};
};



#include "CfgEventHandlers.hpp"
#include "CfgSettings.hpp"

#include "CfgEditorCategories.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
