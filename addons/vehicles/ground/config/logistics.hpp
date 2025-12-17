// AT-AP
class 3AS_ATAP_Base;
class ic51_atap: 3AS_ATAP_Base
{
    displayName="[51st] AT-AP";
    VEHICLES_GROUND(ic51_ground_logistics);
    hiddenSelections[] = {"camo1","camo2","camo3"};
    hiddenselectionstextures[]=
    {
        QPATHTOF(ground\data\atap\51st_Hull_CO),
        QPATHTOF(ground\data\atap\51st_weapons and decals_CO),
        QPATHTOF(ground\data\atap\51st_legs_CO)
    };
    class VehicleTransport
    {
        class Cargo
        {
            parachuteClass            = "B_Parachute_02_F";
            parachuteHeightLimit    = 40;                
            canBeTransported        = 1;                
            dimensions[]            = { "doplnovani", "action" };
        };
    };
};

// AV-7
class 3AS_AV7;
class ic51_av7: 3AS_AV7
{
    displayName="[51st] AV-7";
    VEHICLES_GROUND(ic51_ground_logistics);
    hiddenSelections[] = {"camo1"};
    hiddenselectionstextures[]=
    {
        QPATHTOF(ground\data\av7\av7_co.paa)
    };
};

// Rho-Crates
class 3AS_Rho_Crate_REP_Transport;
class ic51_rho_crate: 3AS_Rho_Crate_REP_Transport
{
    displayName="[51st] Rho-Ho Crate (Transport)";
    VEHICLES_GROUND(ic51_ground_logistics);
    textureList[] = {"Republic",0,"Medical",0,"Imperial",0,"51st",1};
    class TextureSources
    {
        class 51st
        {
            author = AUTHOR;
            displayName = "[51st] Rho-Ho Crate";
            faction = "ic51_faction_inferno";
            textures[]=
            {
                QPATHTOF(ground\data\rhocrate\rho_crate_Ext_co.paa),
                QPATHTOF(ground\data\rhocrate\rho_crate_Int_co.paa)
            };
        };
    };
};
class 3AS_Rho_Crate_REP_Barracks;
class ic51_rho_crate_barracks: 3AS_Rho_Crate_REP_Barracks
{
    displayName="[51st] Rho-Ho Crate (Barracks)";
    VEHICLES_GROUND(ic51_ground_logistics);
    textureList[] = {"Republic",0,"Medical",0,"Imperial",0,"51st",1};
    class TextureSources
    {
        class 51st
        {
            author = AUTHOR;
            displayName = "[51st] Rho-Ho Crate";
            faction = "ic51_faction_inferno";
            textures[]=
            {
                QPATHTOF(ground\data\rhocrate\rho_crate_Ext_co.paa),
                QPATHTOF(ground\data\rhocrate\rho_crate_Int_co.paa)
            };
        };
    };
};

// RX-200
class 3AS_RX200_Base;
class ic51_rx: 3AS_RX200_Base
{
    displayName="[51st] RX-200";
    VEHICLES_GROUND(ic51_ground_logistics);
    hiddenSelections[] = {"camo1"};
    hiddenselectionstextures[]=
    {
        QPATHTOF(ground\data\rx200\51st_DefaultMaterial_CO)
    };
};

// ITT Transport
class ic51_itt_logi: 3AS_ITT
{
    displayName="[51st] ITT Logistics";
    VEHICLES_GROUND(ic51_ground_transport);
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7"
    };
    hiddenselectionstextures[]=
    {
        QPATHTOF(ground\data\itt\51st_ITT_Logistic_CO),
        "3as\3as_itt\data\glass_co.paa",
        QPATHTOF(ground\data\itt\51st_ITT_int_back_CO),
        QPATHTOF(ground\data\itt\51st_ITT_door_CO),
        QPATHTOF(ground\data\itt\51st_ITT_int_front_CO),
        "3as\3as_itt\data\itt_emiss_co.paa",
    };
};
