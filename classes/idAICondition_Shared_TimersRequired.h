struct idAICondition_Shared_TimersRequired : idAICondition
{
    // list of timers that must have elapsed / had interval passed, before transition canbe taken
    idList < nameRangePair_t , TAG_AI_FSM , false > timers_required; // Offset: 0x18

    // if true, apply haste to these timers
    bool applyHaste; // Offset: 0x30

}; // Size: 0x38
