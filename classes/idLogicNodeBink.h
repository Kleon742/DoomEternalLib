struct idLogicNodeBink
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        OUTPUT_START = 1,
        OUPUT_BINK_DONE = 2,
        INPUT_STOP = 3,
        OUTPUT_STOP = 4
    };

    // which video to play
    idMaterial2* binkMaterial; // Offset: 0x0

    // Sound event to post when starting to play bink
    idSoundEvent* soundEventStartedPlaying; // Offset: 0x8

    // Sound event to post when stopped playing bink
    idSoundEvent* soundEventStoppedPlaying; // Offset: 0x10

    // the id were we are registered
    uint16 broadcastSystemId; // Offset: 0x18

    // If true the user can skip video
    bool allowSkip; // Offset: 0x1A

    bool isPlaying; // Offset: 0x1B

    // also play on clients? (typically no)
    bool playOnClient; // Offset: 0x1C

    int overrideCutFramesCount; // Offset: 0x20

}; // Size: 0x28
