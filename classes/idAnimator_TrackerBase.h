struct idAnimator_TrackerBase : idAnimator_Base
{
    // parent of this tracker, used to get a frame of reference - only cached temporarily each frame
    idAnimator_TrackerBase* parentTracker; // Offset: 0x40

    // point to track {{ units = m }}
    idVec3 focusPoint; // Offset: 0x48

    // for client interpollating {{ units = m }}
    idVec3 focusPoints[2]; // Offset: 0x54

    // yaw min to the right of forward
    idTypesafeNumber < float , DegreesUnique_t > yawRight; // Offset: 0x6C

    // yaw max to the left of forward
    idTypesafeNumber < float , DegreesUnique_t > yawLeft; // Offset: 0x70

    // pitch min looking up
    idTypesafeNumber < float , DegreesUnique_t > pitchUp; // Offset: 0x74

    // pitch max looking down
    idTypesafeNumber < float , DegreesUnique_t > pitchDown; // Offset: 0x78

    // index of the head tracking group to use
    int trackGroupIndex; // Offset: 0x7C

    // the leaf that holds the joint mods
    idMD6LeafPause* leaf; // Offset: 0x80

    // the last model-space direction from the focus joint to the focus point
    idVec3 msDirToFocus; // Offset: 0x88

    // the last world-space position of the focus joint {{ units = m }}
    idVec3 wsFocusJointPos; // Offset: 0x94

    // the last model-space position of the reference joint {{ units = m }}
    idVec3 msReferenceJointPos; // Offset: 0xA0

    // additional angles to applied to final joint in the tracking group
    idAngles idealOffsetAngles; // Offset: 0xAC

    // current offset angles, always lerping towards idealOffsetAngles;
    idAngles curOffsetAngles; // Offset: 0xB8

    // cumulative delta applied to chain, for use by children
    idMat3 totalAxisDelta; // Offset: 0xC4

    // if true, use pitch and yaw constraints
    bool enableConstraints; // Offset: 0xE8

    // if true, project the reference orientation onto the local horizontal plane
    bool projectReferenceOrientation; // Offset: 0xE9

    float lastAngle; // Offset: 0xEC

    bool yawClamped; // Offset: 0xF0

    bool pitchClamped; // Offset: 0xF1

    bool clientSnapFocusPoint; // Offset: 0xF2

}; // Size: 0xF8
