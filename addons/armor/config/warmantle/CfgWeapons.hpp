class UniformItem;
class ItemInfo;

class WM_StormUniform;
class ic51_uniform_navalofficer : WM_StormUniform
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Naval Officer Uniform";
    class ItemInfo: UniformItem
    {
        uniformModel="";
        uniformClass="ic51_unit_navalofficer";
        uniformType="Neopren";
        containerClass="Supply200";
        mass=15;
    };
};
class WM_ISBUniform;
class ic51_uniform_navaladmiral : WM_ISBUniform
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Naval Admiral Uniform";
    class ItemInfo: UniformItem
    {
        uniformModel="";
        uniformClass="ic51_unit_navaladmiral";
        uniformType="Neopren";
        containerClass="Supply200";
        mass=15;
    };
};

class WM_StormCap;
class ic51_helmet_navalofficer : WM_StormCap
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    ace_hearing_hasEHP = 1;
    ace_hearing_lowerVolume = 0;
    ace_hearing_protection = 1;
    displayName = "[51st] Naval Officer Cap";
    subItems[] = {"Integrated_NVG_TI_0_F"};
    descriptionShort = "Naval Officer Cap (NVG/TI)";
};
class WM_ISBCap;
class ic51_helmet_navaladmiral : WM_ISBCap
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    ace_hearing_hasEHP = 1;
    ace_hearing_lowerVolume = 0;
    ace_hearing_protection = 1;
    displayName = "[51st] Naval Admiral Cap";
    subItems[] = {"Integrated_NVG_TI_0_F"};
    descriptionShort = "Naval Admiral Cap (NVG/TI)";
};
