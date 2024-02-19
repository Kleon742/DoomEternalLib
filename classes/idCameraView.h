struct idCameraView : idCamera
{
    // {{ units = m }}
    idVec3 viewOrigin; // Offset: 0xBB0

    idAngles viewAngles; // Offset: 0xBBC

    // target the view to this entity - if none, keeps the current angles
    idManagedClassPtr < idEntity > target; // Offset: 0xBC8

    // orbit the target
    bool orbit; // Offset: 0xBE8

    // offset from the target origin {{ units = m }}
    idVec3 orbitOffset; // Offset: 0xBEC

    // compensate for timescale
    bool highSpeed; // Offset: 0xBF8

    // angle adjustment per frame
    float orbitAdjust; // Offset: 0xBFC

    // starting angle for orbit
    float startingAngle; // Offset: 0xC00

    // radius for orbit {{ units = m }}
    float orbitRadius; // Offset: 0xC04

    // if true return to the saved player control
    bool returnToSavedControl; // Offset: 0xC08

    // if true force the player view to no fade
    bool forcePlayerNoFade; // Offset: 0xC09

    // current angle
    float currentAngle; // Offset: 0xC0C

    bool fading; // Offset: 0xC10

    // use the physics set in the child classes' Draw function to determin angles
    bool usePhysicsToGetAngles; // Offset: 0xC11

}; // Size: 0xC18
