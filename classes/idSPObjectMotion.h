struct idSPObjectMotion
{
    bool valid; // Offset: 0x0

    bool worldCollisionOnly; // Offset: 0x1

    bool ignore; // Offset: 0x2

    // {{ units = m }}
    idVec3 translation; // Offset: 0x4

    idVec3 rotationVec; // Offset: 0x10

    float rotationAngle; // Offset: 0x1C

}; // Size: 0x20
