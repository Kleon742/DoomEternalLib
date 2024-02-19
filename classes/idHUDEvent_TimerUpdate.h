struct idHUDEvent_TimerUpdate
{
    struct timerData_t
    {
        runeId_t runeId; // Offset: 0x0

        int timeMS; // Offset: 0x4

        int startMS; // Offset: 0x8

        bool useScaledTime; // Offset: 0xC

    }; // Size: 0x10

    idHUDEvent_TimerUpdate::timerData_t info; // Offset: 0x0

}; // Size: 0x10
