struct idLogicNodeModelPlayerModifyInventory : idLogicNodeModel
{
    // player this affects (-1 = local player)
    int playerNum; // Offset: 0x10

    // list of items to modify
    idList < logicNodePlayerModifyInventoryInfo_t , TAG_IDLIST , false > itemsToModify; // Offset: 0x18

    // list of perks to modify
    idList < logicNodePlayerModifyPerksInfo_t , TAG_IDLIST , false > perksToModify; // Offset: 0x30

    // collectible to give (sorry, can't remove)
    idDeclCollectible* collectible; // Offset: 0x48

}; // Size: 0x50
