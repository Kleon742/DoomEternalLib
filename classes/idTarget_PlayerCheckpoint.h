struct idTarget_PlayerCheckpoint : idTarget
{
    // Checkpoint name that can be referenced through script or hard loaded during development
    idStr checkpointName; // Offset: 0xB88

    // Map group containing the checkpoint
    automapMapGroupId_t mapGroup; // Offset: 0xBB8

    // the readable name used to show in menus
    idStrId readableName; // Offset: 0xBBC

    // Image displayed when showing the checkpoint for fast travel
    idMaterial2* travelImageMaterial; // Offset: 0xBC0

    // if set, this will write the checkpoint save to storage instead of just updating it in memory
    bool persistToStorage; // Offset: 0xBC8

    // seconds to delay before actually check-pointing
    float delay; // Offset: 0xBCC

    // if we have already activated this checkpoint
    bool checkPointSaved; // Offset: 0xBD0

    // sound to play when checkpoint is activated
    idSoundEvent* activateSound; // Offset: 0xBD8

    // Params used to trigger tutorial events or codex entries after a specified number of deaths
    idTutorialCheckpointData_t tutorialData; // Offset: 0xBE0

}; // Size: 0xC08
