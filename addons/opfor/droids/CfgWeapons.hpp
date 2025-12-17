#include "config\weapons\weap_weapons.hpp"

// B1
class UniformItem;
class ls_droidUniform_b1;
class ic51_opfor_uniform_b1 : ls_droidUniform_b1
{
    SCOPE_HIDDEN;
    author = AUTHOR;
    picture = "x\ic51\addons\armor\data\51st_logo.paa";
    displayName = "[51st OPFOR] B1 Battledroid Chassis";
    JLTS_isDroid = 1;
    class ItemInfo : UniformItem
    {
        containerClass = "Supply150";
        mass = 40;
        scope = 0;
        type = 801;
        uniformClass = "ic51_opfor_unit_b1_standard";
        uniformModel = "-";
    };
};

class ic51_opfor_uniform_b1_squadlead : ic51_opfor_uniform_b1
{
    displayName = "[51st OPFOR] B1 Battledroid Chassis (Squad Leader)";
    class ItemInfo : ItemInfo
    {
        uniformClass = "ic51_opfor_unit_b1_squadlead";
    };
};
class ic51_opfor_uniform_b1_crew : ic51_opfor_uniform_b1
{
    displayName = "[51st OPFOR] B1 Battledroid Chassis (Crew)";
    class ItemInfo : ItemInfo
    {
        uniformClass = "ic51_opfor_unit_b1_crew";
    };
};

class ls_droidHelmet_b1;
class ic51_opfor_helmet_b1 : ls_droidHelmet_b1
{
    SCOPE_HIDDEN;
    author = AUTHOR;
    picture = "x\ic51\addons\armor\data\51st_logo.paa";
    displayName = "[51st OPFOR] B1 Battledroid Head";
    class HitpointsProtectionInfo
        {
            class Face
            {
                armor = 4;
                hitpointName = "HitFace";
                PassThrough = 0.08975;
                visual = "injury_Head";
            };
            class Head : Face
            {
                hitpointName = "HitHead";
            };
        };
};
class ic51_opfor_helmet_b1_squadlead : ic51_opfor_helmet_b1
{
    displayName = "[51st OPFOR] B1 Battledroid Head (Squad Leader)";
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\b1\data\officer_camo1_co.paa"};
};

// B2s

class ls_droidUniform_b2;
class ic51_opfor_uniform_b2 : ls_droidUniform_b2
{
    SCOPE_HIDDEN;
    author = AUTHOR;
    picture = "x\ic51\addons\armor\data\51st_logo.paa";
    displayName = "[51st OPFOR] B2 Super Battledroid Chassis";
    class ItemInfo : UniformItem
    {
        containerClass = "Supply150";
        mass = 40;
        scope = 0;
        type = 801;
        uniformClass = "ic51_opfor_unit_b2_standard";
        uniformModel = "-";
    };
};

class ls_droidUniform_bx;
class ic51_opfor_uniform_bx : ls_droidUniform_bx
{
    SCOPE_HIDDEN;
    author = AUTHOR;
    picture = "x\ic51\addons\armor\data\51st_logo.paa";
    displayName = "[51st OPFOR] BX Commando Droid Chassis";
    class ItemInfo : UniformItem
    {
        containerClass = "Supply150";
        mass = 40;
        scope = 0;
        type = 801;
        uniformClass = "ic51_opfor_unit_bx_standard";
        uniformModel = "-";
    };
};
