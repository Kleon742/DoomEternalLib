struct idDeclDummyTriumph : idGameDeclTypeInfo
{
    struct dummyTriumphProgress_t
    {
        // "Previous" progress, for testing UI animations.
        int previous; // Offset: 0x0

        // "Current" progress.
        int current; // Offset: 0x4

        // Goal amount.
        int goal; // Offset: 0x8

    }; // Size: 0xC

    // The dummy triumph's name. Non-localized, since this is test data.
    idStr displayName; // Offset: 0x90

    // The dummy triumph's description. Non-localized, since this is test data.
    idStr description; // Offset: 0xC0

    // The dummy triumph's icon.
    idMaterial2* icon; // Offset: 0xF0

    // The reward associated with this dummy triumph, for UI display purposes.
    idDeclWarehouseItem* reward; // Offset: 0xF8

    // Mock progress for this triumph, for displaying UI progress bars.
    idDeclDummyTriumph::dummyTriumphProgress_t progress; // Offset: 0x100

    // Rank associated with this triumph (e.g. for Battlemode 2.0 stuff)
    int rank; // Offset: 0x10C

}; // Size: 0x110
