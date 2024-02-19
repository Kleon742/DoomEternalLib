struct idSWFWidget_BattleArena_UpgradeSelect : idSWFWidget
{
    idList < idStr , TAG_IDLIST , false > focusTargetPath; // Offset: 0x188

    idDeclPVPUpgrade* upgradeDecl; // Offset: 0x1A0

    int activeUpgrades; // Offset: 0x1A8

    idDeclPVPUpgrade::upgradeData_t* currentFocus; // Offset: 0x1B0

    idSWFWidget_List* focusedItemDescList; // Offset: 0x1B8

    idMenuElement* menuElement; // Offset: 0x1C0

    int selectCmdID; // Offset: 0x1C8

    idSWFWidget_WedgeWheel* wheel; // Offset: 0x1D0

    // press and hold button
    idSWFWidget_Button_CommandBar* actionButton; // Offset: 0x1D8

    int firstAvailableIndex; // Offset: 0x1E0

    bool upgradeSelected; // Offset: 0x1E4

    bool shouldUpdateCommandBar; // Offset: 0x1E5

}; // Size: 0x1E8
