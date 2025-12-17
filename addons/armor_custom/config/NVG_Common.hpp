class ls_nvg_clone_phase3Pilot_arc;
class ic51_nvg_pilot_visor : ls_nvg_clone_phase3Pilot_arc {
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Phase 3 Pilot Visor";
    visionMode[] = {"Normal","NVG","TI"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\nvg_common\nvg_pilot_visor_co.paa)};
};

class ls_nvg_clone_phase3Pilot_vwing;
class ic51_nvg_pilot_faceplate : ls_nvg_clone_phase3Pilot_vwing {
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Phase 3 Pilot Faceplate";
    visionMode[] = {"Normal","NVG","TI"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\nvg_common\nvg_pilot_faceplate_co.paa)};
};
