struct idEncounterEvent_MaintainArchvile : idEncounterEvent
{
    // The AI that is the summoning entity
    idManagedClassPtr < idEntity > archvileAI; // Offset: 0x90

    // The summoning template for the archvile
    idManagedClassPtr < idArchvileTemplate > archvileTemplate; // Offset: 0xB0

    // template set to replace the current archvile template
    idManagedClassPtr < idArchvileTemplate > queuedTemplate; // Offset: 0xD0

    // List of actors that have been spawned by this archvile
    idList < idEncounterSpawn_t , TAG_IDLIST , false > managedSummonSpawns; // Offset: 0xF0

    // Group name of the summoner
    idStr archvileGroupName; // Offset: 0x108

    // Group name used for any summoned entities
    idStr summonedGroupName; // Offset: 0x138

    bool isActive; // Offset: 0x168

}; // Size: 0x170
