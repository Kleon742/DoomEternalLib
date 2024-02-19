struct triumphChallenge_t
{
    challengeInfo_t tiers[5]; // Offset: 0x0

    idStr id; // Offset: 0x870

    idStr displayName; // Offset: 0x8A0

    idMaterial2* icon; // Offset: 0x8D0

    idMaterial2* incompleteProgressIcon; // Offset: 0x8D8

    idMaterial2* completeProgressIcon; // Offset: 0x8E0

    swfNamedColors_t progressIconColor; // Offset: 0x8E8

    idTypestrictTimePoint < typestrictWallClockTimestampUnique > startTime; // Offset: 0x8F0

    int numTiers; // Offset: 0x8F8

}; // Size: 0x900
