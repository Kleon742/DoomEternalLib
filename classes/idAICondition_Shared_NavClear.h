struct idAICondition_Shared_NavClear : idAICondition
{
    // direction to check nav, relative to my forward
    idTypesafeNumber < float , DegreesUnique_t > direction; // Offset: 0x18

    // __edit degrees_thalfAngle;half angle of arc to checkdistance to check
    float distance; // Offset: 0x1C

    // if nonzero, check a box projected along direction
    float width; // Offset: 0x20

    // (optional) if specified, use translation delta from given anim to test against nav, instead of using above parameters
    idAnimWebPath_Atomic testAnim; // Offset: 0x28

    // index for anim to test in testAnim
    int testAnimIndex; // Offset: 0x68

}; // Size: 0x70
