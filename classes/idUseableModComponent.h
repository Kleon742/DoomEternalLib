struct idUseableModComponent : idUseableItemComponent
{
    // The mod to give the player
    idDeclPerk* modToGive; // Offset: 0x190

    // mod notification
    idDeclNotification* notification; // Offset: 0x198

    // Additional perks to give ( upgrades, masteries, etc )
    idList < const idDeclPerk * , TAG_IDLIST , false > additionalPerks; // Offset: 0x1A0

}; // Size: 0x1B8
