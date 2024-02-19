struct idAICondition_Generate_Positions_Monsters : idAICondition
{
    // put points at origins of these monster types
    aiMonsterType_t monsterTypes; // Offset: 0x18

    // only pick one point, of the closest matching monster
    bool closestOnly; // Offset: 0x20

    // blah
    idColor debugColor; // Offset: 0x24

}; // Size: 0x38
