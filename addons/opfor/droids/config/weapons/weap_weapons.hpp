// B1s
class 3AS_E5_F;
class ic51_opfor_weap_e5 : 3AS_E5_F
{
    author = AUTHOR;
    BaseWeapon = "ic51_opfor_weap_e5";
    displayName = "[51st OPFOR] E-5 Carbine";

    SCOPE_HIDDEN;
};
class ic51_opfor_weap_e5_bx : ic51_opfor_weap_e5
{
    BaseWeapon = "ic51_opfor_weap_e5_bx";
    displayName = "[51st OPFOR] E-5 Carbine (BX)";
};
class 3AS_E5C_F;
class ic51_opfor_weap_e5c : 3AS_E5C_F
{
    author = AUTHOR;
    BaseWeapon = "ic51_opfor_weap_e5c";
    displayName = "[51st OPFOR] E-5C Blaster Rifle";
    modes[] = {"FullAuto","Single"};
    SCOPE_HIDDEN;
};

// B2s

class 3AS_DWBlaster_F;
class ic51_opfor_weap_b2 : 3AS_DWBlaster_F
{
    author = AUTHOR;
    BaseWeapon = "ic51_opfor_weap_b2";
    displayName = "[51st OPFOR] B2 Normal Mode";
    magazines[] = {"IDA_Blaster_Cell_Power3_60Rnd_Red"};
    
    SCOPE_HIDDEN;
};
