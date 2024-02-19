struct idDestructibleImpulse
{
    // Linear Impulse Direction.
    idVec3 linearDirection; // Offset: 0x0

    // Speed of the linear impulse.
    float linearSpeed; // Offset: 0xC

    // Angular Impulse Direction.
    idVec3 angularDirection; // Offset: 0x10

    // Speed of the angular impulse.
    float angularSpeed; // Offset: 0x1C

}; // Size: 0x20
