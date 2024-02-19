struct battleArenaChallengeProgressHistory_t
{
    // Index of the current group in the history
    int currentIndex; // Offset: 0x0

    // Current group and associated challenge progress
    idSharedPtr < battleArenaChallengeGroupProgress_t > current; // Offset: 0x8

    // All groups with any progress (unsorted)
    idVector < idSharedPtr < battleArenaChallengeGroupProgress_t > > groupsProgress; // Offset: 0x10

}; // Size: 0x28
