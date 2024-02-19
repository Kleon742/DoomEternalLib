struct idFile_BitMsg : idFile
{
    // Name of the file.
    idStr name; // Offset: 0x8

    // Open mode.
    int mode; // Offset: 0x38

    // Contents of the message.
    idBitMsg* msg; // Offset: 0x40

}; // Size: 0x48
