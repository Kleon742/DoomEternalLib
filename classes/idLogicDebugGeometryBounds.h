struct idLogicDebugGeometryBounds : idLogicDebugGeometry
{
    // Center input identifier
    unsigned int centerInputId; // Offset: 0x40

    // Radius input identifier
    unsigned int radiusInputId; // Offset: 0x44

    // Color
    idColor color; // Offset: 0x48

    // Depth test
    bool depthTest; // Offset: 0x58

}; // Size: 0x60
