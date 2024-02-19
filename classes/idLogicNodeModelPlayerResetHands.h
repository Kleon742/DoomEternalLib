struct idLogicNodeModelPlayerResetHands : idLogicNodeModel
{
    // player this affects (-1 = local player)
    int playerNum; // Offset: 0x10

    // rest info
    logicNodePlayerResetHandsInfo_t resetInfo; // Offset: 0x18

}; // Size: 0x30
