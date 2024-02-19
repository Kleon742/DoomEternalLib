struct decalPendingData_t
{
    // {{ units = m }}
    idVec3 decalEndPos; // Offset: 0x0

    // {{ units = m }}
    idVec3 decalStartPos; // Offset: 0xC

    idHavokQueryId decalQuery; // Offset: 0x18

    idHavokQueryId decalQueryHavok; // Offset: 0x20

    trace_t decalTrace; // Offset: 0x28

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > decalTime; // Offset: 0xA8

    deferredDecalParams_t* decalParam; // Offset: 0xB0

    bool decalResolved; // Offset: 0xB8

}; // Size: 0xC0
