struct idAICondition_Shared_ActiveMonsterTypes : idAICondition
{
    // condition passes if this list is satisfied
    idList < monsterTypeAndNum_t , TAG_IDLIST , false > requiredTypes; // Offset: 0x18

}; // Size: 0x30
