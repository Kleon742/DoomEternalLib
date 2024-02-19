struct idLobbyUISessionPlayerMatchData_t
{
    // the social player info that we use to display user info
    socialPlayerInfo_t socialPlayerInfo; // Offset: 0x0

    // The lobbyUserId of the player that is represented by this data
    lobbyUserId_t lobbyUserId; // Offset: 0xE8

    // Is this the local player?
    bool isLocalPlayer; // Offset: 0xEC

    // This is damaged directly caused by your attacks, abilities, and hazards
    int enemyDamageDone; // Offset: 0xF0

    // Anything that decreases your health
    int damageTaken; // Offset: 0xF4

    // Anything that increases your health
    int healingReceived; // Offset: 0xF8

    // Any kills on AI that were summoned by a player
    int summonsKilled; // Offset: 0xFC

    // The number of loot drops picked up
    int lootCollected; // Offset: 0x100

    // The number of player deaths caused throughout the match
    int playersKilled; // Offset: 0x104

    // The number of AI you summoned
    int numSummoned; // Offset: 0x108

    // The amount of damage caused by your summons
    int summonDamage; // Offset: 0x10C

    // The number of times you resurrected throughout the match
    int resurrections; // Offset: 0x110

}; // Size: 0x118
