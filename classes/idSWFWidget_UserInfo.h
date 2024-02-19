struct idSWFWidget_UserInfo : idSWFWidget
{
    struct playerCurrencyData_t
    {
        playerUpgradeCurrency_t currencyID; // Offset: 0x0

        idMaterial2* currencyIcon; // Offset: 0x8

        int currencyCount; // Offset: 0x10

        int currencyDelta; // Offset: 0x14

        swfNamedColors_t currencyNamedColor; // Offset: 0x18

    }; // Size: 0x20

    idList < idSWFWidget_UserInfo::playerCurrencyData_t , TAG_IDLIST , false > playerCurrencies; // Offset: 0x180

    int numPointSprites; // Offset: 0x198

    int isPurchasingCurrencyIndex; // Offset: 0x19C

    bool updatedPositions; // Offset: 0x1A0

}; // Size: 0x1A8
