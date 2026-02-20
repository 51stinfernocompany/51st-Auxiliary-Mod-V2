#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = CSTRING(component);
        requiredVersion = REQUIRED_VERSION;
		url = URL;
        requiredAddons[]=
        {
            "A3_Data_F_Decade_Loadorder", 
            "Indecisive_Armoury_units",
            "3AS_Characters_Commando",
            "3AS_Characters_Imperial",
            "IDA_Republic",
            "ls_characters_clone",
            "ls_characters_clone_legacy",
            "JLTS_characters_CloneArmor",
        };
        units[]=
        {
            // Units
            QCLASS(clone_unit_base),
            QCLASS(clone_unit_corporal),
            QCLASS(clone_unit_sergeant),
            QCLASS(clone_unit_command),
            QCLASS(clone_unit_medic_t2),
            QCLASS(clone_unit_medic_t3),
            QCLASS(katarn_unit_base),
            QCLASS(clone_unit_pilot_combat),
            QCLASS(clone_unit_pilot_logi),
            QCLASS(clone_unit_barc),
            QCLASS(clone_unit_sabre1),
            QCLASS(clone_unit_sabre2),
            QCLASS(clone_unit_sabre3),
            QCLASS(clone_unit_sabre4),
            QCLASS(clone_unit_arf),
            QCLASS(clone_unit_arf_winter),
            QCLASS(clone_unit_arf_jungle),
            QCLASS(clone_unit_arf_desert),
            QCLASS(clone_unit_havoc1),
            QCLASS(clone_unit_havoc2),
            QCLASS(clone_unit_medic_sabre1),
            QCLASS(clone_unit_medic_sabre2),
            QCLASS(clone_unit_medic_sabre3),
            QCLASS(clone_unit_medic_sabre4),
            QCLASS(clone_unit_medic_havoc1),
            QCLASS(clone_unit_medic_havoc2),
            // Backpacks
            QCLASS(clone_rucksack_base),
            QCLASS(clone_rucksack_heavy),
            QCLASS(clone_rucksack_at),
            QCLASS(clone_rucksack_medic),
            QCLASS(clone_backpack_base),
            QCLASS(clone_backpack_marksmen_t2),
            QCLASS(clone_backpack_radio),
            QCLASS(clone_backpack_pilot),
            QCLASS(clone_backpack_arf),
            QCLASS(backpack_arc_base),
            QCLASS(backpack_navalofficer),
            QCLASS(katarn_backpack_base),
            QCLASS(clone_rucksack_engineer),
            QCLASS(backpack_radio_ls),
            QCLASS(backpack_respirator),
            QCLASS(jumppack_base),
        };
        weapons[] =
        {
            // Helmets
            QCLASS(p2_helmet_base),
            QCLASS(p2_helmet_trooper2),
            QCLASS(p2_helmet_corporal),
            QCLASS(p2_helmet_sergeant),
            QCLASS(p2_helmet_command),
            QCLASS(p2_helmet_medic),
            QCLASS(p2_helmet_medic_t2),
            QCLASS(p2_helmet_medic_t3),
            QCLASS(p1_helmet_base),
            QCLASS(p2_helmet_fancy),
            QCLASS(pilot_helmet_base),
            QCLASS(pilot_helmet_combat),
            QCLASS(pilot_helmet_logistics),
            QCLASS(arf_helmet_base),
            QCLASS(engineer_helmet_base),
            QCLASS(barc_helmet_base),
            QCLASS(katarn_helmet_base),
            QCLASS(airborne_helmet_base),
            QCLASS(p2_helmet_at),
            QCLASS(p2_helmet_heavy),
            QCLASS(p2_helmet_marksmen),
            QCLASS(p2_helmet_sabre1),
            QCLASS(p2_helmet_sabre2),
            QCLASS(p2_helmet_sabre3),
            QCLASS(p2_helmet_sabre4),
            QCLASS(p2_helmet_medic_sabre1),
            QCLASS(p2_helmet_medic_sabre2),
            QCLASS(p2_helmet_medic_sabre3),
            QCLASS(p2_helmet_medic_sabre4),
            QCLASS(arf_helmet_base),
            QCLASS(arf_helmet_winter),
            QCLASS(arf_helmet_jungle),
            QCLASS(arf_helmet_desert),
            QCLASS(p2_helmet_havoc1),
            QCLASS(p2_helmet_havoc2),
            QCLASS(p2_helmet_medic_havoc1),
            QCLASS(p2_helmet_medic_havoc2),
            //P1
            QCLASS(p1_helmet_CT),
            QCLASS(p1_helmet_medic),
            QCLASS(p1_helmet_CPL),
            QCLASS(p1_helmet_SGT),


            // Uniforms
            QCLASS(clone_uniform_base),
            QCLASS(clone_uniform_corporal),
            QCLASS(clone_uniform_sergeant),
            QCLASS(clone_uniform_command),
            QCLASS(clone_uniform_medic_t2),
            QCLASS(clone_uniform_medic_t3),
            QCLASS(clone_uniform_barc),
            QCLASS(katarn_uniform_base),
            QCLASS(clone_uniform_pilot_combat),
            QCLASS(clone_uniform_pilot_logi),
            QCLASS(clone_uniform_arf),
            QCLASS(clone_uniform_arf_winter),
            QCLASS(clone_uniform_arf_jungle),
            QCLASS(clone_uniform_arf_desert),
            QCLASS(clone_uniform_sabre1),
            QCLASS(clone_uniform_sabre2),
            QCLASS(clone_uniform_sabre3),
            QCLASS(clone_uniform_sabre4),
            QCLASS(clone_uniform_havoc1),
            QCLASS(clone_uniform_havoc2),
            QCLASS(clone_uniform_medic_sabre1),
            QCLASS(clone_uniform_medic_sabre2),
            QCLASS(clone_uniform_medic_sabre3),
            QCLASS(clone_uniform_medic_sabre4),
            QCLASS(clone_uniform_medic_havoc1),
            QCLASS(clone_uniform_medic_havoc2),
            // Vests
            QCLASS(katarn_vest_teamleader),
            QCLASS(katarn_vest_sniper),
            QCLASS(katarn_vest_demo),
            QCLASS(katarn_vest_tech),
            QCLASS(holster_1_base),
            QCLASS(holster_2_base),
            QCLASS(katarn_vest_base),
            QCLASS(vest_plate_arc),
            QCLASS(vest_plate_base),
            QCLASS(vest_plate_medic),
            QCLASS(vest_plate_heavy),
            QCLASS(vest_plate_assault),
            QCLASS(vest_plate_arc),
            QCLASS(vest_poncho),
            QCLASS(vest_plate_engineer),
            QCLASS(vest_plate_at),
            QCLASS(knifeholster),
            //Binos
            QCLASS(clone_binoculars_base),
            QCLASS(clone_binoculars_co),
        };
        VERSION_CONFIG;
    };
};
class CfgWeapons
{
    #include "CfgWeapons.hpp"
};
class CfgVehicles
{
    #include "CfgVehicles.hpp"
};
class CfgGlasses
{
    #include "CfgGlasses.hpp"
};
#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
