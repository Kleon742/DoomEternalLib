struct idVolume_Flight : idVolume
{
    // Monster types that are allowed to use this flight volume - will be ignored for blocked areas
    aiMonsterType_t monsterType; // Offset: 0xC20

    // Whether the volume represents a blocked (non-flyable) area
    bool blocked; // Offset: 0xC28

}; // Size: 0xC30
