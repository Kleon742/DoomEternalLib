struct idShared_ControlFX : idAIState
{
    // Conditions that will be started when the state starts
    idList < fxCondition_t , TAG_AI_FSM , false > startConditions; // Offset: 0x130

    // Conditions that will be stopped when the state ends
    idList < fxCondition_t , TAG_AI_FSM , false > endConditions; // Offset: 0x148

}; // Size: 0x160
