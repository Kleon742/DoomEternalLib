struct idResourceSpecialHash
{
    // type of special hash
    unsigned int hashType; // Offset: 0x0

    // reserved
    unsigned int reserved; // Offset: 0x4

    // hash of type hashType
    unsigned long long hash; // Offset: 0x8

}; // Size: 0x10
