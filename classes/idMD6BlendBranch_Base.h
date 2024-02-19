struct idMD6BlendBranch_Base : idMD6Branch
{
    enum blendBranchFlags_t : int
    {
        BLENDBRANCH_NORMAL = 0,
        BLENDBRANCH_ANGLEWRAP = 1
    };

    struct Coordinate_t
    {
        unsigned int tag; // Offset: 0x0

        idStaticList < float , 6 , false , TAG_IDLIST > coordinate; // Offset: 0x8

    }; // Size: 0x38

    struct idSearch_CoordinateNodePair : idSearch_Binary < idPair < idMD6BlendBranch_Base::Coordinate_t , idMD6Node * > , idMD6BlendBranch_Base::idSearch_CoordinateNodePair >
    {
    }; // Size: 0x8

    typedef idPair < idMD6BlendBranch_Base::Coordinate_t , idMD6Node * > CoordinateNodePair_t;

    // Majority seems to be 5, but max around 25, a couple around 7-9
    idGrowableList < float , 9 , TAG_ANIMATION > coordinateList; // Offset: 0x50

    // Majority seems to be 5, but max around 25, a couple around 7-9
    idGrowableList < idMD6Node * , 9 , TAG_ANIMATION > animationList; // Offset: 0x90

}; // Size: 0xF0
