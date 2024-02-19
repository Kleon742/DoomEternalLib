struct aiAnimQuery_t
{
    transitionQueryValidation_t validation; // Offset: 0x0

    transitionQueryParms_t parms; // Offset: 0x40

    animQueryResult_t result; // Offset: 0x710

    idStaticList < int , 32 , false , TAG_IDLIST > validIndices; // Offset: 0x7D8

    idStaticList < int , 32 , false , TAG_IDLIST > trajectoryTestIDs; // Offset: 0x870

    int cacheID; // Offset: 0x908

    bool allIndicesAreValid; // Offset: 0x90C

    // obstacle avoidance stuff that needs to go away
    idStaticList < aiObstacleAnim_t , 32 , false , TAG_IDLIST > oa_anims; // Offset: 0x910

    aiAnimQueryParms_t oa_parms; // Offset: 0xE28

    aiAnimQueryResult_t oa_result; // Offset: 0xE88

}; // Size: 0x1038
