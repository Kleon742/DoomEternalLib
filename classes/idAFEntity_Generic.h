struct idAFEntity_Generic : idAnimatedEntity
{
    // articulated figure properties
    idAnimator_AF afProperties; // Offset: 0x1B48

    // once edited these entities will never become inactive
    bool isBeingEdited; // Offset: 0x2010

    // true if doesn't drop
    bool noDrop; // Offset: 0x2011

    // initial velocity {{ units = m / s }}
    idVec3 initVelocity; // Offset: 0x2014

    // Unknown! Comment me! {{ units = radians / s }}
    idVec3 initAVelocity; // Offset: 0x2020

    // initial velocity decay
    float initVelocityDelay; // Offset: 0x202C

    // Unknown! Comment me!
    float initAVelocityDelay; // Offset: 0x2030

}; // Size: 0x2038
