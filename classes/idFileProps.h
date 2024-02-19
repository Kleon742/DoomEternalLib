struct idFileProps
{
    // set to the latest timestamp of a cluster of files
    unsigned int timestamp; // Offset: 0x0

    // set to true if any of a cluster of files is writeable
    bool writable; // Offset: 0x4

}; // Size: 0x8
