struct idHavokShapeCache
{
    enum enum_1F01 : int
    {
        SHAPE_BLOCK_SIZE = 256
    };

    struct idShapeEntry
    {
        idHavokShapePointer collisionShape; // Offset: 0x0

        unsigned int checksum; // Offset: 0x8

    }; // Size: 0x10

    idBlockAlloc < idHavokShapeCache::idShapeEntry , 256 , TAG_COLLISION > shapePool; // Offset: 0x0

    idList < idHavokShapeCache::idShapeEntry * , TAG_COLLISION , false > shapeEntries; // Offset: 0x28

    idHashIndex lookupHash; // Offset: 0x40

}; // Size: 0x70
