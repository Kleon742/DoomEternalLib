struct idHUDEvent_DossierRuneUpdate
{
    struct dossierRuneData_t
    {
        int slotIndex; // Offset: 0x0

        idDeclPerk* rune; // Offset: 0x8

        bool isUnlocked; // Offset: 0x10

        bool isActive; // Offset: 0x11

        bool isDisabled; // Offset: 0x12

        int lockCount; // Offset: 0x14

    }; // Size: 0x18

    idHUDEvent_DossierRuneUpdate::dossierRuneData_t info; // Offset: 0x0

}; // Size: 0x18
