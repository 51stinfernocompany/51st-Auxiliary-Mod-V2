class RscText;
class RscDisplayMain: RscStandardDisplay
{
	text = "";
	enableDisplay = 0;
	class RscActivePicture: RscActiveText
	{
		style = 2;
		color[] = {0,0,0,1};
		colorActive[] = {0.3,0.4,0,1};
	};
    class ControlsBackground
    {
        class Picture: RscPicture
        {
            text = ""; 
            h = "safezoneH";
            w = "safezoneW";
            x = "safezoneX";
            y = "safezoneY";
        };
        class LoadingPic: RscPicture
        {
            text = "";
            h = "safezoneH";
            w = "safezoneW";
            x = "safezoneX";
            y = "safezoneY";
        };
    };
    class controls
    {
		class BackgroundBar: RscText 
		{
			colorBackground[] = MAINMENU_COLOR,0.40};
			colorShadow[] = {0,0.45,0.45,0.5};
		};
		class BackgroundCenter: BackgroundBar
		{
			colorBackground[] = {0,0,0,0};
		};
		class BackgroundBarLeft: RscPicture
		{
			text = "";
		};
		class BackgroundBarRight: RscPicture
		{
			text = "";
		};
		class Footer: RscText
		{
			colorBackground[] = MAINMENU_COLOR,0.50};
			text = MOD_INFO;
		};
        class Logo: RscPictureKeepAspect
        {
            text = QPATHTOF(data\51st_logo3_co.paa);
			tooltip = "";
			onButtonClick = "";
			h = "1 *  6.25 *  (pixelH * pixelGrid * 2)";
			w = "2 *  6.25 *  (pixelW * pixelGrid * 2)";
			x = "0.5 -  6.25 *  (pixelW * pixelGrid * 2)";
			y = "safezoneY + (2.1 - 0.37 *  6.25) *  (pixelH * pixelGrid * 2)";
        };
        class LogoApex: Logo
        {
			text = QPATHTOF(data\51st_logo3_co.paa);
			tooltip = "";
			onButtonClick = "";
			h = "1 *  6.25 *  (pixelH * pixelGrid * 2)";
			w = "2 *  6.25 *  (pixelW * pixelGrid * 2)";
			x = "0.5 -  6.25 *  (pixelW * pixelGrid * 2)";
			y = "safezoneY + (2.1 - 0.37 *  6.25) *  (pixelH * pixelGrid * 2)";
        };
        class BackgroundSpotlight: RscPicture
		{
            show = 0;
			onLoad = "";
		};
		class BackgroundSpotlightLeft: BackgroundSpotlight
		{
            show = 0;
			onload = "";
		};
		class BackgroundSpotlightRight: BackgroundSpotlightLeft
		{
            show = 0;
			onload = "";
		};
		class Spotlight1: RscMainMenuSpotlight
		{
            show = 0;
			onload = "";
		};
		class Spotlight2: RscMainMenuSpotlight
		{
			show = 0;
			onLoad = "";
			class Controls : Controls
			{
				class TextBackground : TextBackground
				{
					text = QPATHTOF(data\spotlight.paa);
				};
			};
		};
        class Spotlight3: RscMainMenuSpotlight
		{
            show = 0;
			onload = "";
		};
		class SpotlightPrev: RscActivePictureKeepAspect
		{
            show = 0;
			onload = "";
		};
		class SpotlightNext: SpotlightPrev
		{
            show = 0;
			onload = "";
		};
        class infomods: RscControlsGroupNoHScrollbars
		{
            show = 0;
			onload = "";
		};
		class infoDLCsOwned: infomods
		{
            show = 0;
			onload = "";
		};
		class infoDLCs: infoDLCsOwned
		{
            show = 0;
			onload = "";
		};
		class infoNews: infomods
		{
            show = 0;
			onload = "";
		};
		class infoVersion: infoNews
		{
            show = 0;
			onload = "";
		};
		delete ACE_news_apex; // I'm sorry ACE, but it's my only option :sob:
		delete CAALogo; // No regrets here hehe

		// Side buttons.
		class baseButton // This is the base class, which other inherit from. 
        {
			onLoad = "(_this # 0) ctrlEnable false;";
			type = 1;
			idc = -1;
			style = 48;
			x = "safeZoneX + (safeZoneW / 2) - (0.615 / 2)"; // Centered dynamically
			y = "safeZoneY + safeZoneH - 0.417";
			w = 0.615; // Increased width by 200%
			h = 0.201; // Increased height by 200%
			text = QPATHTOF(data\buttons\mainserver.paa); // No text needed for an image button
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
			font = "RobotoCondensed";
			sizeEx = 0.04;
			colorFocused[] = {1, 1, 1, 0.9};
			colorShadow[] = {0, 0, 0, 0};
			colorBorder[] = {0, 0, 0, 0};
			shadow = 0;
			soundEnter[] = {"", 0.1, 1};
			soundPush[] = {"", 0.1, 1};
			soundClick[] = {"", 0.1, 1};
			soundEscape[] = {"", 0.1, 1};
			colorDisabled[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			colorBackgroundDisabled[] = {0, 0, 0, 0};
			offsetX = 0;
			offsetY = 0;
			offsetPressedX = 0;
			offsetPressedY = 0;
			borderSize = 0;
			//onMouseButtonClick = "-";
		};
		class MainServerButton: baseButton 
        {
			y = "safeZoneY + (12 - 0.37 * 6.25) * (pixelH * pixelGrid * 2)";
			onLoad = "(_this # 0) ctrlEnable true";
			text = QPATHTOF(data\buttons\mainserver.paa); // Path to button image
			tooltip = "Connect to the Main Server";
			action = "connectToServer ['198.73.57.178', 2311, '51st'];"; // Connection information, must be in numbers.
			onMouseEnter = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\mainserver_aurebesh.paa)""; // HOVER
			onMouseExit = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\mainserver.paa)""; // same as text
			onMouseButtonUp = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\mainserver_aurebesh.paa)""; // HOVER
			onMouseButtonDown = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\mainserver.paa)""; // same as text
		};
		class TrainingServerButton: baseButton 
        {
			y = "safeZoneY + (18 - 0.37 * 6.25) * (pixelH * pixelGrid * 2)";
			onLoad = "(_this # 0) ctrlEnable true";
			text = QPATHTOF(data\buttons\trainingserver.paa); // Path to button image
			tooltip = "Connect to the Training Server";
			action = "connectToServer ['144.76.139.249', 2402, '51st'];"; // Connection information, must be in numbers.
			onMouseEnter = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\trainingserver_aurebesh.paa)"";
			onMouseExit = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\trainingserver.paa)"";
			onMouseButtonUp = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\trainingserver_aurebesh.paa)"";
			onMouseButtonDown = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\trainingserver.paa)"";
		};
		class LiberationServerButton: baseButton 
        {
			y = "safeZoneY + (24 - 0.37 * 6.25) * (pixelH * pixelGrid * 2)";
			onLoad = "(_this # 0) ctrlEnable true";
			text = QPATHTOF(data\buttons\liberationserver.paa); // Path to button image
			tooltip = "Connect to the Liberation Server";
			action = "connectToServer ['144.76.139.249', 2602, '51st'];"; // Connection information, must be in numbers.
			onMouseEnter = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\liberationserver_aurebesh.paa)"";
			onMouseExit = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\liberationserver.paa)"";
			onMouseButtonUp = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\liberationserver_aurebesh.paa)"";
			onMouseButtonDown = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\liberationserver.paa)"";
		};
		class KaminoServerButton: baseButton 
        {
			y = "safeZoneY + (30 - 0.37 * 6.25) * (pixelH * pixelGrid * 2)";
			onLoad = "(_this # 0) ctrlEnable true";
			text = QPATHTOF(data\buttons\kaminoserver.paa); // Path to button image
			tooltip = "Connect to the Kamino Server";
			action = "connectToServer ['144.76.139.249', 2502, '51st'];"; // Connection information, must be in numbers.
			onMouseEnter = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\kaminoserver_aurebesh.paa)"";
			onMouseExit = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\kaminoserver.paa)"";
			onMouseButtonUp = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\kaminoserver_aurebesh.paa)"";
			onMouseButtonDown = "(_this select 0) ctrlSetText "QPATHTOF(data\buttons\kaminoserver.paa)"";
		};
    };
};
