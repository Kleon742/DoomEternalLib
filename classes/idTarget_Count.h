struct idTarget_Count : idTarget
{
    // Number of times target must be triggered before it activates its targets
    int count; // Offset: 0xB88

    // Time to wait (in seconds) after target has been triggered before activating targets
    float delay; // Offset: 0xB8C

    // Name of script function to call when activated. function definition must be defined as "void funcname( entity activatedEntity, entity activator )"
    idStr call; // Offset: 0xB90

    // true if counter should reset after reaching count
    bool repeat; // Offset: 0xBC0

    // if true a live activator ( most likely player ) must be present to activate target
    bool checkLiveActivator; // Offset: 0xBC1

    // if true adjust the time as if each frame takes 16ms instead of 16.666ms
    bool adjustFor16msFrames; // Offset: 0xBC2

    // activate ourselves automatically this long ( in seconds ) after spawn, < 0 implies no self activation
    float selfActivateDelay; // Offset: 0xBC4

    // Suppresses repeated triggering until interval passes (set to 0 for no suppression ever)
    float waitInterval; // Offset: 0xBC8

    // Minimum amount of time to delay (in seconds) before target activation. If greater than zero, this overrides normal delay.
    float delayMin; // Offset: 0xBCC

    // Maximum amount of time to delay (in seconds) before target activation. If greater than zero, this overrides normal delay.
    float delayMax; // Offset: 0xBD0

    // Only applicable if the Entity is Network Replicated. If True, the relay will also call the activation event on the client as well as the server unless an Entity is activates is network replicated. This is helpful for Non-gameplay impacting entities. It does not simulate on NetworkReplicated Entities in target list as that Entity is assumed to handle the replication for itself
    bool clientSimulateActivation; // Offset: 0xBD4

    // the value to adjust by when frames are 16ms
    float adjust16ms; // Offset: 0xBD8

    // current count
    int num; // Offset: 0xBDC

    // time to activate this target's targets
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > activateTime; // Offset: 0xBE0

    // when can the relay trigger again (handles waitInterval if any)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextPermittedActivateTime; // Offset: 0xBE8

    idManagedClassPtr < idEntity > storedActivator; // Offset: 0xBF0

    idNetEvent < 15 > activateNetEvent; // Offset: 0xC10

}; // Size: 0xC28
