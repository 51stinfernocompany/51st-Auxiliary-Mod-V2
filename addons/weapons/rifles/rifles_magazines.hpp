// DC15A
class IDA_Blaster_Cell_Power3_40Rnd_Blue;
class ic51_dc15a_mag : IDA_Blaster_Cell_Power3_40Rnd_Blue {
    author = AUTHOR;
    BaseWeapon = "ic51_dc15a_mag";
    displayName = "[51st] DC-15A Energy Cell";
    displayNameShort = "DC-15A Energy Cell";
    descriptionShort = "30 round capacity.";

    ammo = "ic51_blasterbolt_dc15a";
    count = 30;
    SCOPE_PUBLIC;
};

// DC15S
class ic51_dc15s_mag : IDA_Blaster_Cell_Power3_40Rnd_Blue {
    author = AUTHOR;
    BaseWeapon = "ic51_dc15s_mag";
    displayName = "[51st] DC-15S Energy Cell";
    displayNameShort = "DC-15S Energy Cell";
    ammo = "ic51_blasterbolt_dc15s";
    SCOPE_PUBLIC;
};

// DC17M
class IDA_Blaster_Clip_Power4_5Rnd_Blue;
class ic51_dc17m_SNR_mag : IDA_Blaster_Clip_Power4_5Rnd_Blue {
    author = AUTHOR;
    BaseWeapon = "ic51_dc17m_SNR_mag";
    displayName = "[51st] 5Rnd Heavy Energy Clip";
    ammo = "ic51_blasterbolt_overcharged_dc17m";
    initSpeed = 1300;
    SCOPE_PUBLIC;
};
class IDA_Blaster_Clip_Power2_60Rnd_Blue;
class ic51_dc17m_standard_mag : IDA_Blaster_Clip_Power2_60Rnd_Blue {
    author = AUTHOR;
    BaseWeapon = "ic51_dc17m_standard_mag";
    displayName = "[51st] Low-Power Energy Clip";
    ammo = "ic51_blasterbolt_dc17m";
    initSpeed = 900;
    SCOPE_PUBLIC;
};
class IDA_Blaster_Clip_Grenade;
class ic51_dc17m_AT_mag : IDA_Blaster_Clip_Grenade {
    author = AUTHOR;
    BaseWeapon = "ic51_dc17m_AT_mag";
    ammo = "ic51_at_shell_dc17M";
    displayName = "[51st] T-31 Deuterium-Core Anti-Armor Detonator";
    SCOPE_PUBLIC;
};

class 3AS_40Rnd_EC40_Mag;
class ic51_dc15c_mag : 3AS_40Rnd_EC40_Mag
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15c_mag";
    displayName = "[51st] DC-15C Energy Cell";
    displayNameShort = "DC-15C Energy Cell";
    descriptionShort = "40 round capacity.";
    ammo = "ic51_blasterbolt_dc15a";
    SCOPE_PUBLIC;
};

// Stun Rounds
class JLTS_stun_mag_short;
class ic51_stun_mag_short : JLTS_stun_mag_short {
    author = AUTHOR;
    BaseWeapon = "ic51_stun_mag_short";
    displayName = "[51st] Stun Mag Short";
    displayNameShort = "Stun Mag Short";
    SCOPE_PUBLIC;
};
class JLTS_stun_mag_long;
class ic51_stun_mag_long : JLTS_stun_mag_long {
    author = AUTHOR;
    BaseWeapon = "ic51_stun_mag_long";
    displayName = "[51st] Stun Mag Long";
    displayNameShort = "Stun Mag Long";
    SCOPE_PUBLIC;
};

// UGL
// To-do:
// Increase mass 
// Original mass * 1.6
class IDA_HE_LauncherGrenade;
class ic51_HE_LauncherGrenade : IDA_HE_LauncherGrenade {
    displayName="[51st] Impact Grenade (3)";
    descriptionShort="Impact grenade";
    count = 3;
    ammo = "ic51_he_launchergrenade";
};
class IDA_Smoke_LauncherGrenade;
class ic51_Smoke_LauncherGrenade : IDA_Smoke_LauncherGrenade {
    displayName="[51st] Smoke Grenade";
    displayNameShort="[51st] White smoke";
    descriptionShort="Impact smoke grenade";
    count = 5;
};
class IDA_SmokeRed_LauncherGrenade;
class ic51_SmokeRed_LauncherGrenade : IDA_SmokeRed_LauncherGrenade {
    displayName="[51st] Smoke Grenade (Red)";
    displayNameShort="[51st] Red Smoke";
    descriptionShort="Red impact smoke grenade";
    count = 3;
};
class IDA_SmokeGreen_LauncherGrenade;
class ic51_SmokeGreen_LauncherGrenade : IDA_SmokeGreen_LauncherGrenade {
    displayName="[51st] Smoke Grenade (Green)";
    displayNameShort="[51st] Green Smoke";
    descriptionShort="Green impact smoke grenade";
    count = 3;
};
class IDA_SmokeBlue_LauncherGrenade;
class ic51_SmokeBlue_LauncherGrenade : IDA_SmokeBlue_LauncherGrenade {
    displayName="[51st] Smoke grenade (Blue)";
    displayNameShort="[51st] Blue Smoke";
    descriptionShort="Blue impact smoke grenade";
    count = 3;
};
class IDA_SmokePurple_LauncherGrenade;
class ic51_SmokePurple_LauncherGrenade : IDA_SmokePurple_LauncherGrenade {
    displayName="[51st] Smoke grenade (Purple)";
    displayNameShort="[51st] Purple Smoke";
    descriptionShort="Purple impact smoke grenade";
    count = 3;
};

class ic51_Ultra_Premium_HE_LauncherGrenade : ic51_HE_LauncherGrenade {
    displayName="[51st] Ultra Premium Grenade (Zeus)";
    descriptionShort="Grenade? NO, I DON'T THINK SO";
    displayNameShort="Theres no arming distance...";
    count = 1;
    ammo = "Sh_155mm_AMOS";
    initSpeed = 210;
    mass = 600;
};

// Zeus
class ic51_Smoke_LauncherGrenade_zeus : IDA_Smoke_LauncherGrenade {
    displayName="[51st Zeus] Smoke Grenade (20)";
    displayNameShort="[51st Zeus] White smoke (20)";
    descriptionShort="Impact smoke grenade";
    count = 20;
};
