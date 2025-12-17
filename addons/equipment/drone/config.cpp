#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
           "A3_Data_F", 
           "A3_Functions_F", 
           "cba_main", 
           "ace_main",
           "ace_interaction",
           "ace_interact_menu"
        };
        units[] = {"ic51_recon_drone"};

    };
};

class CfgFunctions
{
    class ic51
    {
        class uavDeploy
        {
            file = "\x\ic51\addons\equipment\drone\functions";
           class deployAsUAV {};
           class giveFoldedItem_client {};
           class spawnFoldedItem_server {};
           class packUAV_server {};
        };
    };
};

class CfgWeapons
{
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class ic51_item_recon_drone: ACE_ItemCore
    {
        SCOPE_PUBLIC;
        author = AUTHOR;
        displayName = "[51st] Packed GAR Recon Drone";
        descriptionShort = "A collapsed recon drone you can carry.";
        model = "3as\3as_Drones\UAS2\UAS2.p3d";
        picture = QPATHTOF(data\51st_logo.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 100;
        };
    };
};

class CfgVehicles 
{
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class ic51_DeployUAV {
                    displayName = "Deploy UAV";
                    condition = "alive _player && isNull objectParent _player && ('ic51_item_recon_drone' in (items _player))";
                    statement = "[_player] call ic51_fnc_deployAsUAV;";
                    exceptions[] = { "isNotSitting" };  // allow while prone/crouched/etc.
                };
            };
        };
    };
    
    class ACE_Actions;
    class ACE_MainActions;
    class B_UAV_01_F;
    class ic51_recon_drone: B_UAV_01_F{
        displayName = "[51st] GAR Recon Drone";
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\b_UAV_01_F.jpg";
		scope=2;
		side=1;
        model = "3as\3as_Drones\UAS2\UAS2.p3d";
        hiddenSelections[] = {"camo"};
        hiddenselectionsTextures[] = {"3as\3as_Drones\UAS2\data\recondrone_CO.paa"};
		editorSubcategory="EdSubcat_Drones";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		faction="3AS_REP";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class IC51_PackUAV {
                    displayName = "Pack UAV";
                    condition = "alive _player && isNull objectParent _player && {_player distance _target < 3}";
                    statement = "[_target, _player] remoteExec ['ic51_fnc_packUAV_server', 2]";
                };
            };
        };
    };
};
