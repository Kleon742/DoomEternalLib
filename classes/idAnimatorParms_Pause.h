struct idAnimatorParms_Pause : idAnimatorParms_Base
{
    // animation to start
    idMD6Anim* anim; // Offset: 0x30

    // frame to start on
    float startFrame; // Offset: 0x38

    // normalized frame to start on (if >= 0.0)
    float normalizedStartFrame; // Offset: 0x3C

}; // Size: 0x40
