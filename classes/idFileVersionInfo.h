struct idFileVersionInfo
{
    // The version number.
    int version; // Offset: 0x0

    // The changelist number.
    int changelist; // Offset: 0x4

    // size of the file at revision (if available, else -1)
    long long fileSize; // Offset: 0x8

    // How the file was modified.
    scModifyAction_t modifyAction; // Offset: 0x10

    // The date the changelist was created/submitted.
    tm date; // Offset: 0x14

    // The name of the user who created/submitted the changelist.
    idStr user; // Offset: 0x38

    // The description of the changelist.
    idStr description; // Offset: 0x68

}; // Size: 0x98
