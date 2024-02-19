struct idLogicDebugGeometryLine : idLogicDebugGeometry
{
    // Start input identifier
    unsigned int startInputId; // Offset: 0x40

    // End input identifier
    unsigned int endInputId; // Offset: 0x44

    // Color
    idColor color; // Offset: 0x48

    // Depth test
    bool depthTest; // Offset: 0x58

}; // Size: 0x60
