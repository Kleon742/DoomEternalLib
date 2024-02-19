struct idLogicPlayerInventoryCheck
{
    enum logicIds_t : int
    {
        INPUT_INVENTORY_CHECK = 0,
        OUTPUT_NONE = 1,
        ONE_CONDITION_MET = 2,
        ALL_CONDITIONS_MET = 3,
        NO_CONDITIONS_MET = 4
    };

    // list of inventory conditions
    idList < idInventoryCondition_t , TAG_IDLIST , false > inventoryChecks; // Offset: 0x0

}; // Size: 0x18
