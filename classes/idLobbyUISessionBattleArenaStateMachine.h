struct idLobbyUISessionBattleArenaStateMachine
{
    enum serverState_t : int
    {
        NO_SERVER = 0,
        SERVER_REQUESTED = 1,
        SERVER_CONNECTED = 2,
        SERVER_FAILED = 3,
        SERVER_STATE_COUNT = 4
    };

    enum timerType_t : int
    {
        MATCH_COUNTDOWN = 0,
        LAUNCHING_MATCH = 1,
        POSTMATCH = 2,
        WAITING = 3,
        TIMER_COUNT = 4
    };

    enum state_t : int
    {
        NO_STATE = -1,
        INITIALIZE = 0,
        IDLE = 1,
        COUNTDOWN = 2,
        IN_MATCH = 3,
        WAIT_FOR_HOST = 4,
        POST_MATCH = 5,
        EXIT_LOBBY = 6,
        ERROR_STATE = 7,
        MAX_STATES = 8
    };

    enum transition_t : int
    {
        NO_TRANSITION = -1,
        INITIALIZE_to_IDLE = 0,
        IDLE_to_COUNTDOWN = 1,
        COUNTDOWN_to_IDLE = 2,
        COUNTDOWN_to_IN_MATCH = 3,
        IN_MATCH_to_IDLE = 4,
        IN_MATCH_to_WAIT_FOR_HOST = 5,
        WAIT_FOR_HOST_to_IDLE = 6,
        WAIT_FOR_HOST_to_POST_MATCH = 7,
        WAIT_FOR_HOST_to_EXIT_LOBBY = 8,
        POST_MATCH_to_IDLE = 9,
        MAX_TRANSITIONS = 10
    };

    typedef idInternalFsm < idLobbyUISessionBattleArenaStateMachine , idLobbyUISessionBattleArenaStateMachine::state_t , idLobbyUISessionBattleArenaStateMachine::transition_t > idInternalFSM;

    bool lobbyLockedOut; // Offset: 0x8

    bool countdownReduced; // Offset: 0x9

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > countdownEndTime; // Offset: 0x10

    idLobbyUISessionBattleArenaStateMachine::serverState_t serverState; // Offset: 0x18

    int serverConsecutiveAttempts; // Offset: 0x1C

    idLobbyUISessionBattleArenaStateMachine::timerType_t timerType; // Offset: 0x20

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > enterIdleStartTime; // Offset: 0x28

    idLobbyUISessionInterface* owner; // Offset: 0x30

    // internal state machine for the object
    idInternalFsm < idLobbyUISessionBattleArenaStateMachine , idLobbyUISessionBattleArenaStateMachine::state_t , idLobbyUISessionBattleArenaStateMachine::transition_t >* fsm; // Offset: 0x38

    idList < idLobbyUISessionBattleArenaStateMachine::transition_t , TAG_IDLIST , false > queuedTransitions; // Offset: 0x40

    idList < idLobbyUISessionBattleArenaStateMachine::state_t , TAG_IDLIST , false > queuedState; // Offset: 0x58

}; // Size: 0x70
