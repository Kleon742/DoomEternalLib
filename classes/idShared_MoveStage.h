struct idShared_MoveStage : idAIState
{
    // modifiers for this stage
    aiMoveModifiers_t stageModifiers; // Offset: 0x130

    // firemode to use during this stage
    aiFireMode_t fireMode; // Offset: 0x190

    // things to do when entering this stage
    stateExecutionFlags_t executionFlags; // Offset: 0x194

    // index of inventory item to put in left weapon slot
    int leftWeaponIndex; // Offset: 0x198

    // index of inventory item to put in right weapon slot
    int rightWeaponIndex; // Offset: 0x19C

}; // Size: 0x1A0
