struct scImport_t
{
    int version; // Offset: 0x0

    idMem* memorySystem; // Offset: 0x8

    idCVarSystem* cvarSystem; // Offset: 0x10

    idFileSystem* fileSystem; // Offset: 0x18

    idProfileManager* profileManager; // Offset: 0x20

    // the print function that source control idLib printing will be forwarded to
    void (*printForward)(const char * msg); // Offset: 0x28

}; // Size: 0x30
