struct idHighlightBehavior : idClass
{
    // decl the highlight is using.
    idDeclHighlight* decl; // Offset: 0x10

    // Entity that we are highlighting.
    idManagedClassPtr < idEntity > entity; // Offset: 0x18

    // color of the highlight.
    idVec4 color; // Offset: 0x38

    // Mask to use for the highlight.
    idVec4 mask; // Offset: 0x48

    // mesh kit to apply a highlight to
    idAtomicString meshKit; // Offset: 0x58

    // visibility of the highlight.
    bool visible; // Offset: 0x60

    // if the highlight it enabled.
    bool enabled; // Offset: 0x61

    idHavokClosestHitCollector* losCollectors[5]; // Offset: 0x68

}; // Size: 0x90
