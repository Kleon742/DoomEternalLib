struct idSimpleSerializer
{
    unsigned char* readData; // Offset: 0x0

    unsigned char* writeData; // Offset: 0x8

    int maxSize; // Offset: 0x10

    bool overflowed; // Offset: 0x14

    int bytesRead; // Offset: 0x18

    int bytesWritten; // Offset: 0x1C

}; // Size: 0x20
