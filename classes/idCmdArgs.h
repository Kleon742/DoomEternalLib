struct idCmdArgs
{
    // number of arguments
    int argc; // Offset: 0x0

    // points into tokenized
    char* argv[512]; // Offset: 0x8

    // will have 0 bytes inserted
    char tokenized[4096]; // Offset: 0x1008

}; // Size: 0x2008
