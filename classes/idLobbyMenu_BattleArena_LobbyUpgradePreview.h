struct idLobbyMenu_BattleArena_LobbyUpgradePreview : idMenuElement
{
    enum sceneState_t : int
    {
        STANDARD_UPGRADES = 0,
        POWER_UPGRADES = 1
    };

    idSWFWidget_BattleArena_UpgradeSelect* upgradeSelect; // Offset: 0x100

    idDeclPVPUpgrade* normalUpgrade; // Offset: 0x108

    idDeclPVPUpgrade* powerUpgrade; // Offset: 0x110

    idLobbyMenu_BattleArena_LobbyUpgradePreview::sceneState_t state; // Offset: 0x118

}; // Size: 0x120
