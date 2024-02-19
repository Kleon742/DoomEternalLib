struct idTrigger_Push : idTrigger
{
    // direction to push entities
    idVec3 pushDirection; // Offset: 0xC90

    // the amount of force to push the activator with {{ units = m / s }}
    float pushForce; // Offset: 0xC9C

    // clears all existing velocity of activator and only applies force
    bool clearExistingVelocity; // Offset: 0xCA0

    // maintains constant speed in pushDirection. when false, force is additive and can get progressively faster
    bool constantVelocity; // Offset: 0xCA1

    // is the pusher active when spawned?
    bool isActive; // Offset: 0xCA2

    // use the push direction only zeroing out the AI's velocity
    bool usePushDirectionOnly; // Offset: 0xCA3

    // when specific monsters are ticked, only affect those
    aiMonsterType_t onlyAffectThese; // Offset: 0xCA8

    // the dampining value used for the acceleration
    float dampining; // Offset: 0xCB0

    // maintains accumulation of the ( pushDirection.Normalize * pushForce ) * dampining
    idVec3 acceleration; // Offset: 0xCB4

}; // Size: 0xCC0
