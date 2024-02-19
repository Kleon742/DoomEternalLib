struct idLogicNodeHordeRound
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_INDEX = 2
    };

    enum hordeRoundCommands_t : int
    {
        HORDE_ROUND_NO_COMMAND = 0,
        HORDE_ROUND_START_ARENA_COMBAT = 1,
        HORDE_ROUND_START_TRAVERSAL = 2,
        HORDE_ROUND_START_BLITZ = 3,
        HORDE_ROUND_START_BONUS = 4,
        HORDE_ROUND_END = 5,
        HORDE_ROUND_FORCE_TIMER_END = 6
    };

    idLogicNodeHordeRound::hordeRoundCommands_t command; // Offset: 0x0

    // The notification to fire when the horde command gets processed
    idDeclNotification* notificationToFire; // Offset: 0x8

    // For starting staged timers at the start of certain round types
    idDeclStagedTimer* timerBehavior; // Offset: 0x10

    // Index for which round this is
    int index; // Offset: 0x18

}; // Size: 0x20
