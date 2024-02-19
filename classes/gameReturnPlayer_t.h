struct gameReturnPlayer_t
{
    bool valid; // Offset: 0x0

    // demo temp hack: need this to ignore the isValid check inside of common::preparesnapshot(). Sending vieworigin/axis shouldn't be dependent on the game return render info
    bool isInGame; // Offset: 0x1

    renderView_t view; // Offset: 0x10

    // bottom layer of interaction guis which we don't synchronize across the network
    idRenderModelGui* guiModelBottom; // Offset: 0x980

    // middle layer of interaction guis
    idRenderModelGui* guiModelMid; // Offset: 0x988

    // top layer of interaction guis which we don't synchronize across the network
    idRenderModelGui* guiModelTop; // Offset: 0x990

    inputSettings_t inputSettings; // Offset: 0x998

    int vibrationLow; // Offset: 0x9B8

    int vibrationHigh; // Offset: 0x9BC

    int vibrationLeft; // Offset: 0x9C0

    int vibrationRight; // Offset: 0x9C4

    bool updateHaptic; // Offset: 0x9C8

    hapticFeedbackParms_t hapticFeedback; // Offset: 0x9CC

    unsigned int visMask; // Offset: 0x9F8

}; // Size: 0xA00
