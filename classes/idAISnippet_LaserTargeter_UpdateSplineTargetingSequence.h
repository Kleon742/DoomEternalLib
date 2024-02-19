struct idAISnippet_LaserTargeter_UpdateSplineTargetingSequence : idAISnippet
{
    // Animation
    idAnimWebPath_Atomic attackAnimWebPath; // Offset: 0x18

    // name of splineTargetingDefinitions in idDeclAIComponent_LaserTargeter
    idAtomicString splineTargetingDefinitionName; // Offset: 0x58

    // runtime name of targetingSet
    idAtomicString targetingSetName; // Offset: 0x60

    // min number of valid splines required
    int minValidTargetingSetNum; // Offset: 0x68

    // set to true to skip last segment
    bool skipLastSegment; // Offset: 0x6C

    // life time in Seconds, after this elapses the data is not valid
    idTypesafeTime < float , secondUnique_t , 1 > lifetimeInSeconds; // Offset: 0x70

}; // Size: 0x78
