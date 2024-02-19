struct idMatchTeamData_t
{
    gameTeam_t team; // Offset: 0x0

    idStrId teamName; // Offset: 0x4

    int teamScore; // Offset: 0x8

    // < The array size should match "MAX_PLAYER_COUNT"
    idArray < idMatchPlayerData_t , 2 > playerData; // Offset: 0x10

}; // Size: 0x250
