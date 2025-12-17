#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = CSTRING(component);
        requiredVersion = REQUIRED_VERSION;
		url = URL;
        requiredAddons[]={};
        units[]={};
        weapons[]={};
        VERSION_CONFIG;
    };
};
