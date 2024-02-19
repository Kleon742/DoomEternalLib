struct deferredContentsParms_t
{
    idMat3 startAxis; // Offset: 0x0

    // {{ units = m }}
    idVec3 start; // Offset: 0x24

    char* userName; // Offset: 0x30

    idHavokShapePointer havokShape; // Offset: 0x38

    idSpawnId passSpawnId; // Offset: 0x40

    int localIndex; // Offset: 0x44

    int clipMask; // Offset: 0x48

}; // Size: 0x50
