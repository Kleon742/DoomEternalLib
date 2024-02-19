struct idLobbyMenu_BattleArena_LobbyOptions : idBattleArena_LobbyMenuBase
{
    enum screenState_lobbyOptions_t : int
    {
        SCREEN_STATE_LOBBY_OPTIONS_INVALID = -1,
        SCREEN_STATE_LOBBY_OPTIONS_ROOT = 0,
        SCREEN_STATE_LOBBY_OPTIONS_SPECTATE = 1,
        SCREEN_STATE_LOBBY_OPTIONS_MAP_SELECT = 2,
        SCREEN_STATE_LOBBY_OPTIONS_SETTINGS = 3,
        SCREEN_STATE_LOBBY_OPTIONS_EXIT_LOBBY = 4
    };

    idLobbyMenu_BattleArena_LobbyOptions::screenState_lobbyOptions_t state; // Offset: 0x10C

    idLobbyMenu_BattleArena_LobbyOptions::screenState_lobbyOptions_t nextState; // Offset: 0x110

    idSWFWidget_DropdownButton* btnSpectate; // Offset: 0x118

    idSWFWidget_DropdownButton* btnMapSelect; // Offset: 0x120

    idSWFWidget_DropdownButton* btnSettings; // Offset: 0x128

    idSWFWidget_DropdownButton* btnCustomize; // Offset: 0x130

    idSWFWidget_DropdownButton* btnSeason; // Offset: 0x138

    idSWFWidget_DropdownButton* btnMilestones; // Offset: 0x140

    idSWFWidget_DropdownButton* btnTriumphs; // Offset: 0x148

    idSWFWidget_DropdownButton* btnExitLobby; // Offset: 0x150

    idSWFWidget_SectionList_Dropdown* options; // Offset: 0x158

    idLobbyMenu_LobbyPlayerCollection* playerCollection; // Offset: 0x160

    bool clearPlayerCollectionDropdown; // Offset: 0x168

    bool queueUpdatePlayerList; // Offset: 0x169

    bool queueHideMaps; // Offset: 0x16A

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameStartTime; // Offset: 0x170

    idStr rootCameraPlacement; // Offset: 0x178

    uint16 lobbyUsersBroadcastId; // Offset: 0x1A8

    uint16 ghostUsersBroadcastId; // Offset: 0x1AA

}; // Size: 0x1B0
