struct idChangelistFileInfo
{
    // The full, absolute file path in the depot.
    idStr depotPath; // Offset: 0x0

    // The revision number of the file. One represents a new file.
    int revision; // Offset: 0x30

    // How the file was modified.
    scModifyAction_t modifyAction; // Offset: 0x34

}; // Size: 0x38
