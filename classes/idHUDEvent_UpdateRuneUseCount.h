struct idHUDEvent_UpdateRuneUseCount
{
    struct updateRuneUseData_t
    {
        idDeclPerk* rune; // Offset: 0x0

        runeId_t runeId; // Offset: 0x8

        int useCount; // Offset: 0xC

    }; // Size: 0x10

    idHUDEvent_UpdateRuneUseCount::updateRuneUseData_t info; // Offset: 0x0

}; // Size: 0x10
