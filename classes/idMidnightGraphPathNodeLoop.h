struct idMidnightGraphPathNodeLoop : idMidnightGraphPathNode
{
    // kept for backward compatibility
    idAtomicString loopName; // Offset: 0x30

    // kept for backward compatibility
    int nbLoop; // Offset: 0x38

    // kept for backward compatibility
    bool breakInstantly; // Offset: 0x3C

    // store the next info if we loop
    idMidnightGraphNextInfo nextLooping; // Offset: 0x40

    // store the next info if the loop is ended
    idMidnightGraphNextInfo nextEndLoop; // Offset: 0x48

}; // Size: 0x50
