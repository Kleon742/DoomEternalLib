// idHeapArray < idAtomicString , TAG_HEAP_ARRAY >
template <typename T>
struct idHeapArray
{
    // Ensure this buffer comes first, so this == &this->buffer
    T* buffer; // Offset: 0x0

    long long num; // Offset: 0x8

    // If false, don't free the buffer
    bool bufferOwnedByObject; // Offset: 0x10

}; // Size: 0x18
