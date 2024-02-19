struct idLogicNodeModelSetMusicSwitch : idLogicNodeModel
{
    // switch to set on the music track
    idSoundSwitch* soundSwitch; // Offset: 0x10

    // switch state to use
    idStr soundSwitchValue; // Offset: 0x18

}; // Size: 0x48
