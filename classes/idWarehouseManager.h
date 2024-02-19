struct idWarehouseManager
{
    // Currently owned offline containers that can be opened
    idVector < const idDeclWarehouseOfflineContainer * > unopenedOfflineContainers; // Offset: 0x0

    // Client/Server authoritative mixed, profile cached and server cached
    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > ownedItems; // Offset: 0x18

    // idVector< idSharedPtr< instancedItem_t > >m_consumableItems; Server only, not profile cached Server only, not profile cached
    idVector < idSharedPtr < containerInstancedItem_t > > messageContainers; // Offset: 0x30

    // Server only, not profile cached. Doesn't include message containers
    idVector < idSharedPtr < containerInstancedItem_t > > openableContainers; // Offset: 0x48

    // Server only, not profile cached
    idVector < idSharedPtr < containerInstancedItem_t > > lockedContainers; // Offset: 0x60

    // Server only, not profile cached. The strings represent
    idVector < idSharedPtr < keyInstancedItem_t > > keys; // Offset: 0x78

    // Server authoritative, profile cached. Progressable sets
    idVector < idSharedPtr < progressableSetInstancedItem_t > > progressableSets; // Offset: 0x90

    // If we have handled for what the server says we have.
    bool hasServerAuthorizedCache; // Offset: 0xA8

    // Identity container for our associated user
    idLocklessWeakPtr < idPlatformIdentityContainer > containerWeakPtr; // Offset: 0xB0

    idProxyPtr < idWarehouseManager > proxyPtr; // Offset: 0xB8

    asyncio::idTaskResultPtr < bool , bool > refreshTask; // Offset: 0xC0

    asyncio::idTaskResultPtr < bool , bool > reconcileTask; // Offset: 0xC8

    // items the player just acquired but has not seen in the UI yet
    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > newAndUnseenItems; // Offset: 0xD0

}; // Size: 0xE8
