struct idDeclSentinelGiftMatchRules : idGameDeclTypeInfo
{
    // the max num of gifts slots allowed in a single match per player
    int maxNumGiftsAllowed; // Offset: 0x90

    // the number of gifts slots the player is allowed to use per opponent
    int numGiftsAllowedPerOpponent; // Offset: 0x94

    // the number of gift slots the player has to remove per teammate
    int numGiftsRemovedPerTeammate; // Offset: 0x98

}; // Size: 0xA0
