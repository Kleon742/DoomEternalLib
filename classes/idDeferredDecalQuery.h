struct idDeferredDecalQuery
{
    idHavokQueryId theQuery; // Offset: 0x0

    deferredDecalParams_t decalParams; // Offset: 0x8

    // {{ units = m }}
    idVec3 origin; // Offset: 0x58

    idVec3 normal; // Offset: 0x64

    idMat3 axis; // Offset: 0x70

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeAdded; // Offset: 0x98

}; // Size: 0xA0
