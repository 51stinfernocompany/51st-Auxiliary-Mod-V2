#include "script_component.hpp"
#include "script_macros.hpp"
class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = CSTRING(component);
        requiredVersion = REQUIRED_VERSION;
		url = URL;
        requiredAddons[]=
        {
            "A3_Data_F_Decade_Loadorder", 
            "A3_Characters_F",
            "A3_Characters_F_Orange_Facewear",
            "ls_characters_droid",
            "ace_goggles",
            "ls_armor_greenfor",
            "ls_armor_redfor",
            "ic51_armor"
        };
        units[]=
        {
            // COMMON UNIT
            QCLASS(unit_b1gerald),
            QCLASS(unit_b1jeff),
            QCLASS(unit_b1colbat),
            QCLASS(katarn_unit_gary),
            QCLASS(katarn_unit_immortal),
            QCLASS(katarn_unit_doss),
            // CLONE UNIT
            QCLASS(clone_unit_custom_mini),
            QCLASS(clone_unit_custom_chamber),
            QCLASS(clone_unit_custom_lucifer),
            QCLASS(clone_unit_custom_clips),
            QCLASS(clone_unit_custom_blaze),
            QCLASS(clone_unit_custom_barbie),
            QCLASS(clone_unit_custom_iroh),
            QCLASS(clone_unit_custom_mando),
            QCLASS(clone_unit_custom_atticus),
            QCLASS(clone_unit_custom_mortem),
            QCLASS(clone_unit_custom_law),
            QCLASS(clone_unit_custom_rodeo),
            QCLASS(clone_unit_custom_kane),
            QCLASS(clone_unit_custom_jinx),
            QCLASS(clone_unit_custom_balance),
            QCLASS(clone_unit_custom_ronin),
            QCLASS(clone_unit_custom_slugger),
            QCLASS(clone_unit_custom_dawn),
            QCLASS(clone_unit_custom_various),
            // BACKPACK
            QCLASS(backpack_b1),
            QCLASS(katarn_backpack_gary),
            QCLASS(katarn_backpack_immortal),
            QCLASS(katarn_backpack_doss),
        };
        weapons[]=
        {
            // HELMET PHASE 2 (CLONE)
            QCLASS(p2_helmet_custom_mini),
            QCLASS(p2_helmet_custom_clips),
            QCLASS(p2_helmet_custom_law),
            QCLASS(p2_helmet_custom_fulcrum),
            QCLASS(p2_helmet_custom_ronin),
            QCLASS(p2_helmet_custom_atticus),
            QCLASS(p2_helmet_custom_mortem),
            QCLASS(p2_helmet_custom_iroh),
            QCLASS(p2_helmet_custom_ape),
            QCLASS(p2_helmet_custom_atlas),
            QCLASS(p2_helmet_custom_kane),
            QCLASS(p2_helmet_custom_doc),
            QCLASS(p2_helmet_custom_ringer),
            QCLASS(p2_helmet_custom_g3),
            QCLASS(p2_helmet_custom_k),
            QCLASS(p2_helmet_custom_freelancer),
            QCLASS(p2_helmet_custom_dawn),
            QCLASS(p2_helmet_custom_various),
            // HELMET PHASE 1
            QCLASS(p1_helmet_custom_mando),
            // HELMET ARF
            QCLASS(arf_helmet_custom_chamber),
            QCLASS(arf_helmet_custom_church),
            QCLASS(arf_helmet_custom_ox),
            QCLASS(arf_helmet_custom_threevo),
            QCLASS(arf_helmet_custom_matthew),
            // HELMET PILOT
            QCLASS(pilot_helmet_anselm),
            QCLASS(pilot_helmet_snapjaw),
            QCLASS(pilot_helmet_noble),
            QCLASS(pilot_helmet_slugger),
            // HELMET AIRBORNE
            QCLASS(airborne_helmet_custom_biscuit),
            QCLASS(airborne_helmet_custom_lucifer),
            QCLASS(airborne_helmet_custom_havocc),
            // NVG COMMON
            QCLASS(nvg_pilot_visor),
            QCLASS(nvg_pilot_faceplate),
            // HELMET COMMON
            QCLASS(helmet_b1gerald),
            QCLASS(helmet_b1jeff),
            QCLASS(helmet_b1colbat),
            QCLASS(katarn_helmet_gary),
            QCLASS(katarn_helmet_immortal),
            QCLASS(katarn_helmet_doss),
            QCLASS(p2_helmet_custom_blaze),
            QCLASS(p2_helmet_custom_Barbie),
            // UNIFORM COMMON
            QCLASS(uniform_b1gerald),
            QCLASS(uniform_b1jeff),
            QCLASS(uniform_b1colbat),
            QCLASS(katarn_uniform_gary),
            QCLASS(katarn_uniform_immortal),
            QCLASS(katarn_uniform_doss),
            QCLASS(katarn_uniform_cyclone),
            QCLASS(katarn_uniform_rook),
            // UNIFORM CLONE
            QCLASS(clone_uniform_custom_mini),
            QCLASS(clone_uniform_custom_chamber),
            QCLASS(clone_uniform_custom_lucifer),
            QCLASS(clone_uniform_custom_clips),
            QCLASS(clone_uniform_custom_blaze),
            QCLASS(clone_uniform_custom_barbie),
            QCLASS(clone_uniform_custom_iroh),
            QCLASS(clone_uniform_custom_mando),
            QCLASS(clone_uniform_custom_atticus),
            QCLASS(clone_uniform_custom_mortem),
            QCLASS(clone_uniform_custom_law),
            QCLASS(clone_uniform_custom_rodeo),
            QCLASS(clone_uniform_custom_kane),
            QCLASS(clone_uniform_custom_jinx),
            QCLASS(clone_uniform_custom_balance),
            QCLASS(clone_uniform_custom_ronin),
            QCLASS(clone_uniform_custom_slugger),
            QCLASS(clone_uniform_custom_dawn),
            QCLASS(clone_uniform_custom_various),
            // VEST COMMON 
            QCLASS(katarn_vest_tech_gary),
            QCLASS(katarn_vest_tech_rook),
            QCLASS(katarn_vest_demo_immortal),
            QCLASS(vest_alpha)
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
