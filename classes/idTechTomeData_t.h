struct idTechTomeData_t
{
    unsigned int idTechVersion; // Offset: 0x0

    unsigned long long worldAreaHash; // Offset: 0x8

    idList < umbraObjectHashIdPair_t , TAG_UMBRA , false > objectHashIdLookup; // Offset: 0x10

    idTechTomeObjectIndex_t* objectHashIndex; // Offset: 0x28

}; // Size: 0x30
