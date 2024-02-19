struct idSPObject
{
    // index into object list
    int id; // Offset: 0x0

    // trace model handle
    idHandle < int , traceModelHandleType_t , INVALID_TRACE_MODEL_HANDLE > traceModelHandle; // Offset: 0x4

    // entity number to pass in to the broadphase
    idSpawnId spawnId; // Offset: 0x8

    // clip mask to pass in to the broadphase
    int clipMask; // Offset: 0xC

    // position {{ units = m }}
    idVec3 origin; // Offset: 0x10

    // orientation
    idMat3 axis; // Offset: 0x1C

    // absolute bounds
    idBoundsShort absBounds; // Offset: 0x40

    // motion
    idSPObjectMotion motion; // Offset: 0x4C

    // query currently moving the object
    idCollisionQuery query; // Offset: 0x70

    // indices into arrays with markers for each axis
    int index[2][3]; // Offset: 0x78

    // ids of objects with motion bounds that overlap the motion bounds of this object
    idList < short , TAG_FXPHYSICS , false > overlap; // Offset: 0x90

}; // Size: 0xA8
