class ShdwCmpny_A280_F;
class ic51_a280: ShdwCmpny_A280_F{
    SCOPE_HIDDEN;
    displayName = "[51st INDFOR] A280";
    class LinkedItems {
            class LinkedItemsOptic {
                item = "ShdwCmpny_Optic_A280Scope"; 
                slot = "CowsSlot";
            };
    };
};

class IDA_IQA11;
class ic51_iqa11: IDA_IQA11{
    SCOPE_HIDDEN;
    displayName = "[51st INDFOR] IQA11";
    class LinkedItems {
            class LinkedItemsOptic {
                item = "IDA_TargetingScope"; 
                slot = "CowsSlot";
            };
    };
};

class 3AS_Cinnagaran_Carbine_F;
class ic51_cinnagaran: 3AS_Cinnagaran_Carbine_F{
    SCOPE_HIDDEN;
    displayName = "[51st INDFOR] Cinnagaran";
    class LinkedItems {
            // Type = 1 is for an optic
            class LinkedItemsOptic {
                item = "3AS_Optic_Cinnagaran_1_F"; 
                slot = "CowsSlot";
            };

            class LinkedItemsAcc {
                item = "3AS_Flashlight_Cinnagaran_1_F";
                slot = "PointerSlot";
            };
    };
};
