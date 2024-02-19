struct idDeclDemonCardDeck : idGameDeclTypeInfo
{
    // name for this card deck
    idStrId deckName; // Offset: 0x90

    // the demon cards to use in this deck
    idList < const idDeclDemonCard * , TAG_IDLIST , false > cardDeck; // Offset: 0x98

    // the max num of pips that are able to be played at a time on this deck
    int maxNumCardPips; // Offset: 0xB0

    // the time it takes to refill a single pip in the meter in Milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > pipFillTime; // Offset: 0xB4

    // the button used to activate the current card selected
    usercmdButton_t useCardBtn; // Offset: 0xB8

    // button for quick use card 1
    usercmdButton_t quickUseBtn1; // Offset: 0xC0

    // button for quick use card 2
    usercmdButton_t quickUseBtn2; // Offset: 0xC8

    // button for quick use card 3
    usercmdButton_t quickUseBtn3; // Offset: 0xD0

    // button for quick use card 4
    usercmdButton_t quickUseBtn4; // Offset: 0xD8

    // button for quick use card 5
    usercmdButton_t quickUseBtn5; // Offset: 0xE0

    // button for quick use card 5
    usercmdButton_t quickUseBtn6; // Offset: 0xE8

    // true if this deck is a starter deck that is unlocked by default, all of it's cards are given to the user creating a new profile.
    bool isStarterDeck; // Offset: 0xF0

}; // Size: 0xF8
