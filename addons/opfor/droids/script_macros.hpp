// Units
/*
var1 = Classname, Displayname.
var2 = Texture name without camo number and _co
var3 = Backpack full classname.
var4 = Helmet full classname.
var5 = Magazine full classname.
var6 = Weapon full name.

Example:
OPF_UNIT_B1(Squad Leader,sl,ic51_opfor_backpack_b1,ic51_opfor_helmet_b1,ic51_opfor_blaster_magazine_p3_40rnd,ic51_opfor_weap_e5)

*/

#define OPF_UNIT_B1(var1,var2,var3,var4,var5,var6) \
class ic51_opfor_unit_b1_##var1 : ic51_opfor_unit_b1_standard { \
    displayName = QUOTE(B1 Battledroid (##var1##)); \
    editorSubCategory="ic51_opfor_battledroids"; \
    hiddenSelectionsTextures[] = {QUOTE(\x\ic51\addons\opfor\droids\data\b1\##var2##1_co.paa),QUOTE(\x\ic51\addons\opfor\droids\data\b1\##var2##2_co.paa)}; \
    backpack = QUOTE(var3); \
    respawnLinkedItems[] = {QUOTE(var4),"ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"}; \
    linkedItems[] = {QUOTE(var4),"ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"}; \
    respawnMagazines[] = {QUOTE(var5),"ic51_SmokeWhite"}; \
    magazines[] = {QUOTE(var5),"ic51_SmokeWhite"}; \
    respawnWeapons[] = {QUOTE(var6),"Throw","Put"}; \
    weapons[] = {QUOTE(var6),"Throw","Put"}; \
}
