class ls_clone_electrobinocularsCommander_night;
class ic51_clone_binoculars_base : ls_clone_electrobinocularsCommander_night
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Trooper Electrobinoculars";
    visionMode[] = {"Normal","NVG"};
};
class ic51_clone_binoculars_co : ic51_clone_binoculars_base
{
    displayName = "[51st] Officer Electrobinoculars";
    visionMode[] = {"Normal","NVG","TI"};
};
