struct seasonProgressHistory_t
{
    idSharedPtr < seasonProgress_t > current; // Offset: 0x0

    idHashTable < idSharedPtr < seasonProgress_t > , 4 > seasons; // Offset: 0x8

    // raw progress stat value, as of the most recent data refresh. Used ONLY for sanity checks.
    int statValue; // Offset: 0x28

}; // Size: 0x30
