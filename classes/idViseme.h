struct idViseme
{
    // the name of this viseme... also used as the animation name
    idAtomicString name; // Offset: 0x0

    // the name of the alias this viseme maps to
    idAtomicString aliasName; // Offset: 0x8

    // the index of this viseme in the viseme set
    int viseme; // Offset: 0x10

}; // Size: 0x18
