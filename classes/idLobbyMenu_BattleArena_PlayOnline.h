struct idLobbyMenu_BattleArena_PlayOnline : idMenuElement
{
    enum screenState_playOnline_t : int
    {
        SCREEN_STATE_PLAY_ONLINE_INVALID = -1,
        SCREEN_STATE_PLAY_ONLINE_ROOT = 0,
        SCREEN_STATE_PLAY_ONLINE_NORMAL = 0,
        SCREEN_STATE_PLAY_ONLINE_FIND_PUBLIC = 1
    };

    idSWFWidget_List* menuButtonList; // Offset: 0x110

    idSWFWidget_List* publicMatchButtonList; // Offset: 0x118

    idLobbyMenu_BattleArena_PlayOnline::screenState_playOnline_t state; // Offset: 0x120

    idLobbyMenu_BattleArena_PlayOnline::screenState_playOnline_t nextState; // Offset: 0x124

    idSWFWidget_DropdownButtonBannable* publicMatchButton; // Offset: 0x128

    idSWFWidget_DropdownButtonBannable* privateMatchButton; // Offset: 0x130

    idSWFWidget_DropdownButton* characterSetup; // Offset: 0x138

    idSWFWidget_DropdownButton* pvpSeriesButton; // Offset: 0x140

    idSWFWidget_DropdownButton* triumphButton; // Offset: 0x148

    idSWFWidget_DropdownButton* leaderboardButton; // Offset: 0x150

    bool exitToMultiplayerPending; // Offset: 0x158

    bool cancelMatchmakingPending; // Offset: 0x159

    bool rebuildButtonOptions; // Offset: 0x15A

    bool qosRegionsMatch; // Offset: 0x15B

    int focusIndexToRestore; // Offset: 0x15C

    idProxyPtr < idLobbyMenu_BattleArena_PlayOnline > proxyPtr; // Offset: 0x160

    asyncio::idTaskWeakPtr goToOnlineMatchTask; // Offset: 0x168

    asyncio::idTaskWeakPtr joinExistingPrivateLobbyTask; // Offset: 0x170

    asyncio::idTaskWeakPtr goToPrivateLobbyTask; // Offset: 0x178

    idSWFWidget_BattleArena_PlayOnline_ModeButton::ButtonType_t matchmakingSelection; // Offset: 0x180

}; // Size: 0x188
