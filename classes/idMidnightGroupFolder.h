struct idMidnightGroupFolder
{
    // Name of the folder.
    idAtomicString name; // Offset: 0x0

    // Group UIDs of the groups contained in the folders.
    idList < idMidnightObjectUID < idMidnightGroupUIDType , idMidnight::EMUI_GROUP_MAX > , TAG_IDLIST , false > groups; // Offset: 0x8

}; // Size: 0x20
