struct idDoomSpawnManager : idSpawnManager
{
    enum commandType_t : int
    {
        CT_SPAWN_PLAYER = 0,
        CT_DEBUG_SPAWN_PLAYER = 1,
        CT_SPAWN_PLAYER_INITIAL = 2,
        CT_SPAWN_AI = 3,
        NUM_SPAWN_CMD_TYPES = 4
    };

    idSpawnPlayerCmdBase* spawnPlayerCmd; // Offset: 0xC68

    idSpawnAICmd spawnAICmd; // Offset: 0xC70

    idSpawnNodeGroup debugGroup; // Offset: 0xCA8

    idArray < bool , 11 > debugInfluencesEnabled; // Offset: 0xCC8

}; // Size: 0xCD8
