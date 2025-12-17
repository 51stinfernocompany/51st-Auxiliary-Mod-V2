// B2

class ls_droid_b2;
class ic51_opfor_unit_b2_standard : ls_droid_b2
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "B2 Super Battledroid";
    role = "MachineGunner";
    icon = "iconManMG";
    faction="ic51_opfor_cis";
    editorSubCategory="ic51_opfor_battledroids";
    uniformclass = "ic51_opfor_uniform_b2";
    hiddenSelections[] = {"camo_arms","legs","torso"};
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\b2\data\arms_co.paa","\ls\core\addons\characters_droid\uniforms\b2\data\legs_co.paa","\ls\core\addons\characters_droid\uniforms\b2\data\torso_co.paa"};

    weapons[] = {"ic51_opfor_weap_b2","Throw","Put"};
    magazines[] = {"IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};

    respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnMagazines[] = {"IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red"};
    respawnWeapons[] = {"ic51_opfor_weap_b2","Throw","Put"};
    class HitPoints
    {
        class HitFace
        {
            armor = 15;
            material = -1;
            name = "face_hub";
            passThrough = 0.8;
            radius = 0.08;
            explosionShielding = 0.1;
            minimalHit = 0.01;
        };
        class HitNeck: HitFace
        {
            material = -1;
            name = "neck";
            passThrough = 0.8;
            radius = 0.1;
            explosionShielding = 0.5;
            minimalHit = 0.01;
        };
        class HitHead: HitNeck
        {
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
            material = -1;
            name = "legs";
            passThrough = 1;
            radius = 0.14;
            explosionShielding = 3;
            visual = "injury_legs";
            minimalHit = 0.01;
            depends = "0";
        };
        class HitLeftLeg : HitLegs
        {
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
        class HitLeftArm : HitRightLeg
        {
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
    };
    armor = 13;
    armorStructural = 2;
    explosionShielding = 0.4;
    minTotalDamageThreshold = 0.001;
    impactDamageMultiplier = 0.90;
};

// B2 -- Static

class ic51_opfor_unit_b2_static : ic51_opfor_unit_b2_standard {
    displayName = "B2 Super Battledroid (Static)";
};

// Droidekas

class 3AS_Deka_Static;
class ic51_opfor_unit_droideka : 3AS_Deka_Static
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "Droideka";
    faction="ic51_opfor_cis";
    editorSubCategory="ic51_opfor_turrets";
    crew = "O_UAV_AI";
};

// J-10 Turrets

class 3AS_J10s_F;
class ic51_opfor_unit_j10s : 3AS_J10s_F
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "J10S Blaster Turret";
    faction="ic51_opfor_cis";
    editorSubCategory="ic51_opfor_turrets";
    crew = "ic51_opfor_unit_b1_standard";
};

// Tactial Droids

class 3AS_CIS_TS_F;
class ic51_opfor_unit_tactialdroid : 3AS_CIS_TS_F
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "T-Series Droid";
    faction="ic51_opfor_cis";
    editorSubCategory="ic51_opfor_battledroids";

    weapons[] = {"ic51_opfor_weap_e5","Throw","Put"};
    magazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};

    respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnMagazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd"};
    respawnWeapons[] = {"ic51_opfor_weap_e5","Throw","Put"};
};
