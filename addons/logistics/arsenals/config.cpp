#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
           "cba_main",
           "ace_interact_menu",
        };
        units[] = {"ic51_arsenal"};
        magazines[] = {};
        weapons[] = {};
    };
};

class CfgFunctions
{
    class ic51
    {
        class arsenals
        {
            file = "\x\ic51\addons\logistics\arsenals\functions";
            class basicCT {};
            class medicT1 {};
            class medicT2 {};
            class medicT3 {};
            class marksmenT1 {};
            class marksmenT2 {};
            class marksmenT3 {};
            class heavyT1 {};
            class heavyT2 {};
            class heavyT3 {};
            class atT1 {};
            class atT2 {};
            class atT3 {};
            class engineerT1 {};
            class engineerT2 {};
            class engineerT3 {};
            class pilotKit {};
            class medicT1Perms {};
            class medicT2Perms {};
            class medicT3Perms {};
            class engineerPerms {};
            class resetPerms {};
        };
    };
};

class CfgVehicles
{
    class B_supplyCrate_F;
    class ic51_arsenal : B_supplyCrate_F
    {
        SCOPE_PUBLIC;
        author = AUTHOR;
        displayName = "[51st] Arsenal";
        model = "\x\ic51\addons\props\barricades\data\models\citadel_barricade\ic51_arsenal.p3d";
        hiddenselections[] = {"camo1"};
        hiddenselectionstextures[] = {"\x\ic51\addons\props\barricades\data\textures\ic51_arsenal_CO.paa"};
        vehicleClass = "Objects";
        editorCategory = "ic51_editor_logistics";
        editorSubCategory = "ic51_arsenal";

        class ACE_Actions
        {
            class ACE_MainActions
            {
                displayName = "[51st] Arsenal";
                distance = 3;
                condition = "alive _target";
                position = "[0, 0, 1]";

                class ic51_open_ace_arsenal {
                    displayName = "Open ACE Arsenal";
                    condition = "alive _target";
                    statement = "[_target, _player, true] call ace_arsenal_fnc_openBox;";
                };

                //Basic Kit
                class ic51_basic_kits
                {
                    displayName = "Basic Kits";
                    condition = "alive _target";
                    icon = "";
                    statement = "";

                    class ic51_basic_kit
                    {
                        displayName = "CT Basic";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_basicCT";
                    };
                };

                //Medic
                class ic51_medic_kits
                {
                    displayName = "Medic Kits";
                    condition = "alive _target";
                    icon = "";
                    statement = "";

                    class ic51_medic_t1
                    {
                        displayName = "Medic T1";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_medicT1";
                    };

                    class ic51_medic_t2
                    {
                        displayName = "Medic T2";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_medicT2";
                    };

                    class ic51_medic_t3
                    {
                        displayName = "Medic T3";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_medicT3";
                    };
                };

                 //Marksmen
                class ic51_marksmen_kits
                {
                    displayName = "Marksmen Kits";
                    condition = "alive _target";
                    icon = "";
                    statement = "";

                    class ic51_marksmen_t1
                    {
                        displayName = "Marksmen T1";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_marksmenT1";
                    };

                    class ic51_marksmen_t2
                    {
                        displayName = "Marksmen T2";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_marksmenT2";
                    };

                    class ic51_marksmen_t3
                    {
                        displayName = "Marksmen T3";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_marksmenT3";
                    };
                };

                //Heavy
                class ic51_heavy_kits
                {
                    displayName = "Heavy Kits";
                    condition = "alive _target";
                    icon = "";
                    statement = "";

                    class ic51_heavy_t1
                    {
                        displayName = "Heavy T1";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_heavyT1";
                    };

                    class ic51_heavy_t2
                    {
                        displayName = "Heavy T2";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_heavyT2";
                    };

                    class ic51_Heavy_t3
                    {
                        displayName = "Heavy T3";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_heavyT3";
                    };
                };

                //AT
                class ic51_at_kits
                {
                    displayName = "AT Kits";
                    condition = "alive _target";
                    icon = "";
                    statement = "";

                    class ic51_at_t1
                    {
                        displayName = "AT T1";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_atT1";
                    };

                    class ic51_at_t2
                    {
                        displayName = "AT T2";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_atT2";
                    };

                    class ic51_at_t3
                    {
                        displayName = "AT T3";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_atT3";
                    };
                };
                //Engineer
                class ic51_engineer_kits
                {
                    displayName = "Engineer Kits";
                    condition = "alive _target";
                    icon = "";
                    statement = "";

                    class ic51_at_t1
                    {
                        displayName = "Engineer T1";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_engineerT1";
                    };

                    class ic51_at_t2
                    {
                        displayName = "Engineer T2";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_engineerT2";
                    };

                    class ic51_at_t3
                    {
                        displayName = "Engineer T3";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_engineerT3";
                    };
                };

                //Detachment Kit
                class ic51_detachment_kits
                {
                    displayName = "Detachment Kits";
                    condition = "alive _target";
                    icon = "";
                    statement = "";

                    class ic51_pilot_kit
                    {
                        displayName = "Pilot Basic";
                        icon = "";
                        condition = "alive _target";
                        statement = "[_player] call ic51_fnc_pilotKit";
                    };
                };
                //perms
                class ic51_perms
                {
                    displayName = "[51st] Perms";
                    condition = "alive _target";
                    icon = "";
                    statement = "";
                    class ic51_medic_t1_perms {
                        displayName = "Get Medic T1 Perms";
                        condition = "alive _target";
                        statement  = "[_player] call ic51_fnc_medicT1Perms;";
                    };
                    class ic51_medic_t2_perms {
                        displayName = "Get Medic T2 Perms";
                        condition = "alive _target";
                        statement  = "[_player] call ic51_fnc_medicT2Perms;";
                    };
                    class ic51_medic_t3_perms {
                        displayName = "Get Medic T3 Perms";
                        condition = "alive _target";
                        statement  = "[_player] call ic51_fnc_medicT3Perms;";
                    };
                    class ic51_enigneer_perms {
                        displayName = "Get Engineer Perms";
                        condition = "alive _target";
                        statement  = "[_player] call ic51_fnc_engineerPerms;";
                    };
                    class ic51_resetPerms 
                    {
                        displayName = "Reset Perms";
                        condition = "alive _target";
                        statement  = "[_player] call ic51_fnc_resetPerms;";
                    };
                };
            };
        };
        // Remove default inventory.
        class TransportBackpacks {};
        class TransportItems {};
        class TransportMagazines {};
        class TransportWeapons {};
    };
};
