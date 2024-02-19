struct idTrigger_Repulsor : idTrigger
{
    // direction to push the activator
    idVec3 pushDirection; // Offset: 0xC90

    // destination point to push entities towards {{ units = m }}
    idVec3 pushDestination; // Offset: 0xC9C

    // the amount of force to push the activator with {{ units = m / s }}
    float pushForce; // Offset: 0xCA8

    // falloff radius when using destination point. set to 0.0 or less to disable. any objects further away than this radius will not be affected by a force {{ units = m }}
    float pushDestinationFalloff; // Offset: 0xCAC

    // use pushDestination instead of pushDirection
    bool useDestination; // Offset: 0xCB0

    // clears all existing velocity of activator and only applies force
    bool clearExistingVelocity; // Offset: 0xCB1

}; // Size: 0xCB8
