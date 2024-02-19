struct idHUDEvent_RespecInfo
{
    struct respecInfo_t
    {
        int weaponPointsAvailable; // Offset: 0x0

        int weaponPointsUsed; // Offset: 0x4

        int praetorPointsAvailable; // Offset: 0x8

        int praetorPointsUsed; // Offset: 0xC

    }; // Size: 0x10

    idHUDEvent_RespecInfo::respecInfo_t info; // Offset: 0x0

}; // Size: 0x10
