struct idAISnippet_Shared_EnableLaser : idAISnippet
{
    // if true, laser is enabled
    bool enable; // Offset: 0x18

    // turn on/off laser from this tag
    idList < idAtomicString , TAG_IDLIST , false > tagNames; // Offset: 0x20

}; // Size: 0x38
