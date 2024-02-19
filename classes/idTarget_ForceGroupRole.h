struct idTarget_ForceGroupRole : idTarget
{
    // role to force onto AI
    encounterGroupRole_t role; // Offset: 0xB88

    // true if you want the AI to be locked into this role, ignoring what group manager tells it
    bool lock; // Offset: 0xB8C

    // true if you want the forcing done to the activator of this target
    bool targetActivator; // Offset: 0xB8D

}; // Size: 0xB90
