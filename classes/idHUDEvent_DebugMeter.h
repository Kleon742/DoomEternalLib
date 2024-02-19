struct idHUDEvent_DebugMeter
{
    struct debugMeterData_t
    {
        // percentage of time remaining
        float remainingPct; // Offset: 0x0

        // 0 = berserk, 1 = onslaught, 2 = overdrive, 3 = blood fueled, 4 = ground slam, 5 = crucible, 6 = flame belch
        int powerupNum; // Offset: 0x4

        bool show; // Offset: 0x8

        int maxUses; // Offset: 0xC

        int availableUses; // Offset: 0x10

    }; // Size: 0x14

    idHUDEvent_DebugMeter::debugMeterData_t info; // Offset: 0x0

}; // Size: 0x14
