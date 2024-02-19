struct globalMemoryStats_t
{
    size_t availPhysicalMemory; // Offset: 0x0

    size_t totalPhysicalMemory; // Offset: 0x8

    size_t availPageFile; // Offset: 0x10

    size_t totalPageFile; // Offset: 0x18

    size_t availVirtualMemory; // Offset: 0x20

    size_t totalVirtualMemory; // Offset: 0x28

    int load; // Offset: 0x30

}; // Size: 0x38
