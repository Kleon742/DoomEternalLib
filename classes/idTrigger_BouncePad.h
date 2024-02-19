struct idTrigger_BouncePad : idTrigger
{
    enum failedTrajectoryBehavior_t : int
    {
        FTB_UP = 0,
        FTB_TOWARDS_TARGET = 1,
        FTB_NOTHING = 2
    };

    // The pad will attempt to apply a velocity such that the player lands on this point.
    idManagedClassPtr < idInfo_BounceDestination > destination; // Offset: 0xC90

    // How the pad reacts when it can't find a valid trajectory to the destination
    idTrigger_BouncePad::failedTrajectoryBehavior_t failedTrajectoryBehavior; // Offset: 0xCB0

    // The speed applied to players that touch this trigger in units per second. Also used if there is no destination set, or there are no valid trajectories. {{ units = m / s }}
    float launchSpeed; // Offset: 0xCB4

    // compute the parabola based on flight time
    bool useFlightTime; // Offset: 0xCB8

    // The amount of time a player should be in flight (will defer to m_launchSpeed if no destination is set, or no valid trajectory could be found)
    float flightTime; // Offset: 0xCBC

    // by default we use the higher arc if there are two - this allows the lower to be used instead
    bool useLowArcInsteadOfHigh; // Offset: 0xCC0

    // If set, player movement will be locked for the duration of the bounce pad 'air time' (by default players can steer mid air)
    bool lockPlayerMovement; // Offset: 0xCC1

    // If set, using dash during the arc produced by the bounce pad will not affect the player's speed negatively -- (won't reduce player velocity)
    bool noDashSlowdown; // Offset: 0xCC2

    // If set, demon player movement will be locked for the duration of the bounce pad 'air time' (by default players can steer mid air)
    bool lockDemonPlayerMovement; // Offset: 0xCC3

    // if set, won't allow a player to double jump after using the bounce pad.
    bool clearPlayerDoubleJump; // Offset: 0xCC4

    // FX to play at the player's location when he gets launched.
    idDeclFX* launchFX; // Offset: 0xCC8

    // Min time that needs to elapse before playing the launchFX for a player again
    idTypesafeTime < int , millisecondUnique_t , 1000 > minTimeForLaunchFX; // Offset: 0xCD0

    // If there is no "destination" set, you will need to set a bot destination for the AAS here. ONLY use this if you're not setting "destination".
    idList < idBotDestinationInfo , TAG_IDLIST , false > botDestinations; // Offset: 0xCD8

    // particle system - specify an emitter that inherits from func/emitter
    idDeclEntityDef* particleEmitterEntityDef; // Offset: 0xCF0

    // in trigger entity space
    idVec3 particleEmitterOffset; // Offset: 0xCF8

    idParticleEmitter* particleEmitter; // Offset: 0xD08

    // whether to send client reliable start fx w/ FX_DEMONPLAYER_BOUNCEPAD_START
    bool playDemonPlayerBouncePadFX; // Offset: 0xD10

    // player will auto-connect to wall climb surfaces if wall is encountered within this amount of time (in MS) (after pad was activated)
    idTypesafeTime < int , millisecondUnique_t , 1000 > autoWallClimbTimeMS; // Offset: 0xD14

    // Air Control rune is disabled for this amount of time after using this bounce pad
    idTypesafeTime < int , millisecondUnique_t , 1000 > disableAirContolTimeMS; // Offset: 0xD18

    bool networkedActivatable; // Offset: 0xD1C

    bool inCustomJob; // Offset: 0xD1D

    // Used if we only want a single owning entity to activate
    idManagedClassPtr < idActor > owner; // Offset: 0xD20

}; // Size: 0xD40
