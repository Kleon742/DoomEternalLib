struct idHUDEvent_DemonCardUpdate
{
    struct demonCardInfo_t
    {
        // Active card info
        idDeclDemonCard* activeCard; // Offset: 0x0

        // 0-1
        float cardCooldownPercent; // Offset: 0x8

        int cardLevel; // Offset: 0xC

        int cardResourceCost; // Offset: 0x10

        // Pip Meter info
        int maxPips; // Offset: 0x14

        int numReservedPips; // Offset: 0x18

        int numUsablePips; // Offset: 0x1C

        // 0-1
        float pipMeterPercent; // Offset: 0x20

    }; // Size: 0x28

    idHUDEvent_DemonCardUpdate::demonCardInfo_t info; // Offset: 0x0

}; // Size: 0x28
