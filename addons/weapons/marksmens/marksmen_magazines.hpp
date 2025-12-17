// Valken-38x
class 3AS_10Rnd_EC80_Mag;
class ic51_valken38x_mag : 3AS_10Rnd_EC80_Mag 
{
    author = AUTHOR;
    BaseWeapon = "ic51_valken38x_mag";
    displayName = "[51st] Valken 20Rnd Energy Cell";
    initSpeed=900;
    count = 20;
    ammo = "ic51_valken38_ammo";
    SCOPE_PUBLIC;
};

// Firepuncher 773FP
class IDA_Blaster_Cell_Power3_60Rnd_Blue;
class ic51_773FP_magazine : IDA_Blaster_Cell_Power3_60Rnd_Blue
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15x_magazine";
    descriptionShort = "15 round capacity.";
    displayName = "[51st] 773 FP Magazine";
    ammo = "ic51_blasterbolt_firepuncher";
    count = 10;
    mass = 12;
    SCOPE_PUBLIC;
};

// DC-15x
class IDA_Blaster_Cell_Power4_10Rnd_Blue;
class ic51_dc15x_magazine : IDA_Blaster_Cell_Power4_10Rnd_Blue
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15x_magazine";
    displayName = "[51st] DC15X Magazine";
    descriptionShort = "20 round capacity.";
    ammo = "ic51_blasterbolt_dc15x";
    count = 20;
    SCOPE_PUBLIC;
};
