struct idLobbyUISessionCasualBattleArena : idLobbyUISessionInterface
{
    enum votingOptions_t : int
    {
        NO_VOTE = -1,
        SHUFFLE = 0,
        REMATCH = 1,
        COUNT = 2
    };

    enum lobbyType_t : int
    {
        INVALID = 0,
        PRIVATE = 1,
        PUBLIC = 2,
        ENUM_COUNT = 3
    };

    struct playerCharacterSetup_t
    {
        lobbyUserId_t lobbyUserId; // Offset: 0x0

        int actorIndex; // Offset: 0x4

        gameTeam_t team; // Offset: 0x8

        int playerSlot; // Offset: 0xC

    }; // Size: 0x10

    struct debugMapChosen_t
    {
        idStrMapName name; // Offset: 0x0

        int count; // Offset: 0x30

    }; // Size: 0x38

    idList < idCharacterPodium , TAG_IDLIST , false > podiums; // Offset: 0x10

    idList < idLobbyUISessionInterface::podiumSlot_t , TAG_IDLIST , false > slayerPositions; // Offset: 0x28

    idList < idLobbyUISessionInterface::podiumSlot_t , TAG_IDLIST , false > demonPositions; // Offset: 0x40

    idList < idLobbyUISessionInterface::podiumSlot_t * , TAG_IDLIST , false > allPositions; // Offset: 0x58

    idList < idLobbyUISessionInterface::pvpMapSelectInfoWithWeight_t , TAG_IDLIST , false >* pvpMapsWithWeights; // Offset: 0x70

    idStr lastLaunchedMapName; // Offset: 0x78

    idLobbyUISessionBattleArenaStateMachine* lobbyUIStateMachine; // Offset: 0xA8

    bool isLobbyVotingDisabled; // Offset: 0xB0

    // Upon coming back to the shell this info can be lost so we need to cache it
    idLobbyUISessionCasualBattleArena::lobbyType_t lobbyType; // Offset: 0xB4

    idRandom random; // Offset: 0xB8

    bool performInitialDupCheck; // Offset: 0xBC

    idList < idLobbyUISessionCasualBattleArena::debugMapChosen_t , TAG_IDLIST , false > debugMapsChosen; // Offset: 0xC0

}; // Size: 0xD8
