struct idAICondition_Shared_LowLevelStrategy : idAICondition
{
    // only transition if current low level strategy matches one of these
    idList < lowLevelStrategy_t , TAG_IDLIST , false > strategyList; // Offset: 0x18

}; // Size: 0x30
