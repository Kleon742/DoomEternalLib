struct idHUDEvent_PVPMatchEndResult
{
    struct info_t
    {
        gameTeam_t leftTeam; // Offset: 0x0

        gameTeam_t rightTeam; // Offset: 0x4

        gameTeam_t roundWinners[5]; // Offset: 0x8

    }; // Size: 0x1C

    idHUDEvent_PVPMatchEndResult::info_t info; // Offset: 0x0

}; // Size: 0x1C
