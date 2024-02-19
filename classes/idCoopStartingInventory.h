struct idCoopStartingInventory : idBloatedEntity
{
    struct itemListElement_t
    {
        // Item to be given
        idDeclInventory* item; // Offset: 0x0

        // Count to be given
        int count; // Offset: 0x8

    }; // Size: 0x10

    // Player One's starting items.
    idList < idCoopStartingInventory::itemListElement_t , TAG_IDLIST , false > playerOneItemList; // Offset: 0xB88

    // Player Two's starting items.
    idList < idCoopStartingInventory::itemListElement_t , TAG_IDLIST , false > playerTwoItemList; // Offset: 0xBA0

    // Use Player One's starting items for all players.
    bool mirrorPlayerOne; // Offset: 0xBB8

}; // Size: 0xBC0
