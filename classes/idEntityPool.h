struct idEntityPool
{
    idDeclEntityDef* entityDef; // Offset: 0x0

    idEntity* referenceEntity; // Offset: 0x8

    idList < idEntity * , TAG_IDLIST , false > entities; // Offset: 0x10

    idList < idEntity * , TAG_IDLIST , false > freeList; // Offset: 0x28

    int maximumPool; // Offset: 0x40

    int highWatermark; // Offset: 0x44

}; // Size: 0x48
