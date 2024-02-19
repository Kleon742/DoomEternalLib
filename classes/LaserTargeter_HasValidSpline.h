struct LaserTargeter_HasValidSpline : idAIStateTransition
{
    // Animation
    idAnimWebPath_Atomic attackAnimWebPath; // Offset: 0xF8

    // name of splineTargetingDefinitions in idDeclAIComponent_LaserTargeter
    idAtomicString splineTargetingDefinitionName; // Offset: 0x138

    // runtime name of targetingSet
    idAtomicString targetingSetName; // Offset: 0x140

    // min number of valid splines required
    int minValidTargetingSetNum; // Offset: 0x148

    // set to true to skip last segment
    bool skipLastSegment; // Offset: 0x14C

    // life time in Seconds
    idTypesafeTime < float , secondUnique_t , 1 > lifetimeInSeconds; // Offset: 0x150

}; // Size: 0x158
