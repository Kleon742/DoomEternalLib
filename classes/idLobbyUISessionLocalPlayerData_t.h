struct idLobbyUISessionLocalPlayerData_t
{
    struct localPlayerDataDelta_t
    {
        // Season XP.
        int seasonXP; // Offset: 0x0

        // Battlemode Streak.
        battlemodePlayerStreak_t streak; // Offset: 0x8

        // Number of times the player has completed a hot streak.
        int hotStreakCount; // Offset: 0x18

    }; // Size: 0x20

    // Local player team, stored here for convenience
    gameTeam_t team; // Offset: 0x0

    // Local player data prior to the start of this match
    idLobbyUISessionLocalPlayerData_t::localPlayerDataDelta_t previous; // Offset: 0x8

    // Local player data after completing this match
    idLobbyUISessionLocalPlayerData_t::localPlayerDataDelta_t current; // Offset: 0x28

    // Did streak increase (1), decrease (-1), or stay the same (0)?
    int streakShift; // Offset: 0x48

    // Current battlemode challenge rank for local player.
    int challengeRank; // Offset: 0x4C

}; // Size: 0x50
