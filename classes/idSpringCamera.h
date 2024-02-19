struct idSpringCamera : idCamera
{
    enum state_t : int
    {
        STATE_INACTIVE = 0,
        STATE_BLEND_IN = 1,
        STATE_REACTIVATE = 2,
        STATE_ACTIVE = 3,
        STATE_ACTIVE_READY_TO_BLEND_OUT = 4,
        STATE_BLEND_OUT = 5,
        STATE_SHUTDOWN = 6,
        STATE_MAX = 7
    };

    enum calculateViewStage_t : int
    {
        STAGE_DEFAULT = 0,
        STAGE_UPDATE = 1,
        STAGE_DRAW = 2
    };

    // blend spring to control blend on camera position
    idSpring < idVec1 > followBlendSpring; // Offset: 0xBB0

    // spring to control blend on camera heading
    idSpring < idVec1 > lookBlendSpring; // Offset: 0xBE0

    // the current fixed blend duration, or -1 to ignore
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > blendDuration; // Offset: 0xC10

    // the start time for the blend out
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > blendOutStartTime; // Offset: 0xC18

    // springs  numerous springs are used to model the camera follow and look behaviors the follow behavior requires a single spring, to move the camera position  the look behavior requires springs to control the origin and fwd and up look positions of the orientation coord system the look origin is different from the follow origin to allow the spring rates to differ for the follow and look behaviors spring controlling origin of follow coord system ( p0 = desired val, p1 = actual val ) {{ ___ts = m }}
    idSpring < idVec3 > springFollowPos; // Offset: 0xC20

    // spring controlling fwd look dir of look coord system ( p0 = desired val, p1 = actual val )
    idSpring < idVec3 > springLookFwdDir; // Offset: 0xC78

    // spring controlling up look dir of look coord system ( p0 = desired val, p1 = actual val )
    idSpring < idVec3 > springLookUpDir; // Offset: 0xCD0

    // spring controlling fov ( p0 = desired val, p1 = actual val )
    idSpring < idVec1 > springFOV; // Offset: 0xD28

    // spring controlling auto centering for yaw ( p0 = desired val, p1 = actual val )
    idSpring < idVec3 > springAutoCenter; // Offset: 0xD58

    // follow target
    idManagedClassPtr < idEntity > followEntity; // Offset: 0xDB0

    idJointAnimator* followAnimator; // Offset: 0xDD0

    idIndex < short , invalidJointIndex_t , - 1 > followJointIndex; // Offset: 0xDD8

    // look target
    idManagedClassPtr < idEntity > lookEntity; // Offset: 0xDE0

    idJointAnimator* lookAnimator; // Offset: 0xE00

    idIndex < short , invalidJointIndex_t , - 1 > lookJointIndex; // Offset: 0xE08

    // states
    duration_t followDuration; // Offset: 0xE0C

    duration_t lookDuration; // Offset: 0xE10

    lookMode_t lookMode; // Offset: 0xE14

    blendMode_t lookBlendMode; // Offset: 0xE18

    blendMode_t followBlendMode; // Offset: 0xE1C

    // state
    idSpringCamera::state_t followState; // Offset: 0xE20

    idSpringCamera::state_t lookState; // Offset: 0xE24

    idSpringCamera::state_t state; // Offset: 0xE28

    // view values {{ units = m }}
    idVec3 viewOrigin; // Offset: 0xE2C

    idMat3 viewAxis; // Offset: 0xE38

    float viewFov; // Offset: 0xE5C

    // {{ units = m / s }}
    idVec3 viewVelocity; // Offset: 0xE60

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > viewTimestamp; // Offset: 0xE70

    // for 'ADD' look modes
    idAngles viewDeltaAngles; // Offset: 0xE78

    // from values {{ units = m }}
    idVec3 fromViewOrigin; // Offset: 0xE84

    idMat3 fromViewAxis; // Offset: 0xE90

    idManagedClassPtr < idEntity > activatorParent; // Offset: 0xEB8

    // {{ units = m }}
    idVec3 activatorParentPos; // Offset: 0xED8

    bool manualUpdate; // Offset: 0xEE4

    // tracks whether the InternalCalculateView data is in sync with Update data
    bool calculatedView; // Offset: 0xEE5

    // tracks whether the view origin is valid for the current spring camera session
    bool calculatedViewOrigin; // Offset: 0xEE6

    idSpringCamera::calculateViewStage_t forceCalculateViewStage; // Offset: 0xEE8

    // degrees from look target view constraint
    float constraintConeDegs; // Offset: 0xEEC

    // min view constraints
    idAngles minConstraintAngles; // Offset: 0xEF0

    // max view constraints
    idAngles maxConstraintAngles; // Offset: 0xEFC

    float autoCenterSpringK; // Offset: 0xF08

    bool ignoreFovChange; // Offset: 0xF0C

    // init set to false when we initialize this spring view, this must be true before we can allow idSpringCamera::Draw() to call through.
    bool hasCalculateViewSinceInit; // Offset: 0xF0D

    // collision
    bool clipTestMovement; // Offset: 0xF0E

    // radius of cylinder to use to clip camera movement {{ units = m }}
    float clipTestRadius; // Offset: 0xF10

    // height of cylinder to use to clip camera movement {{ units = m }}
    float clipTestHeight; // Offset: 0xF14

    // the difference between the animated move and the clipped move {{ units = m }}
    idVec3 clipTestResult; // Offset: 0xF18

    // the spawnId of an entity to ignore during clip testing
    idSpawnId clipTestIgnoreSpawnId; // Offset: 0xF24

    // apply the clip test result excess move to the view position
    bool clipTestApplyResultsToView; // Offset: 0xF28

    // control flags whether the player physics should be locked or not while the spring camera is in control
    bool inhibitPhysics; // Offset: 0xF29

    // flags whether control input is inhibited or not while the camera is active
    bool inhibitControl; // Offset: 0xF2A

    // flags whether the camera takes over control of the player
    bool shouldControlActivator; // Offset: 0xF2B

}; // Size: 0xF30
