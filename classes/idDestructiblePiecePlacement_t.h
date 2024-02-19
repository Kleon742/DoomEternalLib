struct idDestructiblePiecePlacement_t
{
    // piece from the destructible.
    idAtomicString pieceName; // Offset: 0x0

    // tag used for spawning this destructible.
    idAtomicString tagName; // Offset: 0x8

    // offset from the tagName.
    idVec3 offset; // Offset: 0x10

}; // Size: 0x20
