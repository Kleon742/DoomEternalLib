struct idPlayerMechanicLedgeGrab : idPlayerMechanic
{
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

        // minimum ledge height above the ground so that you don't grab things that are too low to the ground {{ units = m }}
        float minHeight; // Offset: 0x28

        // if falling and the ledge is this high or less, don't grab (player probably wants to drop down instead) {{ units = m }}
        float ignoreGrabFromFallHeightAboveGround; // Offset: 0x2C

        // minimum ledge delta height relative to the player height to be able to grab a ledge {{ units = m }}
        float minDeltaHeight; // Offset: 0x30

        // maximum ledge delta height relative to the player height to be able to grab a ledge {{ units = m }}
        float maxDeltaHeight; // Offset: 0x34

        // delta height to use the mantle grab {{ units = m }}
        float grabMantleDeltaHeight; // Offset: 0x38

        // delta height to use the foot grab {{ units = m }}
        float grabFootDeltaHeight; // Offset: 0x3C

        // minimum ledge depth {{ units = m }}
        float minDepth; // Offset: 0x40

        // minimum clearance above ledge to hang (requires player height to stand) {{ units = m }}
        float minClearanceToHang; // Offset: 0x44

        // maximum delta pitch to initiate ledge grab, relative to velocity/heading normal
        float maxDeltaPitch; // Offset: 0x48

        // maximum delta yaw to initiate ledge grab, relative to velocity/heading normal
        float maxDeltaYaw; // Offset: 0x4C

        // if the thickness is this value or less then the ledge is a railing and the player can't stand on it but can only vault over it {{ units = m }}
        float maxRailingThickness; // Offset: 0x50

        // the time we allow ledge grab input to remain valid to allow the user to easily grab onto ledges
        int inputTimeBuffer; // Offset: 0x54

    }; // Size: 0x58

    struct idCheckSurroundingsJobData
    {
        idPlayerMechanicLedgeGrab* lg; // Offset: 0x0

        // {{ units = m }}
        idVec3 pos; // Offset: 0x8

        idVec3 forward; // Offset: 0x14

        idVec3 right; // Offset: 0x20

        idVec3 up; // Offset: 0x2C

        idPlayerMechanicLedgeGrab::testParms_t* parms; // Offset: 0x38

        idPlayerMechanicLedgeInfo ledgeInfoCenter; // Offset: 0x40

        idPlayerMechanicLedgeInfo ledgeInfoRight; // Offset: 0x94

        idPlayerMechanicLedgeInfo ledgeInfoLeft; // Offset: 0xE8

        idPlayerMechanicLedgeInfo ledgeInfoRightRandom; // Offset: 0x13C

        idPlayerMechanicLedgeInfo ledgeInfoLeftRandom; // Offset: 0x190

        // {{ units = m }}
        float forwardTestDist; // Offset: 0x1E4

        bool foundLedge; // Offset: 0x1E8

        bool isRailing; // Offset: 0x1E9

        bool fireCustomTrigger; // Offset: 0x1EA

        idPlayerMechanicLedgeGrab::testParms_t* railingAboveLedgeParms; // Offset: 0x1F0

        idPlayerMechanicLedgeInfo railingAboveLedgeInfoCenter; // Offset: 0x1F8

        idPlayerMechanicLedgeInfo railingAboveLedgeInfoRight; // Offset: 0x24C

        idPlayerMechanicLedgeInfo railingAboveLedgeInfoLeft; // Offset: 0x2A0

        idPlayerMechanicLedgeInfo railingAboveLedgeInfoRightRandom; // Offset: 0x2F4

        idPlayerMechanicLedgeInfo railingAboveLedgeInfoLeftRandom; // Offset: 0x348

        // {{ units = m }}
        float ledgeAboveRailingAdditionalForwardTestDist; // Offset: 0x39C

        idManagedClassPtr < idEntity > customLedgeGrabTrigger; // Offset: 0x3A0

        bool canGrabAndClimbUp; // Offset: 0x3C0

        bool canGrabAndPullUp; // Offset: 0x3C1

        bool customLedgeGrab; // Offset: 0x3C2

    }; // Size: 0x3C8

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

        idPlayerMechanicLedgeGrab::testParms_t* parms; // Offset: 0x30

        idPlayerMechanicLedgeInfo ledgeInfoCenter; // Offset: 0x38

        idPlayerMechanicLedgeInfo ledgeInfoRight; // Offset: 0x8C

        idPlayerMechanicLedgeInfo ledgeInfoLeft; // Offset: 0xE0

        idPlayerMechanicLedgeInfo ledgeInfoRightRandom; // Offset: 0x134

        idPlayerMechanicLedgeInfo ledgeInfoLeftRandom; // Offset: 0x188

        // {{ units = m }}
        float forwardTestDist; // Offset: 0x1DC

        bool checkingForRailingAboveLedge; // Offset: 0x1E0

        // queries and trace results
        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeUpTestDist; // Offset: 0x1E8

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeUpTestDist2; // Offset: 0x408

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeUpTestDist3; // Offset: 0x628

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeRightTestDist; // Offset: 0x848

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeRightTestDist2; // Offset: 0xA68

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeRightTestDist3; // Offset: 0xC88

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeLeftTestDist; // Offset: 0xEA8

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeLeftTestDist2; // Offset: 0x10C8

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeLeftTestDist3; // Offset: 0x12E8

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeRightRandomTestDist; // Offset: 0x1508

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeRightRandomTestDist2; // Offset: 0x1728

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeRightRandomTestDist3; // Offset: 0x1948

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeLeftRandomTestDist; // Offset: 0x1B68

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeLeftRandomTestDist2; // Offset: 0x1D88

        idPlayerMechanicLedgeGrab::idCheckForLedgeDeferredData checkForLedgeLeftRandomTestDist3; // Offset: 0x1FA8

        idHavokQueryId queryPosLeftToPosRight; // Offset: 0x21C8

        // {{ units = m }}
        idVec3 queryPosLeftToPosRightStart; // Offset: 0x21D0

        // {{ units = m }}
        idVec3 queryPosLeftToPosRightEnd; // Offset: 0x21DC

        trace_t tracePosLeftToPosRight; // Offset: 0x21E8

        // stores the frame number if CheckSurroundingsDeferred_ResolveQueries returns true
        int lastSuccessFrame; // Offset: 0x2268

    }; // Size: 0x2270

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

        // body animation to grab at the foot level (square edge)
        idAtomicHandleT < aliasRefType_t > ledgePullUpFoot; // Offset: 0x30

        // body animation to grab and pull up from below (square edge)
        idAtomicHandleT < aliasRefType_t > ledgeClimbUp; // Offset: 0x38

        // body animation to grab and push up from above (square edge)
        idAtomicHandleT < aliasRefType_t > ledgeClimbUpMantle; // Offset: 0x40

        // body animation to grab at the foot level (square edge)
        idAtomicHandleT < aliasRefType_t > ledgeClimbUpFoot; // Offset: 0x48

        // body animation to grab and pull up from below (square edge)
        idAtomicHandleT < aliasRefType_t > railingPullUp; // Offset: 0x50

        // body animation to grab and push up from above (square edge)
        idAtomicHandleT < aliasRefType_t > railingPullUpMantle; // Offset: 0x58

        // body animation to grab at the foot level (square edge)
        idAtomicHandleT < aliasRefType_t > railingPullUpFoot; // Offset: 0x60

        // body animation for custom pull up
        idAtomicHandleT < aliasRefType_t > customLedgeGrabPullUp; // Offset: 0x68

        // body animation for custom mantle
        idAtomicHandleT < aliasRefType_t > customLedgeGrabMantle; // Offset: 0x70

        // body animation for custom foot grab
        idAtomicHandleT < aliasRefType_t > customLedgeGrabFoot; // Offset: 0x78

    }; // Size: 0x80

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

        // body animation to grab at the foot level (square edge)
        int ledgePullUpFoot; // Offset: 0x18

        // body animation to grab and pull up from below (square edge)
        int ledgeClimbUp; // Offset: 0x1C

        // body animation to grab and push up from above (square edge)
        int ledgeClimbUpMantle; // Offset: 0x20

        // body animation to grab at the foot level (square edge)
        int ledgeClimbUpFoot; // Offset: 0x24

        // body animation to grab and pull up from below (square edge)
        int railingPullUp; // Offset: 0x28

        // body animation to grab and push up from above (square edge)
        int railingPullUpMantle; // Offset: 0x2C

        // body animation to grab at the foot level (square edge)
        int railingPullUpFoot; // Offset: 0x30

        // body animation for custom pull up
        int customLedgeGrabPullUp; // Offset: 0x34

        // body animation for custom mantle
        int customLedgeGrabMantle; // Offset: 0x38

        // body animation for custom foot grab
        int customLedgeGrabFoot; // Offset: 0x3C

    }; // Size: 0x40

    struct animInfo_t
    {
        // {{ units = m }}
        idVec3 originDestination; // Offset: 0x0

        // {{ units = m }}
        idVec3 alignPos; // Offset: 0xC

        int numFrames; // Offset: 0x18

    }; // Size: 0x1C

    idPlayerMechanicLedgeGrab::idCheckSurroundingsJobData inlineJobData; // Offset: 0x28

    idPlayerMechanicLedgeGrab::idCheckSurroundingsJobData deferredJobData; // Offset: 0x3F0

    jobHandle_t parallelJob; // Offset: 0x7B8

    idPlayerMechanicLedgeGrab::idCheckSurroundingsDeferredData checkSurroundingsLedge; // Offset: 0x7C0

    idPlayerMechanicLedgeGrab::idCheckSurroundingsDeferredData checkSurroundingsRailingAboveLedge; // Offset: 0x2A30

    // config data how far inside a blocking surface to test for an edge {{ units = m }}
    float rayTestDepth; // Offset: 0x4CA0

    // default distance to test forward for non-railing-above-ledge grabs {{ units = m }}
    float forwardTestDist; // Offset: 0x4CA4

    // railing-above-ledge grabs use the actual detected ledge distance plus this additional forward test distance. {{ units = m }}
    float ledgeAboveRailingAdditionalForwardTestDist; // Offset: 0x4CA8

    // default test parms
    idPlayerMechanicLedgeGrab::testParms_t defaultParms; // Offset: 0x4CAC

    // parms if foot mount is allowed
    idPlayerMechanicLedgeGrab::testParms_t footParms; // Offset: 0x4D04

    // parms to use when in water
    idPlayerMechanicLedgeGrab::testParms_t inWaterParms; // Offset: 0x4D5C

    // parms to use to look for a railing above a found ledge
    idPlayerMechanicLedgeGrab::testParms_t railingAboveLedgeParms; // Offset: 0x4DB4

    // parms to use during a custom grab (generally just tests further ahead for more forgiveness)
    idPlayerMechanicLedgeGrab::testParms_t customLedgeGrabParms; // Offset: 0x4E0C

    idManagedClassPtr < idEntity > customLedgeGrabTrigger; // Offset: 0x4E68

    // whether or not the view should be constrained to a cone centered on the ledge face normal
    bool customLedgeGrabConstrainView; // Offset: 0x4E88

    // whether or not the custom ledge grab ends on the ground
    bool customLedgeGrabEndsOnGround; // Offset: 0x4E89

    // how long the view should take to blend to the animated camera joint
    idTypesafeTime < int , millisecondUnique_t , 1000 > viewBlendDurationMS; // Offset: 0x4E8C

    // stores the value of the view blend duration so that it can be restored when this mechanic is finished
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > viewBlendDurationSave; // Offset: 0x4E90

    // rate for the entry into the constrained view range, if restriction is necessary (degs/sec)
    float constrainedViewAnglesRate; // Offset: 0x4E98

    // the soonest time that a grab can be attempted
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > canGrabTime; // Offset: 0x4EA0

    // what time the current ledge grab started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > grabStartTime; // Offset: 0x4EA8

    // what time the previous ledge grab started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastGrabTime; // Offset: 0x4EB0

    // what time the current ledge grab end
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > grabEndTime; // Offset: 0x4EB8

    // tracks whether last grab was a foot grab
    bool lastGrabWasFootGrab; // Offset: 0x4EC0

    // prevents a held jump input from being misinterpreted
    bool jumpInputRequiresRelease; // Offset: 0x4EC1

    // spring that controls the speed scale
    idSpring < idVec1 > speedScaleSpring; // Offset: 0x4EC4

    // align pos for third person hands {{ units = m }}
    idVec3 bodyAlignPos; // Offset: 0x4EF4

    // saves the spring cam setting
    bool springCamInhibitControl; // Offset: 0x4F00

    // tracks whether this mechanic hid the FP hands so it knows to unhide them
    bool hidFPHands; // Offset: 0x4F01

    // tracks whether the origin joint destinations have been precached
    bool cachedOriginJointDestinations; // Offset: 0x4F02

    // tracks when the player was pushed so that we can avoid applying the push a second time
    int lastPushedFrame; // Offset: 0x4F04

    // minimum forward input required to initiate ledge grab
    float minInputToInitiate; // Offset: 0x4F08

    // {{ units = m }}
    idVec3 worldOriginDestination; // Offset: 0x4F0C

    // railings above ledges are this high above their associated ledges {{ units = m }}
    float standardRailingAboveLedgeHeight; // Offset: 0x4F18

    // railings above ledges are set back this far from their associated ledge faces {{ units = m }}
    float standardRailingAboveLedgeSetback; // Offset: 0x4F1C

    // railings above ledges are this thick {{ units = m }}
    float standardRailingAboveLedgeThickness; // Offset: 0x4F20

    // 0 = no hands anim, 1 = small landing, 2 = medium landing, 3 = large landing
    int footGrabForceLandingType; // Offset: 0x4F24

    // animation aliases
    idPlayerMechanicLedgeGrab::animAliases_t animAliases; // Offset: 0x4F28

    // maps ledge grab state to third person anim indexes used by blend tree
    idPlayerMechanicLedgeGrab::thirdPersonAnimIndex_t thirdPersonAnimIndex; // Offset: 0x4FA8

    // store the position of the origin joint in the final frame for each animation
    idPlayerMechanicLedgeGrab::animInfo_t animInfos[16]; // Offset: 0x4FE8

    // conventional ledge info moved to jobData idPlayerMechanicLedgeInfoledgeInfoCenter; idPlayerMechanicLedgeInfoledgeInfoRight; idPlayerMechanicLedgeInfoledgeInfoLeft; idPlayerMechanicLedgeInfoledgeInfoRightRandom; idPlayerMechanicLedgeInfoledgeInfoLeftRandom; {{ units = m }}
    idArray < idVec3 , 16 > ledgeInfoRandomOffsets; // Offset: 0x51A8

    int handOffsetLeftIdx; // Offset: 0x5268

    int handOffsetRightIdx; // Offset: 0x526C

    idRandom handsRandomGenerator; // Offset: 0x5270

    idPlayerMechanicLedgeGrabPos_t validLedgePos; // Offset: 0x5274

    // railing above ledge info moved to jobData idPlayerMechanicLedgeInfo railingAboveLedgeInfoCenter; idPlayerMechanicLedgeInfo railingAboveLedgeInfoRight; idPlayerMechanicLedgeInfo railingAboveLedgeInfoLeft; idPlayerMechanicLedgeInfo railingAboveLedgeInfoRightRandom; idPlayerMechanicLedgeInfo railingAboveLedgeInfoLeftRandom;
    idPlayerMechanicLedgeGrabState_t state; // Offset: 0x5278

    idPlayerMechanicLedgeGrabState_t prevState; // Offset: 0x527C

    // bool foundLedge;
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ledgeGrabUniqueId; // Offset: 0x5280

    // tracks if there is actual input
    bool hasActualValidForwardPress; // Offset: 0x5288

    // buffered input lasts for a period of time after  real input is detected and while the player is in the air use it only against moving objects though because they can be fast movers and can be very difficult to grab whereas static geo is not difficult to grab and we don't  want buffered input causing unwanted grabs
    bool hasBufferedValidForwardPress; // Offset: 0x5289

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > validForwardPressTime; // Offset: 0x5290

    // {{ units = m / s }}
    idVec3 footGrabStartVel; // Offset: 0x5298

    // {{ units = m }}
    idVec3 DEBUGledgeGrabStartPos; // Offset: 0x52A4

    // {{ units = m }}
    idVec3 DEBUGledgeGrabEndPos; // Offset: 0x52B0

    idUCmdTracker::inhibitFlags_t inhibitFlagsSave; // Offset: 0x52BC

}; // Size: 0x52C0
