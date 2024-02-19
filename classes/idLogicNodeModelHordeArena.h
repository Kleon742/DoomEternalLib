struct idLogicNodeModelHordeArena : idLogicNodeModel
{
    // The Horde Arena Command to pass to the game challenge
    idLogicNodeHordeArena::hordeArenaCommands_t commandToGive; // Offset: 0x10

    // Name of the command
    idStr name; // Offset: 0x18

    // The notification to fire when the horde command gets processed
    idDeclNotification* notificationToFire; // Offset: 0x48

    // The bounty rules to use if we are starting a bounty
    idDeclTimedDemonBounty* bountyToUse; // Offset: 0x50

    // For starting staged timers not tied to round starts (you do not need to specify a timer decl for bounties)
    idDeclStagedTimer* timerBehavior; // Offset: 0x58

}; // Size: 0x60
