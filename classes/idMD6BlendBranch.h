struct idMD6BlendBranch : idMD6BlendBranch_Base
{
    struct idSearch_AlphaNodePair : idSearch_Binary < idPair < float , idMD6Node * > , idMD6BlendBranch::idSearch_AlphaNodePair >
    {
    }; // Size: 0x8

    typedef idPair < float , idMD6Node * > AlphaNodePair_t;

    typedef idArray < float , 6 > vector_t;

    typedef idArray < float , 6 * 6 > matrix_t;

    // Current max I've found is 5
    idGrowableList < idMD6Node * , 8 , TAG_ANIMATION >* tempAnimationList; // Offset: 0xF0

    idGrowableList < float , 8 , TAG_ANIMATION >* tempCoordinateList; // Offset: 0xF8

    // Current max I've found is 1
    idGrowableList < float , 2 , TAG_ANIMATION > currentCoordinate; // Offset: 0x100

    // Didn't find any used
    idList < idIndex < short , invalidUserChannelIndex_t > , TAG_ANIMATION , false > userChannelIndices; // Offset: 0x120

    // Current max I've found is 1 (but might be set at runtime?)
    idGrowableList < float , 2 , TAG_ANIMATION > activeCoordinate; // Offset: 0x138

    // Current max I've found is 2 (but might be set at runtime?)
    idGrowableList < int , 2 , TAG_ANIMATION > activeIndices; // Offset: 0x158

    // Not seen this used..
    idList < idMD6Branch , TAG_ANIMATION , false > branchList; // Offset: 0x178

    // Majority seems to be 5, but max around 25, a couple around 7-9
    idGrowableList < unsigned int , 9 , TAG_ANIMATION > tagList; // Offset: 0x190

    // Current max I've found is 1
    idGrowableList < idMD6Filter * , 1 , TAG_ANIMATION > filterList; // Offset: 0x1D0

    idMD6DebugFilterLogicHelper_t debugFilterLogicHelper; // Offset: 0x1F0

    unsigned int defaultTag; // Offset: 0x1F4

    unsigned int desiredTag; // Offset: 0x1F8

    unsigned int activeTag; // Offset: 0x1FC

    int numExtraNodes; // Offset: 0x200

    unsigned char numDimensions; // Offset: 0x204

    bool isAngleWrapped; // Offset: 0x205

}; // Size: 0x208
