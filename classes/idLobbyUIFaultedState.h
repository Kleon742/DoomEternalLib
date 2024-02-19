struct idLobbyUIFaultedState
{
    enum faultReason_t : int
    {
        FIRST = 0,
        NO_FAULTS = 0,
        NO_SERVER_AVAILABLE = 1,
        NOT_ENOUGH_PLAYERS = 2,
        TIMED_OUT_WAITING = 3,
        SYSTEM_PATCH_REQUIRED = 4,
        TITLE_PATCH_REQUIRED = 5,
        LOCAL_PLAYER_QUIT = 6,
        DISABLED = 7,
        PARTY_DISBANDED = 8,
        ENUM_COUNT = 9
    };

}; // Size: 0x1
