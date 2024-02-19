struct idDeclAIMovementSubGraph : idTypeInfoSubGraph
{
    // subweb name that corresponds to this subgraph, if empty assumes exact walkState name
    idAtomicString subwebName; // Offset: 0x40

    // walkState that this group of nodes corresponds to
    walkState_t walkState; // Offset: 0x48

    // can this subgraph be entered
    bool enabled; // Offset: 0x0

    // maximum distance from target to maintain this walkState {{ units = m }}
    float maxWalkStateDist; // Offset: 0x50

}; // Size: 0x58
