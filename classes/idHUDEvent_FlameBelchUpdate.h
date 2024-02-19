struct idHUDEvent_FlameBelchUpdate
{
    struct flameBlechUpdateData_t
    {
        int numUses; // Offset: 0x0

        int maxUses; // Offset: 0x4

        long long cooldownStartTime; // Offset: 0x8

        long long cooldownEndTime; // Offset: 0x10

        long long endTimeReduction; // Offset: 0x18

    }; // Size: 0x20

    idHUDEvent_FlameBelchUpdate::flameBlechUpdateData_t info; // Offset: 0x0

}; // Size: 0x20
