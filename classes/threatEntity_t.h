struct threatEntity_t
{
    idManagedClassPtr < const idEntity > entity; // Offset: 0x0

    bool useThreatPos; // Offset: 0x20

    // {{ units = m }}
    idVec3 threatPos; // Offset: 0x24

}; // Size: 0x30
