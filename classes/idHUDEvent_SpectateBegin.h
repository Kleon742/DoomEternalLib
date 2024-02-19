struct idHUDEvent_SpectateBegin
{
    struct spectateBeginData_t
    {
        bool allowFreeCamera; // Offset: 0x0

        bool isInFirstPersonView; // Offset: 0x1

        int playerNum; // Offset: 0x4

        gameTeam_t playerTeam; // Offset: 0x8

    }; // Size: 0xC

    idHUDEvent_SpectateBegin::spectateBeginData_t info; // Offset: 0x0

}; // Size: 0xC
