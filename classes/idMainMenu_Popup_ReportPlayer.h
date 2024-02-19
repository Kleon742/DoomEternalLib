struct idMainMenu_Popup_ReportPlayer : idMenuElement
{
    enum reportPlayerType_t : int
    {
        REPORT_PLAYER_BAD_NAME = 0,
        REPORT_PLAYER_HARASSMENT = 1,
        REPORT_PLAYER_CHEATING = 2,
        REPORT_PLAYER_SPAM = 3,
        REPORT_PLAYER_REAL_WORLD_THREAT = 4,
        NUM_REPORT_PLAYER_TYPES = 5
    };

    enum reportPlayerSubmitStatusID_t : int
    {
        REPORT_PLAYER_STATUS_INVALID = -1,
        REPORT_PLAYER_STATUS_NONE = 0,
        REPORT_PLAYER_STATUS_SUBMITTING = 1,
        REPORT_PLAYER_STATUS_SUCCESS = 2,
        REPORT_PLAYER_STATUS_FAILED = 3
    };

    idSWFWidget_List* list; // Offset: 0x100

    socialFriendId_t friendId; // Offset: 0x108

    socialRecentPlayerId_t recentPlayerId; // Offset: 0x10C

    lobbyUserId_t lobbyUserId; // Offset: 0x110

    // Async Task Info
    idProxyPtr < idMainMenu_Popup_ReportPlayer > proxyPtr; // Offset: 0x118

    idMainMenu_Popup_ReportPlayer::reportPlayerSubmitStatusID_t queuedSubmitStatus; // Offset: 0x120

}; // Size: 0x128
