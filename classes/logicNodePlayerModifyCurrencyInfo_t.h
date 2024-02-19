struct logicNodePlayerModifyCurrencyInfo_t
{
    // perk we're dealing with
    playerUpgradeCurrency_t currencyType; // Offset: 0x0

    // amount to adjust current currency type
    int adjustAmount; // Offset: 0x4

    // specific amount to set currency type (if -1, this is ignored)
    int desiredCount; // Offset: 0x8

    // when true, no notification is sent to player
    bool suppressNotification; // Offset: 0xC

}; // Size: 0x10
