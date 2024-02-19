struct idTracerManager
{
    struct tracerBufferItem_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lifeTime; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeOutTime; // Offset: 0x10

        // {{ units = m / s }}
        float speed; // Offset: 0x18

        // {{ units = m }}
        idVec3 origin; // Offset: 0x1C

        idVec3 dir; // Offset: 0x28

        // {{ units = m }}
        float length; // Offset: 0x34

        // {{ units = m }}
        float height; // Offset: 0x38

        idMaterial2* mat; // Offset: 0x40

        // {{ units = m }}
        idVec3 maxDist; // Offset: 0x48

        bool ensureVisual; // Offset: 0x54

        float fractionInsured; // Offset: 0x58

        int playerIndex; // Offset: 0x5C

    }; // Size: 0x60

    idRenderModelTracers* tracerModel; // Offset: 0x0

    idTracerManager::tracerBufferItem_t tracerBuffer[6]; // Offset: 0x8

    int tracerBufferPos; // Offset: 0x248

    int serializeTracerCount; // Offset: 0x24C

    bool catchingUp; // Offset: 0x250

    // Used on clients to determine whether this should be predicted or serialized
    int localPlayerIndex; // Offset: 0x254

}; // Size: 0x258
