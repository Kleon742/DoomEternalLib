struct navSearch_t
{
    idList < bool , TAG_AI_NAVIGATION , false > visitedAreas; // Offset: 0x0

    // all reachabilities in aas, or closed list
    idList < navSearchReachNode_t , TAG_AI_NAVIGATION , false > reachList; // Offset: 0x18

    // binary heap of opened reachabilities
    idList < navSearchHeapNode_t , TAG_AI_NAVIGATION , false > openReaches; // Offset: 0x30

    idList < unsigned long long , TAG_AI_NAVIGATION , false > reachListDirtyMask; // Offset: 0x48

    int numOpenReaches; // Offset: 0x60

    int numReaches; // Offset: 0x64

    idSpawnId ownerSpawnID; // Offset: 0x68

    aiQueryKey_t searchName; // Offset: 0x70

    // determines if we're in a job or not
    idMapInstanceLocal* mapLocal; // Offset: 0x88

    // cluster search ID of final hop in path
    int finalSegmentID; // Offset: 0x90

    navPath_t path; // Offset: 0x98

    // current direction of user
    idVec3 startDirection; // Offset: 0x8E8

    // {{ units = m }}
    idVec3 startOrigin; // Offset: 0x8F4

    idIndex < int , invalidArea_t , - 1 > startAreaNum; // Offset: 0x900

    // {{ units = m }}
    idVec3 goalOrigin; // Offset: 0x904

    idIndex < int , invalidArea_t , - 1 > goalAreaNum; // Offset: 0x910

    idIndex < int , invalidArea_t , - 1 > currentAreaNum; // Offset: 0x914

    idColor debugColor; // Offset: 0x918

    int ID; // Offset: 0x928

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestamp; // Offset: 0x930

    idAINavMesh* navMesh; // Offset: 0x938

    // {{ units = 1 / m }}
    float groundSpeedMultiplier; // Offset: 0x940

    float cardinalDistanceBias; // Offset: 0x944

    int travelFlags; // Offset: 0x948

    int walkTravelFlags; // Offset: 0x94C

    idHandle < unsigned short , invalidNavUserHandle_t , NAV_USER_HANDLE_INVALID > userID; // Offset: 0x950

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x958

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentTime; // Offset: 0x960

    int framesToComplete; // Offset: 0x968

    int debugTime; // Offset: 0x96C

    int maxExpansionsPerFrame; // Offset: 0x970

    bool finished; // Offset: 0x974

    bool complete; // Offset: 0x975

    bool used; // Offset: 0x976

    bool allowJob; // Offset: 0x977

    bool needsInit; // Offset: 0x978

}; // Size: 0x980
