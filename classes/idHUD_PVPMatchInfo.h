struct idHUD_PVPMatchInfo : idHUDElement
{
    enum timerState_t : int
    {
        TIMER_STATE_INVALID = -1,
        TIMER_STATE_PRE_ROUND = 0,
        TIMER_STATE_INGAME = 1,
        TIMER_STATE_POST_ROUND = 2,
        TIMER_STATE_POST_MATCH = 3,
        TIMER_STATE_TUTORIAL_INGAME = 4,
        TIMER_STATE_TUTORIAL_POST_ROUND = 5
    };

    idHUDEvent_MatchInfoUpdate::matchInfo_t currentData; // Offset: 0xF8

    idHUDEvent_MatchInfoUpdate::matchInfo_t previousData; // Offset: 0x5F8

    idHUDEvent_PVPRespawn::info_t respawnData[12]; // Offset: 0xAF8

    bool respawnUpdated[12]; // Offset: 0xBB8

    bool requestShowTeams; // Offset: 0xBC4

    bool matchHasStarted; // Offset: 0xBC5

    bool matchHasEnded; // Offset: 0xBC6

    idSWFWidget* summaryContainer; // Offset: 0xBC8

    idSWFWidget* leftTeamContainer; // Offset: 0xBD0

    idSWFWidget* rightTeamContainer; // Offset: 0xBD8

    idArray < idSWFWidget_PlayerInformation * , 2 > rightTeam; // Offset: 0xBE0

    idArray < idSWFWidget_PlayerInformation * , 2 > leftTeam; // Offset: 0xBF0

    int currentSpetatePlayerNum; // Offset: 0xC00

    idHUD_PVPMatchInfo::timerState_t currentTimerState; // Offset: 0xC04

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > forceShowTeamsTime; // Offset: 0xC08

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hideTime; // Offset: 0xC10

}; // Size: 0xC18
