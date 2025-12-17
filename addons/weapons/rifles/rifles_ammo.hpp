// DC17M
class IDA_Blasterbolt_Power4_Blue;
class ic51_blasterbolt_overcharged_dc17m : IDA_Blasterbolt_Power4_Blue {
    author = AUTHOR;
    JLTS_isEMPAmmo = 0;
    coefGravity = 0;
    airFriction = 0;
    thrust = 360;
    thrustTime = 0.8;
    timetolive = 14;
    hit = 70;
};
class IDA_Blasterbolt_Power2_Blue;
class ic51_blasterbolt_dc17m : IDA_Blasterbolt_Power2_Blue
{
    author = AUTHOR;
    thrust = 260;
    thrustTime = 1.2;
    timetolive = 10;
};

class IDA_AT_shell;
class ic51_at_shell_dc17M : IDA_AT_shell {
    author = AUTHOR;
    hit = 900;
};

// DC-15A, DC-15S
class IDA_Blasterbolt_Power3_Blue;
class ic51_blasterbolt_dc15a : IDA_Blasterbolt_Power3_Blue
{
    author = AUTHOR;
    thrust = 270;
    thrustTime = 1.2;
    timetolive = 7;
    hit = 13;
};
class ic51_blasterbolt_dc15s : IDA_Blasterbolt_Power2_Blue
{
    author = AUTHOR;
    thrust = 200;
    thrustTime = 1.4;
    timetolive = 4;
    hit = 9;
};

// UGL Ammo
class IDA_HE_LauncherGrenade;
class ic51_he_launchergrenade : IDA_HE_LauncherGrenade {
    author = AUTHOR;
    fuseDistance = 12;
};
