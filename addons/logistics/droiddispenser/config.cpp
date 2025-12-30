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
            "A3_Modules_F", 
            "cba_main", 
            "ace_main",
            "ls_dispenser",
            "3AS_CIS_Static_Droid_Dispenser"
        };
        units[] = {"ic51_Module_droidDispenser_b1","ic51_Module_droidDispenser_b2","ic51_Module_droidDispenser_bx","ic51_droidDespener_b1","ic51_droidDespener_b2","ic51_droidDespener_bx","ic51_droidDespener_DropProxy_b1","ic51_droidDespener_DropProxy_b2","ic51_droidDespener_DropProxy_bx"};
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class CfgSounds
{
    sounds[] = {};
    class ic51_droidDispenser_sound
    {
        name = "[51st] Droid Dispenser Sound";
        sound[] = {QPATHTOF(droiddispenser\data\droidDispenser_sound_mono44k_16bit_125x.wss), 5, 1};
        titles[] = {};
    };
};

class CfgFunctions
{
    class ic51
    {
        tag = "ic51";
        class droiddispenser
        {
            file = "\x\ic51\addons\logistics\droiddispenser\functions";
            class moduleCrateWave {};
            class spawnCrateWave {};
            class makeImpactFX {};
            class moduleCrateWave_b2 {};
            class spawnCrateWave_b2 {};
            class moduleCrateWave_bx {};
            class spawnCrateWave_bx {};
        };
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class ModuleDescription
        {
            class Anything;
        };
    };

    class ic51_Module_droidDispenser_b1 : Module_F
    {
        SCOPE_PUBLIC;
        displayName = "[51st] Droid Dispenser (B1)";
        category = "ic51_modules";
        icon = "\ls\core\addons\dispenser\data\ui\droidDispenser_icon_ca.paa";
        portrait = "\ls\core\addons\dispenser\data\ui\droidDispenser_icon_ca.paa";
        function = "ic51_fnc_moduleCrateWave";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 1;

        class ModuleDescription: ModuleDescription
        {
            description = "Drops a Droid Dispenser and deploys B1s";
            position = 1;
        };
    };
    class ic51_Module_droidDispenser_b2 : Module_F
    {
        SCOPE_PUBLIC;
        displayName = "[51st] Droid Dispenser (B2)";
        category = "ic51_modules";
        icon = "\ls\core\addons\dispenser\data\ui\droidDispenser_icon_ca.paa";
        portrait = "\ls\core\addons\dispenser\data\ui\droidDispenser_icon_ca.paa";
        function = "ic51_fnc_moduleCrateWave_b2";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 1;

        class ModuleDescription: ModuleDescription
        {
            description = "Drops a Droid Dispenser and deploys B1s";
            position = 1;
        };
    };
    class ic51_Module_droidDispenser_bx : Module_F
    {
        SCOPE_PUBLIC;
        displayName = "[51st] Droid Dispenser (BX)";
        category = "ic51_modules";
        icon = "\ls\core\addons\dispenser\data\ui\droidDispenser_icon_ca.paa";
        portrait = "\ls\core\addons\dispenser\data\ui\droidDispenser_icon_ca.paa";
        function = "ic51_fnc_moduleCrateWave_bx";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 1;

        class ModuleDescription: ModuleDescription
        {
            description = "Drops a Droid Dispenser and deploys B1s";
            position = 1;
        };
    };

    class House_F;
    class ic51_droidDespener_b1 : House_F
    {
        SCOPE_PUBLIC;
        displayName = "[51st] Droid Dispenser (B1)";
        author = "ic51";
        model = "3AS\3AS_CIS_Static\Droid_Dispenser\model\3AS_Droid_Dispenser_F.p3d";
        editorCategory = "ic51_editor_props";
        editorSubcategory = "ic51_structure";
        icon = "\ls\core\addons\dispenser\data\ui\droidDispenser_icon_ca.paa";
        destrType = "DestructDefault";
        armor = 750;

        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"3as\3AS_CIS_Static\Droid_Dispenser\data\camo_droid_dispenser_co.paa"};

        class SimpleObject
        {
            eden = 1;
            animate[] = {};
            hide[] = {};
            verticalOffset = 0;
            verticalOffsetWorld = 0;
        };
        class HitPoints
        {
            class HitBody
            {
                armor = 750;
                material = -1;
                name = "body";
                visual = ""; 
                passThrough = 0;
                radius = 0.5;
            };
        };
        class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightSmall";
				position="destructionEffect1";
				intensity=0.001;
				interval=1;
				lifeTime=3;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=0.5;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Tiny";
				position="destructionEffect1";
				intensity=0.25;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="SmallFireFRefract";
				position="destructionEffect1";
				intensity=0.5;
				interval=1;
				lifeTime=3;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3AS_CIS_Static\Droid_Dispenser\data\Base.rvmat",
				"3as\3AS_CIS_Static\Droid_Dispenser\data\damage\Base_damage.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat"
			};
		};
    };
    class ic51_droidDespener_b2 : ic51_droidDespener_b1
    {
        SCOPE_PUBLIC;
        displayName = "[51st] Droid Dispenser (B2)";
        author = "ic51";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(droiddispenser\data\camo_droid_dispenser_b2_co.paa)};
    };

    class ic51_droidDespener_bx : ic51_droidDespener_b1
    {
        SCOPE_PUBLIC;
        displayName = "[51st] Droid Dispenser (BX)";
        author = "ic51";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(droiddispenser\data\camo_droid_dispenser_bx_co.paa)};
    };

    class ThingX;
    class ic51_droidDespener_DropProxy_b1 : ThingX
    {
        SCOPE_HIDDEN;
        displayName = "Droid Dispenser B1 (Drop Proxy)";
        model = "3AS\3AS_CIS_Static\Droid_Dispenser\model\3AS_Droid_Dispenser_F.p3d";
        destrType = "DestructNo"; 
        armor = 10;                
        simulation = "thingX";

        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"3as\3AS_CIS_Static\Droid_Dispenser\data\camo_droid_dispenser_co.paa"};
    };
    class ic51_droidDespener_DropProxy_b2 : ThingX
    {
        SCOPE_HIDDEN;
        displayName = "Droid Dispenser B2 (Drop Proxy)";
        model = "3AS\3AS_CIS_Static\Droid_Dispenser\model\3AS_Droid_Dispenser_F.p3d";
        destrType = "DestructNo"; 
        armor = 10;                
        simulation = "thingX";

        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"ic51_droidDispenser\data\camo_droid_dispenser_b2_co.paa"};
    };
    class ic51_droidDespener_DropProxy_bx : ThingX
    {
        SCOPE_HIDDEN;
        displayName = "Droid Dispenser BX (Drop Proxy)";
        model = "3AS\3AS_CIS_Static\Droid_Dispenser\model\3AS_Droid_Dispenser_F.p3d";
        destrType = "DestructNo"; 
        armor = 10;                
        simulation = "thingX";

        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"c51_droidDispenser\data\camo_droid_dispenser_bx_co.paa"};
    };
};
