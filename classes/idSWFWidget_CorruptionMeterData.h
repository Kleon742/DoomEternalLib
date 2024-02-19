struct idSWFWidget_CorruptionMeterData
{
    idList < idStr , TAG_IDLIST , false > corruptOMeter; // Offset: 0x0

    swfNamedColors_t color; // Offset: 0x18

    swfNamedColors_t glowColor; // Offset: 0x1C

    idSoundEvent* partialFillSound; // Offset: 0x20

    idSoundEvent* pipCompleteSound; // Offset: 0x28

    idSoundEvent* sectionCompleteSound; // Offset: 0x30

    int totalPoints; // Offset: 0x38

    int previousFrame; // Offset: 0x3C

    int currentFrame; // Offset: 0x40

    int currentNumCompleted; // Offset: 0x44

    int totalNumCompleted; // Offset: 0x48

    float desiredXOffset; // Offset: 0x4C

    bool isComplete; // Offset: 0x50

    bool isPlaying; // Offset: 0x51

}; // Size: 0x58
