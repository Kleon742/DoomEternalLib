struct idAnimSysNode_Tracker : idAnimSysNode
{
    // From aimtracker
    idAnimatedEntity* animEnt; // Offset: 0xA8

    tagData_t focusTagData; // Offset: 0xB0

    tagData_t orientationTagData; // Offset: 0xD0

    // From torsotracker index of joint to use for reference instead of the one in the head tracking group
    idIndex < short , invalidJointIndex_t , - 1 > referenceJointOverrideIdx; // Offset: 0xF0

    // Which pose to get reference pos/axis from
    animationPose_t animationPoseToReference; // Offset: 0xF4

    bool useOriginXYForWorldSpace; // Offset: 0xF8

    idAnimSysNode_Tracker* parentTracker; // Offset: 0x100

    // __saveskip const idAnimator_TrackerBase * parentTracker; parent of this tracker, used to get a frame of reference - only cached temporarily each frame point to track {{ units = m }}
    idVec3 focusPoint; // Offset: 0x108

    // for client interpolating {{ units = m }}
    idVec3 focusPoints[2]; // Offset: 0x114

    // yaw min to the right of forward
    idTypesafeNumber < float , DegreesUnique_t > yawRight; // Offset: 0x12C

    // yaw max to the left of forward
    idTypesafeNumber < float , DegreesUnique_t > yawLeft; // Offset: 0x130

    // pitch min looking up
    idTypesafeNumber < float , DegreesUnique_t > pitchUp; // Offset: 0x134

    // pitch max looking down
    idTypesafeNumber < float , DegreesUnique_t > pitchDown; // Offset: 0x138

    // index of the head tracking group to use
    int trackGroupIndex; // Offset: 0x13C

    // the last model-space direction from the focus joint to the focus point
    idVec3 msDirToFocus; // Offset: 0x140

    // the last world-space position of the focus joint {{ units = m }}
    idVec3 wsFocusJointPos; // Offset: 0x14C

    // the last model-space position of the reference joint {{ units = m }}
    idVec3 msReferenceJointPos; // Offset: 0x158

    // additional angles to applied to final joint in the tracking group
    idAngles idealOffsetAngles; // Offset: 0x164

    // current offset angles, always lerping towards idealOffsetAngles;
    idAngles curOffsetAngles; // Offset: 0x170

    // cumulative delta applied to chain, for use by children
    idMat3 totalAxisDelta; // Offset: 0x17C

    // if true, use pitch and yaw constraints
    bool enableConstraints; // Offset: 0x1A0

    // if true, project the reference orientation onto the local horizontal plane
    bool projectReferenceOrientation; // Offset: 0x1A1

    float lastAngle; // Offset: 0x1A4

    bool yawClamped; // Offset: 0x1A8

    bool pitchClamped; // Offset: 0x1A9

    bool clientSnapFocusPoint; // Offset: 0x1AA

}; // Size: 0x1B0
