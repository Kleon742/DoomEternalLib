struct usageGate_t
{
    // stat to gate this game item
    gameStat_t statgate; // Offset: 0x0

    // stat count to use to gate item, [value >= statCount]
    int statCount; // Offset: 0x4

}; // Size: 0x8
