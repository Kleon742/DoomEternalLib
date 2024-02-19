struct idDemonPlayer_Arachnotron : idDemonPlayer
{
    enum teleportTargetResult_t : int
    {
        TELEPORT_TARGET_POSSIBLE = 0,
        TELEPORT_TARGET_INVALID_QUERY = 1,
        TELEPORT_TARGET_TOO_FAR = 2,
        TELEPORT_TARGET_TOO_CLOSE = 3,
        TELEPORT_TARGET_PARALLEL = 4,
        TELEPORT_TARGET_OBSTRUCTED = 5,
        TELEPORT_TARGET_OFF_LIMITS = 6,
        TELEPORT_TARGET_GROUNDTOGROUND = 7
    };

    enum renderModelState_t : int
    {
        RENDER_MODEL_ATTACHED = 0,
        RENDER_MODEL_ORIGIN_ATTACHED = 1,
        RENDER_MODEL_LERPING_AWAY = 2,
        RENDER_MODEL_DETACHED = 3,
        RENDER_MODEL_LERPING_BACK = 4
    };

    struct prowlerTeleportDeferredQuery_t
    {
        // trace queries to find where we hit
        idHavokQueryId traceQueryId; // Offset: 0x0

        // contents queries dependent upon trace query results
        idHavokQueryId contentsQueryId; // Offset: 0x8

        // type of teleport landing this must be in order to be valid since contents queries are type dependent
        prowlerTeleportType_t expectedTeleportType; // Offset: 0x10

    }; // Size: 0x18

    // data for how to use the turn anims when hanging from the ceiling
    idDemonPlayer::demonTurnAnimData_t perchedHangTurnAnimData; // Offset: 0x36FC8

    // rumble to play when teleport begins for local player
    idDeclRumble* teleportRumble; // Offset: 0x36FE8

    // rumble to play when detaching from a perch begins for local player
    idDeclRumble* detachRumble; // Offset: 0x36FF0

    // Time window after getting a trigger edge where we'll go to a valid target
    idSmartTimer < GAMETIME_SCALED > teleportInputTimer; // Offset: 0x36FF8

    // Clip information used for teleporation Clip mask which defines what we target for teleporting
    contentsFlags_t teleportTraceClipMask; // Offset: 0x37000

    // Dimensions of the clip box to use when tracing a potential telport destination {{ units = m }}
    idVec3 teleportTraceBoxDimensions; // Offset: 0x37004

    idHavokShapePointer teleportTraceBox; // Offset: 0x37010

    // Clip mask which defines what contents cannot coexist with a teleport destination
    contentsFlags_t teleportContentsClipMask; // Offset: 0x37018

    idHavokShapePointer wallPerchBoundingBox; // Offset: 0x37020

    // Queries / Results for Teleport Target Result of the primary box trace
    trace_t teleportBoxTraceResult; // Offset: 0x37028

    // The Contents query where the cursor is pointing
    idHavokQueryId teleportContents; // Offset: 0x370A8

    // Query data for the alt destination offset 1
    idDemonPlayer_Arachnotron::prowlerTeleportDeferredQuery_t teleportAltQuery1; // Offset: 0x370B0

    // Query data for the alt destination offset 2
    idDemonPlayer_Arachnotron::prowlerTeleportDeferredQuery_t teleportAltQuery2; // Offset: 0x370C8

    // Describes the state of the target queries
    idDemonPlayer_Arachnotron::teleportTargetResult_t teleportTargetResult; // Offset: 0x370E0

    // Describes the state of the next frame's target queries
    idDemonPlayer_Arachnotron::teleportTargetResult_t nextTeleportTargetResult; // Offset: 0x370E4

    // Invalidate all teleport targetting for a frame
    bool invalidateTeleportTarget; // Offset: 0x370E8

    // Teleport Target information object to place for the teleport target
    idDemonProwlerTeleportTarget teleportTarget; // Offset: 0x370F0

    // Position of the Teleport Target {{ units = m }}
    idVec3 teleportTargetPos; // Offset: 0x387E8

    // Axis based on the surface normal of the Target
    idMat3 teleportTargetAxis; // Offset: 0x387F4

    // The result from the last time a teleport failed
    idDemonPlayer_Arachnotron::teleportTargetResult_t teleportTargetFeedback; // Offset: 0x38818

    // Timer to display feedback from a failure
    idSmartTimer < GAMETIME_SCALED > teleportTargetFeedbackTimer; // Offset: 0x38820

    // Type of sticky Teleport Target
    prowlerTeleportType_t stickyTeleportTargetType; // Offset: 0x38828

    // Position of the sticky Teleport Target {{ units = m }}
    idVec3 stickyTeleportTargetPos; // Offset: 0x3882C

    // Axis based on the surface normal of the sticky Target
    idMat3 stickyTeleportTargetAxis; // Offset: 0x38838

    // Last update's target point - used for adjusting the sticky target based off the delta from this to the current contact point {{ units = m }}
    idVec3 teleportTargetLastContact; // Offset: 0x3885C

    // Ribbon drawn out to teleport target
    idDeclRibbon2* teleportTargetRibbonDecl; // Offset: 0x38868

    // Target ribbon viewAxis-aligned start {{ units = m }}
    idVec3 teleportTargetRibbonStartOffset; // Offset: 0x38870

    // Target ribbon targetAxis-aligned end {{ units = m }}
    idVec3 teleportTargetRibbonEndOffset; // Offset: 0x3887C

    // def to create the teleportDestinationFXEntity from
    idDeclEntityDef* teleportDestinationFXEntityDef; // Offset: 0x38888

    // the entity to place where the Prowler is teleporting to, lasting while its perched
    idManagedClassPtr < idEntityFx > teleportDestinationFXEntity; // Offset: 0x38890

    // def to create the perchDripPoolFXEntity from
    idDeclEntityDef* perchDripPoolFXEntityDef; // Offset: 0x388B0

    // the entity to place below where the Prowler is/was perched, where drips pool
    idManagedClassPtr < idEntityFx > perchDripPoolFXEntity; // Offset: 0x388B8

    // minimal distance you must be above a ground teleport target if you're already on the ground {{ units = m }}
    float teleportGroundMinValidZDist; // Offset: 0x388D8

    // if set to true, alternate end point position will be considered if the ground teleport is less than the valid Z dist
    bool teleportGroundAllowAltPositions; // Offset: 0x388DC

    // if set to true, the last valid 'sticky' alternate location will be preferred over the horizontal XY alternate position
    bool teleportGroundPreferStickyPos; // Offset: 0x388DD

    // Z-offset applied to the horizontal test (along the XY plane) {{ units = m }}
    float teleportGroundAltHorizontalZOffset; // Offset: 0x388E0

    // How fast do we move the camera during the teleport {{ units = m / s }}
    float teleportTravelSpeed; // Offset: 0x388E4

    // Time teleport depart takes
    idTypesafeTime < float , secondUnique_t , 1 > teleportTravelDepartTimeSeconds; // Offset: 0x388E8

    // if enabled, alternate locations above and below the teleport content position will be considered as fallback if the prowler doesn't fit at the primary location
    bool teleportAltContentChecksEnabled; // Offset: 0x388EC

    // vertical offset added or subtracted to the teleport content position for failback positions if the prowler doesn't fit at the primary location {{ units = m }}
    float teleportAltContentCheckZOffset; // Offset: 0x388F0

    // Dot used to validate stick target vs view axis
    float stickyValidAngleDot; // Offset: 0x388F4

    // Minimal fraction of the trace to the sticky target which is unobstructed
    float stickyValidTraceFraction; // Offset: 0x388F8

    // Information about the current Perch being used our current perch stance
    perchStanceAnimIndex_t perchStance; // Offset: 0x388FC

    // position we're currently perched at {{ units = m }}
    idVec3 perchPos; // Offset: 0x38900

    // normal of the surface we're currently perched on
    idVec3 perchSurfaceNormal; // Offset: 0x3890C

    // interpolater to smoothly blend the hands in/out of perch stance
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > perchHandsBlend; // Offset: 0x38918

    // Information about current teleport action server time we should arrive at the teleport point
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > teleportEndServerTime; // Offset: 0x38948

    // whether we end up on the ground or perched after teleport
    perchStanceAnimIndex_t teleportEndPerchStance; // Offset: 0x38950

    // game time at which is next acceptable to teleport.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidTeleportTime; // Offset: 0x38958

    // game time at which is next acceptable to cancel teleport travel
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidTeleportCancelTime; // Offset: 0x38960

    // game time at which is next acceptable to melee.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidMeleeTime; // Offset: 0x38968

    // last time player pressed R to melee
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeLastPressedTime; // Offset: 0x38970

    // Melee information component to help snap the camera and move the demon to hit with melee
    idDemonMeleeLungeComponent meleeComponent; // Offset: 0x38978

    // current melee target
    idManagedClassPtr < idEntity > reticleMeleeTarget; // Offset: 0x389B8

    // interpolater to smoothly slide the reticle spread based the validity of your meleeTarget
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > reticleMeleeTargetBlend; // Offset: 0x389D8

    // Boost (when arriving on the ground from a teleport) information last time the Prowler teleported (for boosts)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTeleportArrivalTime; // Offset: 0x38A08

    // Perch render model placement data What state is the render model in
    idDemonPlayer_Arachnotron::renderModelState_t renderModelState; // Offset: 0x38A10

    // Interpolater for the offset to apply to the render model {{ units = m }}
    idInterpolate < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > renderModelOffsetLerp; // Offset: 0x38A18

    // Interpolator for the direction to apply to the render model
    idInterpolate < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > renderModelForwardLerp; // Offset: 0x38A60

    // Module to run calculations to improve perch placement en route to destination
    idProwler_PerchCalculator perchCalculator; // Offset: 0x38AA8

    // data for the arachnotron mechanics.
    arachnotronFireData_t arachnoFireData; // Offset: 0x38B88

    // Firing how many pairs left to fire in this volley
    int currentBurstCount; // Offset: 0x38BB4

    // when the next shot comes within the volley
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextBurstTime; // Offset: 0x38BB8

    // start of the powerattack charging.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > powerChargeTime; // Offset: 0x38BC0

    // Telefrag (carrying victim through teleporter) data Are we carrying a victim to a teleporter
    bool performingTelefrag; // Offset: 0x38BC8

}; // Size: 0x38BD0
