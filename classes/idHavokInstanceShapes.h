struct idHavokInstanceShapes
{
    enum invalidInstanceIndex_t : unsigned int
    {
        INVALID_INSTANCE_INDEX = 4294967295
    };

    struct shapeInstance_t
    {
        idAtomicString instanceName; // Offset: 0x0

        idHavokShapePointer shape; // Offset: 0x8

        idHavokBodyId bodyId; // Offset: 0x10

        idPhysicsProperties physicsProperties; // Offset: 0x18

    }; // Size: 0x68

    idHashIndex modelIdToShapeInstance; // Offset: 0x0

    idList < idHavokInstanceShapes::shapeInstance_t * , TAG_IDLIST , false > shapeInstances; // Offset: 0x30

    idHavokPhysics* havokPhysics; // Offset: 0x48

}; // Size: 0x50
