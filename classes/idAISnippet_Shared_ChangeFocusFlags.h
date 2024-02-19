struct idAISnippet_Shared_ChangeFocusFlags : idAISnippet
{
    // focus type to change flags on
    aiFoci_t focusType; // Offset: 0x18

    // add these flags
    aiFocusInfoFlags_t flags_add; // Offset: 0x1C

    // remove these flags
    aiFocusInfoFlags_t flags_remove; // Offset: 0x20

}; // Size: 0x28
