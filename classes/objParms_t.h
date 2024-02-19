struct objParms_t
{
    // Input Flags used to communicate state from obj job to delta compress job
    unsigned int flags; // Offset: 0x0

    unsigned short peerMask; // Offset: 0x4

    objJobState_t newState; // Offset: 0x8

    objJobState_t oldState; // Offset: 0x28

    // Output
    objHeader_t* destHeader; // Offset: 0x48

    unsigned char* dest; // Offset: 0x50

    idSnapshotTrace* trace; // Offset: 0x58

}; // Size: 0x60
