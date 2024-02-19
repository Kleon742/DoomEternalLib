struct idScopedMutex
{
    mutexHandle_t* mutex; // Offset: 0x0

    int lockCount; // Offset: 0x8

}; // Size: 0x10
