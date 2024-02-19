struct Carcass_HasValidShieldPlacement : idAIStateTransition
{
    // name of placement collection
    idAtomicString queryName; // Offset: 0xF8

    // raise priority to get query through system faster in a crowd
    animQueryPriority_t queryPriority; // Offset: 0x100

    // required placement query flags, they should all pass in order to succeed
    placementQueryTestFlags_t requiredQueryFlagsToPass; // Offset: 0x104

    // desired placement query flags to test for
    placementQueryTestFlags_t desiredQeryFlagsToTest; // Offset: 0x108

    // if true, test self
    bool testSelf; // Offset: 0x10C

    // if true, test all staggered AIs
    bool testAllStaggeredAI; // Offset: 0x10D

    // if true, test all frozen AIs
    bool testAllFrozenAI; // Offset: 0x10E

    // life time in Seconds
    idTypesafeTime < float , secondUnique_t , 1 > lifetimeInSeconds; // Offset: 0x110

    // min score to succeed
    float minScore; // Offset: 0x114

    // min distance from enemy
    float minDistanceFromEnemy; // Offset: 0x118

    // min distance from AI
    float minDistanceFromAI; // Offset: 0x11C

    // min distance iteration step
    float minDistanceStep; // Offset: 0x120

    // max distance to check for floor below
    float maxFloorDistance; // Offset: 0x124

    // how many seconds in future predict enemy location
    idTypesafeTime < float , secondUnique_t , 1 > secondsInFuture; // Offset: 0x128

}; // Size: 0x130
