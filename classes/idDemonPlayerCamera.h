struct idDemonPlayerCamera
{
    // camera's target entity - NULL if the camera is not active
    idManagedClassPtr < idDemonPlayer > target; // Offset: 0x8

    // position of the camera {{ units = m }}
    idVec3 camPos; // Offset: 0x28

    // orientation of the camera
    idMat3 camAxis; // Offset: 0x34

    idVec3 interactionNormal; // Offset: 0x58

    // cached view angles we'll apply deltas to every frame in Update to determine camAxis
    idAngles viewAngles; // Offset: 0x64

    // goal distance from the target {{ units = m }}
    float distance; // Offset: 0x70

    // clamp pitch within this range.
    idRange < float > pitchRange; // Offset: 0x74

    // normal: Mouse right-> look left, inverted = mouse right -> look right
    bool invertYaw; // Offset: 0x7C

    // No pitch offset is applied below this distance {{ units = m }}
    float pitchOffsetMinDistance; // Offset: 0x80

    // Maximum pitch offset is applied above this distance {{ units = m }}
    float pitchOffsetMaxDistance; // Offset: 0x84

    // look "over" the target by this amount
    float toTargetPitchOffset; // Offset: 0x88

    // No Z offset is applied below this distance {{ units = m }}
    float zOffsetMinDistance; // Offset: 0x8C

    // Maximum Z offset is applied above this distance {{ units = m }}
    float zOffsetMaxDistance; // Offset: 0x90

    // Raise the camera up by this much as we slide back {{ units = m }}
    float toTargetZOffset; // Offset: 0x94

}; // Size: 0x98
