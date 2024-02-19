struct idAIOrientation
{
    // direction we want to orient towards
    idVec3 idealDir; // Offset: 0x0

    // current orientation
    idMat3 currentAxis; // Offset: 0xC

    // turn delta during last update (cosine of angle between ideal and axis[ 0 ])
    float lastTurnDelta; // Offset: 0x30

    // turn rate last used to update the rotation
    float lastTurnRate; // Offset: 0x34

    // cosine of alignment tolerance
    float tolerance; // Offset: 0x38

    // current turn direction
    unsigned char currentTurnDir; // Offset: 0x3C

    // turn direction from the previous frame
    unsigned char previousTurnDir; // Offset: 0x3D

    // ai's 'logical' angular velocity (so it doesn't change its mind often)
    float turnVelocity; // Offset: 0x40

    // goal yaw velocity
    float yawVelocity_target; // Offset: 0x44

    // ramped version
    float yawVelocity_current; // Offset: 0x48

}; // Size: 0x4C
