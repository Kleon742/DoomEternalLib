struct idTarget_GiveItems : idTarget
{
    struct itemListElement_t
    {
        // Item to be given
        idDeclInventory* item; // Offset: 0x0

        // Count to be given
        int count; // Offset: 0x8

        // whether the item is allowed to use its intro animation
        bool canIntro; // Offset: 0xC

        // sound to play when item is given
        idSoundEvent* giveSound; // Offset: 0x10

    }; // Size: 0x18

    // list of items to give.
    idList < idTarget_GiveItems::itemListElement_t , TAG_IDLIST , false > itemList; // Offset: 0xB88

    // if true, will only give items if activator's current count is less than specified count
    bool addUpToCount; // Offset: 0xBA0

    // list of currency to give.
    idList < playerCurrency_t , TAG_IDLIST , false > currencyList; // Offset: 0xBA8

    // List of perks to give / activate
    idList < const idDeclPerk * , TAG_IDLIST , false > perkList; // Offset: 0xBC0

}; // Size: 0xBD8
