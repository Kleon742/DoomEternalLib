struct codexEntry_t
{
    // Entry decl
    idDeclCodexEntry* decl; // Offset: 0x0

    // Children Entries.
    idList < codexEntry_t , TAG_IDLIST , false > children; // Offset: 0x8

    // Have we been acquired/read/etc?
    codexStatus_t status; // Offset: 0x20

}; // Size: 0x28
