class CfgVehicles {
  class Man;
  class CAManBase: Man {
    class ACE_SelfActions {
      class ic51_shield_root {
        displayName = "Katarn Shield System";
        condition = "(_player getVariable ['OPTRE_hasArmor',false])";
        statement = "";
        class ic51_shield_enable {
          displayName = "Enable Shield";
          condition = "(_player getVariable ['OPTRE_hasArmor',false]) && !(_player getVariable 'OPTRE_suitActive')";
          statement  = "([_player] call optre_suit_fnc_suit_activation)";
        };
        class ic51_shield_disable {
          displayName = "Disable Shield";
          condition = "(_player getVariable ['OPTRE_hasArmor',false]) && (_player getVariable 'OPTRE_suitActive')";
          statement = "(_player setVariable ['optre_disable_suit', true])";
        };
        class ic51_shield_enable_hud {
          displayName = "Activate HUD";
          condition = "!(_player getVariable ['OPTRE_MJOLNIR_hudInitiated', false]) && (_player getVariable ['OPTRE_hasArmor',false]) && (_player getVariable 'OPTRE_suitActive') && (_player getVariable ['OPTRE_hasHelmet',false])";
          statement  = "([_player] spawn OPTRE_fnc_hudBootUp)";
        };
      };
    };
  };
};
