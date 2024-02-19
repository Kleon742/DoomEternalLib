struct leaderboardPageFilter_t
{
    int continuationStartingPosition; // Offset: 0x0

    // < Leaderboard version specification. ( Requires useSpecificVersion = true )
    int version; // Offset: 0x4

    // /< Return this many leaderboard entries, default: 7
    int maxResultsCount; // Offset: 0x8

    // Must be true request a specific leaderboard version
    bool useSpecificVersion; // Offset: 0xC

    idStr statisticName; // Offset: 0x10

    // < Leaderboard type to use
    leaderboadType leaderboardType; // Offset: 0x40

}; // Size: 0x48
