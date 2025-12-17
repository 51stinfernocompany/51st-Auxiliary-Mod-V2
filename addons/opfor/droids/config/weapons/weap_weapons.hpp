// B1s
class IDA_E5;
class ic51_opfor_weap_e5 : IDA_E5
{
    author = AUTHOR;
    BaseWeapon = "ic51_opfor_weap_e5";
    displayName = "[51st OPFOR] E-5 Carbine";
    magazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd", "ic51_opfor_blaster_magazine_ion"};
    SCOPE_HIDDEN;
};
class ic51_opfor_weap_e5_bx : ic51_opfor_weap_e5
{
    BaseWeapon = "ic51_opfor_weap_e5_bx";
    displayName = "[51st OPFOR] E-5 Carbine (BX)";
    magazines[] = {"ic51_opfor_blaster_magazine_p3_40rnd", "ic51_opfor_blaster_magazine_ion"};
};
class IDA_E5C;
class ic51_opfor_weap_e5c : IDA_E5C
{
    author = AUTHOR;
    BaseWeapon = "ic51_opfor_weap_e5c";
    displayName = "[51st OPFOR] E-5C Blaster Rifle";
    magazines[] = {"IDA_Blaster_Cell_Power3_60Rnd_Red"};
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
