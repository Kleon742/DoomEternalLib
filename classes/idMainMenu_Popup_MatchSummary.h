struct idMainMenu_Popup_MatchSummary : idMenuElement
{
    enum contextState_t : int
    {
        CONTEXT_STATE_INVALID = -1,
        CONTEXT_STATE_SUMMARY = 0,
        CONTEXT_STATE_STATS = 1,
        CONTEXT_STATE_RANK = 2,
        CONTEXT_STATE_REWARDS = 3
    };

    enum screenCommand_lobbyPlayerSetup_t : int
    {
        CMD_PVP_MATCH_RESULTS_VIEW_SUMMARY = 0,
        CMD_PVP_MATCH_RESULTS_VIEW_STATS = 1,
        CMD_PVP_MATCH_RESULTS_VIEW_RANK = 2,
        CMD_PVP_MATCH_RESULTS_VIEW_REWARDS = 3,
        CMD_PVP_MATCH_RESULTS_REVIEW_PLAYERS = 4
    };

    idProxyPtr < idMainMenu_Popup_MatchSummary > proxyPtr; // Offset: 0x100

    // Summary Page ( Match Results and stuff )
    idSWFWidget_MatchSummary_SummaryTab* summaryPage; // Offset: 0x108

    // Player's Names, Stats Etc
    idSWFWidget_MatchSummary_StatsTab* statsPage; // Offset: 0x110

    // Rank progress.
    idSWFWidget_EOL_DoomLevelProgressTally* rankPage; // Offset: 0x118

    // Season Rewards.
    idSWFWidget_MatchSummary_RewardsTab* rewardsPage; // Offset: 0x120

    idSWFWidget_TabList* tabList; // Offset: 0x128

    idSWFWidget_Button* summaryNavButton; // Offset: 0x130

    idSWFWidget_Button* statsNavButton; // Offset: 0x138

    idSWFWidget_Button* rankNavButton; // Offset: 0x140

    idSWFWidget_Button* rewardsNavButton; // Offset: 0x148

    idMatchStatsInfo_t statsInfo; // Offset: 0x150

    idMatchSummaryInfo_t summaryInfo; // Offset: 0x5F8

    matchSummaryScreenData_t summaryScreenData; // Offset: 0x680

    idMainMenu_Popup_MatchSummary::contextState_t state; // Offset: 0x6A4

    idMainMenu_Popup_MatchSummary::contextState_t nextState; // Offset: 0x6A8

    bool isCasualMatch; // Offset: 0x6AC

    bool queueTabUpdate; // Offset: 0x6AD

    bool showRankUpSequence; // Offset: 0x6AE

    bool hasRegisteredSocialBroadcasts; // Offset: 0x6AF

}; // Size: 0x6B0
