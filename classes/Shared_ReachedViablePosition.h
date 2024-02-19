struct Shared_ReachedViablePosition : idAIStateTransition
{
    // name in positioning parms decl list to match
    idAtomicString dataName; // Offset: 0xF8

    // positioning parms decl to validate against, if any
    idDeclAIPositioningParms* positioningParmsDecl; // Offset: 0x100

    // nocomment
    float desiredVisibility; // Offset: 0x108

    // nocomment {{ units = m }}
    float boundsTraceSize; // Offset: 0x10C

    // nocomment
    float minNavRadius; // Offset: 0x110

    // nocomment
    float minNavRadiusLateral; // Offset: 0x114

    // if true, stop when we're closer to min optimal range
    bool useOptimalRange; // Offset: 0x118

}; // Size: 0x120
