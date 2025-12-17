class ls_droid_b1;
class CLASS(opfor_unit_b1_standard) : ls_droid_b1
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "B1 Battledroid";
    faction="ic51_opfor_cis";
    editorSubCategory="ic51_opfor_battledroids";
    uniformclass = "ic51_opfor_uniform_b1";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\b1\data\camo1_co.paa","\ls\core\addons\characters_droid\uniforms\b1\data\camo2_co.paa"};

    weapons[] = {"ic51_opfor_weap_e5","Throw","Put"};
    magazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd","ic51_SmokeWhite"};
    linkedItems[] = {"ic51_opfor_helmet_b1","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    backpack = "ic51_opfor_backpack_b1";
    items[] = {};

    respawnLinkedItems[] = {"ic51_opfor_helmet_b1","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnMagazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd","ic51_SmokeWhite"};
    respawnWeapons[] = {"ic51_opfor_weap_e5","Throw","Put"};
    class HitPoints
    {
        class HitFace
        {
            armor = 2;
            material = -1;
            name = "face_hub";
            passThrough = 0.8;
            radius = 0.08;
            explosionShielding = 0.1;
            minimalHit = 0.01;
        };
        class HitNeck: HitFace
        {
            armor = 2;
            material = -1;
            name = "neck";
            passThrough = 0.8;
            radius = 0.1;
            explosionShielding = 0.5;
            minimalHit = 0.01;
        };
        class HitHead: HitNeck
        {
            armor = 2;
            material = -1;
            name = "head";
            passThrough = 0.8;
            radius = 0.2;
            explosionShielding = 0.5;
            minimalHit = 0.01;
            depends = "HitFace max HitNeck";
        };
        class HitPelvis: HitHead
        {
            armor = 8;
            material = -1;
            name = "pelvis";
            passThrough = 0.8;
            radius = 0.24;
            explosionShielding = 3;
            visual = "injury_body";
            minimalHit = 0.01;
            depends = "";
        };
        class HitAbdomen: HitPelvis
        {
            armor = 6;
            material = -1;
            name = "spine1";
            passThrough = 0.8;
            radius = 0.16;
            explosionShielding = 3;
            visual = "injury_body";
            minimalHit = 0.01;
        };
        class HitDiaphragm: HitAbdomen
        {
            armor = 6;
            material = -1;
            name = "spine2";
            passThrough = 0.33;
            radius = 0.18;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.01;
        };
        class HitChest: HitDiaphragm
        {
            armor = 8;
            material = -1;
            name = "spine3";
            passThrough = 0.33;
            radius = 0.18;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.01;
        };
        class HitBody: HitChest
        {
            armor = 6;
            material = -1;
            name = "body";
            passThrough = 1;
            radius = 0;
            explosionShielding = 6;
            visual = "injury_body";
            minimalHit = 0.01;
            depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
        };
        class HitArms: HitBody
        {
            armor = 6;
            material = -1;
            name = "arms";
            passThrough = 1;
            radius = 0.1;
            explosionShielding = 3;
            visual = "injury_hands";
            minimalHit = 0.01;
            depends = "0";
        };
        class HitHands: HitArms
        {
            armor = 6;
            material = -1;
            name = "hands";
            passThrough = 1;
            radius = 0.1;
            explosionShielding = 1;
            visual = "injury_hands";
            minimalHit = 0.01;
            depends = "HitArms";
        };
        class HitLegs: HitHands
        {
            armor = 6;
            material = -1;
            name = "legs";
            passThrough = 1;
            radius = 0.14;
            explosionShielding = 3;
            visual = "injury_legs";
            minimalHit = 0.01;
            depends = "0";
        };
        class Incapacitated: HitLegs
        {
            armor = 6;
            material = -1;
            name = "body";
            passThrough = 1;
            radius = 0;
            explosionShielding = 3;
            visual = "";
            minimalHit = 0;
            depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
        };
        class HitLeftArm
        {
            armor = 6;
            material = -1;
            name = "hand_l";
            passThrough = 1;
            radius = 0.08;
            explosionShielding = 3;
            visual = "injury_hands";
            minimalHit = 0.01;
        };
        class HitRightArm: HitLeftArm
        {
            name = "hand_r";
        };
        class HitLeftLeg
        {
            armor = 6;
            material = -1;
            name = "leg_l";
            passThrough = 1;
            radius = 0.1;
            explosionShielding = 3;
            visual = "injury_legs";
            minimalHit = 0.01;
        };
        class HitRightLeg: HitLeftLeg
        {
            name = "leg_r";
        };
    };
    armor = 3;
    armorStructural = 4;
    explosionShielding = 0.4;
    minTotalDamageThreshold = 0.001;
    impactDamageMultiplier = 0.2;
};

// General Classes

class ic51_opfor_unit_b1_squadlead : ic51_opfor_unit_b1_standard
{
    displayName = "B1 Battledroid (Squad Leader)";
    role = "Rifleman";
    icon = "iconManLeader";

    uniformclass = "ic51_opfor_uniform_b1_squadlead";
    linkedItems[] = {"ic51_opfor_helmet_b1_squadlead","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    magazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd","ic51_ThermalDetonator","ic51_SmokeWhite","ic51_SmokeWhite"};
    respawnMagazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd","ic51_ThermalDetonator","ic51_SmokeWhite","ic51_SmokeWhite"};
    items[] = {};
    respawnLinkedItems[] = {"ic51_opfor_helmet_b1_squadlead","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\b1\data\officer_camo1_co.paa","\ls\core\addons\characters_droid\uniforms\b1\data\camo2_co.paa"};
};


class ic51_opfor_unit_b1_heavy: ic51_opfor_unit_b1_standard
{
    displayName = "B1 Battledroid (Heavy)";
    role = "MachineGunner";
    icon = "iconManMG";

    weapons[] = {"ic51_opfor_weap_e5c","Throw","Put"};
    magazines[] = {"IDA_Blaster_Cell_Power3_60Rnd_Red"};
    linkedItems[] = {"ic51_opfor_helmet_b1","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};

    respawnLinkedItems[] = {"ic51_opfor_helmet_b1","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnMagazines[] = {"IDA_Blaster_Cell_Power3_60Rnd_Red"};
    respawnWeapons[] = {"ic51_opfor_weap_e5c","Throw","Put"};
};

class ic51_opfor_unit_b1_at: ic51_opfor_unit_b1_standard
{
    displayName = "B1 Battledroid (AT-Specialist)";
    role = "MissileSpecialist";
    icon = "iconManAT";

    weapons[] = {"ic51_opfor_weap_e5","IDA_RPS6HP","Throw","Put"};
    magazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd","IDA_RPS6_rocket"};
    linkedItems[] = {"ic51_opfor_helmet_b1","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};

    respawnLinkedItems[] = {"ic51_opfor_helmet_b1","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnMagazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd","IDA_RPS6_rocket"};
    respawnWeapons[] = {"ic51_opfor_weap_e5","IDA_RPS6HP","Throw","Put"};
};
class ic51_opfor_unit_b1_marksmen: ic51_opfor_unit_b1_standard
{
    displayName = "B1 Battledroid (Marksmen)";

    weapons[] = {"IDA_774CX","Throw","Put"};
    magazines[] = {"IDA_Blaster_Cell_Power4_10Rnd_Red"};
    linkedItems[] = {"ic51_opfor_helmet_b1","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};

    respawnLinkedItems[] = {"ic51_opfor_helmet_b1","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnMagazines[] = {"IDA_Blaster_Cell_Power4_10Rnd_Red"};
    respawnWeapons[] = {"IDA_774CX","Throw","Put"};
};
class ic51_opfor_unit_b1_shotgun: ic51_opfor_unit_b1_standard
{
    displayName = "B1 Battledroid (Shotgunner)";

    weapons[] = {"IDA_SBB3","Throw","Put"};
    magazines[] = {"IDA_Blaster_Cell_Scatter_6Rnd_Red"};
    linkedItems[] = {"ic51_opfor_helmet_b1","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};

    respawnLinkedItems[] = {"ic51_opfor_helmet_b1","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnMagazines[] = {"IDA_Blaster_Cell_Scatter_6Rnd_Red"};
    respawnWeapons[] = {"IDA_SBB3","Throw","Put"};
};
class ic51_opfor_unit_b1_crew : ic51_opfor_unit_b1_standard
{
    displayName = "B1 Battledroid (Crew)";
    hiddenSelectionsTextures[] = {"ls_armor_redfor\uniform\cis\b1\data\b1_camo1_co.paa","ls_armor_redfor\uniform\cis\b1\data\b1_camo2_co.paa"};
    uniformclass = "ic51_opfor_uniform_b1_crew";
};


// Static B1 (No Pathing)

class ic51_opfor_unit_b1_static : ic51_opfor_unit_b1_standard {
    displayName = "B1 Battledroid (Static)";
};
