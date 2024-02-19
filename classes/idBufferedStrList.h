struct idBufferedStrList
{
    struct idBufferedStrListData
    {
        int numStrings; // Offset: 0x0

        int dataSize; // Offset: 0x4

    }; // Size: 0x8

    idList < idStr , TAG_IDLIST , false > list; // Offset: 0x0

    idBufferedStrList::idBufferedStrListData* data; // Offset: 0x18

}; // Size: 0x20
