// DC-15SA
class IDA_DC15P;
class ic51_dc15sa : IDA_DC15P 
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15sa";
    displayName = "[51st] DC-15SA";
    magazines[] = {"ic51_dc15sa_mag","ic51_dc15sa_stealth_mag"};
    SCOPE_PUBLIC;
};

// DC-17
class IDA_DC17;
class ic51_dc17 : IDA_DC17 {
    author = AUTHOR;
    BaseWeapon = "ic51_dc17";
    displayName = "[51st] DC-17";
    magazines[] =
        {
        "ic51_dc17_mag",
        "ACE_40mm_Flare_green",
        "ACE_40mm_Flare_red"
        };
    SCOPE_PUBLIC;
};
