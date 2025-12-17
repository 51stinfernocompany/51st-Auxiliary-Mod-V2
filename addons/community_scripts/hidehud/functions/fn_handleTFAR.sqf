private _hide = param [0, false, [false]];

if _hide then {
	TFAR_VolumeHudTransparency = 1;
	TFAR_showTransmittingHint = false;
	TFAR_showChannelChangedHint = false;
} else {
    tHUD_TFAR_settings params ["_sel0","_sel1","_sel2"];
	TFAR_VolumeHudTransparency = _sel0;
	TFAR_showTransmittingHint = _sel1;
	TFAR_showChannelChangedHint = _sel2;
};
