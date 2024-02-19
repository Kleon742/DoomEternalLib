struct idMidnightKeyPropLoop : idMidnightKeyProperties
{
    // indicate the name of the loop
    idAtomicString loopName; // Offset: 0x10

    // indicate the number of loop wanted (use -1 to infinite)
    int nbLoop; // Offset: 0x18

    // indicate if the loop should break instantly
    bool breakInstantly; // Offset: 0x1C

}; // Size: 0x20
