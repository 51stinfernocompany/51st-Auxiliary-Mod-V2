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
            "A3_Functions_F",
            "A3_Weapons_F",
            "A3_Air_F",
            "A3_Data_F",
            "A3_Modules_F",
            "A3_Modules_F_Curator"
        };
        units[] = {"IC51_Module_SpawnSupplySmoke"};
        weapons[] = {}; // we patch Throw; no new base weapons
        magazines[] = {"ic51_SupplySmoke_Mag"};
        ammo[] = {"ic51_SupplySmoke_Ammo"};
    };
};

class CfgAmmo
{
    class SmokeShellOrange; // vanilla
    class ic51_SupplySmoke_Ammo: SmokeShellOrange
    {
        displayName      = "[51st] Supply Smoke (Orange)";
        descriptionShort = "Supply Smoke";
        displayNameShort = "Supply Smoke";
        // Keep vanilla behavior — we only react after it lands.
        timeToLive       = 60;
        effectsSmoke     = "SmokeShellOrangeEffect";
    };
};

class CfgMagazines
{
    class ic51_smokeOrange;
    class ic51_SupplySmoke_Mag: ic51_smokeOrange
    {
        SCOPE_PUBLIC;
        author = AUTHOR;
        displayName      = "[51st] Supply Smoke";
        displayNameShort = "Supply Smoke";
        descriptionShort = "Marks resupply; triggers aircraft flyover and crate airdrop upon landing.";
        ammo             = "ic51_SupplySmoke_Ammo";
    };
};

class CfgWeapons
{
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
        muzzles[] += {"IC51_SupplySmokeMuzzle"};  // add our muzzle to Throw

        class ThrowMuzzle;
        class SmokeShellMuzzle: ThrowMuzzle {};

        class IC51_SupplySmokeMuzzle: SmokeShellMuzzle
        {
            displayName = "IC51 Supply Smoke";
            magazines[] = {"ic51_SupplySmoke_Mag"};  // only our mag in this muzzle
        };
    };
};

class CfgFunctions
{
    class ic51
    {
        tag = "ic51";
        class resupply
        {
            file = "\x\ic51\addons\logistics\resupply\functions";
            class init            { postInit = 1; };
            class handleSmoke     {};
            class flyoverDrop     {};
            class moduleSpawnSmoke{};
            class fillCrate       {};
        };
    };
};

class CfgRemoteExec
{
    class Functions
    {
        mode = 1;
        jip = 1;
        class ic51_fnc_handleSmoke { allowedTargets = 2; }; // server
        class ic51_fnc_flyoverDrop { allowedTargets = 2; }; // server
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class ArgumentsBaseUnits { class Units {}; };
        class ModuleDescription { class AnyPlayer; };
    };

    class IC51_Module_SpawnSupplySmoke: Module_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "51st: Spawn Supply Smoke";
        category = "ic51_modules";
        icon = "\A3\ui_f\data\Map\VehicleIcons\iconCrateAmmo_CA.paa";
        function = "ic51_fnc_moduleSpawnSmoke";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 1;

        class ModuleDescription
        {
            description = "Spawns an IC51 supply smoke at the placed position; triggers aircraft flyover & airdrop.";
            sync[] = {};
        };
    };
};
