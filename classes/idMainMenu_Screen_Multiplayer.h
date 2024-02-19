struct idMainMenu_Screen_Multiplayer : idMenuElement
{
    idSWFWidget_Button_Multiplayer* btnBattlemode; // Offset: 0x100

    idSWFWidget_Button_Multiplayer* btnInvasion; // Offset: 0x108

    idSWFWidget_Button_Multiplayer* btnCustomize; // Offset: 0x110

    idSWFWidget_Button_Multiplayer* btnTutorials; // Offset: 0x118

    idSWFWidget_Button_Multiplayer* btnEvents; // Offset: 0x120

    idSWFWidget_Button_Multiplayer* btnExtras; // Offset: 0x128

    idProxyPtr < idMainMenu_Screen_Multiplayer > proxyPtr; // Offset: 0x130

    asyncio::idTaskResultPtr < bool , PermissionError > permissionCheckTask; // Offset: 0x138

    int pendingActivityId; // Offset: 0x140

    unsigned short pendingEvId; // Offset: 0x144

}; // Size: 0x148
