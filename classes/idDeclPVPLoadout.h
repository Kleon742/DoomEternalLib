struct idDeclPVPLoadout : idDeclTypeInfo
{
    struct weaponItemList_t
    {
        // The base weapon that the mods are available for
        idDeclWeapon* baseWeapon; // Offset: 0x0

        // The weapon mods that are available as potential options for this loadout item
        idList < const idDeclPerk * , TAG_IDLIST , false > items; // Offset: 0x8

        // Which item from this list is selected by default
        int defaultSelection; // Offset: 0x20

    }; // Size: 0x28

    struct modifierItemList_t
    {
        // The display name of the item in the loadout list
        idStrId displayName; // Offset: 0x0

        // The actor mods that are available as potential options for this loadout item
        idList < const idDeclActorModifier * , TAG_IDLIST , false > items; // Offset: 0x8

        // Which item from this list is selected by default
        int defaultSelection; // Offset: 0x20

    }; // Size: 0x28

    struct loadoutPerkToggle_t
    {
        // The perk that is available as a potential option for this loadout item
        idDeclPerk* item; // Offset: 0x0

        // Which item from this list is selected by default
        bool defaultState; // Offset: 0x8

    }; // Size: 0x10

    struct loadoutThrowableToggle_t
    {
        // The throwable that is available as a potential option for this loadout item
        idDeclInventory* item; // Offset: 0x0

        // Which item from this list is selected by default
        bool defaultState; // Offset: 0x8

    }; // Size: 0x10

    // represents a perk in the loadout that has an on or off setting The string to use for the weapon mods header
    idStrId weaponModsLabel; // Offset: 0x88

    // list of mods for each weapon
    idList < idDeclPVPLoadout::weaponItemList_t , TAG_IDLIST , false > weaponMods; // Offset: 0x90

    // The string to use for the grenades header
    idStrId grenadesLabel; // Offset: 0xA8

    // list of available grenades and if they are on or off by default
    idList < idDeclPVPLoadout::loadoutThrowableToggle_t , TAG_IDLIST , false > grenades; // Offset: 0xB0

    // The string to use for the runes header
    idStrId runesLabel; // Offset: 0xC8

    // list of available runes and if they are on or off by default
    idList < idDeclPVPLoadout::loadoutPerkToggle_t , TAG_IDLIST , false > runes; // Offset: 0xD0

    // The string to use for the primary perks header
    idStrId primaryPerksLabel; // Offset: 0xE8

    // list of available primary perks and if they are on or off by default
    idList < idDeclPVPLoadout::loadoutPerkToggle_t , TAG_IDLIST , false > primaryPerks; // Offset: 0xF0

    // The string to use for the secondary perks header
    idStrId secondaryPerksLabel; // Offset: 0x108

    // list of available primary perks and if they are on or off by default
    idList < idDeclPVPLoadout::loadoutPerkToggle_t , TAG_IDLIST , false > secondaryPerks; // Offset: 0x110

    // The string to use for the actor mods header
    idStrId actorModsLabel; // Offset: 0x128

    // list of available actor modifiers
    idList < idDeclPVPLoadout::modifierItemList_t , TAG_IDLIST , false > actorModifiers; // Offset: 0x130

}; // Size: 0x148
