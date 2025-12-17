#define GROUP_OPF_CIS(var1) \
    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; \
    name = QUOTE(var1); \
    displayName = QUOTE(var1); \
    side = 0; \
    faction = "ic51_opfor_group_cis"

#define GROUP_OPF_ONDERON(var1) \
    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; \
    name = QUOTE(var1); \
    displayName = QUOTE(var1); \
    side = 0; \
    faction = "ic51_opfor_onderon"

#define GROUP_OPF_UNIT(var1,var2,var3) class Unit##var1 \
{ \
    side = 0; \
    vehicle = QUOTE(var2); \
    rank = QUOTE(var3); \
    position[] = {0,-##var1##,0}; \
}
