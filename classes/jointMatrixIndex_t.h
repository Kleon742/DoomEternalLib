struct jointMatrixIndex_t
{
    idMat3 rotation; // Offset: 0x0

    idMat3 rotation_reference; // Offset: 0x24

    // {{ units = m }}
    idVec3 translation; // Offset: 0x48

    // {{ units = m }}
    idVec3 translation_reference; // Offset: 0x54

    idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x60

    bool active; // Offset: 0x62

}; // Size: 0x64
