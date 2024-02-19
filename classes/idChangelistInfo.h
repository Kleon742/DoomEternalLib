struct idChangelistInfo
{
    // The changelist number.
    int number; // Offset: 0x0

    // The date the changelist was created/submitted.
    tm date; // Offset: 0x4

    // The name of the user who created/submitted the changelist.
    idStr user; // Offset: 0x28

    // The description of the changelist.
    idStr description; // Offset: 0x58

    // The list of files that were affected by this changelist.
    idList < idChangelistFileInfo , TAG_IDLIST , false > affectedFiles; // Offset: 0x88

}; // Size: 0xA0
