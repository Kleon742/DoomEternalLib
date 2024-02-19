struct idDeclEntityDef : idDecl
{
    idAtomicString inherit; // Offset: 0x78

    idAtomicString className; // Offset: 0x80

    idEntityDefEditorVars editorVars; // Offset: 0x88

    ptrdiff_t stateOffset; // Offset: 0x120

    int stateLineNumberOffset; // Offset: 0x128

    // pool system info
    int poolCount; // Offset: 0x12C

    int poolGranularity; // Offset: 0x130

    int poolIndex; // Offset: 0x134

    // We need both shared and per-def pool indices as long as we maintain code for both.
    int sharedPoolIndex; // Offset: 0x138

    // flag for network replication
    bool networkReplicated; // Offset: 0x13C

    // flas for disabling ai pooling
    bool disableAIPooling; // Offset: 0x13D

    // This will be true unless the entity was parsed from a .entities file written out by buildGame using GetTextWithInheritance().
    bool expandInheritance; // Offset: 0x13E

    // This is mutable so that we can update it on request, but since it's really a "cached" value we want to be able to change it in const functions.
    idTypeInfo* cachedTypeInfo; // Offset: 0x140

    // entity state text with inheritance
    char* entityStateWithInheritanceText; // Offset: 0x148

    int entityStateWithInheritanceTextLength; // Offset: 0x150

    bool ownsEntityStateWithInheritanceText; // Offset: 0x154

    // closest parent that is listed in the DeclManager
    idDeclEntityDef* listedParent; // Offset: 0x158

}; // Size: 0x160
