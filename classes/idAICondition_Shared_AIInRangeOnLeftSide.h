struct idAICondition_Shared_AIInRangeOnLeftSide : idAICondition
{
    // monster type to filter in
    aiMonsterType_t monsterType; // Offset: 0x18

    // max distance {{ units = m }}
    float radius; // Offset: 0x20

    // use right instead of left
    bool useRight; // Offset: 0x24

}; // Size: 0x28
