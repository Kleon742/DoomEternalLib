struct ai_boundsQuery_t
{
    idHavokQueryId query; // Offset: 0x0

    // {{ units = m }}
    idVec3 endpoint; // Offset: 0x8

    // {{ units = m }}
    idVec3 origin; // Offset: 0x14

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestamp; // Offset: 0x20

}; // Size: 0x28
