struct idMover : idAnimatedEntity
{
    enum moveStage_t : int
    {
        ACCELERATION_STAGE = 0,
        LINEAR_STAGE = 1,
        DECELERATION_STAGE = 2,
        FINISHED_STAGE = 3
    };

    enum moverCommand_t : int
    {
        MOVER_NONE = 0,
        MOVER_ROTATING = 1,
        MOVER_MOVING = 2,
        MOVER_SPLINE = 3
    };

    struct rotationState_t
    {
        // this is actually the next stage it will be in when the current stage completes
        idMover::moveStage_t stage; // Offset: 0x0

        // the actual, current stage
        idMover::moveStage_t currentStage; // Offset: 0x4

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > acceleration; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > movetime; // Offset: 0x10

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > deceleration; // Offset: 0x18

        idVec3 vec; // Offset: 0x20

        float speed; // Offset: 0x2C

    }; // Size: 0x30

    struct moveState_t
    {
        idMover::moveStage_t stage; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > acceleration; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > movetime; // Offset: 0x10

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > deceleration; // Offset: 0x18

        // {{ units = m / s }}
        idVec3 dir; // Offset: 0x20

        // {{ units = m }}
        idVec3 endPos; // Offset: 0x2C

        idAngles endAngles; // Offset: 0x38

    }; // Size: 0x48

    struct moverMonitor_t
    {
        // test against this entity for speed adjustment (ex: "player_start_1" for player)
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        // distance from entity to adjust movement speed {{ units = m }}
        float distance; // Offset: 0x20

        // speed to adjust to, when within distance of entity {{ units = m / s }}
        float speed; // Offset: 0x24

        // time (in secs) to accel to original speed
        float accelTime; // Offset: 0x28

        // time (in secs) to decel to new speed
        float decelTime; // Offset: 0x2C

        // speed before adjusted by monitoring system {{ units = m / s }}
        float originalSpeed; // Offset: 0x30

        // {{ units = m / s }}
        idVec3 originalDir; // Offset: 0x34

        // {{ units = m / s }}
        float newspeed; // Offset: 0x40

        // transitioning between normal and adjusted speed
        bool transitioning; // Offset: 0x44

    }; // Size: 0x48

    struct entRefCount_t
    {
        idSpawnId spawnId; // Offset: 0x0

        int count; // Offset: 0x4

    }; // Size: 0x8

    idHavokPhysics_ParametricMM physicsObjHavok; // Offset: 0x1B48

    idMover::moveState_t move; // Offset: 0x28A8

    moverModifierFunction_t modifierIgnoreFlags; // Offset: 0x28F0

    // contents flag for the mover
    contentsFlags_t contentsFlags; // Offset: 0x28F4

    // true if we are moving forward on the spline
    bool forwardSpline; // Offset: 0x28F8

    // speed (in degrees per second) to rotate mover (ie: yaw = 180 rotates half-way in 1 second)
    idAngles rotate_speed; // Offset: 0x28FC

    // initial speed to start with {{ units = m / s }}
    float initialSpeed; // Offset: 0x2908

    // if true will reset the spline path to its initial position
    bool resetPathOnCompletion; // Offset: 0x0

    // Allows the mover register collisions with triggers
    bool canActivateTriggers; // Offset: 0x0

    // disables the ability for the player to jump
    bool disablePlayerJump; // Offset: 0x0

    // disables the ability for the player to dash
    bool disableDashAbility; // Offset: 0x0

    // if true the interactable render model will draw in its deferred position
    bool drawOnDeferredPos; // Offset: 0x0

    // if true disable all attachments to this mover when the mover gets disabled
    bool disableAttachmentsOnDeactivate; // Offset: 0x0

    // if true we are executing in a custom job loop
    bool inCustomJob; // Offset: 0x290D

    // restart from dormancy
    bool dormancyRecover; // Offset: 0x290E

    // MS version of vars.. GT version of move_speed
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > moveSpeedGT; // Offset: 0x2910

    // GT version of move_time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > moveTimeGT; // Offset: 0x2918

    // GT version of rotate_time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > rotateTimeGT; // Offset: 0x2920

    // GT version of deceltime
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > decelTimeGT; // Offset: 0x2928

    // GT version of acceltime
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > accelTimeGT; // Offset: 0x2930

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > physEndTime; // Offset: 0x2938

    idAngles dest_angles; // Offset: 0x2940

    idQuat dest_quat; // Offset: 0x294C

    // {{ units = m }}
    idVec3 dest_position; // Offset: 0x295C

    idCurve_Spline < idVec3 >* spline; // Offset: 0x2968

    idSplinePath* splinePath; // Offset: 0x2970

    // a pointer to the modifier list that is stored on my current spline
    idList < splineMoverModifier_t , TAG_IDLIST , false >* splineMoverModifiers; // Offset: 0x2978

    // index into the next modifier we are going to hit
    int splineModifierIndex; // Offset: 0x2980

    // {{ units = m }}
    float splineModifierLengthOffset; // Offset: 0x2984

    // {{ units = m }}
    float splineTotalLength; // Offset: 0x2988

    bool useSplineAngles; // Offset: 0x298C

    bool useSplineAnglesFromCurrent; // Offset: 0x298D

    bool ignoreSplinePitch; // Offset: 0x298E

    // {{ units = m }}
    idVec3 move_delta; // Offset: 0x2990

    bool stopRotation; // Offset: 0x299C

    idMover::moverCommand_t lastCommand; // Offset: 0x29A0

    bool skipInitialForcedModifiers; // Offset: 0x29A4

    // do we need to apply an animation offset on the next frame to account for frame delay?
    bool applyAnimationOffsetOnNextFrame; // Offset: 0x29A5

    // animation Axis to set on next Frame
    idMat3 animationOffsetAxis; // Offset: 0x29A8

    // animation Translation to apply on next Frame {{ units = m }}
    idVec3 animationOffsetTranslation; // Offset: 0x29CC

    // amount of damage required to activate target list [0 == does not take damage]
    float health; // Offset: 0x29D8

    // diameter of the bounding box + min distance to player
    float threadActiveDistance; // Offset: 0x29DC

    // the max zone to use for variable framerate [ 0-8 ] where 0 is always running.
    int maxVariableFramerateZone; // Offset: 0x29E0

    idMover::rotationState_t rot; // Offset: 0x29E8

    // crush damage set up
    crushDamage_t crushDamage; // Offset: 0x2A18

    // true if mover can't push blockers ( turn off if you want player to interact with this )
    bool noPush; // Offset: 0x2A58

    // allows props to be pushed if noPush == off
    bool allowPropPush; // Offset: 0x2A59

    // allows ai to be pushed if noPush == off
    bool allowAiPush; // Offset: 0x2A5A

    // {{ units = m }}
    idVec3 lastOrigin; // Offset: 0x2A5C

    // allows triggering to alter "deceltime" and restore it's value
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > originalDecelTime; // Offset: 0x2A68

    // allows triggering to alter "acceltime" and restore it's value
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > originalAccelTime; // Offset: 0x2A70

    bool lockFinalAnglesWhenFinished; // Offset: 0x2A78

    bool debugCmdChange; // Offset: 0x2A79

    bool activatedOnFirstStart; // Offset: 0x2A7A

    int initialPushFlags; // Offset: 0x2A7C

    // does moverMonitor_t need to be exposed? adjusts speed when within specific distance (units) from entity
    idMover::moverMonitor_t speedAdjust; // Offset: 0x2A80

    // Allow the mover to touch triggers
    idTouchComponent touchComponent; // Offset: 0x2AC8

    // Internal flag to disable touch component if no clip model is used
    bool touchComponentEnabled; // Offset: 0x2B40

    // External entity to pass all damage to
    idManagedClassPtr < idEntity > damageRecipient; // Offset: 0x2B48

    idStaticList < idMover::entRefCount_t , 16 , false , TAG_IDLIST > entRefCount; // Offset: 0x2B68

    // the offset of the sound pos
    idVec3 soundOriginOffset; // Offset: 0x2C00

    // mover scripter
    MoverScripter moverScripter; // Offset: 0x2C10

    // forces CRUSH flag on pusher
    bool forcePushCrush; // Offset: 0x2D18

    // whether we allow ledge grabs onto this mover or not
    bool allowLedgeGrab; // Offset: 0x2D19

    bool debuggingMover; // Offset: 0x2D1A

    idManagedClassPtr < idEntity > snapCachedActivator; // Offset: 0x2D20

    // if true, demon players do not collide with this entity
    bool demonPlayersPassThrough; // Offset: 0x2D40

    // If the current instance is a client, hide this mover
    bool hideIfInstanceIsClient; // Offset: 0x2D41

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > catchupTimePos; // Offset: 0x2D48

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > catchupTimeAng; // Offset: 0x2D50

}; // Size: 0x2D58
