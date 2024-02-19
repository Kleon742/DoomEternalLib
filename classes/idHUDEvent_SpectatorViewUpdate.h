struct idHUDEvent_SpectatorViewUpdate
{
    struct spectatorViewData_t
    {
        bool isTournamentSpectator; // Offset: 0x0

        bool isInFirstPersonView; // Offset: 0x1

    }; // Size: 0x2

    idHUDEvent_SpectatorViewUpdate::spectatorViewData_t info; // Offset: 0x0

}; // Size: 0x2
