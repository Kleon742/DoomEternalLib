struct idAIAnimState_Selection_RandomString : idAIAnimState_Selection
{
    // dummylook at this memory key
    idAtomicString keyToSearch; // Offset: 0x20

    // entries to select from
    idList < stringAnimEntry_t , TAG_IDLIST , false > selections; // Offset: 0x28

}; // Size: 0x40
