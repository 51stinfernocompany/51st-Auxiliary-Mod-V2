class RscDisplayNotFreeze: RscStandardDisplay 
{
    class controls
    {
        class LoadingStart: RscControlsGroup
        {
            class controls
            {
                class Logo: RscPictureKeepAspect
                {
                    onLoad = "if (395180 in getDLCs 1) then {(_this select 0) ctrlsettext '\x\ic51\addons\splashscreen\data\51st_logo_co.paa';};";
                };
            };
        };
    };
};
