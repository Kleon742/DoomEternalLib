struct aiNavArea_t
{
    unsigned int flags; // Offset: 0x0

    unsigned int travelFlags; // Offset: 0x4

    idIndex < int , invalidArea_t , - 1 > areaNum; // Offset: 0x8

    idIndex < int , invalidArea_t , - 1 > parentAreaNum; // Offset: 0xC

    unsigned int numEdges; // Offset: 0x10

    unsigned int numReaches; // Offset: 0x14

    idList < aiNavEdge_t , TAG_AI_NAVIGATION , false > edges; // Offset: 0x18

    idList < aiNavReach_t , TAG_AI_NAVIGATION , false > reaches; // Offset: 0x30

    idList < idNavIndex < invalidReach_t > , TAG_AI_NAVIGATION , false > revReaches; // Offset: 0x48

    int userReachHead; // Offset: 0x60

    bool hidden; // Offset: 0x64

}; // Size: 0x68
