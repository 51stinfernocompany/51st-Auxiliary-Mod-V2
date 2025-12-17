class Infantry {
    name = "Infanty";
    displayName = "Men";
    class ic51_b1_squad_9
    {
        GROUP_OPF_CIS(B1 Squad (9))
        GROUP_OPF_UNIT(0,ic51_opfor_unit_b1_squadlead,CORPORAL,0);
        GROUP_OPF_UNIT(1,ic51_opfor_unit_b1_standard,PRIVATE,1.5);
    };
    class ic51_b1_team_5
    {
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        name = "B1 Team (5)";
        displayName = "B1 Team (5)";
        side = 0;
        faction = "ic51_opfor_group_cis";
        class Unit0
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_squadlead";
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-1.5,0};
        };
        class Unit2
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-3,0};
        };
        class Unit3
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_heavy";
            rank = "PRIVATE";
            position[] = {0,-4.5,0};
        };
        class Unit4
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_at";
            rank = "PRIVATE";
            position[] = {0,-6,0};
        };
    };
    class ic51_b1_squad_9_standard
    {
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        name = "B1 Squad (9) [STANDARD]";
        displayName = "B1 Squad (9) [STANDARD]";
        side = 0;
        faction = "ic51_opfor_group_cis";
        class Unit0
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_squadlead";
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-1.5,0};
        };
        class Unit2
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-3,0};
        };
        class Unit3
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-4.5,0};
        };
        class Unit4
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-6,0};
        };
        class Unit5
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-7.5,0};
        };
        class Unit6
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-9,0};
        };
        class Unit7
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-10.5,0};
        };
        class Unit8
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-12,0};
        };
    };
    class ic51_b1_team_5_standard
    {
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        name = "B1 Team (5) [STANDARD]";
        displayName = "B1 Team (5) [STANDARD]";
        side = 0;
        faction = "ic51_opfor_group_cis";
        class Unit0
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_squadlead";
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-1.5,0};
        };
        class Unit2
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-3,0};
        };
        class Unit3
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-4.5,0};
        };
        class Unit4
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-6,0};
        };
    };
};
class Specialoperations {
    name = "Special Operations";
    displayName = "Men";
    class ic51_b2_team_3
    {
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        name = "B2 Team (3)";
        displayName = "B2 Team (3)";
        side = 0;
        faction = "ic51_opfor_group_cis";
        class Unit0
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b2_standard";
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b2_standard";
            rank = "PRIVATE";
            position[] = {0,-1.5,0};
        };
        class Unit2
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b2_grenade";
            rank = "PRIVATE";
            position[] = {0,-3,0};
        };
    };
    class ic51_bx_team_5
    {
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        name = "BX Team (5)";
        displayName = "BX Team (5)";
        side = 0;
        faction = "ic51_opfor_group_cis";
        class Unit0
        {
            side = 0;
            vehicle = "ic51_opfor_unit_bx_standard";
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = 0;
            vehicle = "ic51_opfor_unit_bx_standard";
            rank = "PRIVATE";
            position[] = {0,-1.5,0};
        };
        class Unit2
        {
            side = 0;
            vehicle = "ic51_opfor_unit_bx_standard";
            rank = "PRIVATE";
            position[] = {0,-3,0};
        };
        class Unit3
        {
            side = 0;
            vehicle = "ic51_opfor_unit_bx_standard";
            rank = "PRIVATE";
            position[] = {0,-4.5,0};
        };
        class Unit4
        {
            side = 0;
            vehicle = "ic51_opfor_unit_bx_standard";
            rank = "PRIVATE";
            position[] = {0,-6,0};
        };
    };
};
class Mixed {
    name = "Mixed";
    displayName = "Men";
    class ic51_mix_squad_9
    {
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        name = "Mixed Squad (9) [B1, B2]";
        displayName = "Mixed Squad (9) [B1, B2]";
        side = 0;
        faction = "ic51_opfor_group_cis";
        class Unit0
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_squadlead";
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_at";
            rank = "PRIVATE";
            position[] = {0,-1.5,0};
        };
        class Unit2
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_shotgun";
            rank = "PRIVATE";
            position[] = {0,-3,0};
        };
        class Unit3
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_heavy";
            rank = "PRIVATE";
            position[] = {0,-4.5,0};
        };
        class Unit4
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-6,0};
        };
        class Unit5
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_marksmen";
            rank = "PRIVATE";
            position[] = {0,-7.5,0};
        };
        class Unit6
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-9,0};
        };
        class Unit7
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b2_standard";
            rank = "PRIVATE";
            position[] = {0,-10.5,0};
        };
        class Unit8
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b2_standard";
            rank = "PRIVATE";
            position[] = {0,-12,0};
        };
    };
    class ic51_mix_squad_9_standard
    {
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        name = "Mixed Squad (9) [STANDARD, B1, B2]";
        displayName = "Mixed Squad (9) [STANDARD, B1, B2]";
        side = 0;
        faction = "ic51_opfor_group_cis";
        class Unit0
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_squadlead";
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-1.5,0};
        };
        class Unit2
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-3,0};
        };
        class Unit3
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-4.5,0};
        };
        class Unit4
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-6,0};
        };
        class Unit5
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b1_standard";
            rank = "PRIVATE";
            position[] = {0,-7.5,0};
        };
        class Unit6
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b2_grenade";
            rank = "PRIVATE";
            position[] = {0,-9,0};
        };
        class Unit7
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b2_standard";
            rank = "PRIVATE";
            position[] = {0,-10.5,0};
        };
        class Unit8
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b2_standard";
            rank = "PRIVATE";
            position[] = {0,-12,0};
        };
    };
    class ic51_mix_team_5
    {
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        name = "Mixed Team (5) [BX, B2]";
        displayName = "Mixed Team (5) [BX, B2]";
        side = 0;
        faction = "ic51_opfor_group_cis";
        class Unit0
        {
            side = 0;
            vehicle = "ic51_opfor_unit_bx_standard";
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = 0;
            vehicle = "ic51_opfor_unit_bx_standard";
            rank = "PRIVATE";
            position[] = {0,-1.5,0};
        };
        class Unit2
        {
            side = 0;
            vehicle = "ic51_opfor_unit_bx_standard";
            rank = "PRIVATE";
            position[] = {0,-3,0};
        };
        class Unit3
        {
            side = 0;
            vehicle = "ic51_opfor_unit_bx_standard";
            rank = "PRIVATE";
            position[] = {0,-4.5,0};
        };
        class Unit4
        {
            side = 0;
            vehicle = "ic51_opfor_unit_b2_standard";
            rank = "PRIVATE";
            position[] = {0,-6,0};
        };
    };
};
