struct idMusicEntity : idBloatedEntity
{
    // the initial music state to set when this entity turns on
    idSoundState* initialState; // Offset: 0xB88

    // the initial music switch group to set when this entity turns on
    idSoundSwitch* initialSwitchGroup; // Offset: 0xB90

    // the initial music switch group state to set when this entity turns on
    idStr initialSwitchState; // Offset: 0xB98

    // the secondary music switch group to set when this entity turns on
    idSoundSwitch* secondarySwitchGroup; // Offset: 0xBC8

    // the initial music switch group state to set when this entity turns on
    idStr initialSecondarySwitchState; // Offset: 0xBD0

    // if true will start music on spawn otherwise wait for Event_MusicEntity_On
    bool startWhenSpawned; // Offset: 0xC00

}; // Size: 0xC08
