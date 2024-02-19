struct OC_ShouldHoverAttack : idAIStateTransition
{
    // positioning parms to validate against, if any
    idAtomicString positioningParmsName; // Offset: 0xF8

    // use ideal ranges from positioning parms
    bool checkParmsIdeal; // Offset: 0x100

    // path to the animweb node for the hover into anims
    idAnimWebPath_Atomic intoNode; // Offset: 0x108

}; // Size: 0x148
