struct idNeededResources
{
    struct entry_t
    {
        int typeIndex; // Offset: 0x0

        idStrDynStatic < 256 > name; // Offset: 0x8

    }; // Size: 0x138

    idList < idNeededResources::entry_t , TAG_RESOURCE , false > entries; // Offset: 0x0

    idList < idResourceList * , TAG_RESOURCE , false > resourceLists; // Offset: 0x18

}; // Size: 0x30
