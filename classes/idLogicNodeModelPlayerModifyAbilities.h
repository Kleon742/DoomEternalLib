struct idLogicNodeModelPlayerModifyAbilities : idLogicNodeModel
{
    // player this affects (-1 = local player)
    int playerNum; // Offset: 0x10

    // ability info
    idList < logicNodePlayerModifyAbilitiesInfo_t , TAG_IDLIST , false > abilitiesToModify; // Offset: 0x18

}; // Size: 0x30
