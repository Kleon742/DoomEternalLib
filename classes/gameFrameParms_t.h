struct gameFrameParms_t
{
    // dimensions for gui models
    int renderWidth; // Offset: 0x0

    int renderHeight; // Offset: 0x4

    int scanoutWidth; // Offset: 0x8

    int scanoutHeight; // Offset: 0xC

    float pixelAspect; // Offset: 0x10

    bool doRender; // Offset: 0x14

    bool isServer; // Offset: 0x15

    bool isClient; // Offset: 0x16

    bool isDemoPlaying; // Offset: 0x17

    bool isDemoRecording; // Offset: 0x18

    bool isDemoStarting; // Offset: 0x19

    bool isToolActive; // Offset: 0x1A

    // If true, the gameTimeManager will change time[] and previousTime[]
    bool advanceTime; // Offset: 0x1B

    bool allowAsyncFrameJobs; // Offset: 0x1C

    // is this even used?
    bool editorRequestsStopTime; // Offset: 0x1D

    // regression record state
    recordState_t recordState; // Offset: 0x20

    idLocalUser* masterLocalUser; // Offset: 0x28

    idRegression* regression; // Offset: 0x30

    // state of userCmds for all users
    idUserCmdMgr* userCmdMgr; // Offset: 0x38

    bool loadedFromAutomap; // Offset: 0x40

    idStr currentEditorReferenceMapID; // Offset: 0x48

    idGrowableList < gameDialogCommand_t , 4 , TAG_IDLIST > dialogCmds; // Offset: 0x78

    // any input events that might affect game state and need to be handled during RunFrame
    idGrowableList < inputEvent_t , 32 , TAG_IDLIST > pendingInputEvents; // Offset: 0x750

}; // Size: 0xB68
