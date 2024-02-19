struct idTrailerCamera : idEntityCamera
{
    enum eBumperMode : int
    {
        BUMPER_MODE_ROLL = 0,
        BUMPER_MODE_FOV = 1,
        BUMPER_MODE_DOF = 2,
        BUMPER_MODE_MAX = 3
    };

    enum eLockedCameraMode : int
    {
        CAMERA_MODE_ORBIT = 0,
        CAMERA_MODE_TV = 1,
        CAMERA_MODE_MAX = 2
    };

    idUserCmd prevCmd; // Offset: 0xCA0

    float fov; // Offset: 0xD38

    idVec4 dof; // Offset: 0xD3C

    float xyzSpeed; // Offset: 0xD4C

    float speedScale; // Offset: 0xD50

    float rotationSpeed; // Offset: 0xD54

    float rollSpeed; // Offset: 0xD58

    float dutchAngle; // Offset: 0xD5C

    // {{ units = m }}
    float depthOfFieldFocus; // Offset: 0xD60

    int bumperMode; // Offset: 0xD64

    int lockedCameraMode; // Offset: 0xD68

    idManagedClassPtr < idEntity > potentialTarget; // Offset: 0xD70

    idTrailerCamera_Menu menu; // Offset: 0xD90

}; // Size: 0xE68
