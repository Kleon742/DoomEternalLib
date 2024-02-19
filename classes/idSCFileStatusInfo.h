struct idSCFileStatusInfo
{
    scFileStatus_t status; // Offset: 0x0

    bool unresolved; // Offset: 0x4

    int localVersion; // Offset: 0x8

    int serverVersion; // Offset: 0xC

    idStr movedFile; // Offset: 0x10

}; // Size: 0x40
