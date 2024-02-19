struct battleArenaChallengeHistory_t
{
    // Index of the current group in the history
    int currentIndex; // Offset: 0x0

    // Can be empty if there is no battleArenaChallengeGroup active
    idSharedPtr < battleArenaChallengeGroupDefinition_t > currentGroup; // Offset: 0x8

    // Groups sorted from newest to oldest
    idVector < idSharedPtr < battleArenaChallengeGroupDefinition_t > > groups; // Offset: 0x10

}; // Size: 0x28
