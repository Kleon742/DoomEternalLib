struct idAnimWebState
{
    // the animweb that owns this state.
    idDeclAnimWeb* owner; // Offset: 0x0

    // subweb index
    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > subweb; // Offset: 0x8

    // state index
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > state; // Offset: 0xA

    // animweb node index
    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > node; // Offset: 0xC

    bool pathConstructed; // Offset: 0xE

    idAtomicString debugSubweb; // Offset: 0x10

    idAtomicString debugState; // Offset: 0x18

}; // Size: 0x20
