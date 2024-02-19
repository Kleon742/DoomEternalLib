struct idPlayerLeaderboardData
{
    // the rank in the leaderboard
    long rank; // Offset: 0x8

    // the 1st party gamer tag for the player trying nightmare
    idStrStatic < 128 > playerName; // Offset: 0x10

    // the 1st party ID for the player trying nightmare
    idStrStatic < 128 > playerId; // Offset: 0xC0

    // the DOOM user name for the player trying nightmare
    idStrStatic < 128 > doomPlayerName; // Offset: 0x170

    // the DOOM profile ID for the player trying nightmare
    idStrStatic < 128 > doomAccountId; // Offset: 0x220

    // is this the player's data
    bool isSelf; // Offset: 0x2D0

    // this is a friend's data
    bool isFriend; // Offset: 0x2D1

}; // Size: 0x2D8
