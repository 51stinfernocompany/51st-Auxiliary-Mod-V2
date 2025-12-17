//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};
OPTRE_fnc_parseSystemMessageText = {
	if (!OPTRE_systemMessageAllowed) exitWith {};
	private _textScale = safeZoneH / 1.81818;
	private _structuredText = "<t align='left'" + format [" size='%1'>",_textScale] + "%1</t>";
	private _textToShow = "";
	if (count OPTRE_systemMessages == 0) exitWith {
		(OPTRE_systemMessagesTextField#0) ctrlSetStructuredText parseText format [_structuredText, _textToShow];
		(OPTRE_systemMessagesTextField#0) ctrlSetTextColor ic51_allison_infotext_color;
	};
    {
        _textToShow = _textToShow + (_x select 0) + "<br/>";
    } forEach OPTRE_systemMessages;

	//playSound "OPTRE_typing_1";
    (OPTRE_systemMessagesTextField#0) ctrlSetStructuredText parseText format [_structuredText, _textToShow];
	(OPTRE_systemMessagesTextField#0) ctrlSetTextColor ic51_allison_infotext_color;
};

OPTRE_fnc_addSystemMessage = {
	params ["_text","_messageID","_lifeTime"];

	if (!OPTRE_systemMessageAllowed) exitWith {};

	if (_messageID == "") then {
		_messageID = "ID_NOT_FOUND:" + str time;
	};

	private _foundIndex = -1;
	{
		if (_messageID in _x) then {
			_foundIndex = _forEachIndex;
			breakOut "";
		};
	} forEach OPTRE_systemMessages;

	if (count OPTRE_systemMessages > 0) then {
		OPTRE_systemMessages deleteAt 0;
	};

	OPTRE_systemMessages pushBack [_text, _messageID, _lifeTime, time];

	call OPTRE_fnc_parseSystemMessageText;
};

OPTRE_fnc_checkAndDeleteOldestLine = {
	
    _lastLineTime = OPTRE_systemMessages select 0 select 3;
	_lastLineLifeTime = OPTRE_systemMessages select 0 select 2;
   
    if (time - _lastLineTime >= _lastLineLifeTime) then {
        OPTRE_systemMessages deleteAt 0;
        
        call OPTRE_fnc_parseSystemMessageText;
    };
};

OPTRE_fnc_SystemMessageLoop = {
	while {OPTRE_systemMessageAllowed} do  {
		while {count OPTRE_systemMessages > 0} do {
			call OPTRE_fnc_checkAndDeleteOldestLine;
			sleep 1;
		};
		sleep 1;
	};
};
