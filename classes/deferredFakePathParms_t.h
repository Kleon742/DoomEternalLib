struct deferredFakePathParms_t
{
    // {{ units = m }}
    idVec3 goalPosition; // Offset: 0x0

    idMat3 goalAxis; // Offset: 0xC

    // {{ units = m }}
    idVec3 pathPosition; // Offset: 0x30

    idMat3 pathAxis; // Offset: 0x3C

    idFakePath* fakePath; // Offset: 0x60

    idAIPath* realPath; // Offset: 0x68

    float splineTime; // Offset: 0x70

    float pathFraction; // Offset: 0x74

    deferredFakePathParmsType_t type; // Offset: 0x78

}; // Size: 0x80
