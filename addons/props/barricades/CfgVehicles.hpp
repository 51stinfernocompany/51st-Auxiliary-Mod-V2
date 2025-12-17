class House_F;
class CLASS(barricade_base) : House_F {
    SCOPE_PRIVATE;
    vehicleClass = "Objects";
    editorCategory = "ic51_editor_props";
    editorSubcategory = "ic51_barrier";
};

class CLASS(citadel_barricade) : CLASS(barricade_base) {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "[51st] Citadel Barricade";
    model = "x\ic51\addons\props\barricades\data\models\citadel_barricade\ic51_Citadel_Barricade.p3d";
    hiddenselections[] = {"camo1"};
    hiddenselectionstextures[] = {"\x\ic51\addons\props\barricades\data\textures\citadel_barricade_CO.paa"};
};
