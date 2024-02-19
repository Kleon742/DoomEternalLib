struct idAISnippet_Shared_SetLaserState : idAISnippet
{
    // if true, turn on lasers
    bool desireOn; // Offset: 0x18

    // turn on/off laser from this tag
    idList < idAtomicString , TAG_IDLIST , false > tagNames; // Offset: 0x20

}; // Size: 0x38
