struct idCharacterPodium
{
    // entity we create for character on podium
    idManagedClassPtr < idEntity > characterEnt; // Offset: 0x8

    // entity we create for podium base
    idManagedClassPtr < idTarget_PodiumSpawn > podiumEnt; // Offset: 0x28

    // arrival fx entity
    idManagedClassPtr < idEntity > arrivalFXEnt; // Offset: 0x48

    // player index for this podium
    int usedByPlayer; // Offset: 0x68

    // the userhandle for the podium that is in use. we don't always have player objects available.
    lobbyUserId_t usedByLobbyUserId; // Offset: 0x6C

    // animator used for playing customized animations on the character
    idAnimator_Channel characterAnimator; // Offset: 0x70

    // default podium to use.
    idDeclEntityDef* defaultPodium; // Offset: 0x180

    // played the appear sound yet?
    bool playedAppearSound; // Offset: 0x188

    // should we play arrival fx
    bool playArrivalFX; // Offset: 0x189

}; // Size: 0x190
