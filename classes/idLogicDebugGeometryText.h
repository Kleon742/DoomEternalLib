struct idLogicDebugGeometryText : idLogicDebugGeometry
{
    // String input identifier
    unsigned int stringInputId; // Offset: 0x40

    // Offset input identifier
    unsigned int offsetInputId; // Offset: 0x44

    // Scale
    float scale; // Offset: 0x48

    // Color
    idColor color; // Offset: 0x4C

    // Depth test
    bool depthTest; // Offset: 0x5C

}; // Size: 0x60
