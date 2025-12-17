class WM_StormOfficer;
class ic51_unit_navalofficer : WM_StormOfficer
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "[51st] Naval Officer";
    uniformclass="ic51_uniform_navalofficer";
    faction="ic51_faction_inferno";
    editorSubCategory="ic51_soldiers_navy";
    
    hiddenSelections[]=
    {
        "camo",
        "camo1",
    };
    hiddenSelectionsTextures[] =
    {
        "WarMantle\WM_Imperial_Core\data\ImperialOfficer\storm_uniform_co.paa",
        "WarMantle\WM_Imperial_Core\data\ImperialOfficer\storm_uniform_co.paa"
    };
    UNIT_ITEMS("ic51_backpack_navalofficer","ic51_helmet_navalofficer","ic51_dc15sa","ic51_dc15sa_mag");
};
class WM_ISBOfficer;
class ic51_unit_navaladmiral : WM_ISBOfficer
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "[51st] Naval Admiral";
    uniformclass="ic51_uniform_navaladmiral";
    faction="ic51_faction_inferno";
    editorSubCategory="ic51_soldiers_navy";
    
    hiddenSelections[]=
    {
        "camo",
        "camo1",
    };
    hiddenSelectionsTextures[] =
    {
        "WarMantle\WM_Imperial_Core\data\ImperialOfficer\isb_uniform_co.paa",
        "WarMantle\WM_Imperial_Core\data\ImperialOfficer\isb_uniform_co.paa"
    };
    UNIT_ITEMS("ic51_backpack_navalofficer","ic51_helmet_navaladmiral","ic51_dc15sa","ic51_dc15sa_mag");
};
