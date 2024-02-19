struct idHUDMenu_BattleArena_RoundUpgrades : idMenuElement
{
    struct previousUpgradeData_t
    {
        idDeclPVPUpgrade* upgradeDecl; // Offset: 0x0

        int upgradeBit; // Offset: 0x8

        int roundNumber; // Offset: 0xC

    }; // Size: 0x10

    idHUDEvent_BattleArenaShowUpgradeScreen::upgradeInfo_t data; // Offset: 0x100

    idSWFWidget_BattleArena_UpgradeSelect* upgradeSelect; // Offset: 0x110

    idSWFWidget_Text* header; // Offset: 0x118

    idSWFWidget* timer; // Offset: 0x120

    // press and hold button
    idSWFWidget_Button_CommandBar* actionButton; // Offset: 0x128

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > upgradeUIShowTime; // Offset: 0x130

    int numRounds; // Offset: 0x138

    swfPlatform_t cachedPlatform; // Offset: 0x13C

    idList < idHUDMenu_BattleArena_RoundUpgrades::previousUpgradeData_t , TAG_IDLIST , false > previousUpgrades; // Offset: 0x140

    bool ready; // Offset: 0x158

    bool upgradeSelected; // Offset: 0x159

    gameTeam_t cachedLocalTeam; // Offset: 0x15C

}; // Size: 0x160
