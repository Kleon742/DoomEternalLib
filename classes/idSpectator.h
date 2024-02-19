struct idSpectator
{
    enum cameraType_t : int
    {
        UNKNOWN = -1,
        OVER_THE_SHOULDER = 0,
        FOLLOW = 1,
        FREE = 2
    };

    bool isInitialized; // Offset: 0x0

    idFreeCamera* freeCamera; // Offset: 0x8

    idEntityCamera* followCamera; // Offset: 0x10

    idEntityCamera* overTheShoulderCamera; // Offset: 0x18

    idManagedClassPtr < idEntity > followTarget; // Offset: 0x20

    idSmartTimer < GAMETIME_SCALED > deadFollowTargetAutoSwitchTimer; // Offset: 0x40

    bindSet_t desiredBindset; // Offset: 0x48

}; // Size: 0x50
