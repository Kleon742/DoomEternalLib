struct idHUDEvent_CardWheelOpened
{
    struct cardWheelData_t
    {
        int numCards; // Offset: 0x0

        idDeclDemonCard* cards[8]; // Offset: 0x8

        int cardLevels[8]; // Offset: 0x48

        float cardCooldowns[8]; // Offset: 0x68

        int cardCosts[8]; // Offset: 0x88

        int numUsablePips; // Offset: 0xA8

        int activeIndex; // Offset: 0xAC

    }; // Size: 0xB0

    idHUDEvent_CardWheelOpened::cardWheelData_t eventInfo; // Offset: 0x0

}; // Size: 0xB0
