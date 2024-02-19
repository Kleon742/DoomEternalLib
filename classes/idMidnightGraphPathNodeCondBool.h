struct idMidnightGraphPathNodeCondBool : idMidnightGraphPathNode
{
    // store the next info if we loop
    idMidnightGraphNextInfo nextTrue; // Offset: 0x30

    // store the next info if the loop is ended
    idMidnightGraphNextInfo nextFalse; // Offset: 0x38

    // kept for backward compatibility
    idMidnight::NodeCondType_t conditionType; // Offset: 0x40

    // kept for backward compatibility
    bool defaultPath; // Offset: 0x44

    // kept for backward compatibility
    idAtomicString varName; // Offset: 0x48

}; // Size: 0x50
