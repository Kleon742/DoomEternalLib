struct idHUDEvent_EquipRune
{
    struct equipRuneData_t
    {
        idDeclPerk* rune; // Offset: 0x0

        int slotIndex; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_EquipRune::equipRuneData_t info; // Offset: 0x0

}; // Size: 0x10
