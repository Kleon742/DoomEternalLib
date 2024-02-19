struct imageStreamPacketKrakenHeader_t
{
    unsigned int compressedLength; // Offset: 0x0

    unsigned int uncompressedLength; // Offset: 0x4

    unsigned int imageIdx; // Offset: 0x8

    unsigned int subResourceIdx; // Offset: 0xC

    unsigned short width; // Offset: 0x10

    unsigned short height; // Offset: 0x12

    unsigned char format; // Offset: 0x14

    unsigned char pad[3]; // Offset: 0x15

}; // Size: 0x18
