struct idMainMenu_Screen_Root : idMenuElement
{
    idMainMenu_Screen_Root::anon_20 sprites; // Offset: 0x100

    idSWFWidget_List* options; // Offset: 0x130

    idSWFWidget_DropDownList* dropDown; // Offset: 0x138

    idSWFWidget_Button* btnCampaign; // Offset: 0x140

    idSWFWidget_Button* btnDLC1; // Offset: 0x148

    idSWFWidget_Button* btnDLC2; // Offset: 0x150

    idSWFWidget_Button* btnMultiplayer; // Offset: 0x158

    idSWFWidget_Button* btnHorde; // Offset: 0x160

    idSWFWidget_Button* btnTutorials; // Offset: 0x168

    idSWFWidget_Button* btnInvasion; // Offset: 0x170

    idSWFWidget_Button* btnSeasons; // Offset: 0x178

    idSWFWidget_Button* btnCustomize; // Offset: 0x180

    idSWFWidget_Button* btnExtras; // Offset: 0x188

    idSWFWidget_Button* btnDevList; // Offset: 0x190

    idSWFWidget_List* liveTileList; // Offset: 0x198

    idSWFWidget_LiveTile* liveTiles[3]; // Offset: 0x1A0

    showLiveTileRequest_t showLiveTileRequest; // Offset: 0x1B8

    unsigned int lastShowFlags; // Offset: 0x1BC

    asyncio::idTaskResultPtr < bool , PermissionError > permissionCheckTask; // Offset: 0x1C0

    int onlineCheckCmdId; // Offset: 0x1C8

    bool triedToGoOnline; // Offset: 0x1CC

    bool screenDeactivated; // Offset: 0x1CD

    bool liveTilesVisible; // Offset: 0x1CE

    int pendingActivityId; // Offset: 0x1D0

    unsigned short pendingEvId; // Offset: 0x1D4

    idProxyPtr < idMainMenu_Screen_Root > proxyPtr; // Offset: 0x1D8

    idDeferredFuncList deferred; // Offset: 0x1E0

    idList < warehouseItemClass_t , TAG_IDLIST , false > customizationCosmeticTypes; // Offset: 0x228

}; // Size: 0x240
