struct idEntityPtrSys
{
    unsigned int updateCount; // Offset: 0x0

    idStaticList < entityAndSpawnId_t , 512 , false , TAG_IDLIST > infos; // Offset: 0x8

    idStaticList < int , 512 , false , TAG_IDLIST > freeList; // Offset: 0x2020

    idStaticList < int , 512 , false , TAG_IDLIST > usedList; // Offset: 0x2838

    idSysMutex entityPtrMutex; // Offset: 0x3050

}; // Size: 0x3078
