struct ikSpine_t
{
    // name of the attach joint
    idJointName jointName; // Offset: 0x0

    // how much pitch should be applied on this joint when looking down. -1 default
    float pitchAmount; // Offset: 0x30

    // how much pitch should be applied on this joint when looking up. -1 default
    float pitchAmountUp; // Offset: 0x34

    // pitch up and down blends over this angle
    float pitchBlendAngle; // Offset: 0x38

    // how much yaw should be applied on this joint
    float yawAmount; // Offset: 0x3C

    // how much roll should be applied on this joint
    float rollAmount; // Offset: 0x40

    // does this joint control the arms and if so, in what way
    handAimType_t armControl; // Offset: 0x44

    // is this the lower body control joint
    bool lowerBodyControl; // Offset: 0x48

}; // Size: 0x50
