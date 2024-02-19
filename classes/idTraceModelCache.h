struct idTraceModelCache
{
    struct trmCache_t
    {
        idTraceModel* trm; // Offset: 0x0

        int refCount; // Offset: 0x8

        // volume of trace model {{ units = m * m * m }}
        float volume; // Offset: 0xC

        // center of mass {{ units = m }}
        idVec3 centerOfMass; // Offset: 0x10

        // inertia tensor
        idMat3 inertiaTensor; // Offset: 0x1C

        // material applied to trace model polygons
        idMaterial2* material; // Offset: 0x40

        // trace model converted to a collision model
        idCollisionModel* collisionModel; // Offset: 0x48

        bool hasWater; // Offset: 0x50

        idList < traceModelWater_t , TAG_WATER , false > waterPoints; // Offset: 0x58

    }; // Size: 0x70

    idStr mapName; // Offset: 0x0

    idBlockAlloc < idTraceModelCache::trmCache_t , 64 , TAG_COLLISION > cacheAllocator; // Offset: 0x30

    idList < idTraceModelCache::trmCache_t * , TAG_COLLISION , false > cache; // Offset: 0x58

    idHashIndex hash; // Offset: 0x70

}; // Size: 0xA0
