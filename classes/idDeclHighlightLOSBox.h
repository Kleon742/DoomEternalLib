struct idDeclHighlightLOSBox : idGameDeclTypeInfo
{
    // The offset applied to the entity's origin
    idVec3 originOffset; // Offset: 0x90

    // If true, multiple LOS checks will be used to determine visibility
    bool enableMultipleLOSChecks; // Offset: 0x9C

    // The width used for LOS checks
    float losBoxWidth; // Offset: 0xA0

    // The height used for LOS checks
    float losBoxHeight; // Offset: 0xA4

}; // Size: 0xA8
