struct idSWFMetadata
{
    struct swfABCMetaItemInfo_t
    {
        unsigned int key; // Offset: 0x0

        unsigned int value; // Offset: 0x4

    }; // Size: 0x8

    idAtomicString name; // Offset: 0x0

    unsigned int numItems; // Offset: 0x8

    idList < idSWFMetadata::swfABCMetaItemInfo_t , TAG_SWF , false > items; // Offset: 0x10

}; // Size: 0x28
