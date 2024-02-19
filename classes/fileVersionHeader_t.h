struct fileVersionHeader_t
{
    // version of the file being read
    int version; // Offset: 0x0

    // checksum of the data to follow
    unsigned int checksum; // Offset: 0x4

    // length of the data to follow
    long long length; // Offset: 0x8

}; // Size: 0x10
