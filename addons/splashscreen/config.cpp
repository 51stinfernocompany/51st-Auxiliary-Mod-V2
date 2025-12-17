#include "script_component.hpp"
#include "ui\BaseControls.hpp"
class CfgPatches
{
    class ADDON
    {
        author = AUTHOR;
        name = CSTRING(component);
        requiredVersion = REQUIRED_VERSION;
        url = URL;
        requiredAddons[] =
        {
            "A3_Data_F_Enoch_Loadorder", 
            "A3_Characters_F",
            "A3_Weapons_F",
            "A3_Data_F",
            "A3_Missions_F",
            "A3_Map_Stratis_Scenes_F",
            "ace_optionsmenu",
            "A3_Anims_F",
            "A3_UI_F",
            "3AS_Main_Intro",
            "cba_main"
        };
        units[] = {};
		weapons[] = {};
        VERSION_CONFIG;
    };
};
#include "ui\control_panel.hpp"
#include "ui\cfgMusic.hpp"
#include "ui\RscDisplayMain.hpp"
#include "ui\RscDisplayStart.hpp"
#include "ui\RscDisplayClient.hpp"
#include "ui\RscDisplayClientWait.hpp"
#include "ui\RscDisplayLoadMission.hpp"
#include "ui\RscDisplayNotFreeze.hpp"
#include "ui\CfgMainMenuSpotlight.hpp"
#include "ui\WorldScene.hpp"
