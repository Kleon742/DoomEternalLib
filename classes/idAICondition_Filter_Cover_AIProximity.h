struct idAICondition_Filter_Cover_AIProximity : idAICondition
{
    // check for these monster types
    aiMonsterType_t monsterTypes; // Offset: 0x18

    // check for these summon types
    aiSummonType_t summonTypes; // Offset: 0x20

    // inside this distance range
    idRange < float > validDistance; // Offset: 0x24

    // check for this many of those monsters
    idRange < int > validNum; // Offset: 0x2C

    // check for these modifiers
    aiModifier_t requiredModifiers; // Offset: 0x34

    // blah
    idColor debugColor_input; // Offset: 0x38

    // blah
    idColor debugColor_output; // Offset: 0x48

}; // Size: 0x58
