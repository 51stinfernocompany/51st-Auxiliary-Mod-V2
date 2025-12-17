class H_HelmetO_ViperSP_hex_F; // Vanila helmet, this defines it in our code so we can inherit from it.
class CLASS(p2_helmet_base) : H_HelmetO_ViperSP_hex_F { // Makes our own new class and inherits from the vanlia helmet.
    SCOPE_PUBLIC; // This macro makes it visable for players everywhere. Arsenal, Zeus, etc.
    author = AUTHOR; // This defines the author and uses a macro to define it.
    picture = QPATHTOF(data\51st_logo.paa); // This defines the logo shown in the arsenal and on the weapon, QPATHTOF grabs the directory "\x\ic51\addons\armor\" upto the addon.
    displayName = "[51st] P2 Trooper Helmet #1"; // Defines name in-game.
    hiddenselections[] = {"Camo","visor"}; // Pre-configured in the model (p3d). Helps arma understand the model.
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\helmet_p2\p2_helmet.rvmat),
        "\Indecisive_Armoury_units\REPUBLIC\Clone_P2_Helmet\IDA_P2_Helmet_Visor.rvmat"
    }; // Defines how the model will 'look' through the RVMAT.
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmet_p2\p2_helmet_trooper_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_trooper_co.paa)
    }; // Defines what texture is applied to the model.
    subItems[] = {}; // This allows for the helmet to have inbuilt nightvison/thermal, empty brackets removes aftermentioned function.
    model = "\Indecisive_Armoury_units\REPUBLIC\Clone_P2_Helmet\IDA_Clone_P2_Helmet.p3d"; // Defines model.
    class Iteminfo: HeadgearItem // 
    {
        allowedSlots[] = {801,901,701,605}; // Defines where in the inventory the helmet can be placed.
        hiddenselections[] = {"Camo","visor"}; // Same as the hiddenselections above, just required twice.
        mass = 80; // Defines helmet weight, to both unit carry capacity and inventory capacity (if carried inside inventory)
        modelSides[] = {6}; // Helps arma understand the model.
        uniformModel = "\Indecisive_Armoury_units\REPUBLIC\Clone_P2_Helmet\IDA_Clone_P2_Helmet.p3d"; // Defins model.
        PROTECTION_HELMET; // MACRO to define protection values for the helmet.
    };
};

class ic51_p2_helmet_trooper2 : ic51_p2_helmet_base { 
    displayName = "[51st] P2 Trooper Helmet #2";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_trooper2_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_trooper2_co.paa)
    };
};
class ic51_p2_helmet_corporal : ic51_p2_helmet_base { 
    displayName = "[51st] P2 Corporal Helmet";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_corporal_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_corporal_co.paa)
    };
};
class ic51_p2_helmet_sergeant : ic51_p2_helmet_base { 
    displayName = "[51st] P2 Sergeant Helmet";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_sergeant_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_sergeant_co.paa)
    };
};
class ic51_p2_helmet_command : ic51_p2_helmet_base { 
    displayName = "[51st] P2 Command Helmet";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_command_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_command_co.paa)
    };
};
class ic51_p2_helmet_medic_t2 : ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Medic T2)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_medic_t2_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_medic_t2_co.paa)
    };
};
class ic51_p2_helmet_medic_t3 : ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Medic T3)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_medic_t3_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_medic_t3_co.paa)
    };
};
class ic51_p2_helmet_at : ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (AT)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_at_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_at_co.paa)
    };
};
class ic51_p2_helmet_heavy : ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Heavy)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_heavy_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_heavy_co.paa)
    };
};
class ic51_p2_helmet_marksmen : ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Marksmen)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_marksman_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_marksman_co.paa)
    };
};
class ic51_p2_helmet_sabre1: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Sabre One)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_sabre1_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_sabre1_co.paa)
    };
};
class ic51_p2_helmet_sabre2: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Sabre Two)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_sabre2_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_sabre2_co.paa)
    };
};
class ic51_p2_helmet_sabre3: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Sabre Three)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_sabre3_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_sabre3_co.paa)
    };
};
class ic51_p2_helmet_sabre4: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Sabre Four)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_sabre4_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_sabre4_co.paa)
    };
};
class ic51_p2_helmet_fancy : ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Fancy)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_fancy_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_fancy_co.paa)
    };
};
class ic51_p2_helmet_havoc1: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Havoc One)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_havoc1_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_havoc1_co.paa)
    };
};
class ic51_p2_helmet_havoc2: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Havoc Two)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_havoc2_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_havoc2_co.paa)
    };
};
class ic51_p2_helmet_medic_sabre1: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Sabre One Medic)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_medic_sabre1_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_medic_sabre1_co.paa)
    };
};
class ic51_p2_helmet_medic_sabre2: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Sabre Two Medic)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_medic_sabre2_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_medic_sabre2_co.paa)
    };
};
class ic51_p2_helmet_medic_sabre3: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Sabre Three Medic)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_medic_sabre3_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_medic_sabre3_co.paa)
    };
};
class ic51_p2_helmet_medic_sabre4: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Sabre Four Medic)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_medic_sabre4_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_medic_sabre4_co.paa)
    };
};
class ic51_p2_helmet_medic_havoc1: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Havoc One Medic)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_medic_havoc1_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_medic_havoc1_co.paa)
    };
};
class ic51_p2_helmet_medic_havoc2: ic51_p2_helmet_base { 
    displayName = "[51st] P2 Helmet (Havoc Two Medic)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2\p2_helmet_medic_havoc2_co.paa),
        QPATHTOF(data\helmet_p2\p2_helmet_medic_havoc2_co.paa)
    };
};
