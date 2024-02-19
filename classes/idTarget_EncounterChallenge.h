struct idTarget_EncounterChallenge : idTarget
{
    // interactable we send the interaction actions to
    idManagedClassPtr < idInteractable > interactable; // Offset: 0xB88

    // time before we send IA_ENCOUNTER_CHALLENGE_FAILED
    idTypesafeTime < int , millisecondUnique_t , 1000 > challengeDuration; // Offset: 0xBA8

    // Music state if the challenge is passed
    idSoundState* PassedMusicState; // Offset: 0xBB0

    // Music State if the challend is failed.
    idSoundState* FailedMusicState; // Offset: 0xBB8

    // gt end time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > challengeEndTime; // Offset: 0xBC0

    // Last Sub Activity for Telemetry.
    idStr previousSubActivity; // Offset: 0xBC8

    // Telemetry Sub Activity binding.
    bool TelemetrySubActivity; // Offset: 0xBF8

    // wait for events to be processed
    bool firstThink; // Offset: 0xBF9

    // if true this encounter will be saved to the list of secret encounters when completed and use secret encounter notifications
    bool isSecretEncounter; // Offset: 0xBFA

    // if true, this encounter will be saved to the list of secret encounters (uses the same system) when completed, and will use dlc encounter notifications
    bool isDLCSecretEncounter; // Offset: 0xBFB

    // save whether this encounter is completed
    bool completed; // Offset: 0xBFC

    // Optional stat for per-entity encounter challenge tracking. ex. use is tracking if challenges on a specific map are done, not all in game
    gameStat_t optionalCompletionStat; // Offset: 0xC00

}; // Size: 0xC08
