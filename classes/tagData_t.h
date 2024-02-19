struct tagData_t
{
    // translational offset relative to the parent joint {{ units = m }}
    idVec3 trans; // Offset: 0x0

    // rotational offset relative to the parent joint
    idQuat rot; // Offset: 0xC

    // crc of the parent joint's name
    idHandle < unsigned short , invalidJointHandle_t , INVALID_JOINT_HANDLE > parentJoint; // Offset: 0x1C

}; // Size: 0x20
