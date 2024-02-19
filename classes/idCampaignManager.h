struct idCampaignManager
{
    uint16 broadcastSystemId; // Offset: 0x8

    idProxyPtr < idCampaignManager > proxyPtr; // Offset: 0x10

    asyncio::idTaskResultPtr < bool , PermissionError > refreshTask; // Offset: 0x18

    idArray < campaignAvailiabilty_t , 4 > skuAvailability; // Offset: 0x20

    int lastRefreshedMs; // Offset: 0x30

}; // Size: 0x38
