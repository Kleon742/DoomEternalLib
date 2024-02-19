struct idMatchPlayerData_t
{
    lobbyUserId_t lobbyUserId; // Offset: 0x0

    socialPlayerInfo_t socialPlayerInfo; // Offset: 0x8

    gameTeam_t team; // Offset: 0xF0

    int ping; // Offset: 0xF4

    float healthPercentage; // Offset: 0xF8

    int damageDone; // Offset: 0xFC

    int damageTaken; // Offset: 0x100

    int summonDamageDone; // Offset: 0x104

    int healingReceived; // Offset: 0x108

    int numDropsAcquired; // Offset: 0x10C

    int numSummonsKilled; // Offset: 0x110

    int numPlayersKilled; // Offset: 0x114

    int numSummoned; // Offset: 0x118

    int numRessurections; // Offset: 0x11C

}; // Size: 0x120
