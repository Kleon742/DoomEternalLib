struct idMidnightObjectHandle
{
    // The original 32-bit handle
    unsigned int objHandle; // Offset: 0x8

    // The extended 64-bit handle
    unsigned long long objExtendedHandle; // Offset: 0x10

}; // Size: 0x18
