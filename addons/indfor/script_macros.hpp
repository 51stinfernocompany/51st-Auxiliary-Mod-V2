#define GROUP_IND_CARLAC(var1) \
    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa"; \
    name = QUOTE(var1); \
    displayName = QUOTE(var1); \
    side = 2; \
    faction = "ic51_indfor_carlac"

#define GROUP_IND_UNIT(var1,var2,var3) class Unit##var1 \
{ \
    side = 2; \
    vehicle = QUOTE(var2); \
    rank = QUOTE(var3); \
    position[] = {0,-##var1##,0}; \
}
