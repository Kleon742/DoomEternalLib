struct idDeclProp_ThinkSoulDropComponent : idDeclProp_ThinkComponent
{
    // How hard to push toward the nearest player.
    float attractPhysicsImpulse; // Offset: 0xD0

    // Range to start the physics impulse that pulls in the head.
    float attractPhysicsRange; // Offset: 0xD4

    // How long should the soul rise for.
    idTypesafeTime < int , millisecondUnique_t , 1000 > soulRisingTimeMilliseconds; // Offset: 0xD8

    // What speed should the soul rise at.
    int soulRisingVelocity; // Offset: 0xDC

    // Should the soul collide with geo while seeking towards a player.
    bool shouldCollideWhenSeeking; // Offset: 0xE0

}; // Size: 0xE8
