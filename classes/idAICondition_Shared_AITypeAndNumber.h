struct idAICondition_Shared_AITypeAndNumber : idAICondition
{
    struct aiTypeAndNum_t
    {
        // sum up all of these kinds of AI
        aiMonsterType_t typesToCheck; // Offset: 0x0

        // only pass if that sum is in this range
        idRange < int > validNum; // Offset: 0x8

        // only include units in this range of my target {{ units = m }}
        idRange < float > distanceToMyTarget; // Offset: 0x10

        // only include units this far from me {{ units = m }}
        idRange < float > distanceToMe; // Offset: 0x18

    }; // Size: 0x20

    // only transition if all of these entries pass
    idList < idAICondition_Shared_AITypeAndNumber::aiTypeAndNum_t , TAG_IDLIST , false > entries; // Offset: 0x18

}; // Size: 0x30
