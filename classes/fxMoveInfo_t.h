struct fxMoveInfo_t
{
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > oldHandle; // Offset: 0x0

    idHandle < unsigned long long , unsigned long long , UINT64_MAX > newHandle; // Offset: 0x8

    bool setRenderModel; // Offset: 0x10

    bool destroyOldHandle; // Offset: 0x11

}; // Size: 0x18
