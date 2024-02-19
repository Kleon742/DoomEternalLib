struct idBattlemodeStreakManager
{
    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > lastUpdated; // Offset: 0x0

    idArray < battlemodeStreakDefinition_t , 2 > battlemodeStreakDefinitions; // Offset: 0x8

    asyncio::idTaskResultPtr < bool , bool > refreshTask; // Offset: 0xA8

    idProxyPtr < idBattlemodeStreakManager > proxyPtr; // Offset: 0xB0

}; // Size: 0xB8
