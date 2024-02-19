struct idLobbyUISessionMatchData
{
    idProxyPtr < idLobbyUISessionMatchData > proxyPtr; // Offset: 0x0

    // This is mode specific
    bool isRankedMatch; // Offset: 0x8

    // Was the match played to completion (i.e. has a proper match winner)?
    bool isMatchComplete; // Offset: 0x9

    // generally two teams, but left open for free-for-all support if needed
    idList < idLobbyUISessionTeamMatchData_t , TAG_IDLIST , false > teamData; // Offset: 0x10

    // team that won the round
    idList < gameTeam_t , TAG_IDLIST , false > roundWinners; // Offset: 0x28

    // playing with match context
    Json::Value matchContext; // Offset: 0x40

    idLobbyUISessionLocalPlayerData_t localPlayerData; // Offset: 0x58

    idLobbyUISessionPVPSeriesData_t pvpSeriesData; // Offset: 0xA8

    bool refreshSeasonXP; // Offset: 0xB0

    bool canShowPlayerReviewDialog; // Offset: 0xB1

    bool isPrivateMatch; // Offset: 0xB2

}; // Size: 0xB8
