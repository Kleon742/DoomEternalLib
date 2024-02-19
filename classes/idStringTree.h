struct idStringTree
{
    idStr name; // Offset: 0x0

    idList < idStringTree , TAG_IDLIST , false > children; // Offset: 0x30

}; // Size: 0x48
