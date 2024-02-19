struct idLobbyMenu_BattleArena_LobbyWeaponWheel : idMenuElement
{
    enum sceneState_t : int
    {
        INVALID_STATE = 0,
        WEAPON_MOD_SELECTION = 1,
        WEAPON_WHEEL_LAYOUT = 2
    };

    idSWFWidget_WeaponWheelCustomization* weaponWheel; // Offset: 0x100

    idSWFWidget_WeaponWheelModSelect* weaponModSelect; // Offset: 0x108

    idLobbyMenu_BattleArena_LobbyWeaponWheel::sceneState_t state; // Offset: 0x110

    idLobbyMenu_BattleArena_LobbyWeaponWheel::sceneState_t nextState; // Offset: 0x114

}; // Size: 0x118
