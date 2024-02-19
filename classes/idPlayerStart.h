struct idPlayerStart : idSpawnNode
{
    idList < idSpawnLocation , TAG_IDLIST , false > generatedLocations; // Offset: 0xBB8

    idList < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , TAG_IDLIST , false > obstructionTimers; // Offset: 0xBD0

    // true means exclusively for mid-match respawns, false means normal spawn point
    bool respawnOnly; // Offset: 0xBE8

}; // Size: 0xBF0
