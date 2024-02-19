struct Shared_AnimationValid : idAIStateTransition
{
    // via node
    idAnimWebPath_Atomic viaNode; // Offset: 0xF8

    // sample instances of animations in viaNode at these angle variations as well ( relative to anim delta )
    idList < idAngles , TAG_AI_FSM , false > angleVariations; // Offset: 0x138

    // sample instances of animations in viaNode at these distance variations as well ( relative to anim delta ) {{ units = m }}
    idList < float , TAG_AI_FSM , false > distanceVariations; // Offset: 0x150

    // sample instances of animations in viaNode at these endpoint variations as well {{ units = m }}
    idList < idVec3 , TAG_AI_FSM , false > endpointVariations; // Offset: 0x168

    // if you want certain indices to take priority, fill this out
    idList < int , TAG_AI_FSM , false > animIndexPriorities; // Offset: 0x180

    // if viaNode requires a scalar for indexing multiple anims, fill that out here
    idAtomicString indexScalarName; // Offset: 0x198

    // how long to lead target
    float leadTimeInSeconds; // Offset: 0x1A0

    // positioning parms to validate against, if any
    idAtomicString positioningParmsName; // Offset: 0x1A8

    // positioning parms decl to validate against, if any
    idDeclAIPositioningParms* positioningParmsDecl; // Offset: 0x1B0

    // raise priority to get query through system faster in a crowd
    animQueryPriority_t queryPriority; // Offset: 0x1B8

    // types of anim query tests to perform for validity
    animQueryTestTypes_t testTypes; // Offset: 0x1BC

    // options to use when performing tests
    animQueryTestOptions_t testOptions; // Offset: 0x1C0

    // max ratio of calculated path length : straight dist (from query point to target origin)
    float maxPathLength; // Offset: 0x1C4

    // if true, selection will ignore base versions of anim
    bool useVariationsOnly; // Offset: 0x1C8

    // if true, try to face action target during this animation ( influences queries )
    bool faceActionTarget; // Offset: 0x1C9

    // if true, delta-correction is fed proper alignment so animation plays facing its goal
    bool alignAnimWithFacing; // Offset: 0x1CA

    // if true, variations are applied to target position rather than animation delta
    bool applyVariationsToTargetPoints; // Offset: 0x1CB

    // use ideal ranges from positioning parms
    bool checkParmsIdeal; // Offset: 0x1CC

    // if priority list is empty, just pick a random positive result
    bool randomize; // Offset: 0x1CD

    // if true, target location is going to be used instead of anim displacement ( influences queries )
    bool useActionTargetInsteadOfAnimDisplacement; // Offset: 0x1CE

    // skew animation endpoints and variations so current distance to target is maintained if possible
    bool maintainDistanceToTarget; // Offset: 0x1CF

}; // Size: 0x1D0
