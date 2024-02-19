struct idLobbyUIManager
{
    struct lobbyUserUpdate_t
    {
        bool forceUpdate; // Offset: 0x0

        int slotIndex; // Offset: 0x4

        lobbyUserId_t lobbyUserId; // Offset: 0x8

    }; // Size: 0xC

    struct lobbyMatchmakingPenalty_t
    {
        bool matchmakingPenaltyStarted; // Offset: 0x0

        idTypesafeTime < int , millisecondUnique_t , 1000 > currentMatchmakingPenaltyMS; // Offset: 0x4

    }; // Size: 0x8

    idLobbyUIManager_DemonDeckLookup* demonDeckLookUp; // Offset: 0x8

    uint16 broadcastSystemId; // Offset: 0x10

    bool lobbyLockedOut; // Offset: 0x12

    bool refreshAllPlayerPositions; // Offset: 0x13

    idList < idLobbyUIManager::lobbyUserUpdate_t , TAG_IDLIST , false > updatePlayerQueue; // Offset: 0x18

    idLobbyUIFaultedState::faultReason_t lobbyFault; // Offset: 0x30

    bool showMatchResultDataRequested; // Offset: 0x34

    idLobbyUISessionMatchData* matchResultData; // Offset: 0x38

    idLobbyUISessionInterface* lobbySession; // Offset: 0x40

    idHUDEvent_ShowHordeSummary* hordeResultData; // Offset: 0x48

    idProxyPtr < idLobbyUIManager > proxyPtr; // Offset: 0x50

    idLobbyUIManager_MatchmakingSearchType_t::searchType_t matchMakingType; // Offset: 0x58

    idListMap < gameType_t , idLobbyUIManager::lobbyMatchmakingPenalty_t > matchmakingPenalty; // Offset: 0x60

}; // Size: 0x90
