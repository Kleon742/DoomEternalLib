struct idEscapePod : idTrigger
{
    enum state_t : int
    {
        S_INACTIVE = 0,
        S_ACTIVE = 1
    };

    enum returnState_t : int
    {
        RS_NOT_RETURNING = 0,
        RS_RETURNING = 1
    };

    struct splinePathInfo_t
    {
        // this spline
        idManagedClassPtr < idSplinePath > spline; // Offset: 0x0

        // default spline to jump to at end, or NULL if no default jump
        idManagedClassPtr < idSplinePath > jumpSpline; // Offset: 0x20

    }; // Size: 0x40

    struct splineInfo_t
    {
        // spline
        idCurve_Spline < idVec3 >* spline; // Offset: 0x0

        // total length stored to avoid expensive calculations
        float totalLength; // Offset: 0x8

        // index of spline to jump to when end is reached, or -1 for no default
        int jumpSpline; // Offset: 0xC

    }; // Size: 0x10

    // need this because triggers have static physics, which doesn't move or clip against anything
    idHavokPhysics_RigidBody havokPhysObj; // Offset: 0xC90

    // need this to be able to touch triggers
    idTouchComponent touchComponent; // Offset: 0xEE0

    // list of splines to follow, first spline in list is the starting spline
    idList < idEscapePod::splinePathInfo_t , TAG_IDLIST , false > splinePathList; // Offset: 0xF58

    // spline curve and stored info
    idList < idEscapePod::splineInfo_t , TAG_IDLIST , false > splineInfoList; // Offset: 0xF70

    // index of spline currently being traversed
    int curSpline; // Offset: 0xF88

    // look how many degrees away from forward can the view move?
    float viewConeDegs; // Offset: 0xF8C

    // movement acceleration (m/s2)
    float accel; // Offset: 0xF90

    // min speed (m/s)
    float minSpeed; // Offset: 0xF94

    // max speed (m/s)
    float maxSpeed; // Offset: 0xF98

    // acceleration perpendicular to spline (m/s2)
    float perpAccel; // Offset: 0xF9C

    // friction applied to perp velocity component perpendicular to the input direction
    float perpFriction; // Offset: 0xFA0

    // max speed perpendicular to spline (m/s)
    float perpMaxSpeed; // Offset: 0xFA4

    // max distance perpendicular to spline (m)
    float perpMaxDist; // Offset: 0xFA8

    // how many MS with no input before auto-return behavior kicks in
    idTypesafeTime < int , millisecondUnique_t , 1000 > noInputReturnMS; // Offset: 0xFAC

    // stiffness of spring for the return behavior
    float perpReturnSpringK; // Offset: 0xFB0

    // sounds start sound
    idSoundEvent* startSound; // Offset: 0xFB8

    // stop sound
    idSoundEvent* stopSound; // Offset: 0xFC0

    // forward thrust sound with parameter 0 at slowest speed, 1 at fastest speed
    idSoundEvent* thrustForwardRTPCSound; // Offset: 0xFC8

    // thrust up start sound
    idSoundEvent* thrustUpStartSound; // Offset: 0xFD0

    // thrust up stop sound
    idSoundEvent* thrustUpStopSound; // Offset: 0xFD8

    // thrust down start sound
    idSoundEvent* thrustDownStartSound; // Offset: 0xFE0

    // thrust down stop sound
    idSoundEvent* thrustDownStopSound; // Offset: 0xFE8

    // thrust right start sound
    idSoundEvent* thrustRightStartSound; // Offset: 0xFF0

    // thrust right stop sound
    idSoundEvent* thrustRightStopSound; // Offset: 0xFF8

    // thrust left start sound
    idSoundEvent* thrustLeftStartSound; // Offset: 0x1000

    // thrust left stop sound
    idSoundEvent* thrustLeftStopSound; // Offset: 0x1008

    // thrusting up sound is playing
    bool thrustUpSoundPlaying; // Offset: 0x1010

    // thrusting down sound is playing
    bool thrustDownSoundPlaying; // Offset: 0x1011

    // thrusting right sound is playing
    bool thrustRightSoundPlaying; // Offset: 0x1012

    // thrusting left sound is playing
    bool thrustLeftSoundPlaying; // Offset: 0x1013

    // current state
    idEscapePod::state_t state; // Offset: 0x1014

    // to track how long has elapsed without move input
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastInputTime; // Offset: 0x1018

    // return spring
    idSpring < idVec2 > perpReturnSpring; // Offset: 0x1020

    // returning or not
    idEscapePod::returnState_t perpReturnState; // Offset: 0x1064

    // current speed along spline
    float speed; // Offset: 0x1068

    // perpendicular offset from spline
    idVec2 perpVel; // Offset: 0x106C

    // perpendicular offset from spline
    idVec2 perpPos; // Offset: 0x1074

    float totalDist; // Offset: 0x107C

    // player
    idPlayer* player; // Offset: 0x1080

    idHavokQueryId moveQuery; // Offset: 0x1088

    idHavokQueryId havokMoveQuery; // Offset: 0x1090

    // don't allow auto-reactivation unless desired
    bool canActivateAgain; // Offset: 0x1098

    // to avoid jumping more than intended, require input to be released before can jump again
    bool canJump; // Offset: 0x1099

    // crash view shake to activate when a crash occurs
    idDeclAdvancedViewShake* crashViewShake; // Offset: 0x10A0

    // crash sound
    idSoundEvent* crashSound; // Offset: 0x10A8

    // record crash location so that duplicate crashes at the same location on subsequent frames can be ignored
    idVec3 crashLocation; // Offset: 0x10B0

    // records the last crash frame to aid in ignoring subsequent crashes on the same obstacle
    int crashFrame; // Offset: 0x10BC

    // after a crash occurs, ignore future crashes within this distance
    float crashIgnoreRadius; // Offset: 0x10C0

    // speed to reduce to after a crash
    float crashSpeed; // Offset: 0x10C4

    // damage inflicted on crash targets
    idDeclDamage* inflictDamageDecl; // Offset: 0x10C8

    // damage inflicted on player in a crash
    idDeclDamage* playerDamageDecl; // Offset: 0x10D0

}; // Size: 0x10D8
