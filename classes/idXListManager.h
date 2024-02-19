struct idXListManager
{
    // idArray< xListEntry_t, numEntries >m_entries; idStaticList< int, numEntries >m_usedList; idStaticList< int, numEntries >m_freeList;
    idList < xListEntry_t , TAG_AI_XLIST , false > entries; // Offset: 0x0

    idList < int , TAG_AI_XLIST , false > freeList; // Offset: 0x18

    idSysMutex mutex; // Offset: 0x30

    long long trackedSize; // Offset: 0x58

}; // Size: 0x60
