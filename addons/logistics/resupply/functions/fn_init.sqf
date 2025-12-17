/*
    IC51 postInit — ProjectileCreated-only, client side
    - No vanilla "Fired" or ACE/CBA hooks.
    - Clients detect the projectile locally and run the settle→server flow.
    - Projectiles marked "ic51_handled" (e.g., Zeus module) are ignored here.
*/

diag_log "[IC51] postInit (client ProjectileCreated)";

if (hasInterface && {isNil "ic51_projCreatedEH_IC51"}) then {
    ic51_projCreatedEH_IC51 = addMissionEventHandler ["ProjectileCreated", {
        params ["_proj"];
        if (isNull _proj) exitWith {};

        // Skip if someone (e.g., Zeus module) already claimed it
        if (!isNil {_proj getVariable "ic51_handled"}) exitWith {};

        // Only our supply smoke ammo
        if ((typeOf _proj) != "ic51_SupplySmoke_Ammo") exitWith {};

        // Process only where the projectile is local
        [_proj] spawn {
            params ["_p"];
            waitUntil { sleep 0.02; isNull _p || local _p };
            if (isNull _p) exitWith {};

            // Recover thrower (works for vanilla & ACE)
            private _thrower = objNull;
            private _parents = getShotParents _p;   // [vehicle, shooter]
            if (_parents isEqualType [] && {count _parents >= 2}) then {
                _thrower = _parents select 1;
            };

            // Settle locally, then ask server to fly over
            [_p, _thrower] spawn ic51_fnc_handleSmoke;
        };
    }];

    diag_log "[IC51] ProjectileCreated EH installed on client.";
};
