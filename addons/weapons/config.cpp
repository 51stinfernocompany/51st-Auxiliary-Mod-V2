#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = CSTRING(component);
        requiredVersion = REQUIRED_VERSION;
		url = URL;
        requiredAddons[]=
        {
            "A3_Data_F_Decade_Loadorder", "cba_main"
        };
        units[]={};
        weapons[]={};
        VERSION_CONFIG;
    };
};
