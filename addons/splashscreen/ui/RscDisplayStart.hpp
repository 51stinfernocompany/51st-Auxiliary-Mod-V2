class RscDisplayStart: RscStandardDisplay
{
    class controls
    {
        class LoadingPic: RscPicture
        {
            idc = 1;
            x = "SafeZoneX";
            y = "SafeZoneY";
            h = "SafeZoneH";
            w = "SafeZoneW";
            text = RANDOM_IMAGE_PATH_2;
        };
        class LoadingStart: RscControlGroup
        {
            class controls
            {
                class logo: RscPictureKeepAspect
                {
                    onLoad = "if (395180 in getDLCs 1) then {(_this select 0) ctrlsettext '\x\ic51\addons\splashscreendata\51st_logo_co.paa';};";
                    text = QPATHTOF(data\51st_logo_co.paa);
                };
            };
        };
    };
};
