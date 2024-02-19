struct idEncounterTrigger_OverrideCombatGrouping : idTrigger
{
    // The manager(s) that link to this trigger
    idList < idManagedClassPtr < idEncounterManager > , TAG_IDLIST , false > owners; // Offset: 0xC90

    // Combat grouping to set as the new override
    idManagedClassPtr < idCombatGrouping > combatGrouping; // Offset: 0xCA8

    // Actor group that will be affected when in this trigger (leave blank for defualt)
    idStr groupLabel; // Offset: 0xCC8

    // Valid cover volumes to apply to AI group in the encounter. If group is blank, this is applied to all AI.
    idList < idManagedClassPtr < idEncounterVolume_ValidCover > , TAG_IDLIST , false > validCoverVolumes; // Offset: 0xCF8

}; // Size: 0xD10
