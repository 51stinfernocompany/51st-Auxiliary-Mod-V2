// DC-15x, Firepuncher 773FP
class IDA_Blasterbolt_Power5_Blue;
class ic51_blasterbolt_dc15x : IDA_Blasterbolt_Power5_Blue {
    author = AUTHOR;
    JLTS_isEMPAmmo = 0;
    coefGravity = 0;
    airFriction = 0;
    hit = 25;
};

class ic51_blasterbolt_firepuncher : ic51_blasterbolt_dc15x {
    hit = 69;
    thrust = 600;
    thrustTime = 0.4;
};

// Valken-38x
class ic51_valken38_ammo : IDA_Blasterbolt_Power5_Blue {
    author = AUTHOR;
    JLTS_isEMPAmmo = 0;
    hit = 15;
};
