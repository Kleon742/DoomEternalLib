struct OC_ShouldTeleportAttack : idAIStateTransition
{
    // duration in sec for AI to complete fake path move (not including animation time). used to predict enemy pos
    idTypesafeTime < float , secondUnique_t , 1 > splineMoveTime; // Offset: 0xF8

    // index to use for anim data lookup in path manager component (see idList fakePathData in component decl)
    int fakePathDataIndex; // Offset: 0xFC

    // (in degrees) if > 0, add a random angle offset up to this maximum value. if == 0, use actual calculated arrival angle.
    idTypesafeNumber < float , DegreesUnique_t > maxArrivalAngleOffset; // Offset: 0x100

    // bias scalar in [0.0, 1.0] to favor random angles towards the maximum value (0 = normal distribution, 1 = always max).
    float maxAngleBias; // Offset: 0x104

    // use target's current axis to find arrival angle (ie, directly facing target axis). if false, just use dir to target
    bool arrivalTargetRelative; // Offset: 0x108

    // reject attack if predicted enemy pos is within this radius of AI
    float goalRejectRadius; // Offset: 0x10C

    // if non-empty, preserve path data ID with this temp memory string
    idAtomicString pathKeyMemoryString; // Offset: 0x110

}; // Size: 0x118
