struct roundUserHistory_t
{
    // PR TODO [5/14/2019] - Replace this later with unique server session id generated by Playfab
    int playerNum; // Offset: 0x0

    idSpawnId playerOwnerSpawnID; // Offset: 0x4

    idList < idDemonPlayer::summonedAIInfo_t , TAG_IDLIST , false > cachedSummonedAIs; // Offset: 0x8

    idList < roundCardUseData_t , TAG_IDLIST , false > cardUseHistory; // Offset: 0x20

}; // Size: 0x38
