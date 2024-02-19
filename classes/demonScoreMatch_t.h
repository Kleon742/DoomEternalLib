struct demonScoreMatch_t
{
    idSpawnId spawnId; // Offset: 0x0

    serializableLobbyUserId_t lobbyUserId; // Offset: 0x4

    demonType_t demonType; // Offset: 0x8

    float scores[10]; // Offset: 0xC

}; // Size: 0x34
