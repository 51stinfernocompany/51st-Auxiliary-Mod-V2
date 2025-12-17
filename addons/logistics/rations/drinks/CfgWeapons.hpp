class ACE_ItemCore;
class CBA_MiscItem_ItemInfo;

class ic51_rations_base : ACE_ItemCore

{
    SCOPE_HIDDEN;
    author = AUTHOR;
    acex_field_rations_hungerSatiated = 25;
    acex_field_rations_thirstQuenched = 5;
    class ItemInfo: CBA_MiscItem_ItemInfo
    {
        mass = 5;
        scope = 0;
        type = 302;
    };

class ic51_rations_dietwater : ACE_ItemCore
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "[51st] Diet Water";
    acex_field_rations_hungerSatiated = 0;
    acex_field_rations_consumeTime = 5;
    acex_field_rations_thirstQuenched = 5;
    acex_field_rations_consumeText = "Eating %1...";
    descriptionShort = "DIET WATER. THE BEST THING AVAILABLE";
    picture = "\x\ic51\addons\equipment\props\data\diet_water\dite water_Resized.paa";
    class ItemInfo: CBA_MiscItem_ItemInfo
    {
        mass = 5;
        scope = 0;
        type = 302;
    };
};
