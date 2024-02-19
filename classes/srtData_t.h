struct srtData_t
{
    unsigned char* view; // Offset: 0x0

    unsigned char* instance; // Offset: 0x8

    unsigned char* surface; // Offset: 0x10

    unsigned char* globalTextures; // Offset: 0x18

    int inlineConstants[4]; // Offset: 0x20

    unsigned char* renderLayer; // Offset: 0x30

}; // Size: 0x38
