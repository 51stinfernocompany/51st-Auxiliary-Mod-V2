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

// DC-21
class ShdwCmpny_pistol_DC21_Base;
class ic51_dc21 : ShdwCmpny_pistol_DC21_Base {
    author = AUTHOR;
    BaseWeapon = "ic51_dc21";
    displayName = "[51st] DC-21";
    magazines[] =
        {
        "ic51_dc21_mag",
        "ic51_tracerless_30rnd",
        };
    SCOPE_PUBLIC;
    class WeaponSlotsInfo: WeaponSlotsInfo{
        class MuzzleSlot: MuzzleSlot
        {
            compatibleItems[] = {
                "ic51_dc21_barrel",
                "ic51_dc19_supp"
            };
        };
    };
};

//Vibro Blades
class ShdwCmpny_Vibroblade_r;
class ShdwCmpny_Vibroblade_rotated_r;

class ic51_vibroblade: ShdwCmpny_Vibroblade_r{
    displayName = "[51st] Vibroblade";
};

class ic51_vibroblade_rotated: ShdwCmpny_Vibroblade_rotated_r{
    displayName = "[51st] Vibroblade Reversed";
};
