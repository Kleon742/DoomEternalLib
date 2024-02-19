struct idSyncAttack_HistoryEntry
{
    // const idDeclAnimWeb *animWeb; Animweb that was used. the resource id for the animweb, this is needed since the decl might not be loaded
    unsigned long long animWebResId; // Offset: 0x0

    // All the animations played from this animweb.
    idList < idSyncAttack_HistoryEntryData_t , TAG_IDLIST , false > entryData; // Offset: 0x8

    // last used entry.
    idSyncAttack_HistoryEntryData_t lastUsed; // Offset: 0x20

}; // Size: 0x90
