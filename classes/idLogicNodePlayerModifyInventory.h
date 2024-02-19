struct idLogicNodePlayerModifyInventory
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    int playerNum; // Offset: 0x0

    idList < logicNodePlayerModifyInventoryInfo_t , TAG_IDLIST , false > itemsToModify; // Offset: 0x8

    idList < logicNodePlayerModifyPerksInfo_t , TAG_IDLIST , false > perksToModify; // Offset: 0x20

    idDeclCollectible* collectible; // Offset: 0x38

}; // Size: 0x40
