struct idHUDEvent_RadShieldChange
{
    struct radSheildData_t
    {
        // how much has the total possible shield changed
        float maxRadShieldDeltaChange; // Offset: 0x0

        // how much has the shield changed
        float radShieldDeltaChange; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_RadShieldChange::radSheildData_t info; // Offset: 0x0

}; // Size: 0x8
