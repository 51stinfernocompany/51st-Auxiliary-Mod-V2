// DC-15SA
class IDA_Blaster_Cell_Power2_20Rnd_Blue;
class ic51_dc15sa_mag : IDA_Blaster_Cell_Power2_20Rnd_Blue {
    author = AUTHOR;
    BaseWeapon = "ic51_dc15sa_mag";
    displayName = "[51st] DC-15SA Energy Cell";
    displayNameShort = "DC-15SA Energy Cell";
    count = 200;
    SCOPE_PUBLIC;
};
class ic51_dc15sa_stealth_mag : ic51_dc15sa_mag {
    author = AUTHOR;
    BaseWeapon = "ic51_dc15sa_mag";
    displayName = "[51st] DC-15SA Stealth Energy Cell";
    displayNameShort = "DC-15SA Energy Cell";
    descriptionShort = "Low on Ammo, but silent and deadly.";
    initSpeed = 340;
    count = 42;
    ammo = "ic51_dc15sa_stealth_ammo";
    SCOPE_PUBLIC;
};


// DC-17
class IDA_Blaster_Cell_Power4_10Rnd_Blue;
class ic51_dc17_mag : IDA_Blaster_Cell_Power4_10Rnd_Blue {
    author = AUTHOR;
    BaseWeapon = "ic51_dc17_mag";
    displayName = "[51st] DC-17 Mag";
    count = 50;
    SCOPE_PUBLIC;
};

//DC-21
class ic51_dc21_mag : IDA_Blaster_Cell_Power4_10Rnd_Blue {
    author = AUTHOR;
    BaseWeapon = "ic51_dc21_mag";
    displayName = "[51st] DC-21 Mag";
    count = 50;
    SCOPE_PUBLIC;
};
