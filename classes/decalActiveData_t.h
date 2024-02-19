struct decalActiveData_t
{
    // {{ units = m }}
    idVec3 decalPos; // Offset: 0x0

    deferredDecalParams_t* decalParam; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > decalTime; // Offset: 0x18

}; // Size: 0x20
