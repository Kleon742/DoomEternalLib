struct idUtilityCamera : idCamera
{
    // {{ units = m }}
    float minDist; // Offset: 0xBB0

    // {{ units = m }}
    float maxDist; // Offset: 0xBB4

    // {{ units = m }}
    idVec3 targetPos; // Offset: 0xBB8

    // {{ units = m }}
    float distance; // Offset: 0xBC4

    // {{ units = m }}
    idVec3 offset; // Offset: 0xBC8

    idAngles angles; // Offset: 0xBD4

    idAngles lastAngles; // Offset: 0xBE0

    int oldBindSet; // Offset: 0xBEC

    int numFrames; // Offset: 0xBF0

    // {{ units = m }}
    idVec3 lastPos; // Offset: 0xBF4

    // {{ units = m }}
    idVec3 lastTargetPos; // Offset: 0xC00

    // {{ units = m }}
    idVec3 cachedViewOrg; // Offset: 0xC0C

    idMat3 cachedViewAxis; // Offset: 0xC18

    float maxAbsolutePitchDegrees; // Offset: 0xC3C

    bool invertPitchInput; // Offset: 0xC40

    bool invertYawInput; // Offset: 0xC41

    // if true, angles default to facing same direction as follow target; if false, default to facing *at* facing target
    bool faceWithFollowTarget; // Offset: 0xC42

    // if true, camera tracks with the facing direction of any follow target
    bool trackFollowTargetAngles; // Offset: 0xC43

}; // Size: 0xC48
