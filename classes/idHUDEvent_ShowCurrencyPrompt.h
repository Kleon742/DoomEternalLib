struct idHUDEvent_ShowCurrencyPrompt
{
    struct currencyData_t
    {
        int currencyCount; // Offset: 0x0

        unsigned int header; // Offset: 0x4

        unsigned int usePrompt; // Offset: 0x8

        unsigned int description; // Offset: 0xC

        unsigned int availableStr; // Offset: 0x10

        bool enableButton; // Offset: 0x14

        int buttonIndex; // Offset: 0x18

        int cost; // Offset: 0x1C

        idMaterial2* icon; // Offset: 0x20

    }; // Size: 0x28

    idHUDEvent_ShowCurrencyPrompt::currencyData_t info; // Offset: 0x0

}; // Size: 0x28
