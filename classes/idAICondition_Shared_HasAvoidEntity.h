struct idAICondition_Shared_HasAvoidEntity : idAICondition
{
    // only consider entity if it is in this fov in front of us
    idTypesafeNumber < float , DegreesUnique_t > fovHalfAngle; // Offset: 0x18

    // only consider entity if it is in this range
    idRange < float > distanceRange; // Offset: 0x1C

    // only consider entity if it is one of these
    slayerAttackType_t validTypes; // Offset: 0x28

    // only consider entity if we are in this fov of its velocity dir
    idTypesafeNumber < float , DegreesUnique_t > velocityFovHalfAngle; // Offset: 0x30

}; // Size: 0x38
