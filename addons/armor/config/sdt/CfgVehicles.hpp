class SEA_GM_Base_21_Plastic;
class ic51_unit_hazmat : SEA_GM_Base_21_Plastic
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    uniformclass="ic51_uniform_hazard";
    faction="ic51_faction_inferno";
    editorSubCategory="ic51_soldiers";
    displayname="[51st] Hazard Uniform";

    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "undersuit",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_common\uniform_hazard_upper_co.paa),
        QPATHTOF(data\uniform_common\uniform_hazard_lower_co.paa),
        QPATHTOF(data\uniform_common\uniform_hazard_undersuit_co.paa)
    };
    UNIT_ITEMS("ic51_backpack_hazard","ic51_helmet_hazmat","ic51_dc15s","ic51_dc15s_mag");
    PROTECTION_UNIT;
};

class ic51_unit_hazmatofficer: ic51_unit_hazmat
{ 
    uniformclass="ic51_uniform_hazard_officer";
    displayname="[51st] Hazard Uniform Officer";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_common\uniform_hazard_officer_upper_co.paa),
        QPATHTOF(data\uniform_common\uniform_hazard_officer_lower_co.paa),
        QPATHTOF(data\uniform_common\uniform_hazard_officer_undersuit_co.paa)
    };
    UNIT_ITEMS("ic51_backpack_rto_hazard","ic51_helmet_hazmat_officer","ic51_dc15s","ic51_dc15s_mag");
};
class SEA_Backpack_GM_RTO;
class ic51_backpack_rto_hazard: SEA_Backpack_GM_RTO
{
    SCOPE_PRIVATE;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Hazard Backpack (RTO)";
    maximumLoad=500;
    tf_range=100000;
    tf_dialog = "ls_radios_cloneLR";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\backpack_common\backpack_hazard_rto_co.paa),
        QPATHTOF(data\backpack_common\backpack_hazard_rto_attachments_co.paa)
    };
};

class SEA_Backpack_GM_Medic;
class ic51_backpack_medic_hazard: SEA_Backpack_GM_Medic
{
    SCOPE_PRIVATE;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Hazard Backpack (Medic)";
    maximumLoad=500;
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\backpack_common\backpack_hazard_medic_co.paa)
    };
};
class SEA_Backpack_GM_Base;
class ic51_backpack_hazard: SEA_Backpack_GM_Base
{
    SCOPE_PRIVATE;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Hazard Backpack";
    maximumLoad=500;
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\backpack_common\backpack_hazard_co.paa)
    };
};
