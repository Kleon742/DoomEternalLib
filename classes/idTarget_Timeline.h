struct idTarget_Timeline : idBloatedEntity
{
    // output event manager
    idComponentTimeLine componentTimeLine; // Offset: 0xB88

    // Number of times target must be triggered before it activates its targets
    int count; // Offset: 0xC08

    // Name of script function to call when activated. function definition must be defined as "void funcname( entity activatedEntity, entity activator )"
    idStr call; // Offset: 0xC10

    // true if counter should reset after reaching count
    bool repeat; // Offset: 0xC40

    // Suppresses repeated triggering until interval passes (set to 0 for no suppression ever)
    float waitInterval; // Offset: 0xC44

    // When set to true and this Entity is marked to Network Replicate, it will run the Timeline in parallel on both the Server and Client. Any Entities on the timeline that are network replicated will be skipped on the Client as they are assumed to be Server Authoritative
    bool allowClientsToStart; // Offset: 0xC48

    // If the timeline is running while
    bool shouldForceTimelineFinish; // Offset: 0xC49

    // Set this to true if the timeline is tied to the GameChallenge and its lifecycle. This way the game challenge can intercept if need be
    bool timelineMustRegisterWithGameChallenge; // Offset: 0xC4A

    // Used for Event responses upon when a timeline activates
    idNetEvent < 15 > clientActivationEvent; // Offset: 0xC50

    // current count
    int num; // Offset: 0xC68

    // saved initial count value
    int savedCount; // Offset: 0xC6C

    // when can the relay trigger again (handles waitInterval if any)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextPermittedActivateTimeGT; // Offset: 0xC70

}; // Size: 0xC78
