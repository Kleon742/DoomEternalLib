struct committedMemoryStats_t
{
    size_t size; // Offset: 0x0

    size_t peak; // Offset: 0x8

    size_t available; // Offset: 0x10

    size_t sizePerHeap[4]; // Offset: 0x18

    size_t peakSizePerHeap[4]; // Offset: 0x38

}; // Size: 0x58
