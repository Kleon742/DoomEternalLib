struct challengeWeek_t
{
    struct metaChallengeInfo_t
    {
        int goal; // Offset: 0x0

        int rewardXP; // Offset: 0x4

    }; // Size: 0x8

    challengeInfo_t challenges[8]; // Offset: 0x0

    challengeWeek_t::metaChallengeInfo_t metaChallenges[2]; // Offset: 0xD80

    int indexId; // Offset: 0xD90

    idTypestrictTimePoint < typestrictWallClockTimestampUnique > startTime; // Offset: 0xD98

    idTypestrictTimePoint < typestrictWallClockTimestampUnique > endTime; // Offset: 0xDA0

    int weekNumber; // Offset: 0xDA8

    char description[128]; // Offset: 0xDAC

    int numChallenges; // Offset: 0xE2C

    int numMetaChallenges; // Offset: 0xE30

}; // Size: 0xE38
