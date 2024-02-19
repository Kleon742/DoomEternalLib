struct idDemonLedgeGrabComponent
{
    enum ledgeGrabState_t : int
    {
        DEMONLEDGEGRABSTATE_NONE = -1,
        DEMONLEDGEGRABSTATE_LEDGE_PULL_UP = 0,
        DEMONLEDGEGRABSTATE_LEDGE_PULL_UP_MANTLE = 1,
        DEMONLEDGEGRABSTATE_LEDGE_PULL_UP_ROUNDED = 2,
        DEMONLEDGEGRABSTATE_LEDGE_PULL_UP_MANTLE_ROUNDED = 3,
        DEMONLEDGEGRABSTATE_LEDGE_PULL_UP_ANGLED = 4,
        DEMONLEDGEGRABSTATE_LEDGE_PULL_UP_MANTLE_ANGLED = 5,
        DEMONLEDGEGRABSTATE_LEDGE_CLIMB_UP = 6,
        DEMONLEDGEGRABSTATE_LEDGE_CLIMB_UP_MANTLE = 7,
        DEMONLEDGEGRABSTATE_RAILING_PULL_UP = 8,
        DEMONLEDGEGRABSTATE_RAILING_PULL_UP_MANTLE = 9,
        DEMONLEDGEGRABSTATE_CUSTOM_PULL_UP = 10,
        DEMONLEDGEGRABSTATE_CUSTOM_MANTLE = 11,
        DEMONLEDGEGRABSTATE_MAX = 12
    };

    enum ledgeGrabPos_t : int
    {
        DEMONLEDGEGRABPOS_CENTER = 0,
        DEMONLEDGEGRABPOS_RIGHT = 1,
        DEMONLEDGEGRABPOS_LEFT = 2
    };

    struct ledgeInfo_t
    {
        enum edgeType_t : int
        {
            EDGE_TYPE_SQUARE = 0,
            EDGE_TYPE_ROUNDED = 1,
            EDGE_TYPE_ANGLED = 2
        };

        // whether we're blocked in the forward direction in the given test direction
        bool blockedForward; // Offset: 0x0

        // whether the angles of the ledge face allow it to be valid
        bool validFace; // Offset: 0x1

        // whether the angles of the ledge surface allow it to be valid
        bool validSurface; // Offset: 0x2

        // how far forward the blockage is in the given test direction {{ units = m }}
        float blockDistForward; // Offset: 0x4

        // how far the ledge is clear past the front edge {{ units = m }}
        float clearDistUpForward; // Offset: 0x8

        // whether there is a ledge ahead
        bool ledgeForward; // Offset: 0xC

        // height of the ledge relative to the test position {{ units = m }}
        float ledgeDeltaHeight; // Offset: 0x10

        // height of the ledge above the ground {{ units = m }}
        float ledgeHeightAboveGround; // Offset: 0x14

        // clear depth of the ledge in the direction of the forward test axis ABOVE the ledge surface {{ units = m }}
        float ledgeDepth; // Offset: 0x18

        // thickness of the ledge in the direction of the forward test axis (requires a back face) {{ units = m }}
        float ledgeThickness; // Offset: 0x1C

        // normal to the face of the ledge
        idVec3 ledgeFaceNormal; // Offset: 0x20

        // normal at the surface of the ledge
        idVec3 ledgeSurfaceNormal; // Offset: 0x2C

        // whether the player can stand on the ledge or not
        bool canStand; // Offset: 0x38

        // the delta height between the start ground and the end ground {{ units = m }}
        float landingDeltaHeight; // Offset: 0x3C

        // position detected on ledge, if any {{ units = m }}
        idVec3 ledgePos; // Offset: 0x40

        // spawnId of the ledge
        idSpawnId ledgeSpawnId; // Offset: 0x4C

        idDemonLedgeGrabComponent::ledgeInfo_t::edgeType_t edgeType; // Offset: 0x50

    }; // Size: 0x54

    struct testParms_t
    {
        // how far to back up the forward test rays {{ units = m }}
        float forwardTestBackupDist; // Offset: 0x0

        // how far up to do the first forward test {{ units = m }}
        float forwardUpTestDist; // Offset: 0x4

        // how far up to do the first forward test {{ units = m }}
        float forwardUpTestDist2; // Offset: 0x8

        // how far up to do the first forward test {{ units = m }}
        float forwardUpTestDist3; // Offset: 0xC

        // how far forward must the ledge be clear {{ units = m }}
        float forwardClearDist; // Offset: 0x10

        // how far to either side to test for a ledge grab {{ units = m }}
        float sideTestDist; // Offset: 0x14

        // how far up to test for a ledge {{ units = m }}
        float upTestDist; // Offset: 0x18

        // how far forward past the front of the ledge to test for its depth {{ units = m }}
        float depthTestDist; // Offset: 0x1C

        // minimum distance for a ledge to qualify {{ units = m }}
        float minDist; // Offset: 0x20

        // maximum distance for a ledge to qualify {{ units = m }}
        float maxDist; // Offset: 0x24

        // minimum absolute ledge height so that you don't grab things that are too low to the ground {{ units = m }}
        float minHeight; // Offset: 0x28

        // minimum ledge delta height relative to the player height to be able to grab a ledge {{ units = m }}
        float minDeltaHeight; // Offset: 0x2C

        // maximum ledge delta height relative to the player height to be able to grab a ledge {{ units = m }}
        float maxDeltaHeight; // Offset: 0x30

        // delta height to use the mantle grab {{ units = m }}
        float grabMantleDeltaHeight; // Offset: 0x34

        // minimum ledge depth {{ units = m }}
        float minDepth; // Offset: 0x38

        // maximum delta pitch to initiate ledge grab, relative to velocity/heading normal
        float maxDeltaPitch; // Offset: 0x3C

        // maximum delta yaw to initiate ledge grab, relative to velocity/heading normal
        float maxDeltaYaw; // Offset: 0x40

        // if the thickness is this value or less then the ledge is a railing and the player can't stand on it but can only vault over it {{ units = m }}
        float maxRailingThickness; // Offset: 0x44

    }; // Size: 0x48

    struct idCheckSurroundingsJobData
    {
        idDemonLedgeGrabComponent* lg; // Offset: 0x0

        // {{ units = m }}
        idVec3 pos; // Offset: 0x8

        idVec3 forward; // Offset: 0x14

        idVec3 right; // Offset: 0x20

        idVec3 up; // Offset: 0x2C

        idDemonLedgeGrabComponent::testParms_t* parms; // Offset: 0x38

        idDemonLedgeGrabComponent::ledgeInfo_t ledgeInfoCenter; // Offset: 0x40

        idDemonLedgeGrabComponent::ledgeInfo_t ledgeInfoRight; // Offset: 0x94

        idDemonLedgeGrabComponent::ledgeInfo_t ledgeInfoLeft; // Offset: 0xE8

        // {{ units = m }}
        float forwardTestDist; // Offset: 0x13C

        bool foundLedge; // Offset: 0x140

        bool isRailing; // Offset: 0x141

        bool fireCustomTrigger; // Offset: 0x142

        idDemonLedgeGrabComponent::testParms_t* railingAboveLedgeParms; // Offset: 0x148

        idDemonLedgeGrabComponent::ledgeInfo_t railingAboveLedgeInfoCenter; // Offset: 0x150

        idDemonLedgeGrabComponent::ledgeInfo_t railingAboveLedgeInfoRight; // Offset: 0x1A4

        idDemonLedgeGrabComponent::ledgeInfo_t railingAboveLedgeInfoLeft; // Offset: 0x1F8

        // {{ units = m }}
        float ledgeAboveRailingAdditionalForwardTestDist; // Offset: 0x24C

        idManagedClassPtr < idEntity > customLedgeGrabTrigger; // Offset: 0x250

        bool canGrabAndClimbUp; // Offset: 0x270

        bool canGrabAndPullUp; // Offset: 0x271

        bool customLedgeGrab; // Offset: 0x272

    }; // Size: 0x278

    struct idCheckForLedgeDeferredData
    {
        // input parms {{ units = m }}
        idVec3 pos; // Offset: 0x0

        idVec3 forward; // Offset: 0xC

        idVec3 up; // Offset: 0x18

        // {{ units = m }}
        float forwardTestDist; // Offset: 0x24

        // {{ units = m }}
        float forwardTestBackupDist; // Offset: 0x28

        // {{ units = m }}
        float forwardUpTestDist; // Offset: 0x2C

        // {{ units = m }}
        float upTestDist; // Offset: 0x30

        // {{ units = m }}
        float depthTestDist; // Offset: 0x34

        bool checkingForRailingAboveLedge; // Offset: 0x38

        // queries and trace results
        idHavokQueryId queryPosToForwardTest; // Offset: 0x40

        // {{ units = m }}
        idVec3 queryPosToForwardTestStart; // Offset: 0x48

        // {{ units = m }}
        idVec3 queryPosToForwardTestEnd; // Offset: 0x54

        trace_t tracePosToForwardTest; // Offset: 0x60

        idHavokQueryId queryForwardTest; // Offset: 0xE0

        // {{ units = m }}
        idVec3 queryForwardTestStart; // Offset: 0xE8

        // {{ units = m }}
        idVec3 queryForwardTestEnd; // Offset: 0xF4

        trace_t traceForwardTest; // Offset: 0x100

        idHavokQueryId queryGroundTrace; // Offset: 0x180

        // {{ units = m }}
        idVec3 queryGroundTraceStart; // Offset: 0x188

        // {{ units = m }}
        idVec3 queryGroundTraceEnd; // Offset: 0x194

        trace_t traceGroundTrace; // Offset: 0x1A0

    }; // Size: 0x220

    struct idCheckSurroundingsDeferredData
    {
        // input parms {{ units = m }}
        idVec3 pos; // Offset: 0x0

        idVec3 forward; // Offset: 0xC

        idVec3 right; // Offset: 0x18

        idVec3 up; // Offset: 0x24

        idDemonLedgeGrabComponent::testParms_t* parms; // Offset: 0x30

        idDemonLedgeGrabComponent::ledgeInfo_t ledgeInfoCenter; // Offset: 0x38

        idDemonLedgeGrabComponent::ledgeInfo_t ledgeInfoRight; // Offset: 0x8C

        idDemonLedgeGrabComponent::ledgeInfo_t ledgeInfoLeft; // Offset: 0xE0

        // {{ units = m }}
        float forwardTestDist; // Offset: 0x134

        bool checkingForRailingAboveLedge; // Offset: 0x138

        // queries and trace results
        idDemonLedgeGrabComponent::idCheckForLedgeDeferredData checkForLedgeUpTestDist; // Offset: 0x140

        idDemonLedgeGrabComponent::idCheckForLedgeDeferredData checkForLedgeUpTestDist2; // Offset: 0x360

        idDemonLedgeGrabComponent::idCheckForLedgeDeferredData checkForLedgeUpTestDist3; // Offset: 0x580

        idDemonLedgeGrabComponent::idCheckForLedgeDeferredData checkForLedgeRightTestDist; // Offset: 0x7A0

        idDemonLedgeGrabComponent::idCheckForLedgeDeferredData checkForLedgeRightTestDist2; // Offset: 0x9C0

        idDemonLedgeGrabComponent::idCheckForLedgeDeferredData checkForLedgeRightTestDist3; // Offset: 0xBE0

        idDemonLedgeGrabComponent::idCheckForLedgeDeferredData checkForLedgeLeftTestDist; // Offset: 0xE00

        idDemonLedgeGrabComponent::idCheckForLedgeDeferredData checkForLedgeLeftTestDist2; // Offset: 0x1020

        idDemonLedgeGrabComponent::idCheckForLedgeDeferredData checkForLedgeLeftTestDist3; // Offset: 0x1240

        idHavokQueryId queryPosLeftToPosRight; // Offset: 0x1460

        // {{ units = m }}
        idVec3 queryPosLeftToPosRightStart; // Offset: 0x1468

        // {{ units = m }}
        idVec3 queryPosLeftToPosRightEnd; // Offset: 0x1474

        trace_t tracePosLeftToPosRight; // Offset: 0x1480

        // stores the frame number if CheckSurroundingsDeferred_ResolveQueries returns true
        int lastSuccessFrame; // Offset: 0x1500

    }; // Size: 0x1508

    struct animAliases_t
    {
        // body animation to grab and pull up from below (square edge)
        idAtomicHandleT < aliasRefType_t > ledgePullUp; // Offset: 0x0

        // body animation to grab and push up from above (square edge)
        idAtomicHandleT < aliasRefType_t > ledgePullUpMantle; // Offset: 0x8

        // body animation to grab and pull up from below (rounded edge)
        idAtomicHandleT < aliasRefType_t > ledgePullUpRounded; // Offset: 0x10

        // body animation to grab and push up from above (rounded edge)
        idAtomicHandleT < aliasRefType_t > ledgePullUpMantleRounded; // Offset: 0x18

        // body animation to grab and pull up from below (angled edge)
        idAtomicHandleT < aliasRefType_t > ledgePullUpAngled; // Offset: 0x20

        // body animation to grab and push up from above (angled edge)
        idAtomicHandleT < aliasRefType_t > ledgePullUpMantleAngled; // Offset: 0x28

        // body animation to grab and pull up from below (square edge)
        idAtomicHandleT < aliasRefType_t > ledgeClimbUp; // Offset: 0x30

        // body animation to grab and push up from above (square edge)
        idAtomicHandleT < aliasRefType_t > ledgeClimbUpMantle; // Offset: 0x38

        // body animation to grab and pull up from below (square edge)
        idAtomicHandleT < aliasRefType_t > railingPullUp; // Offset: 0x40

        // body animation to grab and push up from above (square edge)
        idAtomicHandleT < aliasRefType_t > railingPullUpMantle; // Offset: 0x48

        // body animation for custom pull up
        idAtomicHandleT < aliasRefType_t > customLedgeGrabPullUp; // Offset: 0x50

        // body animation for custom mantle
        idAtomicHandleT < aliasRefType_t > customLedgeGrabMantle; // Offset: 0x58

    }; // Size: 0x60

    struct thirdPersonAnimIndex_t
    {
        // body animation to grab and pull up from below (square edge)
        int ledgePullUp; // Offset: 0x0

        // body animation to grab and push up from above (square edge)
        int ledgePullUpMantle; // Offset: 0x4

        // body animation to grab and pull up from below (rounded edge)
        int ledgePullUpRounded; // Offset: 0x8

        // body animation to grab and push up from above (rounded edge)
        int ledgePullUpMantleRounded; // Offset: 0xC

        // body animation to grab and pull up from below (angled edge)
        int ledgePullUpAngled; // Offset: 0x10

        // body animation to grab and push up from above (angled edge)
        int ledgePullUpMantleAngled; // Offset: 0x14

        // body animation to grab and pull up from below (square edge)
        int ledgeClimbUp; // Offset: 0x18

        // body animation to grab and push up from above (square edge)
        int ledgeClimbUpMantle; // Offset: 0x1C

        // body animation to grab and pull up from below (square edge)
        int railingPullUp; // Offset: 0x20

        // body animation to grab and push up from above (square edge)
        int railingPullUpMantle; // Offset: 0x24

        // body animation for custom pull up
        int customLedgeGrabPullUp; // Offset: 0x28

        // body animation for custom mantle
        int customLedgeGrabMantle; // Offset: 0x2C

    }; // Size: 0x30

    struct animInfo_t
    {
        // {{ units = m }}
        idVec3 originDestination; // Offset: 0x0

        // {{ units = m }}
        idVec3 alignPos; // Offset: 0xC

        int numFrames; // Offset: 0x18

    }; // Size: 0x1C

    idDemonLedgeGrabComponent::idCheckSurroundingsJobData inlineJobData; // Offset: 0x8

    idDemonLedgeGrabComponent::idCheckSurroundingsJobData deferredJobData; // Offset: 0x280

    idJobChain* parallelJob; // Offset: 0x4F8

    idDemonLedgeGrabComponent::idCheckSurroundingsDeferredData checkSurroundingsLedge; // Offset: 0x500

    idDemonLedgeGrabComponent::idCheckSurroundingsDeferredData checkSurroundingsRailingAboveLedge; // Offset: 0x1A08

    idDemonPlayer* demonPlayer; // Offset: 0x2F10

    // input trackers
    int outputDeltaMove; // Offset: 0x2F18

    idVec3 prevForward; // Offset: 0x2F1C

    idVec3 prevRight; // Offset: 0x2F28

    idVec3 prevUp; // Offset: 0x2F34

    // {{ units = m }}
    idVec3 prevPos; // Offset: 0x2F40

    // {{ units = m }}
    idVec3 prevViewPos; // Offset: 0x2F4C

    idMat3 prevViewAxis; // Offset: 0x2F58

    // config data whether this ledge grab component is enabled for this demon
    bool enabled; // Offset: 0x2F7C

    // whether to apply the "align" joint offset at end of grab
    bool applyAlignOffset; // Offset: 0x2F7D

    // speed scale for the animation that drives the first-person and third-person ledge grab animations for the demon
    float speedScale; // Offset: 0x2F80

    // minimum height off ground required before attempting to grab {{ units = m }}
    float minGroundHeight; // Offset: 0x2F84

    // how far inside a blocking surface to test for an edge {{ units = m }}
    float rayTestDepth; // Offset: 0x2F88

    // default distance to test forward for non-railing-above-ledge grabs {{ units = m }}
    float forwardTestDist; // Offset: 0x2F8C

    // railing-above-ledge grabs use the actual detected ledge distance plus this additional forward test distance. {{ units = m }}
    float ledgeAboveRailingAdditionalForwardTestDist; // Offset: 0x2F90

    // default test parms
    idDemonLedgeGrabComponent::testParms_t defaultParms; // Offset: 0x2F94

    // parms to use when in water
    idDemonLedgeGrabComponent::testParms_t inWaterParms; // Offset: 0x2FDC

    // parms to use to look for a railing above a found ledge
    idDemonLedgeGrabComponent::testParms_t railingAboveLedgeParms; // Offset: 0x3024

    // parms to use during a custom grab (generally just tests further ahead for more forgiveness)
    idDemonLedgeGrabComponent::testParms_t customLedgeGrabParms; // Offset: 0x306C

    idManagedClassPtr < idEntity > customLedgeGrabTrigger; // Offset: 0x30B8

    // the soonest time that a grab can be attempted
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > canGrabTime; // Offset: 0x30D8

    // what time the previous ledge grab started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastGrabTime; // Offset: 0x30E0

    // what time the current ledge grab end
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > grabEndTime; // Offset: 0x30E8

    // align pos for third person hands {{ units = m }}
    idVec3 bodyAlignPos; // Offset: 0x30F0

    // saves the spring cam setting
    bool springCamInhibitControl; // Offset: 0x30FC

    // tracks when the player was pushed so that we can avoid applying the push a second time
    int lastPushedFrame; // Offset: 0x3100

    // {{ units = m }}
    idVec3 worldOriginDestination; // Offset: 0x3104

    // railings above ledges are this high above their associated ledges {{ units = m }}
    float standardRailingAboveLedgeHeight; // Offset: 0x3110

    // railings above ledges are set back this far from their associated ledge faces {{ units = m }}
    float standardRailingAboveLedgeSetback; // Offset: 0x3114

    // railings above ledges are this thick {{ units = m }}
    float standardRailingAboveLedgeThickness; // Offset: 0x3118

    // scalar used to multiply against current vertical velocity to determine if we'll clear the ledge without grabbing (disabled if == 0)
    float checkVerticalVelocityScalar; // Offset: 0x311C

    // animation aliases
    idDemonLedgeGrabComponent::animAliases_t animAliases; // Offset: 0x3120

    // maps ledge grab state to third person anim indexes used by blend tree
    idDemonLedgeGrabComponent::thirdPersonAnimIndex_t thirdPersonAnimIndex; // Offset: 0x3180

    // attach camera data joint on tp hands to attach camera to
    idStr cameraJointName; // Offset: 0x31B0

    // how the camera blends in/out when attached/detached
    blendMode_t cameraBlendMode; // Offset: 0x31E0

    // MS to blend camera in/out when attached/detached
    idTypesafeTime < int , millisecondUnique_t , 1000 > cameraBlendDurationMS; // Offset: 0x31E4

    // Whether to use LOOK_HEADING/ADD_HEADING or just LOOK_NONE
    bool cameraEnableLookMode; // Offset: 0x31E8

    // Min degrees to limit camera view relative to ledge orientation
    idAngles cameraMinConstraintAngles; // Offset: 0x31EC

    // Max degrees to limit camera view relative to ledge orientation
    idAngles cameraMaxConstraintAngles; // Offset: 0x31F8

    // store the position of the origin joint in the final frame for each animation
    idDemonLedgeGrabComponent::animInfo_t animInfos[12]; // Offset: 0x3204

    // conventional ledge info moved to job data ledgeInfo_tledgeInfoCenter; ledgeInfo_tledgeInfoRight; ledgeInfo_tledgeInfoLeft; ledgeGrabPos_tvalidLedgePos;
    idDemonLedgeGrabComponent::ledgeGrabPos_t validLedgePos; // Offset: 0x3354

    // railing above ledge info moved to job data ledgeInfo_trailingAboveLedgeInfoCenter; ledgeInfo_trailingAboveLedgeInfoRight; ledgeInfo_trailingAboveLedgeInfoLeft;
    idDemonLedgeGrabComponent::ledgeGrabState_t state; // Offset: 0x3358

    idDemonLedgeGrabComponent::ledgeGrabState_t prevState; // Offset: 0x335C

    // boolfoundLedge;
    int ledgeGrabUniqueId; // Offset: 0x3360

    // remove values for non-locally controlled demons
    idDemonLedgeGrabComponent::ledgeGrabState_t remoteState; // Offset: 0x3364

    // {{ units = m }}
    idVec3 remoteLedgePos; // Offset: 0x3368

    idVec3 remoteLedgeOrient; // Offset: 0x3374

    idUCmdTracker::inhibitFlags_t inhibitFlagsSave; // Offset: 0x3380

    // debug helpers that need to be mutable since we're calculating them during const getters if certain cvars are on
    bool debugPrevCanStandOnLedge; // Offset: 0x3384

    bool debugPrevOriginDestinationOK; // Offset: 0x3385

    idStr debugFailureReason; // Offset: 0x3388

    // {{ units = m }}
    idVec3 debugLastLedgePosCheck; // Offset: 0x33B8

}; // Size: 0x33C8
