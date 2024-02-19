struct idDeclLobbySettings : idDeclTypeInfo
{
    struct podiumSettings_t
    {
        // The prefab prefix for the podium object
        idStr podiumPrefix; // Offset: 0x0

        // The prefab prefix for the camera pointing at the podium
        idStr cameraPrefix; // Offset: 0x30

        // The time we take to lerp to the podium camera
        int cameraTransitionLerpTimeMS; // Offset: 0x60

    }; // Size: 0x68

    // The minimum amount of time to show the waiting for players screen to prevent popping
    int waitingForPlayersMinimumShowtimeMS; // Offset: 0x88

    // The time that the users are not allowed to make changes. This is required or changes may not be sync'ed in time.
    int launchLobbyLockoutTimerMS; // Offset: 0x8C

    // The time in MS to countdown after all players are ready
    int privateMatchCountdownTimeMS; // Offset: 0x90

    // The time in MS to countdown when all three players are available
    int publicMatchCountdownTimeMS; // Offset: 0x94

    // The time in MS to countdown when all three players are ready
    int publicMatchFinalCountdownTimeMS; // Offset: 0x98

    // The time in MS that the players have to vote before countdown.
    int publicMatchPostmatchCountdownMS; // Offset: 0x9C

    // The list of maps available for this lobby
    idDeclPVPMapSelectInfoList* mapList; // Offset: 0xA0

    // The prefab prefix for the root camera position
    idStr rootCameraPrefix; // Offset: 0xA8

    // The prefab prefix for the root camera position
    idStr lobbyRootCameraPrefix; // Offset: 0xD8

    // The settings used to find slayer podiums
    idDeclLobbySettings::podiumSettings_t slayerPodiumSettings; // Offset: 0x108

    // The settings used to find demon podiums
    idDeclLobbySettings::podiumSettings_t demonPodiumSettings; // Offset: 0x170

    // The music switch to use for pvp lobby
    idSoundSwitch* soundSwitch; // Offset: 0x1D8

    // The state the music switch needs to be in
    idStr soundSwitchState; // Offset: 0x1E0

    // The music state while in the lobby
    idSoundState* soundState; // Offset: 0x210

    // The number of total players needed to Ready up to play
    int playersNeededToPlay; // Offset: 0x218

    // the entity def for the default entity podium.
    idDeclEntityDef* defaultPodium; // Offset: 0x220

    // The shell skybox that is used for Public matches
    idDeclShellSkybox* publicShellSkybox; // Offset: 0x228

    // The shell skybox that is used for Private matches
    idDeclShellSkybox* privateShellSkybox; // Offset: 0x230

    // the amount of time that we want users to sit in the lobby idle state in Public matches without counting down
    int maxTimeIdleInPublicLobbyMS; // Offset: 0x238

    // The maximum failure of server connections to allow in public matches
    int maxPublicServerConnectAttempts; // Offset: 0x23C

    // The maximum failure of server connections to allow in private matches
    int maxPrivateServerConnectAttempts; // Offset: 0x240

    // The maximum time to wait for players to load into the map in public matches
    int maxPublicTimeWaitingForPlayersToLoadMS; // Offset: 0x244

    // The maximum time to wait for players to load into the map in private matches
    int maxPrivateTimeWaitingForPlayersToLoadMS; // Offset: 0x248

    // The initial penalty delay for matchmaking in milliseconds
    int matchmakingDelayInitialMS; // Offset: 0x24C

    // The penalty delay for matchmaking incurred for each lobby quit in milliseconds
    int matchmakingDelayPenaltyMS; // Offset: 0x250

    // The penalty delay cap for matchmaking incurred in milliseconds
    int matchmakingDelayCapMS; // Offset: 0x254

    // Exit the public matches in the post match phase.
    bool publicMatchExitLobbyPostMatch; // Offset: 0x258

}; // Size: 0x260
