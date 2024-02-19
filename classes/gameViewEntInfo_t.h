struct gameViewEntInfo_t
{
    // Havok Trace queries for line of sight
    idList < idHavokQueryId , TAG_IDLIST , false > havokTraceQueries; // Offset: 0x0

    // Last frame's trace result.
    idList < trace_t , TAG_IDLIST , false > traceResults; // Offset: 0x18

    // position of the Target point. {{ units = m }}
    idVec3 origin; // Offset: 0x30

    // axis of the point.
    idMat3 axis; // Offset: 0x3C

    // vector from view point to origin of the target point. {{ units = m }}
    idVec3 viewToOrigin; // Offset: 0x60

    // normalized vector from view point to origin of the target point.
    idVec3 viewToDirection; // Offset: 0x6C

    // normalized last View to Origin;
    idVec3 lastViewToDirection; // Offset: 0x78

    // bounds of the entity.
    idBounds bounds; // Offset: 0x84

    // distance from view point to origin of the target point. {{ units = m }}
    float viewToDistance; // Offset: 0x9C

    // dot product of the viewToDirection and the aim direction.
    float viewToOriginDot; // Offset: 0xA0

    // dot product of the viewToDirection and the aim direction.
    float viewToOriginDot2D; // Offset: 0xA4

    // dot product of entity to view.
    float targetDot; // Offset: 0xA8

    // Camera Forward * Aim Length + Camera Position. {{ units = m }}
    idVec3 aimPoint; // Offset: 0xAC

    // Projected length to the target. {{ units = m }}
    float aimLength; // Offset: 0xB8

    // {{ units = m }}
    float aimDelta; // Offset: 0xBC

    // radius of the clip. {{ units = m }}
    float clipRadius; // Offset: 0xC0

    // Calculated based on Dot product and distance. ( lower Angle importance )
    float longRangeWeight; // Offset: 0xC4

    // Calculated based on Dot product and distance. ( lower Angle importance )
    float closeRangeWeight; // Offset: 0xC8

    // Weight value calculated for aim assist only. ( medium angle importance )
    float aimAssistWeight; // Offset: 0xCC

    // Owning Entity.
    idSpawnId owner; // Offset: 0xD0

    // Targeting decl.
    idDeclTargeting* targetingDecl; // Offset: 0xD8

    // joint index (if using targeting joint groups)
    idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0xE0

    // joint index radius (if using targeting joint groups)
    float jointRadius; // Offset: 0xE4

    // what joint group this joint belongs to
    idAtomicString jointGroup; // Offset: 0xE8

    gameViewEntInfo_t* lastInfo; // Offset: 0xF0

    // Can the player see this target point.
    bool hasLineOfSight; // Offset: 0x0

    // aim point usable for melee but not lockon
    bool noMelee; // Offset: 0x0

    // aim point usable for lockOn but not melee
    bool noLockOn; // Offset: 0x0

    // use this point for aim assist.
    bool useAimAssist; // Offset: 0x0

    // use this point as a weak point
    bool weakPoint; // Offset: 0x0

    // use this with aim assist to override the radius
    bool aimAssistRadiusOverride; // Offset: 0x0

    // used to see if this is an actor
    bool isActor; // Offset: 0x0

    // used to see if this is an ai
    bool isAI; // Offset: 0x0

    // used to see if we are checking sync attacking a chainsaw target
    bool isChainsawAttack; // Offset: 0x0

}; // Size: 0x100
