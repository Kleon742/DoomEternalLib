struct idDeclMidnightWorkspace : idDeclTypeInfo
{
    // Name of the event this workspace is for.
    idStr eventName; // Offset: 0x88

    // List of midnights taking part in this workspace/event
    idList < idDeclMidnightScene * , TAG_IDLIST , false > midnights; // Offset: 0xB8

}; // Size: 0xD0
