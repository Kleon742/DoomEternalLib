struct MoverScripter
{
    enum moverScripterState_t : int
    {
        NO_STATE = -1,
        MS_NONE = 0,
        MS_MOVE_START = 1,
        MS_MOVING = 2,
        MS_MOVE_ENDING = 3,
        MS_MOVE_WAIT = 4,
        MAX_STATES = 5
    };

    enum moverScripterTransitions_t : int
    {
        NO_TRANSITION = -1,
        MT_NONE = 0,
        MT_MOVE_START = 1,
        MT_MOVING = 2,
        MT_MOVE_ENDING = 3,
        MT_MOVE_WAIT = 4,
        MAX_TRANSITIONS = 5
    };

    typedef idInternalFsm < MoverScripter , MoverScripter::moverScripterState_t , MoverScripter::moverScripterTransitions_t > idMoverScripterFSM;

    // move Commands
    idList < moveCommands_t , TAG_IDLIST , false > moveCommands; // Offset: 0x0

    // move Commands as used in game
    idList < moveCommands_t , TAG_IDLIST , false > moveCommandsFinal; // Offset: 0x18

    // the starting position for the cycle. ( used to sync across network ) {{ units = m }}
    idVec3 cyclePosition; // Offset: 0x30

    // the starting orientation for the cycle. ( used to sync across network )
    idQuat cycleOrientation; // Offset: 0x3C

    // the index we want to start at
    int startIndex; // Offset: 0x4C

    // numRepeat, -1 means loop on move commands infinitely
    int numRepeat; // Offset: 0x50

    // numCurrentCommand
    int currentCommand; // Offset: 0x54

    // Keeps track of the repeat count, if repeating is > 0
    int currentRepeatCount; // Offset: 0x58

    // keep track of the start time of each command
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > moveStartTime; // Offset: 0x60

    // keeps track of start time via game server time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > moverStartSyncTime; // Offset: 0x68

    // the time to end the wait
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > moveWaitEnd; // Offset: 0x70

    // the extra time we need to wait in order to sync
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > syncExtraWait; // Offset: 0x78

    // the current command count
    int commandCount; // Offset: 0x80

    // the time at which we received the snapshot
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > snapShotTime; // Offset: 0x88

    // the current ping value for QOS
    int currentPingValue; // Offset: 0x90

    // the time since the last snapshot
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeFrmSnpSht; // Offset: 0x98

    // the previous time since the last snapshot
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > prevTimeFrmSnpSht; // Offset: 0xA0

    // the previous time since the last snapshot
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > infRotSyncTime; // Offset: 0xA8

    // the previous time since the last snapshot
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > infRotHighTime; // Offset: 0xB0

    // the last sync CMD we received from the server
    int syncCmdCount; // Offset: 0xB8

    // the last sync start time we received from the server
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > syncCmdStartTime; // Offset: 0xC0

    // moverScripterState_tmoverState; the current mover state bIsBusy
    bool bIsBusy; // Offset: 0xC8

    // start the scripted movement on spawn
    bool startOnSpawn; // Offset: 0xC9

    // flag to alert the system there was a glitch from the server
    bool handleHitch; // Offset: 0xCA

    // flag to determine if we are in an infinite rotation
    bool infiniteRotation; // Offset: 0xCB

    // if true we need to convert the splines to mover commands
    bool convertSplineToCmds; // Offset: 0xCC

    // start the scripted movement on the first show
    bool startOnFirstShow; // Offset: 0xCD

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cycleStartTime; // Offset: 0xD0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > totalCommandTimes; // Offset: 0xD8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > aggregateMoveCommandDurationGT; // Offset: 0xE0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSyncTime; // Offset: 0xE8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > moverPulseGT; // Offset: 0xF0

    idInternalFsm < MoverScripter , MoverScripter::moverScripterState_t , MoverScripter::moverScripterTransitions_t >* internalFSM; // Offset: 0xF8

    idMover* ownerMover; // Offset: 0x100

}; // Size: 0x108
