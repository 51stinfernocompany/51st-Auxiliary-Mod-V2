class 3AS_Supply_Small;
class ic51_crate_small_base : 3AS_Supply_Small
{
    SCOPE_PRIVATE;
    author = AUTHOR;
    displayName = "[51st] Small Resupply Crate";
    editorCategory = "ic51_editor_objects";
    editorSubCategory = "ic51_sub_crates";
};

/*
class ic51_crate_small_name : ic51_crate_small_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Small Ammo Resupply Crate";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\supply_small_ammo\supply_small_ammo_co.paa"};
    class TransportMagazines 
    {
        CRATE_MAG(ic51_dlt15_mag,20);
        CRATE_MAG(ic51_z6_mag,20);
        CRATE_MAG(ic51_rotarycannon_mag,10);
    };
    class TransportWeapons
    {
        CRATE_WEAPON()
    };

    class TransportItems
    {
        CRATE_ITEM()
    };
};
*/

class 3AS_Supply_Large_Prop;
class ic51_crate_large_base : 3AS_Supply_Large_Prop
{
    SCOPE_PRIVATE;
    displayName = "[51st] Large Resupply Crate";
    editorCategory = "ic51_editor_objects";
    editorSubCategory = "ic51_sub_crates";
};
/*
class ic51_crate_large_name : ic51_crate_large_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Large Ammo Resupply Crate";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\supply_small_ammo\supply_small_ammo_co.paa"};
    class TransportMagazines 
    {
        CRATE_MAG(ic51_dlt15_mag,20);
        CRATE_MAG(ic51_z6_mag,20);
        CRATE_MAG(ic51_rotarycannon_mag,10);
    };
    class TransportWeapons
    {
        CRATE_WEAPON()
    };

    class TransportItems
    {
        CRATE_ITEM()
    };
};
*/
/*
Small: ()
- 3AS_Supply_Small
- 3AS_Supply_Small_Ammo - hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\supply_small_ammo\supply_small_ammo_co.paa"};
- 3AS_Supply_Small_Black - hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\supply_small_black\supply_small_black_co.paa"};
- 3AS_Supply_Small_Medical - hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\supply_small_medical\supply_small_medical_co.paa"};

Large:
- 3AS_Supply_Large_Prop
- 3AS_Supply_Large_Ammo_Prop - hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"};
- 3AS_Supply_Large_Black_Prop - hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Black\Supply_Large_Black_co.paa"};
- 3AS_Supply_Large_Medical_Prop - hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical_co.paa"};
- 3AS_Supply_Large_Red_Prop - hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red_co.paa"};
*/
