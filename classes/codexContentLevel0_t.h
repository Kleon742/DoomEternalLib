struct codexContentLevel0_t
{
    // Entry
    idDeclCodexEntry* entry; // Offset: 0x0

    // If true, sort children alphabetically by localized listName
    bool sortChildren; // Offset: 0x8

    // Children of this branch.
    idList < codexContentLevel1_t , TAG_IDLIST , false > children; // Offset: 0x10

}; // Size: 0x28
