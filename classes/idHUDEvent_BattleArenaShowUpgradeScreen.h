struct idHUDEvent_BattleArenaShowUpgradeScreen
{
    struct upgradeInfo_t
    {
        idDeclPVPUpgrade* upgradeDecl; // Offset: 0x0

        gameTeam_t currentTeam; // Offset: 0x8

        // list of activated upgrades as bits
        int activeUpgrades; // Offset: 0xC

    }; // Size: 0x10

    idHUDEvent_BattleArenaShowUpgradeScreen::upgradeInfo_t info; // Offset: 0x0

}; // Size: 0x10
