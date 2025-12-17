params ["_unit"];
private _medicT2 = [[["ic51_dc15s","","","",["ic51_dc15s_mag",40],[],""],[],["ic51_dc17","","","",["ic51_dc17_mag",50],[],""],["ic51_clone_uniform_medic_t2",[["ACE_EarPlugs",1],["ACE_IR_Strobe_Item",1],["ACE_EntrenchingTool",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_CableTie",4]]],["ic51_vest_plate_medic",[["ItemcTabHCam",1],["ic51_SmokeWhite",10,1],["ic51_stun_mag_long",2,5],["ic51_dc15s_mag",10,40],["Laserbatteries",1,1],["ic51_SmokeGreen",5,1],["ic51_dc17_mag",2,50],["ic51_stun_mag_short",2,10]]],["ic51_clone_rucksack_medic",[["ACE_elasticBandage",50],["ACE_packingBandage",10],["ACE_tourniquet",12],["ACE_splint",10],["kat_chestSeal",10],["kat_IV_16",15],["kat_IO_FAST",10],["kat_larynx",15],["ACE_plasmaIV",15],["ACE_plasmaIV_500",15],["ACE_morphine",10],["ACE_epinephrine",5],["ACE_adenosine",5],["kat_EACA",10],["kat_naloxone",5],["kat_Pulseoximeter",5],["ACE_surgicalKit",1],["kat_X_AED",1],["kat_accuvac",1],["kat_Painkiller",10,4],["kat_Carbonate",10,10]]],"ic51_p2_helmet_medic_t2","ic51_vest_medic_t2",["ic51_clone_binoculars_base","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","ls_radios_cwp8","ItemCompass","ItemWatch","ic51_clone_medicalscanner"]],[["ace_arsenal_insignia","JLTS_GAR"],["aceax_textureOptions",[]],["ace_earplugs",true]]];
_medicT2 set [1, createHashMapFromArray (_medicT2 select 1)];
[player, _medicT2] call CBA_fnc_setLoadout;
_unit setUnitTrait ["Medic", true];
_unit setVariable ["ace_medical_medicClass", 2, true];
hint "Medic T2 Given";

// Log to SERVER RPT
[ [_unit, "ACE Crate", "doctor"], {
    params ["_unit","_source","_role"];
    diag_log format ["%1 (%2) got %3 perms via %4", name _unit, getPlayerUID _unit, _role, _source];
}] remoteExec ["BIS_fnc_call", 2];
