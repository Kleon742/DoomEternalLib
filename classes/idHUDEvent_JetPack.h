struct idHUDEvent_JetPack
{
    struct jetPackData_t
    {
        // percentage of charge
        float chargePct; // Offset: 0x0

        // is above min required to activate
        bool aboveMin; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_JetPack::jetPackData_t info; // Offset: 0x0

}; // Size: 0x8
