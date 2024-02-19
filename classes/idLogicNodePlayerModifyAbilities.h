struct idLogicNodePlayerModifyAbilities
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    int playerNum; // Offset: 0x0

    idList < logicNodePlayerModifyAbilitiesInfo_t , TAG_IDLIST , false > abilitiesToModify; // Offset: 0x8

}; // Size: 0x20
