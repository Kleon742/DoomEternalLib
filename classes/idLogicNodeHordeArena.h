struct idLogicNodeHordeArena
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    enum hordeArenaCommands_t : int
    {
        HORDE_ARENA_NO_COMMAND = 0,
        HORDE_ARENA_START_WAVE = 1,
        HORDE_ARENA_END_WAVE = 2,
        HORDE_ARENA_START_BOUNTY = 3,
        HORDE_ARENA_START_STAGED_TIMER = 4
    };

    idLogicNodeHordeArena::hordeArenaCommands_t command; // Offset: 0x0

    // The notification to fire when the horde command gets processed
    idDeclNotification* notificationToFire; // Offset: 0x8

    // The bounty rules to use if we are starting a bounty
    idDeclTimedDemonBounty* bountyToUse; // Offset: 0x10

    // For starting staged timers not tied to round starts (you do not need to specify a timer decl for bounties)
    idDeclStagedTimer* timerBehavior; // Offset: 0x18

}; // Size: 0x20
