struct openContainersResult_t
{
    idVector < const idDeclWarehouseItem * > gainedItems; // Offset: 0x0

    idVector < idSharedPtr < containerInstancedItem_t > > gainedOpenableContainers; // Offset: 0x18

    idVector < idSharedPtr < containerInstancedItem_t > > gainedMessageContainers; // Offset: 0x30

}; // Size: 0x48
