#define P2_HELMET(var1, var2) class ic51_p2_helmet_##var1 : ic51_p2_helmet_base {  \
    displayName = QUOTE([51st] P2 Helmet ##var2##); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmet_p2\p2_helmet_##var1##_co.paa), \
        QPATHTOF(data\helmet_p2\p2_helmet_##var1##_co.paa) \
    }; \
}

/*
VAR1 = Class/Filename.
VAR2 = DisplayName

Example Usage: 
P2_HELMET(medic_havoc1,(Havoc One Medic));
 MACRO    filename       DisplayName
*/

#define NVG_CUSTOM ace_nightvision_bluRadius = 0.13; \
      ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}}; \
      ace_nightvision_eyeCups = 0; \
      ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa"; \
      ace_nightvision_const_maxBrightness = 0; \
      ace_nightvision_const_minBrightness = -8; \
      ace_nightvision_blur = 0; \
      ace_nightvision_grain = 0; \
      modelOptics = ""; \
      ace_nightvision_radBlur = 0; \
      ace_nightvision_generation = 4

#define PROTECTION_HELMET class HitpointsProtectionInfo \
        { \
            class Face \
            { \
                armor = 10; \
                hitpointName = "HitFace"; \
                PassThrough = 0.08975; \
                visual = "injury_Head"; \
            }; \
            class Head : Face \
            { \
                hitpointName = "HitHead"; \
            }; \
        }

#define UNIT_FACES identityTypes[] = {"LanguageENG_F", "ls_head_clone"}; \
    genericNames = "ls_clone_p2_ct";  \
    facewearList[] = { "" }

#define UNIT_LINKEDITEMS_STANDARD "ItemMap", \
        "ItemCompass", \
        "ItemWatch", \
        "ItemGPS", \
        "ItemRadio" \

#define PROTECTION_UNIT class HitPoints \
    { \
        class HitFace \
        { \
            armor = 1; \
            material = -1; \
            name = "face_hub"; \
            passThrough = 0.8; \
            radius = 0.08; \
            explosionShielding = 0.1; \
            minimalHit = 0.01; \
        }; \
        class HitNeck: HitFace \
        { \
            armor = 1; \
            material = -1; \
            name = "neck"; \
            passThrough = 0.8; \
            radius = 0.1; \
            explosionShielding = 0.5; \
            minimalHit = 0.01; \
        }; \
        class HitHead: HitNeck \
        { \
            armor = 1; \
            material = -1; \
            name = "head"; \
            passThrough = 0.8; \
            radius = 0.2; \
            explosionShielding = 0.5; \
            minimalHit = 0.01; \
            depends = "HitFace max HitNeck"; \
        }; \
        class HitPelvis: HitHead \
        { \
            armor = 8; \
            material = -1; \
            name = "pelvis"; \
            passThrough = 0.8; \
            radius = 0.24; \
            explosionShielding = 3; \
            visual = "injury_body"; \
            minimalHit = 0.01; \
            depends = ""; \
        }; \
        class HitAbdomen: HitPelvis \
        { \
            armor = 6; \
            material = -1; \
            name = "spine1"; \
            passThrough = 0.8; \
            radius = 0.16; \
            explosionShielding = 3; \
            visual = "injury_body"; \
            minimalHit = 0.01; \
        }; \
        class HitDiaphragm: HitAbdomen \
        { \
            armor = 6; \
            material = -1; \
            name = "spine2"; \
            passThrough = 0.33; \
            radius = 0.18; \
            explosionShielding = 6; \
            visual = "injury_body"; \
            minimalHit = 0.01; \
        }; \
        class HitChest: HitDiaphragm \
        { \
            armor = 8; \
            material = -1; \
            name = "spine3"; \
            passThrough = 0.33; \
            radius = 0.18; \
            explosionShielding = 6; \
            visual = "injury_body"; \
            minimalHit = 0.01; \
        }; \
        class HitBody: HitChest \
        { \
            armor = 1000; \
            material = -1; \
            name = "body"; \
            passThrough = 1; \
            radius = 0; \
            explosionShielding = 6; \
            visual = "injury_body"; \
            minimalHit = 0.01; \
            depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; \
        }; \
        class HitArms: HitBody \
        { \
            armor = 6; \
            material = -1; \
            name = "arms"; \
            passThrough = 1; \
            radius = 0.1; \
            explosionShielding = 3; \
            visual = "injury_hands"; \
            minimalHit = 0.01; \
            depends = "0"; \
        }; \
        class HitHands: HitArms \
        { \
            armor = 6; \
            material = -1; \
            name = "hands"; \
            passThrough = 1; \
            radius = 0.1; \
            explosionShielding = 1; \
            visual = "injury_hands"; \
            minimalHit = 0.01; \
            depends = "HitArms"; \
        }; \
        class HitLegs: HitHands \
        { \
            armor = 6; \
            material = -1; \
            name = "legs"; \
            passThrough = 1; \
            radius = 0.14; \
            explosionShielding = 3; \
            visual = "injury_legs"; \
            minimalHit = 0.01; \
            depends = "0"; \
        }; \
        class Incapacitated: HitLegs \
        { \
            armor = 1000; \
            material = -1; \
            name = "body"; \
            passThrough = 1; \
            radius = 0; \
            explosionShielding = 3; \
            visual = ""; \
            minimalHit = 0; \
            depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2"; \
        }; \
        class HitLeftArm \
        { \
            armor = 6; \
            material = -1; \
            name = "hand_l"; \
            passThrough = 1; \
            radius = 0.08; \
            explosionShielding = 3; \
            visual = "injury_hands"; \
            minimalHit = 0.01; \
        }; \
        class HitRightArm: HitLeftArm \
        { \
            name = "hand_r"; \
        }; \
        class HitLeftLeg \
        { \
            armor = 6; \
            material = -1; \
            name = "leg_l"; \
            passThrough = 1; \
            radius = 0.1; \
            explosionShielding = 3; \
            visual = "injury_legs"; \
            minimalHit = 0.01; \
        }; \
        class HitRightLeg: HitLeftLeg \
        { \
            name = "leg_r"; \
        }; \
    }; \
    armor = 2; \
    armorStructural = 4; \
    explosionShielding = 0.4; \
    minTotalDamageThreshold = 0.001; \
    impactDamageMultiplier = 0.5

#define UNIT_ITEMS(var1,var2,var3,var4) \
    UNIT_FACES; \
    Backpack = var1; \
    items[] = \
    { \
        "" \
    }; \
    respawnItems[] = \
    { \
        "" \
    }; \
    linkedItems[]= \
    { \
        var2, \
        UNIT_LINKEDITEMS_STANDARD \
    }; \
    respawnLinkedItems[]= \
    { \
        var2, \
        UNIT_LINKEDITEMS_STANDARD \
    }; \
    weapons[]= \
    { \
        var3, \
        "Throw", \
        "Put" \
    }; \
    respawnWeapons[]= \
    { \
        var3, \
        "Throw", \
        "Put" \
    }; \
    magazines[]= \
    { \
        var4 \
    }; \
    respawnMagazines[]= \
    { \
        var4 \
    }
