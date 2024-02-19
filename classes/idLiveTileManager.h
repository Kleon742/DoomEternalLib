struct idLiveTileManager
{
    asyncio::idTaskResultPtr < bool , bool > refreshTask; // Offset: 0x8

    // contains the list of live tiles/community challenge live tiles
    liveTileData_t liveTileData; // Offset: 0x10

    // The list of live tiles/community challenges in the order that should be displayed
    idVector < idWeakPtr < liveTileInfo_t > > liveTileIndex; // Offset: 0x28

    bool isOfflineData; // Offset: 0x40

    uint16 broadcastSystemId; // Offset: 0x42

    idProxyPtr < idLiveTileManager > proxyPtr; // Offset: 0x48

}; // Size: 0x50
