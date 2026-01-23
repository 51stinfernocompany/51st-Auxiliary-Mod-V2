//no interior
class lsd_gar_p2Interior_hud;
class ic51_p2interior_none: lsd_gar_p2Interior_hud{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    ACE_Overlay = "";
    displayName = "[51st] P2 Helmet Interior None";
}; 
class IDA_everything;
class ic51_clone_vest_base: IDA_everything
{
    author=AUTHOR;
    displayName="[51st] Vest Base (Hidden)";
    SCOPE_PRIVATE;
    ACE_Overlay = "";
    picture = QPATHTOF(data\51st_logo.paa);
    hiddenSelections[]=
    {
    /*1*/	"Recon_Harness",
    /*2*/	"GrenadeBag",

    /*3*/	"KamaCW",
    /*4*/	"KamaEP3",
    /*5*/	"PauldronCW_L",
    /*6*/	"PauldronCW_R",
    /*7*/	"PauldronEP3_L",
    /*8*/	"PauldronEP3_R",

    /*9*/	"PauldronAccessory",
    /*10*/	"ArmPouches_L",
    /*11*/	"ArmPouches_R",
    /*12*/	"SuspenderL",
    /*13*/	"SuspenderR",
    /*14*/	"ChestPadR",
    /*15*/	"ShoulderPadR",
    /*16*/  "PauldronARC"
    };
    hiddenSelectionsTextures[]=
    {
    /*1*/	QPATHTOF(data\facewear_clone\facewear_recon_harness_co.paa),
    /*2*/	QPATHTOF(data\facewear_clone\facewear_grenadebag_co.paa),

    /*3*/	"",
    /*4*/	QPATHTOF(data\facewear_clone\facewear_kama_ep3_co.paa),
    /*5*/	"",
    /*6*/	"",
    /*7*/	QPATHTOF(data\facewear_clone\facewear_pauldron_ep3_co.paa),
    /*8*/	"",

    /*9*/	"\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_PauldronEP3\IDA_PauldronAccessory_co.paa",
    /*10*/	"\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_PauldronEP3\IDA_ArmPouches_co.paa",
    /*11*/	"\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_PauldronEP3\IDA_ArmPouches_co.paa",
    /*12*/	QPATHTOF(data\facewear_clone\facewear_suspenders_co.paa),
    /*13*/	QPATHTOF(data\facewear_clone\facewear_suspenders_co.paa),
    /*14*/	QPATHTOF(data\facewear_clone\facewear_pads_co.paa),
    /*15*/	QPATHTOF(data\facewear_clone\facewear_pads_co.paa),
    /*16*/  "\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_PauldronARC\IDA_PauldronARC_co.paa"
    };
};
class ic51_vest_recon_harness : ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Clone Recon Harness";
    hiddenSelectionsTextures[]=
    {
    /*1*/	QPATHTOF(data\facewear_clone\facewear_recon_harness_co.paa),
    /*2*/	"",

    /*3*/	"",
    /*4*/	"",
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	"",
    /*15*/	"",
    /*16*/  ""
    };
};
class ic51_vest_grenadier: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Grenadier Vest";
    hiddenSelectionsTextures[]=
    {
    /*1*/	"",
    /*2*/	QPATHTOF(data\facewear_clone\facewear_grenadebag_co.paa),

    /*3*/	"",
    /*4*/	"",
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_PauldronEP3\IDA_ArmPouches_co.paa",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	"",
    /*15*/	"",
    /*16*/  ""
    };
};
class ic51_vest_corporal: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Corporal Vest #1";
    hiddenSelectionsTextures[]=
    {
    /*1*/	QPATHTOF(data\facewear_clone\facewear_recon_harness_co.paa),
    /*2*/	"",

    /*3*/	"",
    /*4*/	"",
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	"",
    /*15*/	QPATHTOF(data\facewear_clone\facewear_pads_co.paa),
    /*16*/  ""
    };
};
class ic51_vest_corporal_two: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Corporal Vest #2";
    hiddenSelectionsTextures[]=
    {
    /*1*/	QPATHTOF(data\facewear_clone\facewear_recon_harness_co.paa),
    /*2*/	"",

    /*3*/	"",
    /*4*/	"",
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	QPATHTOF(data\facewear_clone\facewear_pads_co.paa),
    /*15*/	QPATHTOF(data\facewear_clone\facewear_pads_co.paa),
    /*16*/  ""
    };
};
class ic51_vest_sergeant: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Sergeant Vest #1";
    hiddenSelectionsTextures[]=
    {
    /*1*/	QPATHTOF(data\facewear_clone\facewear_recon_harness_co.paa),
    /*2*/	"",

    /*3*/	"",
    /*4*/	QPATHTOF(data\facewear_clone\facewear_kama_ep3_co.paa),
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	"",
    /*15*/	QPATHTOF(data\facewear_clone\facewear_pads_co.paa),
    /*16*/  ""
    };
};
class ic51_vest_sergeant_two: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Sergeant Vest #2";
    hiddenSelectionsTextures[]=
    {
    /*1*/	QPATHTOF(data\facewear_clone\facewear_recon_harness_co.paa),
    /*2*/	"",

    /*3*/	"",
    /*4*/	QPATHTOF(data\facewear_clone\facewear_kama_ep3_co.paa),
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	QPATHTOF(data\facewear_clone\facewear_pads_co.paa),
    /*15*/	QPATHTOF(data\facewear_clone\facewear_pads_co.paa),
    /*16*/  ""
    };
};
class ic51_vest_sergeantmajor: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Command Vest";
    hiddenSelectionsTextures[]=
    {
    /*1*/	"",
    /*2*/	"",

    /*3*/	"",
    /*4*/	QPATHTOF(data\facewear_clone\facewear_kama_ep3_co.paa),
    /*5*/	"",
    /*6*/	"",
    /*7*/	QPATHTOF(data\facewear_clone\facewear_pauldron_ep3_co.paa),
    /*8*/	"",

    /*9*/	QPATHTOF(data\facewear_clone\facewear_pauldron_accessory_ep3_co.paa),
    /*10*/	"",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	"",
    /*15*/	"",
    /*16*/  ""
    };
};
// Quals

class ic51_vest_marksmen_t2: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Marksmen Vest";
    hiddenSelectionsTextures[]=
    {
    /*1*/	QPATHTOF(data\facewear_clone\facewear_recon_harness_co.paa),
    /*2*/	"",

    /*3*/	"",
    /*4*/	"",
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	"",
    /*15*/	"",
    /*16*/  ""
    };
};
class ic51_vest_heavy: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Heavy Vest";
    hiddenSelectionsTextures[]=
    {
    /*1*/	QPATHTOF(data\facewear_clone\facewear_recon_harness_co.paa),
    /*2*/	QPATHTOF(data\facewear_clone\facewear_grenadebag_co.paa),

    /*3*/	"",
    /*4*/	"",
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_PauldronEP3\IDA_ArmPouches_co.paa",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	QPATHTOF(data\facewear_clone\facewear_pads_co.paa),
    /*15*/	"",
    /*16*/  ""
    };
};
class ic51_vest_assault: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Assault Vest";
    hiddenSelectionsTextures[]=
    {
    /*1*/	"",
    /*2*/	"",

    /*3*/	"",
    /*4*/	"",
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"",
    /*11*/	"",
    /*12*/	QPATHTOF(data\facewear_clone\facewear_suspenders_co.paa),
    /*13*/	QPATHTOF(data\facewear_clone\facewear_suspenders_co.paa),
    /*14*/	"",
    /*15*/	"",
    /*16*/  ""
    };
};
class ic51_vest_arc: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone ARC Trooper Vest";
    hiddenSelectionsTextures[]=
    {
    /*1*/	"",
    /*2*/	"",

    /*3*/	QPATHTOF(data\facewear_clone\facewear_kama_arc_co.paa),
    /*4*/	"",
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	"",
    /*15*/	"",
    /*16*/  QPATHTOF(data\facewear_clone\facewear_pauldron_arc_co.paa)
    };
};

class 3AS_G_AT_1_F;
class ic51_vest_at : 3AS_G_AT_1_F 
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone AT Vest";
};
class ic51_vest_medic_t2: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Medic Vest T2";
    hiddenSelectionsTextures[]=
    {
    /*1*/	"",
    /*2*/	QPATHTOF(data\facewear_clone\facewear_grenadebag_medic_t2_co.paa),

    /*3*/	"",
    /*4*/	"",
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	"",
    /*15*/	"",
    /*16*/  ""
    };
};
class ic51_vest_medic_t3: ic51_clone_vest_base
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Medic Vest T3";
    hiddenSelectionsTextures[]=
    {
    /*1*/	"",
    /*2*/	QPATHTOF(data\facewear_clone\facewear_grenadebag_medic_t3_co.paa),

    /*3*/	"",
    /*4*/	"",
    /*5*/	"",
    /*6*/	"",
    /*7*/	"",
    /*8*/	"",

    /*9*/	"",
    /*10*/	"",
    /*11*/	"",
    /*12*/	"",
    /*13*/	"",
    /*14*/	"",
    /*15*/	"",
    /*16*/  ""
    };
};

//interior style 1
class CLASS(p2interior) : lsd_gar_p2Interior_hud {
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    DNAME(P2 Helmet Interior Style 1);
};
class ic51_vest_recon_harness_style1 : ic51_vest_recon_harness
{
    SCOPE_PUBLIC;
    displayName = "[51st] Clone Recon Harness (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
class ic51_vest_grenadier_style1: ic51_vest_grenadier
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Grenadier Vest (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
class ic51_vest_corporal_style1: ic51_vest_corporal
{
    SCOPE_PUBLIC;
    displayName="[51st] Corporal Vest #1 (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
class ic51_vest_corporal_two_style1: ic51_vest_corporal_two
{
    SCOPE_PUBLIC;
    displayName="[51st] Corporal Vest #2 (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
class ic51_vest_sergeant_style1: ic51_vest_sergeant
{
    SCOPE_PUBLIC;
    displayName="[51st] Sergeant Vest #1 (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
class ic51_vest_sergeant_two_style1: ic51_vest_sergeant_two
{
    SCOPE_PUBLIC;
    displayName="[51st] Sergeant Vest #2 (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
class ic51_vest_sergeantmajor_style1: ic51_vest_sergeantmajor
{
    SCOPE_PUBLIC;
    displayName="[51st] Command Vest (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
// Quals

class ic51_vest_marksmen_t2_style1: ic51_vest_marksmen_t2
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Marksmen Vest (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
class ic51_vest_heavy_style1: ic51_vest_heavy
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Heavy Vest (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
class ic51_vest_assault_style1: ic51_vest_assault
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Assault Vest (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
class ic51_vest_arc_style1: ic51_vest_arc
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone ARC Trooper Vest (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};

class ic51_vest_at_style1 : ic51_vest_at 
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone AT Vest (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
class ic51_vest_medic_t2_style1: ic51_vest_medic_t2
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Medic Vest T2 (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};
class ic51_vest_medic_t3_style1: ic51_vest_medic_t3
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Medic Vest T3 (Style 1)";
    ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa";
};

//interior style 2
class ic51_p2interior_updated: lsd_gar_p2Interior_hud{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
    displayName = "[51st] P2 Helmet Interior Style 2";
};
class ic51_vest_recon_harness_style2 : ic51_vest_recon_harness
{
    SCOPE_PUBLIC;
    displayName = "[51st] Clone Recon Harness (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
class ic51_vest_grenadier_style2: ic51_vest_grenadier
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Grenadier Vest (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
class ic51_vest_corporal_style2: ic51_vest_corporal
{
    SCOPE_PUBLIC;
    displayName="[51st] Corporal Vest #1 (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
class ic51_vest_corporal_two_style2: ic51_vest_corporal_two
{
    SCOPE_PUBLIC;
    displayName="[51st] Corporal Vest #2 (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
class ic51_vest_sergeant_style2: ic51_vest_sergeant
{
    SCOPE_PUBLIC;
    displayName="[51st] Sergeant Vest #1 (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
class ic51_vest_sergeant_two_style2: ic51_vest_sergeant_two
{
    SCOPE_PUBLIC;
    displayName="[51st] Sergeant Vest #2 (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
class ic51_vest_sergeantmajor_style2: ic51_vest_sergeantmajor
{
    SCOPE_PUBLIC;
    displayName="[51st] Command Vest (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
// Quals

class ic51_vest_marksmen_t2_style2: ic51_vest_marksmen_t2
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Marksmen Vest (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
class ic51_vest_heavy_style2: ic51_vest_heavy
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Heavy Vest (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
class ic51_vest_assault_style2: ic51_vest_assault
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Assault Vest (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
class ic51_vest_arc_style2: ic51_vest_arc
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone ARC Trooper Vest (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};

class ic51_vest_at_style2 : ic51_vest_at 
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone AT Vest (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
class ic51_vest_medic_t2_style2: ic51_vest_medic_t2
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Medic Vest T2 (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
class ic51_vest_medic_t3_style2: ic51_vest_medic_t3
{
    SCOPE_PUBLIC;
    displayName="[51st] Clone Medic Vest T3 (Style 2)";
    ACE_Overlay = QPATHTOF(data\facewear_clone\facewear_p2_interior_style2.paa);
};
