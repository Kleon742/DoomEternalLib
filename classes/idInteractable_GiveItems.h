struct idInteractable_GiveItems : idInteractable
{
    struct itemListElement_t
    {
        // Item to be given
        idDeclInventory* item; // Offset: 0x0

        // Count to be given
        int count; // Offset: 0x8

        // whether the item is allowed to use its intro animation
        bool canIntro; // Offset: 0xC

    }; // Size: 0x10

    // list of items to give.
    idList < idInteractable_GiveItems::itemListElement_t , TAG_IDLIST , false > itemList; // Offset: 0x2B50

    // give items on at the end of the interact animation instead of the start
    bool giveOnEndUse; // Offset: 0x2B68

    // if true, will only give items if activator's current count is less than specified count
    bool addUpToCount; // Offset: 0x2B69

    // list of currency to give.
    idList < playerCurrency_t , TAG_IDLIST , false > currencyList; // Offset: 0x2B70

    // if this is a sync interact, give the items at the end of the interaction
    bool giveOnEndSync; // Offset: 0x2B88

}; // Size: 0x2B90
