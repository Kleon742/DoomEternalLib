struct idSyncFailureParms
{
    // The start of the fail time.
    int startFailTime; // Offset: 0x0

    // End of the fail time.
    int endFailTime; // Offset: 0x4

    // sync interactions to play when player fails.
    idList < const idDeclSyncInteraction * , TAG_IDLIST , false > syncInteractions; // Offset: 0x8

}; // Size: 0x20
