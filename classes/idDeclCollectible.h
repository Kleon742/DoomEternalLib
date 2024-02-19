struct idDeclCollectible : idGameDeclTypeInfo
{
    // this item is skipped until all other non-gated items are collected
    bool isGatedByHavingAllItems; // Offset: 0x90

    // The type of collectible this collectible is
    collectibleType_t collectibleType; // Offset: 0x94

    // strings for collectible notifications
    collectibleRewardEntry_t collectibleInfo; // Offset: 0x98

}; // Size: 0xA8
