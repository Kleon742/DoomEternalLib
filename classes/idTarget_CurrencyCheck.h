struct idTarget_CurrencyCheck : idTarget
{
    struct requiredCurrency_t
    {
        // Type of currency to check
        playerUpgradeCurrency_t requiredCurrency; // Offset: 0x0

        // Number of that item that is required (normally 1)
        int requiredCount; // Offset: 0x4

        // (Optional) Message to print when the player has the item
        idStr haveItemMessage; // Offset: 0x8

        // (Optional) Message to print when the player doesn't have the item
        idStr dontHaveItemMessage; // Offset: 0x38

        // Item is decremented when used ( defaults to false )
        bool decrementOnUse; // Offset: 0x68

    }; // Size: 0x70

    // list of currency to check
    idList < idTarget_CurrencyCheck::requiredCurrency_t , TAG_IDLIST , false > requiredCurrencyList; // Offset: 0xB88

    // If true, having any item fires the target, false means all are required ( defaults to false )
    bool anyItemActivates; // Offset: 0xBA0

    // If false, the check can be done multiple times, otherwise only once ( defaults to true )
    bool useOnce; // Offset: 0xBA1

    // (Optional) Message to print when the player has all (or one of) the items - supersedes item msg
    idStrId haveItemsMessage; // Offset: 0xBA4

    // (Optional) Message to print when the player doesn't have all (or any) of the items - supersedes item msg
    idStrId dontHaveItemsMessage; // Offset: 0xBA8

    // Set to true once the check passes
    bool used; // Offset: 0xBAC

}; // Size: 0xBB0
