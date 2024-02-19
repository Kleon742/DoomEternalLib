struct swfHeader_t
{
    unsigned char compression; // Offset: 0x0

    unsigned char W; // Offset: 0x1

    unsigned char S; // Offset: 0x2

    unsigned char version; // Offset: 0x3

    unsigned int fileLength; // Offset: 0x4

}; // Size: 0x8
