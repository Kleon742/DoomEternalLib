struct pendingDeltaInfo_t
{
    // True if entire snap was written out in one delta
    bool fullSnap; // Offset: 0x0

    // True if the data is ready to send over the wire
    bool readyToSend; // Offset: 0x1

    // Info about the final delta packet written out
    pendingDelta_t* delta; // Offset: 0x8

    // Resulting final delta packet data
    unsigned char* deltaMem; // Offset: 0x10

    // Max size in bytes that can fit in pendingMem
    int maxDeltaMem; // Offset: 0x18

    // Final delta packet bytes written
    int deltaBytes; // Offset: 0x1C

    // Optimal length of delta comrpess streams
    int optimalLength; // Offset: 0x20

    // Optimal length of delta comrpess streams
    int maxLength; // Offset: 0x24

    int snapSequence; // Offset: 0x28

    // Last obj id written out
    unsigned short lastObjId; // Offset: 0x2C

    // last obj id that was sent over this snapshot
    unsigned short lastSentObjID; // Offset: 0x2E

    idSnapshotTrace* trace; // Offset: 0x30

}; // Size: 0x40
