struct idGetUpJoint
{
    // Importance of this joint when matching, copied from decl so we don't have to access it
    float jointWeight; // Offset: 0x0

    idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x4

    // name of joint
    idAtomicString jointName; // Offset: 0x8

}; // Size: 0x10
