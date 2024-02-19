struct onlineChallengeV2IndexDefinition_t
{
    idStringHandle handle; // Offset: 0x0

    idStr id; // Offset: 0x8

    idStr highlight; // Offset: 0x38

    idStr displayName; // Offset: 0x68

    // when the onlineChallenge index started
    idTypestrictTimePoint < typestrictWallClockTimestampUnique > displayStart; // Offset: 0x98

    // when the onlineChallenge index ended
    idTypestrictTimePoint < typestrictWallClockTimestampUnique > displayEnd; // Offset: 0xA0

    idStr displayDescription; // Offset: 0xA8

    idVector < onlineChallengeV2GroupDefinition_t > groups; // Offset: 0xD8

    idVector < idWeakPtr < onlineChallengeV2Definition_t > > indexChallenges; // Offset: 0xF0

}; // Size: 0x108
