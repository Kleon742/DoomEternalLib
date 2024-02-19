struct idUmbraPVS
{
    struct pvsHandle_t
    {
        int h; // Offset: 0x0

    }; // Size: 0x4

    // Data
    idUmbraPVSResource* resource; // Offset: 0x0

    Umbra::Tome* tome; // Offset: 0x8

    // State
    idIndexPool < 4 > handles; // Offset: 0x10

    unsigned char* decompressedPVS[4]; // Offset: 0x28

    unsigned char* uncompressedWorkingBuffer; // Offset: 0x48

    // Profiling
    float numQueryClusterMsec; // Offset: 0x50

    int numQueryClusterCalls; // Offset: 0x54

    float numQueryClustersMsec; // Offset: 0x58

    int numQueryClustersCalls; // Offset: 0x5C

}; // Size: 0x60
