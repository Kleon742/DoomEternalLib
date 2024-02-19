struct swfMultinameResolved_t
{
    swfConstantType_t kind; // Offset: 0x0

    idAtomicString name; // Offset: 0x8

    // Just use a scriptvar so we don't have to deal with ref counting
    idSWFScriptVar namespaceVar; // Offset: 0x10

}; // Size: 0x20
