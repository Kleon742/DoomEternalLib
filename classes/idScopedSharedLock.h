struct idScopedSharedLock
{
    idSysReaderWriterLock* rwl; // Offset: 0x0

    bool shouldLock; // Offset: 0x8

}; // Size: 0x10
