struct streamDiskDatabase_t
{
    idStr path; // Offset: 0x0

    idFile* databaseFile; // Offset: 0x30

    streamDatabaseHeader_t* header; // Offset: 0x38

    streamDatabasePrefetchBlock_t* prefetchBlocks; // Offset: 0x40

    unsigned long long* prefetchIdentities; // Offset: 0x48

    unsigned int numPrefetchBlocks; // Offset: 0x50

    unsigned int pageSize; // Offset: 0x54

}; // Size: 0x58
