struct idDeclPVPDemonLoadout : idDeclTypeInfo
{
    struct modifierItemList_t
    {
        // The display name of the item in the loadout list
        idStrId displayName; // Offset: 0x0

        // The actor mods that are available as potential options for this loadout item
        idList < const idDeclActorModifier * , TAG_IDLIST , false > items; // Offset: 0x8

        // Which item from this list is selected by default
        int defaultSelection; // Offset: 0x20

    }; // Size: 0x28

    struct cardDeckItemList_t
    {
        // The display name of the item in the loadout list
        idStrId displayName; // Offset: 0x0

        // The demon card decks that are available as potential options for this loadout item
        idList < const idDeclDemonCardDeck * , TAG_IDLIST , false > items; // Offset: 0x8

        // Which item from this list is selected by default
        int defaultSelection; // Offset: 0x20

    }; // Size: 0x28

    struct customCardItemList_t
    {
        // The display name of the item in the loadout list
        idStrId displayName; // Offset: 0x0

        // The demon cards are available as potential options for this loadout item
        idList < const idDeclDemonCard * , TAG_IDLIST , false > items; // Offset: 0x8

        // Which item from this list is selected by default
        int defaultSelection; // Offset: 0x20

    }; // Size: 0x28

    // represents a setting in the loadout that has multiple demon cards to choose from The string to use for the actor mods header
    idStrId actorModifiersLabel; // Offset: 0x88

    // List of available actor modifiers
    idList < idDeclPVPDemonLoadout::modifierItemList_t , TAG_IDLIST , false > actorModifiers; // Offset: 0x90

    // The string to use for the card decks header
    idStrId cardDecksLabel; // Offset: 0xA8

    // list of available pre-made card decks
    idDeclPVPDemonLoadout::cardDeckItemList_t cardDecks; // Offset: 0xB0

    // The string to use for the custom card decks header
    idStrId customCardsLabel; // Offset: 0xD8

    // Should the custom deck be used, or one of the predefined decks
    idDeclPVPDemonLoadout::customCardItemList_t customDeckToggle; // Offset: 0xE0

    // list of card indicies that may be customized
    idList < idDeclPVPDemonLoadout::customCardItemList_t , TAG_IDLIST , false > customCards; // Offset: 0x108

}; // Size: 0x120
