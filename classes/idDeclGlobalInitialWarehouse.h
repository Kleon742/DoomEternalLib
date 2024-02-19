struct idDeclGlobalInitialWarehouse : idDeclTypeInfo
{
    // What to give to each player for free with no notification
    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > defaultOwnedItems; // Offset: 0x88

    // What characters are available to be played at the moment
    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > availablePlayableCharacters; // Offset: 0xA0

    // The default equipped for every character. Missing characters have empty sets
    idList < characterEquippedSet_t , TAG_IDLIST , false > defaultCharacterEquippedSets; // Offset: 0xB8

    // The default equipped for the slayer weapons.
    weaponSkinSet_t defaultWeaponSkinsEquippedSet; // Offset: 0xD0

    // The default equipped for account items
    accountEquippedSet_t defaultAccountEquippedSet; // Offset: 0x118

    // How the game matches idDeclWeapons to the explicit slots
    weaponSlotLookup_t weaponSlotLookup; // Offset: 0x148

    // the default podium to spawn if nothing is in the profile
    idDeclWarehouseItem* basePodiumDecl; // Offset: 0x190

}; // Size: 0x198
