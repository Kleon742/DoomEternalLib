struct gameBrowserEntry_t
{
    idStr hostId; // Offset: 0x0

    idStr serverName; // Offset: 0x30

    idStr mapName; // Offset: 0x60

    gameType_t gameType; // Offset: 0x90

    int currentPlayers; // Offset: 0x94

    int maxPlayers; // Offset: 0x98

}; // Size: 0xA0
