struct idDemonPlayer_Summoner : idDemonPlayer
{
    enum TeleportTraceQueryType_t : int
    {
        TELEPORT_TRACE_QUERY_LOOK_DIR_FULL = 0,
        TELEPORT_TRACE_QUERY_LOOK_DIR_SMALL = 1,
        NUM_TELEPORT_TRACE_QUERIES = 2
    };

    struct TeleportTargetingQuery_t
    {
        bool isValid; // Offset: 0x0

        // {{ units = m }}
        idVec3 clipTraceStartPos; // Offset: 0x4

        // {{ units = m }}
        idVec3 clipTraceEndPos; // Offset: 0x10

        idVec3 clipTraceDir; // Offset: 0x1C

        idHavokQueryId clipTraceQuery; // Offset: 0x28

        trace_t clipTraceQueryResult; // Offset: 0x30

        // {{ units = m }}
        idVec3 finalPos; // Offset: 0xB0

    }; // Size: 0xC0

    struct summonerData_t
    {
        struct WaveBlast_t
        {
            // Duration of the WaveBlast attack [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x0

            // Amount of time between successive WaveBlast attacks (from the start of one attack to the next) [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTime; // Offset: 0x4

        }; // Size: 0x8

        struct teleport_t
        {
            // Minimum teleport distance {{ units = m }}
            float minDistance; // Offset: 0x0

            // Maximum teleport distance {{ units = m }}
            float maxDistance; // Offset: 0x4

            // Duration of the teleport depart state [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > departDuration; // Offset: 0x8

            // How fast the Summoner travels during a teleport {{ units = m / s }}
            float travelSpeed; // Offset: 0xC

            // Specifies the angle of forward input that should count as moving forward and use the current look direction as the teleport direction [degrees]
            float useLookForwardAngle; // Offset: 0x10

            // Minimum movement input value to consider using the current movement direction as the teleport direction (Only used for teleportMoveInfo) [0.0 - 1.0]
            float useInputDirMinValue; // Offset: 0x14

            // Amount of time that must elapse from a previous teleport before the teleport ability can be used again [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTime; // Offset: 0x18

            // Radius of the clip model to use when targeting potential teleport position {{ units = m }}
            float targetingClipSize; // Offset: 0x1C

            // How long the Summoner remains in the 'arrive' state
            idTypesafeTime < int , millisecondUnique_t , 1000 > arriveDuration; // Offset: 0x20

            // How long the Summoner remains in 'no-clip' from first arriving at the teleport destination (controls when Summoner becomes vulnerable) [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > arriveNoClipDuration; // Offset: 0x24

            // If set to true, the Summoner's velocity will be zero'd upon entering the 'arrive' teleport state [boolean]
            bool arriveZeroVelocity; // Offset: 0x28

            // Set to true if the Summoner should hover when reaching the teleport destination [boolean]
            bool arriveShouldHover; // Offset: 0x29

            // Damage applied to entities located at the arrival destination for the 'tele-frag' mechanic
            idDeclDamage* arriveAreaDamage; // Offset: 0x30

            // How long the Summoner can hover after arriving at the teleport destination (NOTE: Summoner can break out of hover early if actions/movement are unlocked) [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > hoverDuration; // Offset: 0x38

            // How long the Summoner's movement is locked from first entering the 'hover' state at the teleport destination [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > hoverLockMovementDuration; // Offset: 0x3C

            // How long the Summoner's actions are locked from first entering the 'hover' state at the teleport destination [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > hoverLockActionsDuration; // Offset: 0x40

            // Scaler applied to gravitation force during the 'hover' teleport state [scaler 0.0-1.0]
            float hoverGravityScaler; // Offset: 0x44

            // approximate height the player can jump {{ units = m }}
            float airJumpHeight; // Offset: 0x48

            // current speed is scaled by this amount
            float airJumpSpeedScale; // Offset: 0x4C

            // air english ability is scaled by this amount
            float airJumpAirEnglishScale; // Offset: 0x50

            // offset in MS from the start of the initial jump until the start of the double jump window
            idTypesafeTime < int , millisecondUnique_t , 1000 > airJumpWindowOffset; // Offset: 0x54

            // duration in MS of the double jump window
            idTypesafeTime < int , millisecondUnique_t , 1000 > airJumpWindowDuration; // Offset: 0x58

            // what material to use on the third person asset during a teleport
            idMaterial2* thirdPersonMaterial; // Offset: 0x60

            // what material to use on the first person asset during a teleport
            idMaterial2* firstPersonMaterial; // Offset: 0x68

            // VFX ribbon used for the teleport path trail
            idDeclRibbon2* pathTrailRibbon; // Offset: 0x70

            // Anim tags for where the path trail ribbons should attach
            idStr pathTrailTags[3]; // Offset: 0x78

        }; // Size: 0x108

        // Parameters for the Summoner's WaveBlast attack
        idDemonPlayer_Summoner::summonerData_t::WaveBlast_t waveBlastInfo; // Offset: 0x0

        // Parameters for the Summoner's teleport in movement direction ability
        idDemonPlayer_Summoner::summonerData_t::teleport_t teleportMoveInfo; // Offset: 0x8

    }; // Size: 0x110

    // Entity decl Parameters specific to the Summoner demon
    idDemonPlayer_Summoner::summonerData_t summonerInfo; // Offset: 0x36FC8

    // Run-time variables   WaveBlast attack Game time of the previous wave blast attack (used for calculating cooldown times)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > waveBlastLastStartTime; // Offset: 0x370D8

    // teleport ability Flag for whether the teleport target position vector is currently a valid end point for a teleport
    bool teleportTargetValid; // Offset: 0x370E0

    // Desired end position of the teleport {{ units = m }}
    idVec3 teleportTargetPos; // Offset: 0x370E4

    // Server game time when the active (or previous) teleport started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > teleportStartTime; // Offset: 0x370F0

    // Server game time when the last teleport ended
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > teleportLastEndTime; // Offset: 0x370F8

    // Clip model to use for the teleport targeting traces (likely smaller than the demon's standard clip model to avoid getting 'caught' on edge)
    idHavokShapePointer teleportTargetingClipModel; // Offset: 0x37100

    idDemonPlayer_Summoner::TeleportTargetingQuery_t teleportTargetingQueries[2]; // Offset: 0x37108

    // Ribbons for the teleport path ribbon VFX
    idRibbon2 teleportRibbons[3]; // Offset: 0x37288

    // hover Flag to keep track of whether the Summoner is hovering
    bool hoverIsActive; // Offset: 0x375D0

    // Records whether the hover state actively has the player movement locked
    bool hoverMovementIsLocked; // Offset: 0x375D1

    // Records whether the hover state actively has the player actions locked
    bool hoverActionsAreLocked; // Offset: 0x375D2

    // Server game time when hovering started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hoverStartTime; // Offset: 0x375D8

    // misc If true, allow the Summoner to jump mid-air (used to allow jumping after teleporting)
    bool allowMidAirJump; // Offset: 0x375E0

}; // Size: 0x375E8
