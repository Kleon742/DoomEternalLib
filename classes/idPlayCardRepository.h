struct idPlayCardRepository
{
    typedef idList < int > demonCardDeckIndices_t;

    // the entire list of cards we own
    idList < demonCardOwned_t , TAG_IDLIST , false > demonCardsOwned; // Offset: 0x0

    // the entire list of sentinel gifts we have earned
    idList < sentinelGiftOwned_t , TAG_IDLIST , false > sentinelGiftsOwned; // Offset: 0x18

    // the un-opened packs we have
    idList < unsigned long long , TAG_IDLIST , false > unOpenedCardPacks; // Offset: 0x30

    // the card decks that the player has created via UI
    idList < idList < int > , TAG_IDLIST , false > createdDemonCardDecks; // Offset: 0x48

    // single custom deck used by "loadout" style menu in battle arena screen
    idList < int , TAG_IDLIST , false > customDemonCardDeck; // Offset: 0x60

}; // Size: 0x78
