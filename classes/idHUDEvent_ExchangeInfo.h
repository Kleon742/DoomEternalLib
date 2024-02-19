struct idHUDEvent_ExchangeInfo
{
    struct exchangeInfo_t
    {
        idInteractable_Respec* respecStation; // Offset: 0x0

        int weaponPointsAvailable; // Offset: 0x8

        bool exchangeAvailable; // Offset: 0xC

        int weaponPointsToMasteryTokenExchangeRate; // Offset: 0x10

    }; // Size: 0x18

    idHUDEvent_ExchangeInfo::exchangeInfo_t info; // Offset: 0x0

}; // Size: 0x18
