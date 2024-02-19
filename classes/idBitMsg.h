struct idBitMsg
{
    // pointer to data for writing
    unsigned char* writeData; // Offset: 0x0

    // pointer to data for reading
    unsigned char* readData; // Offset: 0x8

    // maximum size of message in bytes
    int maxSize; // Offset: 0x10

    // current size of message in bytes
    int curSize; // Offset: 0x14

    // number of bits written to the last written byte
    int writeBit; // Offset: 0x18

    // number of full bytes read so far (excludes readBit)
    int readCount; // Offset: 0x1C

    // number of bits read from the last read byte
    int readBit; // Offset: 0x20

    // if false, generate error when the message is overflowed
    bool allowOverflow; // Offset: 0x24

    // set true if buffer size failed (with allowOverflow set)
    bool overflowed; // Offset: 0x25

    unsigned long long tempValue; // Offset: 0x28

}; // Size: 0x30
