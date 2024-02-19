struct idEffectPhysicsBroadPhase
{
    struct idSPMarker
    {
        short value; // Offset: 0x0

        // object ID and min/max flag
        unsigned short data; // Offset: 0x2

    }; // Size: 0x4

    idHavokCollision* havokCollision; // Offset: 0x0

    idTraceModelCache* traceModelCache; // Offset: 0x8

    idHandle < int , traceModelHandleType_t , INVALID_TRACE_MODEL_HANDLE > idStudioFloor; // Offset: 0x10

    idList < idSPObject * , TAG_FXPHYSICS , false > objects; // Offset: 0x18

    idList < idEffectPhysicsBroadPhase::idSPMarker , TAG_FXPHYSICS , false > markers[3]; // Offset: 0x30

}; // Size: 0x78
