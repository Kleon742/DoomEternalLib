struct idTarget_AIProxy : idTarget
{
    // Targeting Decl ( defines specific aim assist / AR target points )
    idDeclTargeting* targetingDecl; // Offset: 0xB88

    // If non-negative, this will override any targeting distance limits for this entity
    float distanceOverride; // Offset: 0xB90

    // Force the aim assist flag in view info.
    bool aimAssistOnly; // Offset: 0xB94

}; // Size: 0xB98
