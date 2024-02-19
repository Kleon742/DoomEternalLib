struct Shared_LowLevelStrategy : idAIStateTransition
{
    // only transition if current low level strategy matches one of these
    idList < lowLevelStrategy_t , TAG_AI_FSM , false > strategyList; // Offset: 0xF8

}; // Size: 0x110
