struct idMenuEvent_ShowMatchSummary
{
    struct matchSummaryRankUpData_t
    {
        gameTeam_t team; // Offset: 0x0

        int doomLevelXPGain; // Offset: 0x4

        battlemodePlayerStreak_t* streakPrevious; // Offset: 0x8

        battlemodePlayerStreak_t* streakCurrent; // Offset: 0x10

        int streakShift; // Offset: 0x18

        bool hotStreakComplete; // Offset: 0x1C

        int nextRank; // Offset: 0x20

        challengeInfo_t nextRankInfo; // Offset: 0x28

        int nextRankNewProgress; // Offset: 0x1D8

        bool showRankUpSequence; // Offset: 0x1DC

    }; // Size: 0x1E0

    idMenuEvent_ShowMatchSummary::matchSummaryRankUpData_t info; // Offset: 0x0

}; // Size: 0x1E0
