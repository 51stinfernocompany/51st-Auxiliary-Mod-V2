// BXs
class ls_droid_bx;
class ic51_opfor_unit_bx_standard : ls_droid_bx
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "BX Commando Droid";
    faction="ic51_opfor_cis";
    editorSubCategory="ic51_opfor_battledroids";
    uniformclass = "ic51_opfor_uniform_bx";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\bx\data\body_co.paa"};
    
    weapons[] = {"ic51_opfor_weap_e5_bx","Throw","Put"};
    magazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_ThermalDetonator","ic51_SmokeWhite","ic51_SmokeWhite","ic51_SmokeWhite","ic51_SmokeWhite"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    items[] = {};

    respawn[] = {"ls_nvg_invisible"};
    respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnMagazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_opfor_blaster_magazine_p3_40rnd","ic51_ThermalDetonator","ic51_SmokeWhite","ic51_SmokeWhite","ic51_SmokeWhite","ic51_SmokeWhite"};
    respawnWeapons[] = {"ic51_opfor_weap_e5_bx","Throw","Put"};
    class HitPoints
    {
        class HitFace
        {
            armor = 8;
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
    armor = 8;
    armorStructural = 2;
    explosionShielding = 0.4;
    minTotalDamageThreshold = 0.001;
    impactDamageMultiplier = 0.92;
};

