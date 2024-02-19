struct idCombatGrouping : idBloatedEntity
{
    // List of roles to fill for this combat group
    idList < encounterGroupRole_t , TAG_IDLIST , false > rolePriorities; // Offset: 0xB88

    // Valid cover volumes to apply to AI group in the encounter. If group is blank, this is applied to all AI.
    idList < idManagedClassPtr < idEncounterVolume_ValidCover > , TAG_IDLIST , false > validCoverVolumes; // Offset: 0xBA0

    // Group label that has been associated with this combat grouping
    idStr groupLabel; // Offset: 0xBB8

    // all of the actors that are in this combat group
    idList < idEncounterSpawn_t , TAG_IDLIST , false > managedSpawns; // Offset: 0xBE8

    // defense node indices
    idList < int , TAG_IDLIST , false > defenseNodes; // Offset: 0xC00

    // assault node indices
    idList < int , TAG_IDLIST , false > assaultNodes; // Offset: 0xC18

    // flank node indices
    idList < int , TAG_IDLIST , false > flankNodes; // Offset: 0xC30

    // flank path activators
    idList < int , TAG_IDLIST , false > flankTargetNodes; // Offset: 0xC48

    // points along a flank path
    idList < int , TAG_IDLIST , false > flankPathNodes; // Offset: 0xC60

    // places to suppress fire
    idList < int , TAG_IDLIST , false > suppressionFireNodes; // Offset: 0xC78

}; // Size: 0xC90
