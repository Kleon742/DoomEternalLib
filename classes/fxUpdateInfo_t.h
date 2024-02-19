struct fxUpdateInfo_t
{
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > actionGroup; // Offset: 0x0

    fxTransformInfo_t transformInfo; // Offset: 0x8

    // {{ units = m / s }}
    idVec3 vel; // Offset: 0x44

}; // Size: 0x50
