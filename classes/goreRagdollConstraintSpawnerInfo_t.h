struct goreRagdollConstraintSpawnerInfo_t
{
    // list of constraints to break
    idList < idAtomicString , TAG_IDLIST , false > ragdollConstraintsToBreak; // Offset: 0x0

    // local impulse vector body A
    idVec3 localImpulseVector_BodyA; // Offset: 0x18

    // local impulse vector body B
    idVec3 localImpulseVector_BodyB; // Offset: 0x24

    // min impulse mag multiplier - body a
    float minImpulseMagnitudeMultiplier_BodyA; // Offset: 0x30

    // max impulse mag multiplier - body a
    float maxImpulseMagnitudeMultiplier_BodyA; // Offset: 0x34

    // min impulse mag multiplier - body b
    float minImpulseMagnitudeMultiplier_BodyB; // Offset: 0x38

    // max impulse mag multiplier - body b
    float maxImpulseMagnitudeMultiplier_BodyB; // Offset: 0x3C

    // modify the random impulse direction - body a
    goreRandomRagdollConstraintImpulseDirectionInfo_t randomImpulseDirection_BodyA; // Offset: 0x40

    // modify the random impulse direction - body b
    goreRandomRagdollConstraintImpulseDirectionInfo_t randomImpulseDirection_BodyB; // Offset: 0x54

    // delay between activating the ragdoll and breaking the constraint
    idTypesafeTime < int , millisecondUnique_t , 1000 > breakConstraintDelay; // Offset: 0x68

    // rather than a linear impulse apply at constraint anchor point for more torque
    bool applyImpulseAtPoint; // Offset: 0x6C

}; // Size: 0x70
