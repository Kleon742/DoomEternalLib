struct idTarget_Count_Random : idTarget
{
    // Number of times target must be triggered before it activates its targets
    int count; // Offset: 0xB88

    // Time to wait (in seconds) after target has been triggered before activating targets
    float delay; // Offset: 0xB8C

    // Name of script function to call when activated. function definition must be defined as "void funcname( entity activatedEntity, entity activator )"
    idStr call; // Offset: 0xB90

    // true if counter should reset after reaching count
    bool repeat; // Offset: 0xBC0

    // the number of targets to activate from the possible targets
    int numToActivate; // Offset: 0xBC4

    // true if we want to activate these targets incrementally with some delay between activations
    bool incrementalActivate; // Offset: 0xBC8

    // ( incrementalActivate must be true ) min time to wait (in seconds) between activations
    float incrementalDelayMin; // Offset: 0xBCC

    // ( incrementalActivate must be true ) max time to wait (in seconds) between activations
    float incrementalDelayMax; // Offset: 0xBD0

    // current count
    int num; // Offset: 0xBD4

    // time to activate this target's targets
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > activateTime; // Offset: 0xBD8

    idManagedClassPtr < idEntity > storedActivator; // Offset: 0xBE0

}; // Size: 0xC00
