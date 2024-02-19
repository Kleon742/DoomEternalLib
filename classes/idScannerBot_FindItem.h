struct idScannerBot_FindItem : idAIState
{
    int curint; // Offset: 0x130

    idManagedClassPtr < idEntity > closestEntity; // Offset: 0x138

    idTypesafeTime < float , secondUnique_t , 1 > closestTravelTime; // Offset: 0x158

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > ignoreEntity; // Offset: 0x160

    idSpawnId entityList[MAX_GENTITIES]; // Offset: 0x178

    int numEntities; // Offset: 0x10178

    idHavokGatherQueryId boundsQuery; // Offset: 0x10180

}; // Size: 0x10188
