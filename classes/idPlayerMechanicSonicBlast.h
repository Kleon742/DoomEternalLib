struct idPlayerMechanicSonicBlast : idPlayerMechanic
{
    enum sonicBlastState_t : int
    {
        NO_STATE = -1,
        SONIC_BLAST_IDLE = 0,
        SONIC_BLAST_FREE_MOVEMENT = 1,
        SONIC_BLAST_SPLINE_MOVEMENT = 2,
        SONIC_BLAST_ENDPOINT_MOVEMENT = 3,
        SONIC_BLAST_LANDING = 4,
        SONIC_BLAST_RESTORE = 5,
        MAX_STATES = 6
    };

    enum sonicBlastTransition : int
    {
        NO_TRANSITION = -1,
        SBLST_FREE_MOVE = 0,
        SBLST_SPLINE_MOVE = 1,
        SBLST_POINT_MOVE = 2,
        SBLST_LANDED = 3,
        SBLST_RESET = 4,
        MAX_TRANSITIONS = 5
    };

    struct chargedBoost_t
    {
        // the amount of time to apply the charge
        idTypesafeTime < int , millisecondUnique_t , 1000 > chargeTimeMs; // Offset: 0x0

        // the amount of time we must hold the button down to charge stage
        idTypesafeTime < int , millisecondUnique_t , 1000 > holdDownTimeMs; // Offset: 0x4

        // the speed to execute the charge at {{ units = m / s }}
        float speed; // Offset: 0x8

        // default sound to play on stage
        idSoundEvent* boosStageSound; // Offset: 0x10

    }; // Size: 0x18

    typedef idInternalFsm < idPlayerMechanicSonicBlast , idPlayerMechanicSonicBlast::sonicBlastState_t , idPlayerMechanicSonicBlast::sonicBlastTransition > idSonicBlastFSM;

    // default values default sound to play when taking off
    idSoundEvent* takeOffSoundDef; // Offset: 0x28

    // default sound to play during the blast
    idSoundEvent* sonicBlastSoundDef; // Offset: 0x30

    // default sound to play when landing
    idSoundEvent* landingSoundDef; // Offset: 0x38

    // default fp decl
    idDeclFX* fxDeclFPDef; // Offset: 0x40

    // damage Ai receives when hit by player during ability
    idDeclDamage* damageDeclDef; // Offset: 0x48

    // speed of movement {{ units = m / s }}
    float speedDef; // Offset: 0x50

    // view shake decl
    idDeclAdvancedViewShake* declViewShake; // Offset: 0x58

    // the charged boost levels
    idList < idPlayerMechanicSonicBlast::chargedBoost_t , TAG_IDLIST , false > chargedBoostLevels; // Offset: 0x60

    // externally modified values used to determine the triggering entity info
    idEntity* triggeringEntity; // Offset: 0x78

    // used to set the destination of the blast if needed
    idEntity* destinationEntity; // Offset: 0x80

    // used to set the placement of the destination {{ units = m }}
    idVec3 destinationPoint; // Offset: 0x88

    // the landing direction in case we need to continue the vel
    idVec3 landingDir; // Offset: 0x94

    // speed of movement {{ units = m / s }}
    float curSpeed; // Offset: 0xA0

    // the time we want to restrict the blast for
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > restrictedTime; // Offset: 0xA8

    // player view direction dictates where we go
    bool restrictedView; // Offset: 0xB0

    // bring hands up instead of weapon during blast
    bool bringUpHands; // Offset: 0xB1

    // whether we want the gravity to be on
    bool gravityOn; // Offset: 0xB2

    // whether we want to retain the velocity on arrival or collision
    bool retainVelocity; // Offset: 0xB3

    // moves the player parallel to the entry point of the trigger in the direction indicated
    bool parallelMovement; // Offset: 0xB4

    // sound to play when taking off
    idSoundEvent* takeOffSound; // Offset: 0xB8

    // sound to play during the blast
    idSoundEvent* sonicBlastSound; // Offset: 0xC0

    // sound to play when landing
    idSoundEvent* landingSound; // Offset: 0xC8

    // used to trigger a separate rail ride mechanic
    idManagedClassPtr < idSplinePath > currentSplineEnt; // Offset: 0xD0

    // spline container {{ ___ts = m }}
    idCurve_Spline < idVec3 >* curveSpline; // Offset: 0xF0

    // the time in gametime to complete the spline
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > curveCompletionTime; // Offset: 0xF8

    // the time the player pressed the boost from the triggering entity
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargedBoostTime; // Offset: 0x100

    // the percentage of the velocity to retain if necessary
    float retainVelocityPct; // Offset: 0x108

    // variables that can't be changed externally used to store the gravity scale
    float prevGravityScale; // Offset: 0x10C

    // generic timestamp
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeStamp; // Offset: 0x110

    // used to calculate boost
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > boostTime; // Offset: 0x118

    // used to calculate boost
    int boostIndex; // Offset: 0x120

    // the sound handle to the last sound we are playing
    bool sonicBlastSndPlaying; // Offset: 0x124

    // sound to play during the blast
    idSoundEvent* sonicBlastSoundCur; // Offset: 0x128

    // state machine
    idInternalFsm < idPlayerMechanicSonicBlast , idPlayerMechanicSonicBlast::sonicBlastState_t , idPlayerMechanicSonicBlast::sonicBlastTransition >* sonicBlastFSM; // Offset: 0x130

    // the global fx manager handle
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x138

    // cache whether fx is initialized
    bool fxHandleInit; // Offset: 0x140

    // did we hide the hands
    bool hidFPHands; // Offset: 0x141

}; // Size: 0x148
