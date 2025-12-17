#include "script_component.hpp"
 
class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "IDA_CIS",
            "IDA_Ammo",
            "ls_characters_droid",
            "WBK_DifferentRobotics_1",
            "3AS_Weapons_DWBlaster",
            "3AS_HMP",
            "3AS_Vulture",
            "3AS_Tri_Fighter",
            "3AS_CIS_Wheeled_Fliknot",
            "3AS_CIS_Wheeled_Combat_Speeder",
            "3AS_CIS_Wheeled_PAC",
            "3AS_CIS_Armor_HeavyAAT",
            "3AS_ADSD",
            "3AS_N99",
            "3AS_MTT",
            "3AS_AAT",
            "3AS_GAT",
            "3as_drones",
        };
        units[] =
        {
            // B1 Battledroids
            "ic51_opfor_unit_b1_standard",
            "ic51_opfor_unit_b1_squadlead",
            "ic51_opfor_unit_b1_heavy",
            "ic51_opfor_unit_b1_at",
            "ic51_opfor_unit_b1_marksmen",
            "ic51_opfor_unit_b1_shotgun",
            "ic51_opfor_unit_b1_crew",
            "ic51_opfor_unit_b1_static",
            // B2 Battledroids
            "ic51_opfor_unit_b2_standard",
            "ic51_opfor_unit_b2_static",
            // Airframes
            "ic51_opfor_vehicle_vulture",
            "ic51_opfor_vehicle_vulture_aa",
            "ic51_opfor_vehicle_vulture_cas",
            "ic51_opfor_vehicle_trifighter",
            "ic51_opfor_vehicle_hmp_gunship",
            "ic51_opfor_vehicle_hmp_transport",
            // Ground Vehicles
            "ic51_opfor_vehicle_aat",
            "ic51_opfor_vehicle_aat_tan",
            "ic51_opfor_vehicle_aat_heavy",
            "ic51_opfor_vehicle_hagm",
            "ic51_opfor_vehicle_mtt",
            "ic51_opfor_vehicle_n99",
            "ic51_opfor_vehicle_dsd",
            "ic51_opfor_vehicle_aat_shield",
            "ic51_opfor_vehicle_aat_flamer",
            "ic51_opfor_vehicle_ac_p",
            "ic51_opfor_vehicle_ac_s",
            "ic51_opfor_vehicle_ac_r",
            "ic51_opfor_vehicle_cisspeeder",
            "ic51_opfor_vehicle_fliknot",
            // Drones
            "ic51_opfor_drone_gat",
            "ic51_opfor_drone_gat_light",
            "ic51_opfor_drone_scavdroid",
            // BXs
            "ic51_opfor_unit_bx_standard",
            // Special Units
            "ic51_opfor_unit_droideka",
            "ic51_opfor_unit_j10s",
            "ic51_opfor_unit_tactialdroid",
            // Backpacks
            "ic51_opfor_backpack_b1"
        };
        weapons[] =
        {
            // Weapons
            "ic51_opfor_weap_e5",
            "ic51_opfor_weap_e5c",
            "ic51_opfor_weap_b2",
            // Uniforms
            "ic51_opfor_uniform_b1",
            "ic51_opfor_uniform_b2",
            // Helmets
            "ic51_opfor_helmet_b1",
            "ic51_opfor_helmet_b1_squadlead"
        };
        magazines[] =
        {
            "ic51_opfor_blaster_magazine_p3_40rnd",
            "ic51_opfor_blaster_magazine_ion"
        };
        ammo[] =
        {
            "ic51_opfor_blasterbolt_p3_ion"
        };
    };
};

class CfgFactionClasses
{
    class ic51_opfor_group_cis 
    {
        displayName = "[51st OPFOR] CIS";
        icon = "";
        priority = 1;
    };
};

class CfgEditorSubcategories
{
    class ic51_opfor_battledroids
    {
        displayName="Battledroids";
    };
    class ic51_opfor_vehicles_air
    {
        displayName="Air Vehicles";
    };
    class ic51_opfor_vehicles
    {
        displayName="Ground Vehicles";
    };
    class ic51_opfor_turrets
    {
        displayName="Turrets";
    };
    class ic51_opfor_sf
    {
        displayName="Special Operations";
    };
    class ic51_opfor_drones
    {
        displayName="Drones";
    };
    class ic51_opfor_su
    {
        displayName="Special Units";
    };
};

class CfgAmmo {
    #include "config\weapons\weap_ammo.hpp"
};
class CfgMagazines {
    #include "config\weapons\weap_magazines.hpp"
};
class CfgWeapons {
    #include "CfgWeapons.hpp"
};
class CfgVehicles {
    #include "CfgVehicles.hpp"
};

class CfgGroups
{
    class East
    {
        class ic51_opfor_group_cis
        {
            name = "[51st OPFOR] CIS";
            displayName = "51st OPFOR CIS";
            #include "config\groups\mixed.hpp"
            #include "config\groups\plain.hpp"
            #include "config\groups\specialoperations.hpp"
            #include "config\groups\standard.hpp"
            #include "config\groups\static.hpp"
        };
    };
};

#include "config\scripts\Extended_InitPost_EventHandlers.hpp"
