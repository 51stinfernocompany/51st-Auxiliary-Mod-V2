#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = CSTRING(component);
        requiredVersion = REQUIRED_VERSION;
		url = URL;
        requiredAddons[]=
        {
            "cba_main"

        };
        units[]={};
        weapons[]=
        {
            "ic51_log_bactainjector"
        };
        VERSION_CONFIG;
    };
};
