struct idLangDict
{
    struct idSearch_ByID : idSearch_Binary < langEntry_t , idLangDict::idSearch_ByID >
    {
    }; // Size: 0x8

    struct idSort_ByID : idSort_Radix < langEntry_t , unsigned int , idLangDict::idSort_ByID >
    {
    }; // Size: 0x8

    struct idSort_ByKey : idSort_Quick < langEntry_t , idLangDict::idSort_ByKey >
    {
    }; // Size: 0x8

    // Kept sorted by id for quick lookups
    idList < langEntry_t , TAG_LANGDICT , false > dictionary; // Offset: 0x0

}; // Size: 0x18
