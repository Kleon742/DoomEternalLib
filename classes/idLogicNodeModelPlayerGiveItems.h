struct idLogicNodeModelPlayerGiveItems : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    struct item_t
    {
        // Item decl
        idDeclInventory* decl; // Offset: 0x0

        // Amount
        int amount; // Offset: 0x8

    }; // Size: 0x10

    // Items
    idList < idLogicNodeModelPlayerGiveItems::item_t , TAG_IDLIST , false > items; // Offset: 0x10

}; // Size: 0x28
