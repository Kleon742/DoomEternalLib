struct idSWFBitStream
{
    bool free; // Offset: 0x0

    unsigned char* startp; // Offset: 0x8

    unsigned char* endp; // Offset: 0x10

    unsigned char* readp; // Offset: 0x18

    unsigned long long currentBit; // Offset: 0x20

    unsigned long long currentByte; // Offset: 0x28

}; // Size: 0x30
