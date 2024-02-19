struct idDeclCodexTree : idGameDeclTypeInfo
{
    // Codex content tree.
    idList < codexContentLevel0_t , TAG_IDLIST , false > contentTree; // Offset: 0x90

    // formatted codex, for recursion's sake
    idList < codexEntry_t , TAG_IDLIST , false > contentTreeFormatted; // Offset: 0xA8

}; // Size: 0xC0
