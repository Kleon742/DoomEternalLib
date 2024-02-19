struct aiNavReach_t
{
    // {{ units = m }}
    idVec3 start; // Offset: 0x0

    // {{ units = m }}
    idVec3 end; // Offset: 0xC

    idNavIndex < invalidEdge_t > edgeNum; // Offset: 0x18

    idIndex < int , invalidArea_t , - 1 > fromAreaNum; // Offset: 0x1C

    idIndex < int , invalidArea_t , - 1 > toAreaNum; // Offset: 0x20

    idNavIndex < invalidReach_t > index; // Offset: 0x24

    idIndex < int , invalidTraversal_t , - 1 > traversalIndex; // Offset: 0x28

    unsigned int travelFlags; // Offset: 0x2C

    idTypesafeTime < float , secondUnique_t , 1 > travelTime; // Offset: 0x30

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > reservationExpireTime; // Offset: 0x38

    idHandle < unsigned short , invalidNavUserHandle_t , NAV_USER_HANDLE_INVALID > reservationID; // Offset: 0x40

    // number in ordered reach list, for pathfinding -- has no relationship to anything else
    int absoluteNum; // Offset: 0x44

}; // Size: 0x48
