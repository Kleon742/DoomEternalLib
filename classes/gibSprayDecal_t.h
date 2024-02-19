struct gibSprayDecal_t
{
    // condition to use if spray is enabled
    fxCondition_t sprayFX; // Offset: 0x0

    // tag joint to use for the spray.
    idAtomicString tagJoint; // Offset: 0x8

    // the length of time to keep spraying in seconds
    idTypesafeTime < float , secondUnique_t , 1 > totalTimeInSeconds; // Offset: 0x10

    // how often to spray in seconds
    idTypesafeTime < float , secondUnique_t , 1 > secondsBetweenSprays; // Offset: 0x14

    // time variance in seconds
    idTypesafeTime < float , secondUnique_t , 1 > timeVarianceInSeconds; // Offset: 0x18

    // size variance {{ units = m }}
    float sizeVariance; // Offset: 0x1C

    // distance to spray {{ units = m }}
    float dist; // Offset: 0x20

    // angle in degrees
    float coneAngle; // Offset: 0x24

    // decal to project
    idList < deferredDecalParams_t , TAG_IDLIST , false > decalParms; // Offset: 0x28

}; // Size: 0x40
