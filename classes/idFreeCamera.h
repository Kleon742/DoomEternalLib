struct idFreeCamera : idCamera
{
    // These have been moved here because we don't want any interface for them, but idPhotoModeCamera needs to use them internally for different implementations havok'd
    idHavokQueryId slideMoveQuery; // Offset: 0xBB0

    // {{ units = m }}
    idVec3 viewOffset; // Offset: 0xBB8

    idAngles viewAngles; // Offset: 0xBC4

    // true by default, but can be set to false to freeze the camera
    bool takesUserInput; // Offset: 0xBD0

    idUserCmd currentUcmd; // Offset: 0xBD8

    idUserCmd previousUcmd; // Offset: 0xC70

    bool shouldControlActivator; // Offset: 0xD08

    bool useCollision; // Offset: 0xD09

    usercmdButton_t acceleratorButton; // Offset: 0xD10

    usercmdButton_t deceleratorButton; // Offset: 0xD18

}; // Size: 0xD20
