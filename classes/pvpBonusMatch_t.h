struct pvpBonusMatch_t
{
    idSpawnId spawnId; // Offset: 0x0

    serializableLobbyUserId_t lobbyUserId; // Offset: 0x4

    float scores[6]; // Offset: 0x8

    int roundsWon; // Offset: 0x20

}; // Size: 0x24
