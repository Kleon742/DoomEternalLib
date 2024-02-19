struct navPath_t
{
    // {{ units = m }}
    idVec3 startOrigin; // Offset: 0x0

    // {{ units = m }}
    idVec3 goalOrigin; // Offset: 0xC

    idStaticList < idNavIndex < invalidReach_t > , 512 , false , TAG_IDLIST > reachabilities; // Offset: 0x18

    idIndex < int , invalidArea_t , - 1 > startAreaNum; // Offset: 0x830

    idIndex < int , invalidArea_t , - 1 > endAreaNum; // Offset: 0x834

    idTypesafeTime < float , secondUnique_t , 1 > travelTime; // Offset: 0x838

    idAINavMesh* navMesh; // Offset: 0x840

    int meshVersion; // Offset: 0x848

}; // Size: 0x850
