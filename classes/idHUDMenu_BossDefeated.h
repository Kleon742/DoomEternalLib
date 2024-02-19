struct idHUDMenu_BossDefeated : idMenuElement
{
    enum bossDefeatedMenuState_t : int
    {
        BOSS_DEFEATED_MENU_STATE_START = 0,
        BOSS_DEFEATED_MENU_STATE_SHOW_POINTS = 1,
        BOSS_DEFEATED_MENU_STATE_HIDE_POINTS = 2,
        BOSS_DEFEATED_MENU_STATE_SHOW_UPGRADE = 3,
        BOSS_DEFEATED_MENU_STATE_SHOW_DESC = 4,
        BOSS_DEFEATED_MENU_STATE_END = 5
    };

    idStrId description; // Offset: 0x100

    idEntity* target; // Offset: 0x108

    idDeclPerk* upgrade; // Offset: 0x110

    idMaterial2* bg; // Offset: 0x118

    int combatPoints; // Offset: 0x120

    idTypesafeTime < int , millisecondUnique_t , 1000 > animEndTime; // Offset: 0x124

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > minDismissTime; // Offset: 0x128

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > maxDismissTime; // Offset: 0x130

    swfPlatform_t currentPlatform; // Offset: 0x138

    idHUDMenu_BossDefeated::bossDefeatedMenuState_t currentState; // Offset: 0x13C

}; // Size: 0x140
