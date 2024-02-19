struct leaderboardEntry_t
{
    idSharedPtr < idPlatformExternalIdentity > externalIdentity; // Offset: 0x0

    // playfabMasterId
    idStr playfabId; // Offset: 0x8

    // Player's display name
    idStr displayName; // Offset: 0x38

    // the statistic value ( the stat value to display )
    int statValue; // Offset: 0x68

    // current position in the leaderboard
    int position; // Offset: 0x6C

    socialPlatform_t socialPlatform; // Offset: 0x70

    bool canViewProfile; // Offset: 0x71

}; // Size: 0x78
