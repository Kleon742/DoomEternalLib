struct idDeclWarehouseOfflineContainer : idGameDeclTypeInfo
{
    // Items given upon opening the container. Need to be client authoritative
    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > gainedItems; // Offset: 0x90

}; // Size: 0xA8
