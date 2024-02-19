struct idHUDEvent_PVPMatchStart
{
    struct info_t
    {
        bool localPlayerReady; // Offset: 0x0

        bool otherPlayersReady; // Offset: 0x1

        bool show; // Offset: 0x2

    }; // Size: 0x3

    idHUDEvent_PVPMatchStart::info_t info; // Offset: 0x0

}; // Size: 0x3
