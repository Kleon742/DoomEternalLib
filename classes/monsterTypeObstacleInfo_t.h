struct monsterTypeObstacleInfo_t
{
    // bits for monster type to apply this info to
    aiMonsterType_t monsterTypes; // Offset: 0x0

    // AI obstacles outside this distance will be ignored {{ units = m }}
    float ignoreAIDistance; // Offset: 0x8

    // Normal distance to keep between AIs {{ units = m }}
    float normalObstacleDistance; // Offset: 0xC

    // Minimal distance to keep between AIs {{ units = m }}
    float nearDistance; // Offset: 0x10

}; // Size: 0x18
