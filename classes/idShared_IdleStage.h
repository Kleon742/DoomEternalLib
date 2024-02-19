struct idShared_IdleStage : idAIState
{
    // modifiers for this stage
    aiIdleModifiers_t stageModifiers; // Offset: 0x130

    // firemode to use during this stage
    aiFireMode_t fireMode; // Offset: 0x178

    // things to do when entering this stage
    stateExecutionFlags_t executionFlags; // Offset: 0x17C

    // index of inventory item to put in left weapon slot
    int leftWeaponIndex; // Offset: 0x180

    // index of inventory item to put in right weapon slot
    int rightWeaponIndex; // Offset: 0x184

}; // Size: 0x188
