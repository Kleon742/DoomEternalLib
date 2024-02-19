struct idHUDEvent_InvasionShowIntro
{
    struct demonOptionInfo_t
    {
        idDeclActorModifier* actorModifierDecl; // Offset: 0x0

    }; // Size: 0x8

    struct invasionShowIntroData_t
    {
        lobbyUserId_t slayerLobbyUserId; // Offset: 0x0

        lobbyUserId_t demonLobbyUserId[2]; // Offset: 0x4

        idHUDEvent_InvasionShowIntro::demonOptionInfo_t demonOptions[9]; // Offset: 0x10

        int numDemonOptions; // Offset: 0x58

        int initialScreenId; // Offset: 0x5C

        int localPlayerNum; // Offset: 0x60

        long long forceSpawnServerTime; // Offset: 0x68

        float spawnTimeSeconds; // Offset: 0x70

        bool skipVersus; // Offset: 0x74

        bool debugMode; // Offset: 0x75

    }; // Size: 0x78

    idHUDEvent_InvasionShowIntro::invasionShowIntroData_t info; // Offset: 0x0

}; // Size: 0x78
