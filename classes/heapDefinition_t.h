struct heapDefinition_t
{
    char* name; // Offset: 0x0

    size_t virtualReservation; // Offset: 0x8

    memTraceHeap_t memTraceHeap; // Offset: 0x10

    memTraceHeap_t memTraceCommitHeap; // Offset: 0x14

    unsigned int memTraceColor; // Offset: 0x18

    int rdHeap; // Offset: 0x1C

}; // Size: 0x20
