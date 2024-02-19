struct idTarget_SetGroupCombatStage : idTarget
{
    // Group to switch
    idStr groupName; // Offset: 0xB88

    // Combat stage to switch to
    idStr combatStage; // Offset: 0xBB8

    // delay in milliseconds, this makes the response more natural
    idTypesafeTime < int , millisecondUnique_t , 1000 > delay; // Offset: 0xBE8

}; // Size: 0xBF0
