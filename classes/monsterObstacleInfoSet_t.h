struct monsterObstacleInfoSet_t
{
    // name of this set, so AI code can swap when needed
    idAtomicString name; // Offset: 0x0

    // data to go along with this set .. monster types not in this set use below info
    idList < monsterTypeObstacleInfo_t , TAG_IDLIST , false > infos; // Offset: 0x8

    // AI obstacles outside this distance will be ignored {{ units = m }}
    float ignoreAIDistance; // Offset: 0x20

    // Normal distance to keep between AIs {{ units = m }}
    float normalObstacleDistance; // Offset: 0x24

    // Minimal distance to keep between AIs {{ units = m }}
    float nearDistance; // Offset: 0x28

}; // Size: 0x30
