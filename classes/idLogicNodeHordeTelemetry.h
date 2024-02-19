struct idLogicNodeHordeTelemetry : idEventReceiver
{
    enum hordeRoundType_t : int
    {
        HORDE_ROUND_UNASSIGNED = 0,
        HORDE_ROUND_BLITZ = 1,
        HORDE_ROUND_BONUS_BLITZ = 2,
        HORDE_ROUND_COIN = 3,
        HORDE_ROUND_TRAVERSAL = 4,
        HORDE_ROUND_ARENA = 5
    };

    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_ROUND_TYPE = 2,
        INPUT_WON_ROUND = 3,
        INPUT_COIN_COUNT = 4,
        INPUT_KILL_COUNT = 5,
        INPUT_TIME_REMAINING = 6,
        INPUT_MECHANIC_USE_COUNT = 7,
        INPUT_MECHANIC_KILL_COUNT = 8,
        INPUT_POWERUP_COLLECTED_COUNT = 9
    };

    logicNodeReference_t node; // Offset: 0x38

    idLogicNodeHordeTelemetry::hordeRoundType_t roundType; // Offset: 0x40

    int coinCount; // Offset: 0x44

    int killCount; // Offset: 0x48

    // Convert to game time
    float timeRemaining; // Offset: 0x4C

    bool wonRound; // Offset: 0x50

    int mechanicUseCount; // Offset: 0x54

    int mechanicKillCount; // Offset: 0x58

    int powerupCollectedCount; // Offset: 0x5C

}; // Size: 0x60
