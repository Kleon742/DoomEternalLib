struct idHUDEvent_UpdateRuneChargePercent
{
    struct updateRuneChargeData_t
    {
        idDeclPerk* rune; // Offset: 0x0

        runeId_t runeId; // Offset: 0x8

        float charge; // Offset: 0xC

        bool max; // Offset: 0x10

    }; // Size: 0x18

    idHUDEvent_UpdateRuneChargePercent::updateRuneChargeData_t info; // Offset: 0x0

}; // Size: 0x18
