struct Shared_HasValidMinorPositions : idAIStateTransition
{
    // name in positioning parms decl list to match
    idAtomicString positioningParmsName; // Offset: 0xF8

    // positioning parms decl to validate against, if any
    idDeclAIPositioningParms* positioningParmsDecl; // Offset: 0x100

    // if true, also consider things like sidestep throws/casts
    bool allowAttackPositions; // Offset: 0x108

    // reject any minor positions with less than this visibility ( silhouette )
    float minSilhouetteVisibility; // Offset: 0x10C

    // reject any minor positions with more than this visibility ( silhouette )
    float maxSilhouetteVisibility; // Offset: 0x110

    // true if we are on a hangout, and should only check current position visibility
    bool hangout; // Offset: 0x114

}; // Size: 0x118
