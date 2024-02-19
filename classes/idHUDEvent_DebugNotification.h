struct idHUDEvent_DebugNotification
{
    struct info_t
    {
        int strIndex; // Offset: 0x0

        int timeMS; // Offset: 0x4

        bool fullscreen; // Offset: 0x8

    }; // Size: 0xC

    idHUDEvent_DebugNotification::info_t info; // Offset: 0x0

}; // Size: 0xC
