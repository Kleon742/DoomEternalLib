struct idLogicNodeUIWalkthrough
{
    enum logicIds_t : int
    {
        INPUT_WALKTHROUGH = 0,
        OUTPUT_NONE = 1,
        OUTPUT_FINISHED = 2
    };

    logicNodeReference_t node; // Offset: 0x0

    idDeclUIWalkthroughMenuBase* walkthroughMenuDecl; // Offset: 0x8

}; // Size: 0x10
