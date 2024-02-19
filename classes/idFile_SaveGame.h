struct idFile_SaveGame : idFile_Memory
{
    // helps platform determine what to do with the file (encrypt, checksum, etc.)
    int type; // Offset: 0x180

    // when loading, this is set if there is a problem
    int error; // Offset: 0x184

    // If this file is being read for enumeration purposes. Does not trigger developer mode.
    bool isEnumerating; // Offset: 0x188

}; // Size: 0x190
