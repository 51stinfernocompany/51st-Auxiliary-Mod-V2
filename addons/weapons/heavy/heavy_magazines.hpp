// Z-6
class IDA_Blaster_Cell_Power1_300Rnd_Blue;
class ic51_z6_mag : IDA_Blaster_Cell_Power1_300Rnd_Blue {
    author = AUTHOR;
    BaseWeapon = "ic51_z6_mag";
    displayName = "[51st] Z-6 Energy Cell";
    SCOPE_PUBLIC;
    
};
class ic51_z6_mag_explosive : ic51_z6_mag
{
    BaseWeapon = "ic51_z6_mag_explosive";
    displayName = "[51st] Z-6 Explosive Magazine (3rd)";
    displayNameShort = "Explosive Mag (3rd)";
    ammo = "Cannon_30mm_HE_Plane_CAS_02_F";
    count = 3;
};

class IDA_Blaster_Cell_Power2_20Rnd_Blue;
class ic51_dc15le_mag : IDA_Blaster_Cell_Power2_20Rnd_Blue
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15le_mag";
    displayName = "[51st] DC-15LE Energy Cell (150)";
    displayNameShort = "DC-15LE Energy Cell (150)";
    count = 150;
    mass = 12;
    SCOPE_PUBLIC;
};
class ShdwCmpny_DC15A_LE_HE_3_Mag; 
class ic51_dc15le_he_mag: ShdwCmpny_DC15A_LE_HE_3_Mag{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15le_mag";
    displayName = "[51st] Explosive Charge (3rnd)";
    displayNameShort = "Explosive Charge (3rnd)";
    count = 3;
    SCOPE_PUBLIC;
};
class ic51_dc42h_mag : IDA_Blaster_Cell_Power2_20Rnd_Blue
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15le_mag";
    displayName = "[51st] DC-42H Energy Cell (200)";
    displayNameShort = "DC-42H Energy Cell (200)";
    count = 200;
    initSpeed = 417;
    mass = 16;
    SCOPE_PUBLIC;
};

class ic51_dlt17_mag : IDA_Blaster_Cell_Power2_20Rnd_Blue
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15le_mag";
    displayName = "[51st] DLT-17 Energy Cell (200)";
    displayNameShort = "DLT-17 Energy Cell (200)";
    count = 200;
    initSpeed = 417;
    mass = 16;
    SCOPE_PUBLIC;
};

/*
// DLT-15
class ic51_dlt15_mag : IDA_Blaster_Cell_Power1_300Rnd_Blue {
    author = AUTHOR;
    BaseWeapon = "ic51_dlt15_mag";
    displayName = "[51st] DLT-15 Energy Cell (300)";
    displayNameShort = "DLT-15 Energy Cell (300)";
    SCOPE_PUBLIC;
    
};
*/
