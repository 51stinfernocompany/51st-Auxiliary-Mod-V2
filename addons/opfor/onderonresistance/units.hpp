// onderon
class ls_opfor_unit_base;
class ic51_opfor_onderon_base : ls_opfor_unit_base {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "Onderon Rifleman";
    faction="ic51_opfor_onderon";
    editorSubCategory="ic51_opfor_onderons";

    uniformClass = "ls_uniform_pathfinder";
    model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder.p3d";
    hiddenSelections[] = {"camo","camo1","camo2","camo3"};
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\top_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa"};

    speaker = "Male01CHI";
    facewearList[] = {""};

    weapons[] = {"ic51_dc15s", "Throw", "Put"};
    respawnweapons[] = {"ic51_dc15s", "Throw", "Put"};

    magazines[] = {"ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag"};
    respawnmagazines[] = {"ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag"};

    backpack = "";
    linkedItems[] = {"ls_vest_flakJacket_pouches", "ls_helmet_m1", "ItemMap", "ItemWatch"};
    respawnlinkedItems[] = {"ls_vest_flakJacket_pouches", "ls_helmet_m1", "ItemMap", "ItemWatch"};
};

class ic51_opfor_onderon_rifleman : ic51_opfor_onderon_base {
    displayName = "Onderon Rifleman Alt";

    hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
    model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder_r.p3d";
    uniformClass = "ls_uniform_pathfinder_brown_r";
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters\uniforms\pathfinder\data\pants_lightBrown_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\top_navy_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_lightBrown_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_lightBrown_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\rolled_sleeves_navy_co.paa"};

    weapons[] = {"ic51_dc15s", "Throw", "Put"};
    respawnweapons[] = {"ic51_dc15s", "Throw", "Put"};

    magazines[] = {"ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag"};
    respawnmagazines[] = {"ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag"};

    backpack = "";
    linkedItems[] = {"ls_vest_flakJacket_open", "ls_helmet_m1", "G_Bandanna_khk", "ItemMap", "ItemWatch"};
    respawnLinkedItems[] = {"ls_vest_flakJacket_open", "ls_helmet_m1", "G_Bandanna_khk", "ItemMap", "ItemWatch"};
};

class ic51_opfor_onderon_marksmen : ic51_opfor_onderon_base {
    displayName = "Onderon Marksmen";

    hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
    model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder_r.p3d";
    uniformClass = "ls_uniform_pathfinder_navy_r";
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\top_navy_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\rolled_sleeves_navy_co.paa"};

    weapons[] = {"IDA_774CX", "Throw", "Put"};
    respawnWeapons[] = {"IDA_774CX", "Throw", "Put"};

    magazines[] = {"IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red"};
    respawnMagazines[] = {"IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red", "IDA_Blaster_Cell_Power4_10Rnd_Red"};

    backpack = "";
    linkedItems[] = {"ls_vest_flakJacket_pouches_brown", "ls_helmet_jockey", "G_Bandanna_oli", "ItemMap", "ItemWatch", "bipod_01_F_blk"};
    respawnLinkedItems[] = {"ls_vest_flakJacket_pouches_brown", "ls_helmet_jockey", "G_Bandanna_oli", "ItemMap", "ItemWatch", "bipod_01_F_blk"};
};

class ic51_opfor_onderon_autorifle : ic51_opfor_onderon_base {
    displayName = "Onderon Auto-Riflemen";

    hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
    model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder_r.p3d";
    uniformClass = "ls_uniform_pathfinder_r";
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\top_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\rolled_sleeves_co.paa"};

    weapons[] = {"ic51_dc15a", "Throw", "Put"};
    respawnWeapons[] = {"ic51_dc15a", "Throw", "Put"};

    magazines[] = {"ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag"};
    respawnMagazines[] = {"ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag", "ic51_dc15a_mag"};

    backpack = "ls_rebelBackpack_chest_pouch";
    linkedItems[] = {"ls_vest_flakJacket_pouches_brown", "ls_helmet_m1", "ItemMap", "ItemWatch"};
    respawnLinkedItems[] = {"ls_vest_flakJacket_pouches_brown", "ls_helmet_m1", "ItemMap", "ItemWatch"};
};

class ic51_opfor_onderon_heavy: ic51_opfor_onderon_base {
    displayName = "Onderon Heavy Gunner";

    hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
    model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder_r.p3d";
    uniformClass = "ls_uniform_pathfinder_navy_alt_r";
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters\uniforms\pathfinder\data\pants_navy_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\top_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_navy_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_navy_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\rolled_sleeves_co.paa"};

    weapons[] = {"IDA_T21", "Throw", "Put"};
    respawnWapons[] = {"IDA_T21", "Throw", "Put"};

    magazines[] = {"IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red"};
    respawnmagazines[] = {"IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red"};

    backpack = "IDA_Imperial_Backpack_Straps";
    linkedItems[] = {"ls_vest_flakJacket_brown", "ls_helmet_m1", "G_Bandanna_khk", "ItemMap", "ItemWatch"};
    respawnLinkedItems[] = {"ls_vest_flakJacket_brown", "ls_helmet_m1", "G_Bandanna_khk", "ItemMap", "ItemWatch"};
};

class ic51_opfor_onderon_commando : ic51_opfor_onderon_base {
    displayName = "Onderon Commando";

    uniformClass = "ls_uniform_pathfinder";
    model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder.p3d";
    hiddenSelections[] = {"camo","camo1","camo2","camo3"};
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\top_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa","\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa"};

    weapons[] = {"ic51_dc15s", "Throw", "Put"};
    respawnWeapons[] = {"ic51_dc15s", "Throw", "Put"};

    magazines[] = {"ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag"};
    respawnMagazines[] = {"ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag", "ic51_dc15s_mag"};

    backpack = "JMSLLTE_back_mimbcover_v1";
    linkedItems[] = {"JMSLLTE_Scum_mimbH_armor", "ls_helmet_m1_light", "ItemMap", "ItemWatch"};
    respawnLinkedItems[] = {"JMSLLTE_Scum_mimbH_armor", "ls_helmet_m1_light", "ItemMap", "ItemWatch"};
};
