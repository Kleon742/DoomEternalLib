struct idFileStatList
{
    struct fileEntry_t
    {
        idStr name; // Offset: 0x0

        bool hasStat; // Offset: 0x30

        idFileProps prop; // Offset: 0x34

    }; // Size: 0x40

    bool allHasStats; // Offset: 0x0

    idList < idFileStatList::fileEntry_t , TAG_IDLIST , false > list; // Offset: 0x8

}; // Size: 0x20
