struct Shared_SuperiorPositionAvailable : idAIStateTransition
{
    // name in positioning parms decl list to match
    idAtomicString dataName; // Offset: 0xF8

    // name in positioning parms decl list to match for hangout points
    idAtomicString dataName_hangout; // Offset: 0x100

    // if true, allow current cover node in list
    bool allowCurrent; // Offset: 0x108

    // used to filter hangout nodes if desired
    aiHangoutNodeSelection_t hangoutSelection; // Offset: 0x10C

    // override positioning parms decl
    idDeclAIPositioningParms* positioningParms; // Offset: 0x110

}; // Size: 0x118
