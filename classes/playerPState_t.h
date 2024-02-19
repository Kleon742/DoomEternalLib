struct playerPState_t
{
    // {{ units = m }}
    idVec3 localOrigin; // Offset: 0x0

    // {{ units = m }}
    idVec3 worldOrigin; // Offset: 0xC

    // {{ units = m / s }}
    idVec3 velocity; // Offset: 0x18

    // {{ units = m / s }}
    idVec3 relativeGroundVelocity; // Offset: 0x24

    // {{ units = m / s }}
    idVec3 nonPushedVelocity; // Offset: 0x30

    // {{ units = m / ( s * s ) }}
    idVec3 acceleration; // Offset: 0x3C

    // stores the velocity contribution from the push translation to incorporate into the next slide move for better behavior than just updating origins {{ units = m / s }}
    idVec3 pushVelocityFromTranslate; // Offset: 0x48

    // stores the velocity contribution from the push rotation to incorporate into the next slide move for better behavior than just updating origins {{ units = m / s }}
    idVec3 pushVelocityFromRotate; // Offset: 0x54

    // stores the center at which we are rotating around {{ units = m }}
    idVec3 pushRotateCenter; // Offset: 0x60

    // the push velocity that was added at the time of leaving the ground {{ units = m / s }}
    idVec3 groundPushVelocity; // Offset: 0x6C

    // the spawn id of the ground that was left
    idSpawnId groundSpawnId; // Offset: 0x78

    // the spawn id of the ground that was left
    idSpawnId logicGroundSpawnId; // Offset: 0x7C

    // this needs to be here so a rotating object can rotate the player's view
    idAngles deltaViewAngles; // Offset: 0x80

    // {{ units = m }}
    float stepUp; // Offset: 0x8C

    pmtype_t movementType; // Offset: 0x90

    int movementFlags; // Offset: 0x94

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > movementTime; // Offset: 0x98

    bool groundPlane; // Offset: 0xA0

    float waterLevel; // Offset: 0xA4

    float waterViscosity; // Offset: 0xA8

    // {{ units = m }}
    float waterBreachLevel; // Offset: 0xAC

    // are we transitioning from in water to out.
    bool waterTransitionOut; // Offset: 0xB0

    // are we transitioning from out of water to in.
    bool waterTransitionIn; // Offset: 0xB1

    // whether we collided with non ground entity
    bool collision; // Offset: 0xB2

}; // Size: 0xB8
