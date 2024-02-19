struct idHavokPhysicsCommandBuffer
{
    // Command stream
    idHeapArray < unsigned char , TAG_HEAP_ARRAY > stream; // Offset: 0x0

    // Used bytes in the command stream
    interlockedInt_t usedBytes; // Offset: 0x18

}; // Size: 0x20
