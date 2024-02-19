struct idTargetSpawnGroupManager : idClass
{
    // List of all active targetSpawnGroups in the game
    idList < idManagedClassPtr < idTargetSpawnGroup > , TAG_IDLIST , false > targetSpawnGroupList; // Offset: 0x10

}; // Size: 0x28
