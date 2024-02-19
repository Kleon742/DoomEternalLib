struct idTarget_ApplyImpulse : idTarget
{
    // how much impulse to apply per frame ( set the trigger to 0 delay ) ( 5000 is not much.. 50000 is a lot for vehicles ) {{ units = kg * m / s }}
    float impulse; // Offset: 0xB88

    // angular velocity {{ units = radians / s }}
    idVec3 angular; // Offset: 0xB8C

    // radius for breakables {{ units = m }}
    float breakableRadius; // Offset: 0xB98

    // impulse for breakables ( different than normal impulse for other entities ) {{ units = kg * m / s }}
    float breakableImpulse; // Offset: 0xB9C

    // falloff for breakables
    float breakableFalloff; // Offset: 0xBA0

    // angular for breakables
    float breakableAngular; // Offset: 0xBA4

    // delay for breakables
    float breakableDelay; // Offset: 0xBA8

    // duration for breakables
    float breakableDuration; // Offset: 0xBAC

}; // Size: 0xBB0
