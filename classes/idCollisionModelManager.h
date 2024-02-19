struct idCollisionModelManager
{
    bool allowHugeTraceOnce; // Offset: 0x0

    idList < idCollisionModel * , TAG_IDLIST , false > clonedModels; // Offset: 0x8

    idCollisionQueryJobManager* cdQuery; // Offset: 0x20

}; // Size: 0x28
