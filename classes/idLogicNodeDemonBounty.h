struct idLogicNodeDemonBounty
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_AI2 = 2,
        INPUT_BOUNTYNAME = 3
    };

    // list of AI to allow
    idList < aiTypeEnum_t , TAG_IDLIST , false > AITypesAllowed; // Offset: 0x0

}; // Size: 0x18
