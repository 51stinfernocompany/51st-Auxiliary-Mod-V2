class ModuleSmokeWhite_F;
class ic51_modules_smokewhite : ModuleSmokeWhite_F
{
    ammo = "IDA_smoke";
    displayName = "[51st] White Smoke";
    category = "ic51_modules";
    SCOPE_PUBLIC;
};

class ModuleOrdnanceMortar_F;
class ic51_modules_cosmetic_arty : ModuleOrdnanceMortar_F {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "[51st] Cosmetic Artillery";
    category = "ic51_modules";
    isGlobal = 1;
    isTriggerActivated = 1;
    curatorCanAttach = 1;
    ammo = "ic51_155mm_AMOS_Cinematic";
    class Arguments {
        class Type {
            displayName = "Ammo Type";
            description = "Ammo used for the artillery strike.";
            typeName = "STRING";
            defaultValue = "ic51_155mm_AMOS_Cinematic";

            class values {
                class cosmetic {
                    name = "Cosmetic Artillery";
                    value = "ic51_155mm_AMOS_Cinematic";
                };
            };
        };
    };
    class ModuleDescription {
        description = "Fires a non-lethal cinematic artillery round.";
    };
};
