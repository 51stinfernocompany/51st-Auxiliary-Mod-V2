class IDA_Clone_DC15S;
class ic51_clone_unit_base : IDA_Clone_DC15S
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "[51st] Trooper";
    uniformclass="ic51_clone_uniform_base";
    faction="ic51_faction_inferno";
    editorSubCategory="ic51_soldiers";
    
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_base_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_base_co.paa)
    };
    hiddenSelectionsMaterials[]=
    {
        QPATHTOF(data\uniform_clone\uniform_clone_upper.rvmat),
        QPATHTOF(data\uniform_clone\uniform_clone_lower.rvmat)
    };
    
    UNIT_FACES;
    Backpack="";
    items[] =
    {
        ""
    };
    respawnItems[] =
    {
        ""
    };
    linkedItems[]=
    {
        "ic51_p2_helmet_base",
        UNIT_LINKEDITEMS_STANDARD
    };
    respawnLinkedItems[]=
    {
        "ic51_p2_helmet_base",
        UNIT_LINKEDITEMS_STANDARD
    };
    weapons[]=
    {
        "ic51_dc15a",
        "Throw",
        "Put"
    };
    respawnWeapons[]=
    {
        "ic51_dc15a",
        "Throw",
        "Put"
    };
    magazines[]=
    {
        "ic51_dc15a_mag","ic51_dc15a_mag","ic51_dc15a_mag","ic51_dc15a_mag"
    };
    respawnMagazines[]=
    {
        "ic51_dc15a_mag","ic51_dc15a_mag","ic51_dc15a_mag","ic51_dc15a_mag"
    };
    PROTECTION_UNIT;
};
class ic51_clone_unit_corporal : ic51_clone_unit_base
{
    displayName = "[51st] Corporal";
    uniformclass="ic51_clone_uniform_corporal"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_corporal_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_corporal_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_corporal","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_sergeant : ic51_clone_unit_base
{
    displayName = "[51st] Sergeant";
    uniformclass="ic51_clone_uniform_sergeant"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_sergeant_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_sergeant_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_sergeant","ic51_dc15a","ic51_dc15a_mag");
};
class ic51_clone_unit_command : ic51_clone_unit_base
{
    displayName = "[51st] Command Unit";
    uniformclass="ic51_clone_uniform_command"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_command_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_command_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_sergeant","ic51_dc15a","ic51_dc15a_mag");
};

// Qualifications
class ic51_clone_unit_medic_t2 : ic51_clone_unit_base
{
    displayName = "[51st] Medic (Tier 2)";
    uniformclass="ic51_clone_uniform_medic_t2"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_medic_t2_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_medic_t2_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_medic_t2","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_medic_t3 : ic51_clone_unit_base
{
    displayName = "[51st] Medic (Tier 3)";
    uniformclass="ic51_clone_uniform_medic_t3"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_medic_t3_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_medic_t3_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_medic_t3","ic51_dc15s","ic51_dc15s_mag");
};

//Pilots
class ic51_clone_unit_pilot_combat : ic51_clone_unit_base
{
    displayName = "[51st] Pilot Combat";
    uniformclass="ic51_clone_uniform_pilot_combat"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_pilot_combat_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_pilot_combat_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_medic_t3","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_pilot_logi : ic51_clone_unit_base
{
    displayName = "[51st] Pilot Logistics";
    uniformclass="ic51_clone_uniform_pilot_logi"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_pilot_logi_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_pilot_logi_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_medic_t3","ic51_dc15s","ic51_dc15s_mag");
};

//saber
class ic51_clone_unit_sabre1 : ic51_clone_unit_base
{
    displayName = "[51st] Sabre One";
    uniformclass="ic51_clone_uniform_sabre1"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_sabre1_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_sabre1_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_sabre1","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_sabre2 : ic51_clone_unit_base
{
    displayName = "[51st] Sabre Two";
    uniformclass="ic51_clone_uniform_sabre2"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_sabre2_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_sabre2_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_sabre2","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_sabre3 : ic51_clone_unit_base
{
    displayName = "[51st] Sabre Three";
    uniformclass="ic51_clone_uniform_sabre3"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_sabre3_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_sabre3_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_sabre3","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_sabre4 : ic51_clone_unit_base
{
    displayName = "[51st] Sabre Four";
    uniformclass="ic51_clone_uniform_sabre4"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_sabre4_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_sabre4_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_sabre3","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_medic_sabre1 : ic51_clone_unit_base
{
    displayName = "[51st] Sabre One (Medic)";
    uniformclass="ic51_clone_uniform_medic_sabre1"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_medic_sabre1_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_medic_sabre1_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_medic_sabre1","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_medic_sabre2 : ic51_clone_unit_base
{
    displayName = "[51st] Sabre Two (Medic)";
    uniformclass="ic51_clone_uniform_medic_sabre2"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_medic_sabre2_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_medic_sabre2_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_medic_sabre2","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_medic_sabre3 : ic51_clone_unit_base
{
    displayName = "[51st] Sabre Three (Medic)";
    uniformclass="ic51_clone_uniform_medic_sabre3"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_medic_sabre3_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_medic_sabre3_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_medic_sabre3","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_medic_sabre4 : ic51_clone_unit_base
{
    displayName = "[51st] Sabre Four (Medic)";
    uniformclass="ic51_clone_uniform_medic_sabre4"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_medic_sabre4_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_medic_sabre4_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_medic_sabre4","ic51_dc15s","ic51_dc15s_mag");
};

//ARF
class ic51_clone_unit_arf : ic51_clone_unit_base
{
    displayName = "[51st] ARF";
    uniformclass="ic51_clone_uniform_arf"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_arf_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_arf_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_arf","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_arf_winter : ic51_clone_unit_base
{
    displayName = "[51st] ARF Winter";
    uniformclass="ic51_clone_unit_arf_winter"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_arf_winter_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_arf_winter_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_arf_winter","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_arf_jungle : ic51_clone_unit_base
{
    displayName = "[51st] ARF Jungle";
    uniformclass="ic51_clone_unit_arf_jungle"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_arf_jungle_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_arf_jungle_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_arf_jungle","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_arf_desert : ic51_clone_unit_base
{
    displayName = "[51st] ARF Desert";
    uniformclass="ic51_clone_unit_arf_desert"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_arf_desert_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_arf_desert_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_arf_desert","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_barc : ic51_clone_unit_base
{
    displayName = "[51st] BARC";
    uniformclass="ic51_clone_uniform_barc"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_BARC_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_BARC_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_barc","ic51_dc15s","ic51_dc15s_mag");
};

//Havoc
class ic51_clone_unit_havoc1 : ic51_clone_unit_base
{
    displayName = "[51st] Havoc One";
    uniformclass="ic51_clone_uniform_havoc1"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_havoc1_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_havoc1_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_havoc1","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_havoc2 : ic51_clone_unit_base
{
    displayName = "[51st] Havoc Two";
    uniformclass="ic51_clone_uniform_havoc2"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_havoc2_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_havoc2_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_havoc2","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_medic_havoc1 : ic51_clone_unit_base
{
    displayName = "[51st] Havoc One (Medic)";
    uniformclass="ic51_clone_uniform_medic_havoc1"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_medic_havoc1_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_medic_havoc1_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_medic_havoc1","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_clone_unit_medic_havoc2 : ic51_clone_unit_base
{
    displayName = "[51st] Havoc Two (Medic)";
    uniformclass="ic51_clone_uniform_medic_havoc2"; 
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_medic_havoc2_co.paa),
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_medic_havoc2_co.paa)
    };
    UNIT_ITEMS("","ic51_p2_helmet_medic_havoc2","ic51_dc15s","ic51_dc15s_mag");
};
