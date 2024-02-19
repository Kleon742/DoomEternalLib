struct idLobbyUISessionTeamMatchData_t
{
    struct resultData_t
    {
        int numVictories; // Offset: 0x0

        bool wasVictor; // Offset: 0x4

    }; // Size: 0x8

    // The gameTeam of this player
    gameTeam_t team; // Offset: 0x0

    // generally one entry but some modes have multiple matches back to back
    idList < idLobbyUISessionTeamMatchData_t::resultData_t , TAG_IDLIST , false > resultData; // Offset: 0x8

    // per player data for the team
    idList < idLobbyUISessionPlayerMatchData_t , TAG_IDLIST , false > playerData; // Offset: 0x20

}; // Size: 0x38
