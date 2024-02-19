struct idRetargetingSlaveInfo
{
    // Name of the group.
    idMidnightTargetGroupName groupName; // Offset: 0x0

    // Name of the slave's joint (if not set, uses slave's origin).
    idAtomicString jointName; // Offset: 0x8

    // Name of the master's joint (if not set, uses master's origin).
    idAtomicString parentJointName; // Offset: 0x10

    // Maximum linear speed of the slave (m/s, default = no limit).
    float maxLinearSpeed; // Offset: 0x18

    // Maximum angular speed of the slave (degrees/s, default = no limit).
    float maxAngularSpeed; // Offset: 0x1C

}; // Size: 0x20
