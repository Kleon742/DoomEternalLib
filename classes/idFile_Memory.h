struct idFile_Memory : idFile
{
    // Name of the file, static so we can use files across map heap boundaries without pushing heap
    idStrStatic < 260 > name; // Offset: 0x8

    // Open mode.
    int mode; // Offset: 0x140

    // Maximum size of file.
    size_t maxSize; // Offset: 0x148

    // Size of the file.
    size_t fileSize; // Offset: 0x150

    // Allocated size.
    size_t allocated; // Offset: 0x158

    // needed when an idFile_memory is substituted for a real file
    unsigned int timestamp; // Offset: 0x160

    // Buffer holding the file data.
    char* filePtr; // Offset: 0x168

    // Current read/write pointer.
    char* curPtr; // Offset: 0x170

    bool ownsData; // Offset: 0x178

}; // Size: 0x180
