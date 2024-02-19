struct streamArea_t
{
    int volumeNameOffset; // Offset: 0x0

    // {{ units = m }}
    idVec3 volumeOrigin; // Offset: 0x4

    idMat3 volumeAxis; // Offset: 0x10

    int numSubModels; // Offset: 0x34

    int subModelsOffset; // Offset: 0x38

}; // Size: 0x3C
