struct deferredTranslationParms_t
{
    idMat3 startAxis; // Offset: 0x0

    // {{ units = m }}
    idVec3 start; // Offset: 0x24

    // {{ units = m }}
    idVec3 end; // Offset: 0x30

    idHavokShapePointer havokShape; // Offset: 0x40

    char* userName; // Offset: 0x48

    idSpawnId passSpawnId; // Offset: 0x50

    idSpawnId pusherSpawnId; // Offset: 0x54

    int localIndex; // Offset: 0x58

    int clipMask; // Offset: 0x5C

    bool moveClipModel; // Offset: 0x60

}; // Size: 0x68
