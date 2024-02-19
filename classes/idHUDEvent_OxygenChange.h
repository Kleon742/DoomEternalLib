struct idHUDEvent_OxygenChange
{
    struct oxygenData_t
    {
        // how much has the total possible oxygen changed
        float maxOxygenDeltaChange; // Offset: 0x0

        // how much has the oxygen changed
        float oxygenDeltaChange; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_OxygenChange::oxygenData_t info; // Offset: 0x0

}; // Size: 0x8
