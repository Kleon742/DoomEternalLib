struct geomCacheStreamData_t
{
    int refCount; // Offset: 0x0

    // frameGroupStreamData maps _normalized_ frame group index to data
    idSysMutex frameGroupStreamDataMutex; // Offset: 0x8

    idListMap < int , geomCacheFrameGroupStreamData_t * > frameGroupStreamData; // Offset: 0x30

    resourceStreamFileSpec_t* sfs; // Offset: 0x60

}; // Size: 0x68
