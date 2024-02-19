struct idLogicNodeModelPlayerModifyCurrency : idLogicNodeModel
{
    // player this affects (-1 = local player)
    int playerNum; // Offset: 0x10

    // list of perks to modify
    idList < logicNodePlayerModifyCurrencyInfo_t , TAG_IDLIST , false > currencyToModify; // Offset: 0x18

}; // Size: 0x30
