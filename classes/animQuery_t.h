struct animQuery_t
{
    transitionQueryValidation_t validation; // Offset: 0x0

    transitionQueryParms_t parms; // Offset: 0x40

    idStaticList < int , 32 , false , TAG_IDLIST > validIndices; // Offset: 0x710

    idStaticList < int , 32 , false , TAG_IDLIST > trajectoryTestIDs; // Offset: 0x7A8

    int cacheID; // Offset: 0x840

    bool allIndicesAreValid; // Offset: 0x844

}; // Size: 0x848
