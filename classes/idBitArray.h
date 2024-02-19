struct idBitArray
{
    // buffer of bits
    unsigned char* buffer; // Offset: 0x0

    // number of bits in the buffer
    size_t bits; // Offset: 0x8

    // memory tag of this bit array
    memTag_t memTag; // Offset: 0x10

    // true if "buffer" should be freed
    bool free; // Offset: 0x14

}; // Size: 0x18
