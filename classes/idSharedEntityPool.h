struct idSharedEntityPool
{
    idTypeInfo* typeInfo; // Offset: 0x0

    idList < const idDeclEntityDef * , TAG_IDLIST , false > referenceDefs; // Offset: 0x8

    idList < idEntity * , TAG_IDLIST , false > referenceEntities; // Offset: 0x20

    idList < idEntity * , TAG_IDLIST , false > entities; // Offset: 0x38

    idList < idEntity * , TAG_IDLIST , false > freeList; // Offset: 0x50

}; // Size: 0x68
