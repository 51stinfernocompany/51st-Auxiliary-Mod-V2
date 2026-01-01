class XtdGearModels {
  class CfgWeapons{
    class ic51_trooper_uniforms {
      label  = "[51st] Trooper Uniform";
      author = AUTHOR;
      options[] = {"camo"};
      class camo {
        values[] = 
        {
            "ic51_trooper_base",
            "ic51_trooper_corporal",
            "ic51_trooper_sergeant",
            "ic51_trooper_command",
            "ic51_trooper_medic_t2",
            "ic51_trooper_medic_t3",
            "ic51_trooper_arf",
            "ic51_trooper_arf_winter",
            "ic51_trooper_arf_jungle",
            "ic51_trooper_arf_desert",
            "ic51_trooper_barc",
            "ic51_trooper_pilot",
            "ic51_trooper_pilot_logi",
        };
        class ic51_trooper_base { label = "Trooper";};
        class ic51_trooper_corporal { label = "Corporal";};
        class ic51_trooper_sergeant { label = "Sergeant";};
        class ic51_trooper_command { label = "Command";};
        class ic51_trooper_medic_t2 { label = "Medic T2";};
        class ic51_trooper_medic_t3 { label = "Medic T3";};
        class ic51_trooper_arf { label = "ARF";};
        class ic51_trooper_arf_winter { label = "ARF Winter";};
        class ic51_trooper_arf_jungle { label = "ARF Jungle";};
        class ic51_trooper_arf_desert { label = "ARF Desert";};
        class ic51_trooper_barc {label = "BARC";};
        class ic51_trooper_pilot { label = "Pilot";};
        class ic51_trooper_pilot_logi { label = "Pilot Logi";};
      };
    };
	class ic51_trooper_uniforms_Saber {
      label  = "[51st] Trooper Uniform Saber";
      author = AUTHOR;
      options[] = {"camo"}; 
      class camo { 
        values[] = 
        {
            "ic51_trooper_saber1",
            "ic51_trooper_saber1_medic",
            "ic51_trooper_saber2",
            "ic51_trooper_saber2_medic",
            "ic51_trooper_saber3",
            "ic51_trooper_saber3_medic",
            "ic51_trooper_saber4",
            "ic51_trooper_saber4_medic",
        };
        class ic51_trooper_saber1 { label = "Saber 1";};
        class ic51_trooper_saber1_medic { label = "Saber 1 Medic";};
        class ic51_trooper_saber2 { label = "Saber 2";};
        class ic51_trooper_saber2_medic { label = "Saber 2 Medic";};
        class ic51_trooper_saber3 { label = "Saber 3";};
        class ic51_trooper_saber3_medic { label = "Saber 3 Medic";};
        class ic51_trooper_saber4 { label = "Saber 4";};
        class ic51_trooper_saber4_medic { label = "Saber 4 Medic";};
      };
    };
	class ic51_trooper_uniforms_havoc {
      label  = "[51st] Trooper Uniform Havoc";
      author = AUTHOR;
      options[] = {"camo"};
      class camo {
        values[] = 
        {
            "ic51_trooper_havoc1",
            "ic51_trooper_havoc1_medic",
            "ic51_trooper_havoc2",
            "ic51_trooper_havoc2_medic",
        };
        class ic51_trooper_havoc1 { label = "Havoc 1";};
        class ic51_trooper_havoc1_medic { label = "Havoc 1 Medic";};
        class ic51_trooper_havoc2 { label = "Havoc 2";};
        class ic51_trooper_havoc2_medic { label = "Havoc 2 Medic";};
      };
    };
	class ic51_trooper_uniforms_katarn {
      label  = "[51st] Katarn Uniforms";
      author = AUTHOR;
      options[] = {"camo"};                
      class camo {                        
        values[] = 
        {
            "ic51_katarn_uni",
			"ic51_katarn_uni_doss",
            "ic51_katarn_uni_gary",
            "ic51_katarn_uni_imortal",
            "ic51_katarn_uni_cyclone",
        };
        class ic51_katarn_uni { label = "Base Katarn";};
		class ic51_katarn_uni_doss { label = "Doss";};
        class ic51_katarn_uni_gary { label = "Gary";};
		class ic51_katarn_uni_imortal { label = "Immortal";};
        class ic51_katarn_uni_cyclone { label = "Cyclone";};
      };
    };
	class ic51_trooper_uniforms_customs {
      label  = "[51st] Trooper Customs Uniform ";
      author = AUTHOR;
      options[] = {"camo"};
      class camo {
        values[] = 
        {
            "ic51_uni_mini",
			"ic51_uni_chamber",
            "ic51_uni_lucifer",
            "ic51_uni_clips",
			"ic51_uni_blaze",
			"ic51_uni_barbie",
			"ic51_uni_iroh",
            "ic51_uni_mando",
            "ic51_uni_atticus",
            "ic51_uni_mortem",
            "ic51_uni_law",
            "ic51_uni_rodeo",
            "ic51_uni_kane",
        };
		class ic51_uni_mini { label = "Mini";};
        class ic51_uni_chamber { label = "Chamber";};
		class ic51_uni_lucifer { label = "Lucifer";};
		class ic51_uni_clips { label = "Clips";};
		class ic51_uni_blaze { label = "Blaze";};
		class ic51_uni_barbie { label = "Barbie";};
		class ic51_uni_iroh { label = "Iroh";};
		class ic51_uni_mando { label = "Mando";};
        class ic51_uni_atticus { label = "Atticus";};
        class ic51_uni_mortem { label = "Mortem";};
        class ic51_uni_law { label = "Law";};
        class ic51_uni_rodeo { label = "Rodeo";};
        class ic51_uni_kane { label = "Kane";};
      };
    };

	//helmets
	class ic51_trooper_helmet {
      label  = "[51st] Trooper Helmets";
      author = AUTHOR;
      options[] = {"camo"};
      class camo {
        values[] = 
        {
            "ic51_trooper_base_helmet",
			"ic51_trooper_base_helmet2",
            "ic51_trooper_corporal_helmet",
            "ic51_trooper_sergeant_helmet",
            "ic51_trooper_command_helmet",
            "ic51_trooper_fancy_helmet",
        };
        class ic51_trooper_base_helmet { label = "Trooper";};
		class ic51_trooper_base_helmet2 { label = "Trooper 2";};
        class ic51_trooper_corporal_helmet { label = "Corporal";};
        class ic51_trooper_sergeant_helmet { label = "Sergeant";};
        class ic51_trooper_command_helmet { label = "Command";};
        class ic51_trooper_fancy_helmet { label = "Fancy";};
      };
    };
	class ic51_trooper_helmet_qual {
      label  = "[51st] Trooper Qual Helmets";
      author = AUTHOR;
      options[] = {"camo"};
      class camo {
        values[] = 
        {
            "ic51_trooper_marksmen_helmet",
            "ic51_trooper_heavy_helmet",
            "ic51_trooper_at_helmet",
            "ic51_trooper_medic_t2_helmet",
            "ic51_trooper_medic_t3_helmet",
			"ic51_trooper_engineer_helmet",
        };
        class ic51_trooper_marksmen_helmet { label = "Marksmen";};
        class ic51_trooper_heavy_helmet { label = "Heavy";};
        class ic51_trooper_at_helmet { label = "AT";};
        class ic51_trooper_medic_t2_helmet { label = "Medic T2";};
        class ic51_trooper_medic_t3_helmet { label = "Medic T3";};
		class ic51_trooper_engineer_helmet { label = "Engineer";};
      };
    };
	class ic51_trooper_helmet_Saber {
      label  = "[51st] Trooper Helmets Saber";
      author = AUTHOR;
      options[] = {"camo"};
      class camo {
        values[] = 
        {
            "ic51_trooper_saber1_helmet",
            "ic51_trooper_saber1_medic_helmet",
            "ic51_trooper_saber2_helmet",
            "ic51_trooper_saber2_medic_helmet",
            "ic51_trooper_saber3_helmet",
            "ic51_trooper_saber3_medic_helmet",
            "ic51_trooper_saber4_helmet",
            "ic51_trooper_saber4_medic_helmet"
        };
        class ic51_trooper_saber1_helmet { label = "Saber 1";};
        class ic51_trooper_saber1_medic_helmet { label = "Saber 1 Medic";};
        class ic51_trooper_saber2_helmet { label = "Saber 2";};
        class ic51_trooper_saber2_medic_helmet { label = "Saber 2 Medic";};
        class ic51_trooper_saber3_helmet { label = "Saber 3";};
        class ic51_trooper_saber3_medic_helmet { label = "Saber 3 Medic";};
        class ic51_trooper_saber4_helmet { label = "Saber 4";};
        class ic51_trooper_saber4_medic_helmet { label = "Saber 4 Medic";};
      };
    };
	class ic51_trooper_helmet_havoc {
      label  = "[51st] Trooper Helmets Havoc";
      author = AUTHOR;
      options[] = {"camo"}; 
      class camo {
        values[] = 
        {
            "ic51_trooper_havoc1_helmet",
            "ic51_trooper_havoc1_medic_helmet",
            "ic51_trooper_havoc2_helmet",
            "ic51_trooper_havoc2_medic_helmet",
        };
        class ic51_trooper_havoc1_helmet { label = "Havoc 1";};
        class ic51_trooper_havoc1_medic_helmet { label = "Havoc 1 Medic";};
        class ic51_trooper_havoc2_helmet { label = "Havoc 2";};
        class ic51_trooper_havoc2_medic_helmet { label = "Havoc 2 Medic";};
      };
    };
	class ic51_trooper_helmet_pilot {
      label  = "[51st] Pilot Helmets";
      author = AUTHOR;
      options[] = {"camo"};
      class camo { 
        values[] = 
        {
			"ic51_logistics",
            "ic51_combat",
            "ic51_anselm",
            "ic51_snapjaw",
            "ic51_noble",
        };
		class ic51_logistics { label = "Logistics";};
        class ic51_combat { label = "Combat";};
        class ic51_anselm { label = "Anselm";};
        class ic51_snapjaw { label = "Snapjaw";};
        class ic51_noble { label = "Noble";};
      };
    };
	class ic51_trooper_helmet_airborne {
      label  = "[51st] Airborne Helmets";
      author = AUTHOR;
      options[] = {"camo"};               
      class camo {                        
        values[] = 
        {
            "ic51_airborne",
			"ic51_airborne_biscuit",
            "ic51_airborne_lucifer",
			"ic51_airborne_crys",
            "ic51_airborne_rook",
            "ic51_airborne_nitro",
            "ic51_airborne_floyd",
            "ic51_airborne_havocc",
        }; 
        class ic51_airborne { label = "Airborne";};
		class ic51_airborne_biscuit { label = "Biscuit";};
        class ic51_airborne_lucifer { label = "Lucifer";};
		class ic51_airborne_crys { label = "Crys";};
        class ic51_airborne_rook { label = "Rook";};
        class ic51_airborne_nitro { label = "Nitro";};
        class ic51_airborne_floyd { label = "Floyd";};
        class ic51_airborne_havocc { label = "Havocc";};
      };
    };
	class ic51_trooper_helmet_arf {
      label  = "[51st] ARF Helmets";
      author = AUTHOR;
      options[] = {"camo"};                
      class camo {                        
        values[] = 
        {
            "ic51_arf",
            "ic51_arf_winter",
            "ic51_arf_jungle",
            "ic51_arf_desert",
			"ic51_arf_chamber",
            "ic51_arf_church",
            "ic51_arf_ox",
            "ic51_arf_threevo",
            "ic51_arf_matthew",
        };
        class ic51_arf { label = "ARF";};
        class ic51_arf_winter { label = "Winter";};
        class ic51_arf_jungle { label = "Jungle";};
        class ic51_arf_desert { label = "Desert";};
		class ic51_arf_chamber { label = "Chamber";};
        class ic51_arf_church { label = "Church";};
		class ic51_arf_ox { label = "Ox";};
        class ic51_arf_threevo { label = "Threevo";};
        class ic51_arf_matthew { label = "Matthew";};
      };
    };
    class ic51_trooper_helmet_barc {
      label  = "[51st] BARC Helmets";
      author = AUTHOR;
      options[] = {"camo"};                
      class camo {                        
        values[] = 
        {
            "ic51_barc",
            "ic51_barc_ox",
        };
        class ic51_barc { label = "BARC";};
		class ic51_barc_ox { label = "Ox";};
      };
    };
	class ic51_trooper_helmet_katarn {
      label  = "[51st] Katarn Helmets";
      author = AUTHOR;
      options[] = {"camo"};                
      class camo {                        
        values[] = 
        {
            "ic51_katarn_helm",
			"ic51_katarn_helm_doss",
            "ic51_katarn_helm_gary",
            "ic51_katarn_helm_imortal",
            "ic51_katarn_helm_cyclone",
        };
        class ic51_katarn_helm { label = "Base Katarn";};
		class ic51_katarn_helm_doss { label = "Doss";};
        class ic51_katarn_helm_gary { label = "Gary";};
		class ic51_katarn_helm_imortal { label = "Immortal";};
        class ic51_katarn_helm_cyclone { label = "Cyclone";};
      };
    };
	class ic51_trooper_helmet_customs {
      label  = "[51st] Trooper Custom Helmets";
      author = AUTHOR;
      options[] = {"camo"};                
      class camo {                        
        values[] = 
        {
            "ic51_p1_mando",
            "ic51_p2_mini",
			"ic51_p2_clips",
			"ic51_p2_law",
            "ic51_p2_barbie",
            "ic51_p2_fulcrum",
			"ic51_p2_ronin",
            "ic51_p2_mortem",
			"ic51_p2_atticus",
			"ic51_p2_iroh",
            "ic51_p2_ape",
            "ic51_p2_kane",
			"ic51_p2_atlas",
			"ic51_p2_doc",
			"ic51_p2_blaze",
            "ic51_p2_ringer",
            "ic51_p2_g3",
            "ic51_p2_k",
            "ic51_p2_freelancer",
            "ic51_p2_apostle",
            "ic51_p2_growler",
            "ic51_p2_rodeo",
            "ic51_p2_jinx",
        };
		class ic51_p1_mando { label = "Mando";};
        class ic51_p2_mini { label = "Mini";};
		class ic51_p2_clips { label = "Clips";};
		class ic51_p2_law { label = "Law";};
		class ic51_p2_barbie { label = "Barbie";};
        class ic51_p2_fulcrum { label = "Fulcrum";};
		class ic51_p2_ronin { label = "Ronin";};
        class ic51_p2_mortem { label = "Mortem";};
		class ic51_p2_atticus { label = "Atticus";};
		class ic51_p2_iroh { label = "Iroh";};
		class ic51_p2_ape { label = "Ape";};
        class ic51_p2_kane { label = "Kane";};
		class ic51_p2_atlas { label = "Atlas";};
		class ic51_p2_doc { label = "Doc";};
		class ic51_p2_blaze { label = "Blaze";};
        class ic51_p2_ringer { label = "Ringer";};
        class ic51_p2_g3 { label = "G3";};
        class ic51_p2_k { label = "K";};
        class ic51_p2_freelancer { label = "Freelancer";};
        class ic51_p2_apostle { label = "Apostle";};
        class ic51_p2_growler { label = "Growler";};
        class ic51_p2_rodeo { label = "Rodeo";};
        class ic51_p2_jinx { label = "Jinx";};
      };
    };
	//vests
	class ic51_trooper_vests{
      label  = "[51st] Trooper Vests";
      author = AUTHOR;
      options[] = {"camo"};                
      class camo {                        
        values[] = 
        {
            "ic51_vest_base",
			"ic51_vest_at",
            "ic51_vest_medic",
			"ic51_vest_heavy",
            "ic51_vest_assault",
			"ic51_vest_engineer",
            "ic51_vest_poncho",
            "ic51_vest_holster",
			"ic51_vest_dual_holster",
            "ic51_vest_knife_holster",
        };
        class ic51_vest_base { label = "Trooper";};
		class ic51_vest_at { label = "AT";};
        class ic51_vest_medic { label = "Medic";};
		class ic51_vest_heavy { label = "Heavy";};
        class ic51_vest_assault { label = "Assault";};
		class ic51_vest_engineer { label = "Engineer";};
		class ic51_vest_poncho { label = "Poncho";};
        class ic51_vest_holster { label = "Holster";};
		class ic51_vest_dual_holster { label = "Dual Holster";};
        class ic51_vest_knife_holster { label = "Knife Holster";};
      };
    };
	class ic51_arc_vests{
      label  = "[51st] ARC Vests";
      author = AUTHOR;
      options[] = {"camo"};                
      class camo {                        
        values[] = 
        {
            "ic51_vest_alpha_arc",
			"ic51_vest_arc",
            "ic51_vest_arc_fulcrum",
            "ic51_vest_arc_jinx",
        };
        class ic51_vest_alpha_arc { label = "Alpha ARC";};
		class ic51_vest_arc { label = "ARC";};
        class ic51_vest_arc_fulcrum { label = "Fulcrum";};
        class ic51_vest_arc_jinx { label = "Jinx";};
      };
    };
	class ic51_trooper_vest_katarn {
      label  = "[51st] Katarn Vests";
      author = AUTHOR;
      options[] = {"camo"};                
      class camo {                        
        values[] = 
        {
			"ic51_katarn_vest_basic_demo",
			"ic51_katarn_vest_basic_leader",
			"ic51_katarn_vest_basic_tech",
			"ic51_katarn_vest_basic_sniper",
            "ic51_katarn_vest_gary",
            "ic51_katarn_vest_imortal",
        };
		class ic51_katarn_vest_basic_demo { label = "Demo";};
		class ic51_katarn_vest_basic_leader { label = "Team Lead";};
		class ic51_katarn_vest_basic_tech { label = "Tech";};
		class ic51_katarn_vest_basic_sniper { label = "Sniper";};
        class ic51_katarn_vest_gary { label = "Gary";};
		class ic51_katarn_vest_imortal { label = "Immortal";};
      };
    };
    class ic51_trooper_nvg_wp{
      label = "[51st] Night Vision WP";
      author = AUTHOR;
      options[] = {"camo"};                
      class camo {                        
        values[] = 
        {
            "ic51_trooper_nvg",
            "ic51_trooper_nvg_marksmen",
            "ic51_trooper_rangefinder",
            "ic51_trooper_nvg_chip",
            "ic51_trooper_medicalscanner",
            "ic51_trooper_nvg_sunvisor",
        };
        class ic51_trooper_nvg {label = "Macrobinoculars";};
        class ic51_trooper_nvg_marksmen {label = "Marksmen Visor";};
        class ic51_trooper_rangefinder {label = "Range Finder";};
        class ic51_trooper_nvg_chip {label = "NVG Chip";};
        class ic51_trooper_medicalscanner {label = "Medical Scanner";};
        class ic51_trooper_nvg_sunvisor {label = "Sunvisor (Heavy)";};
      };
    };
    class ic51_trooper_nvg_gp{
      label = "[51st] Night Vision GP";
      author = AUTHOR;
      options[] = {"camo"};                
      class camo {                        
        values[] = 
        {
            "ic51_trooper_nvg_gp",
            "ic51_trooper_nvg_marksmen_gp",
            "ic51_trooper_rangefinder_gp",
            "ic51_trooper_nvg_chip_gp",
            "ic51_trooper_medicalscanner_gp",
            "ic51_trooper_nvg_sunvisor_gp",
        };
        class ic51_trooper_nvg_gp {label = "Macrobinoculars";};
        class ic51_trooper_nvg_marksmen_gp {label = "Marksmen Visor";};
        class ic51_trooper_rangefinder_gp {label = "Range Finder";};
        class ic51_trooper_nvg_chip_gp {label = "NVG Chip";};
        class ic51_trooper_medicalscanner_gp {label = "Medical Scanner";};
        class ic51_trooper_nvg_sunvisor_gp {label = "Sunvisor (Heavy)";};
      };
    };
  };
  //backpacks
   class CfgVehicles{
    class ic51_trooper_backpacks {
      label  = "[51st] Trooper Backpacks";
      author = AUTHOR;
      options[] = {"camo"};
      class camo {
        values[] = 
        {
            "ic51_backpack_base",
            "ic51_backpack_at",
            "ic51_backpack_heavy",
            "ic51_backpack_marksmen",
            "ic51_backpack_medic",
            "ic51_backpack_engineer",
            "ic51_backpack_radio",
            "ic51_backpack_mini_radio",
            "ic51_backpack_arf",
            "ic51_backpack_pilot",
			"ic51_backpack_respirator",
			"ic51_backpack_jumppack",
			"ic51_backpack_arc",
			"ic51_backpack_zeus"
        };
        class ic51_backpack_base { label = "Basic";};
        class ic51_backpack_at { label = "AT";};
        class ic51_backpack_heavy { label = "Heavy";};
		class ic51_backpack_marksmen { label = "Marksmen";};
        class ic51_backpack_medic { label = "Medic";};
		class ic51_backpack_engineer { label = "Engineer";};
        class ic51_backpack_radio { label = "Radio LR";};
        class ic51_backpack_mini_radio { label = "Mini Radio";};
        class ic51_backpack_arf { label = "ARF";};
        class ic51_backpack_pilot { label = "Pilot";};
		class ic51_backpack_respirator { label = "Respirator";};
		class ic51_backpack_jumppack { label = "Jump Pack";};
		class ic51_backpack_arc { label = "ARC";};	
		class ic51_backpack_zeus { label = "Zeus";};	
      };
    };
	class ic51_katarn_backpacks {
      label  = "[51st] Katarn Backpacks";
      author = AUTHOR;
      options[] = {"camo"};
      class camo {
        values[] = 
        {
            "ic51_katarn_backpack",
			"ic51_katarn_backpack_doss",
            "ic51_katarn_backpack_gary",
            "ic51_katarn_backpack_imortal",
        };
        class ic51_katarn_backpack { label = "Base Katarn";};
		class ic51_katarn_backpack_doss { label = "Doss";};
        class ic51_katarn_backpack_gary { label = "Gary";};
		class ic51_katarn_backpack_imortal { label = "Immortal";};
      };
   };
};
    //Facewear
	class CfgGlasses{
     class ic51_trooper_faceware_rank {
      label  = "[51st] Rank Faceware";
      author = AUTHOR;
      options[] = {"camo"};
      class camo {
        values[] = 
        {
            "ic51_face_base",
            "ic51_face_corporal",
            "ic51_face_corporal_two",
            "ic51_face_sergeant",
            "ic51_face_sergeant_two",
            "ic51_face_command",
            "ic51_face_arc",
        };
        class ic51_face_base { label = "P2 Interior";};
        class ic51_face_corporal { label = "Corporal";};
        class ic51_face_corporal_two { label = "Corporal #2";};
		class ic51_face_sergeant { label = "Sergeant";};
        class ic51_face_sergeant_two { label = "Sergeant #2";};
		class ic51_face_command { label = "Command";};
		class ic51_face_arc { label = "ARC";};
      };
     };
     class ic51_trooper_faceware_qual {
      label  = "[51st] Qual Faceware";
      author = AUTHOR;
      options[] = {"camo"};
      class camo {
        values[] = 
        {
            "ic51_face_heavy",
            "ic51_face_at",
            "ic51_face_marksmen",
			"ic51_face_medic_t2",
			"ic51_face_medic_t3",
			"ic51_face_grenadier",
			"ic51_face_assault",
			"ic51_face_recon",
            "ic51_face_pilot",
        };
        class ic51_face_heavy { label = "Heavy";};
        class ic51_face_at { label = "AT";};
        class ic51_face_marksmen { label = "Marksmen";};
		class ic51_face_medic_t2 { label = "Medic T2";};
		class ic51_face_medic_t3 { label = "Medic T3";};
		class ic51_face_grenadier { label = "Grenadier";};	
		class ic51_face_assault { label = "Assault";};
		class ic51_face_recon { label = "Recon Harness";};
        class ic51_face_pilot { label = "Pilot";};
      };
     };
      class ic51_trooper_faceware_custom {
      label  = "[51st] Custom Faceware";
      author = AUTHOR;
      options[] = {"camo"};
      class camo {
        values[] = 
        {
            "ic51_face_iroh",
            "ic51_face_atticus",
            "ic51_face_fulcrum",
            "ic51_face_jinx",
        };
        class ic51_face_iroh { label = "Iroh";};
        class ic51_face_atticus { label = "Atticus";};
        class ic51_face_fulcrum { label = "Fulcrum";};
		class ic51_face_jinx { label = "Jinx";};
     };
    };
    };
};
