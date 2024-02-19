struct syncDeltaCorrection_t
{
    bool hasDeltaCorrection; // Offset: 0x0

    bool activeDeltaCorrection; // Offset: 0x1

    bool finishedDeltaCorrection; // Offset: 0x2

    float startFrameNumber; // Offset: 0x4

    float endFrameNumber; // Offset: 0x8

    float deltaCorrectionEndTime; // Offset: 0xC

    float previousRemainingTranslationFrames; // Offset: 0x10

    idMD6LeafPlay* syncLeaf; // Offset: 0x18

    idMD6Anim* syncAnim; // Offset: 0x20

    idAnimWebPath currentAnimWebPath; // Offset: 0x28

    // {{ units = m }}
    idVec3 deltaCorrectStartTranslation; // Offset: 0x58

    idQuat deltaCorrectStartAxis; // Offset: 0x64

    // {{ units = m }}
    idVec3 deltaCorrectGoalTranslation; // Offset: 0x74

    idQuat deltaCorrectGoalAxis; // Offset: 0x80

}; // Size: 0x90
