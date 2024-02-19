struct idFile_AtomicWrite : idFile_Memory
{
    idStr writeName; // Offset: 0x180

    fsPath_t basePath; // Offset: 0x1B0

    idStr osPath; // Offset: 0x1B8

    bool finished; // Offset: 0x1E8

}; // Size: 0x1F0
