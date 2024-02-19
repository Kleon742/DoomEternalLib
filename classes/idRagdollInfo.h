struct idRagdollInfo
{
    // time in the past to from which to calculate ragdoll velocities from animation, in milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > velocityTime; // Offset: 0x0

    // slow motion start time in seconds
    float slomoStart; // Offset: 0x4

    // slow motion end time in seconds
    float slomoEnd; // Offset: 0x8

    // joint friction dives from 1 to this value and goes up again
    float jointFrictionDent; // Offset: 0xC

    // start time of joint friction dent
    float jointFrictionStart; // Offset: 0x10

    // end time of joint friction dent
    float jointFrictionEnd; // Offset: 0x14

    // contact friction dives from 1 to this value and goes up again
    float contactFrictionDent; // Offset: 0x18

    // start time of contact friction dent
    float contactFrictionStart; // Offset: 0x1C

    // end time of contact friction dent
    float contactFrictionEnd; // Offset: 0x20

    // temp
    bool ragdollWhileAlive; // Offset: 0x24

}; // Size: 0x28
