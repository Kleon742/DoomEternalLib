struct MD5_CTX
{
    unsigned int state[4]; // Offset: 0x0

    unsigned int bits[2]; // Offset: 0x10

    unsigned char in[64]; // Offset: 0x18

}; // Size: 0x58
