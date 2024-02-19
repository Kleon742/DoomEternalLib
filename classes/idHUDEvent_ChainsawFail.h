struct idHUDEvent_ChainsawFail
{
    struct chainsawData_t
    {
        int count; // Offset: 0x0

        int maxCount; // Offset: 0x4

        int cost; // Offset: 0x8

        bool noTarget; // Offset: 0xC

        bool invalidTarget; // Offset: 0xD

        bool outOfRange; // Offset: 0xE

    }; // Size: 0x10

    idHUDEvent_ChainsawFail::chainsawData_t info; // Offset: 0x0

}; // Size: 0x10
