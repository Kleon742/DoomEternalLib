struct idHUDEvent_InvasionShowOutroScreen
{
    struct invasionOutroPlayerInfo_t
    {
        lobbyUserId_t lobbyUserId; // Offset: 0x0

        idDeclPlayableCharacter* playableCharacter; // Offset: 0x8

    }; // Size: 0x10

    struct invasionShowOutroScreenData_t
    {
        idHUDEvent_InvasionShowOutroScreen::invasionOutroPlayerInfo_t losingTeam[2]; // Offset: 0x0

        idHUDEvent_InvasionShowOutroScreen::invasionOutroPlayerInfo_t winningTeam[2]; // Offset: 0x20

        bool isLocalVictory; // Offset: 0x40

        float durationSeconds; // Offset: 0x44

        long long endTime; // Offset: 0x48

        bool debugMode; // Offset: 0x50

    }; // Size: 0x58

    idHUDEvent_InvasionShowOutroScreen::invasionShowOutroScreenData_t info; // Offset: 0x0

}; // Size: 0x58
