struct jointGroupJointData_t
{
    idMat3 axis; // Offset: 0x0

    idVec3 origin; // Offset: 0x24

    float radius; // Offset: 0x30

    idJointGroup* jointGroup; // Offset: 0x38

    idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x40

}; // Size: 0x48
