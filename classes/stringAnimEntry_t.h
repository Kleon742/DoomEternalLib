struct stringAnimEntry_t
{
    // to match this string
    idAtomicString targetString; // Offset: 0x0

    // subweb name, if empty, use same subweb as input
    idAtomicString subwebName; // Offset: 0x8

    // state name
    idAtomicString stateName; // Offset: 0x10

    // also can use this
    idAnimWebPath optionalWebNode; // Offset: 0x18

}; // Size: 0x48
