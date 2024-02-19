struct idLogicNodeModelBink : idLogicNodeModel
{
    // which video to play
    idMaterial2* binkMaterial; // Offset: 0x10

    // Sound event to post when starting to play bink
    idSoundEvent* soundEventStartedPlaying; // Offset: 0x18

    // Sound event to post when stopped playing bink
    idSoundEvent* soundEventStoppedPlaying; // Offset: 0x20

    // If true the user can skip video
    bool allowSkip; // Offset: 0x28

    // also play on clients? (typically no)
    bool playOnClient; // Offset: 0x29

    // override the number of freeze-frames on a camera cut
    int overrideCutFramesCount; // Offset: 0x2C

}; // Size: 0x30
