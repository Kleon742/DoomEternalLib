struct idDeclAIPainSubGraph : idTypeInfoSubGraph
{
    // pain type of this subgraph
    painType_t painType; // Offset: 0x40

    // subweb name that corresponds to this subgraph, if empty assumes exact painType name
    idAtomicString subwebName; // Offset: 0x48

    // if we can't match a non-empty motion dir, try this instead
    idAtomicString fallbackMotionDir; // Offset: 0x50

    // debug flags
    aiGraphDebugFlags_t debugFlags; // Offset: 0x58

    // whether any attack from this node is valid or not
    bool enabled; // Offset: 0x0

}; // Size: 0x60
