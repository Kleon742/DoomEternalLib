struct idAnimWebScalar
{
    enum flags_t : int
    {
        AWSFLAG_INIT_TO_1 = 1
    };

    // name of the scalar
    idAtomicString name; // Offset: 0x0

    // flags
    unsigned char flags; // Offset: 0x8

    // index into the float buffer if this is memory for an undeclared scalar. If this is < 0, then use the scalar *
    short scalarIndex; // Offset: 0xA

    // if the scalar is inside of an idClass-derived object we can have a pointer directly to it and save games work fine
    float* scalarPtr; // Offset: 0x10

}; // Size: 0x18
