struct animInstance_t
{
    idMat3 startAxis; // Offset: 0x0

    idMat3 endAxis; // Offset: 0x24

    // {{ units = m }}
    idVec3 startOrigin; // Offset: 0x48

    // {{ units = m }}
    idVec3 endOrigin; // Offset: 0x54

    idEntityPtr_ThreadSafe < idEntity > target; // Offset: 0x60

    idMD6Anim* anim; // Offset: 0x78

    animBoundsCheckCollection_t* boundsChecks; // Offset: 0x80

    int animIndex; // Offset: 0x88

    idIndex < int , invalidAIDataID_t , - 1 > queryID; // Offset: 0x8C

    float slopeDelta; // Offset: 0x90

    idTypesafeTime < float , secondUnique_t , 1 > timestamp; // Offset: 0x94

    idFlags passedTestFlags; // Offset: 0x98

    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > nodeIndex; // Offset: 0x9C

    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > sourceNodeIndex; // Offset: 0x9E

}; // Size: 0xA0
