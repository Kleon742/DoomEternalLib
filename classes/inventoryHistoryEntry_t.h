struct inventoryHistoryEntry_t
{
    // the inventory we are tracking
    idDeclInventory* inventoryItem; // Offset: 0x0

    // the history flags we have
    inventoryHistoryFlags_t historyFlags; // Offset: 0x8

    // the total number of items we have received in this manner
    int numReceived; // Offset: 0xC

    // the current number of items we currently hold
    int currNum; // Offset: 0x10

    // whether the data changed
    bool dirty; // Offset: 0x14

}; // Size: 0x18
