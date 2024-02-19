struct idSyncGroup
{
    // naming identifier for the group.
    idAtomicString syncGroupName; // Offset: 0x0

    // health ratio at which to indicate a syncDeath will occur from these interactions
    float syncDeathHealthRatio; // Offset: 0x8

    // sync interactions to query in this group..
    idList < const idDeclSyncInteraction * , TAG_IDLIST , false > syncInteractions; // Offset: 0x10

}; // Size: 0x28
