struct Shared_PositionDistanceValid : idAIStateTransition
{
    // name in positioning parms decl list to match
    idAtomicString positioningParmsName; // Offset: 0xF8

    // positioning parms decl to validate against, if any
    idDeclAIPositioningParms* positioningParmsDecl; // Offset: 0x100

    // if true, also check ideal ranges
    bool checkIdeal; // Offset: 0x108

    // if true, we're on a hangout
    bool hangout; // Offset: 0x109

}; // Size: 0x110
