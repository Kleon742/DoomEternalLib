struct idMidnightKeyPropMotionAnim : idMidnightKeyProperties
{
    // Animation to play
    idAtomicString animName; // Offset: 0x10

    // <DEPRECATED> If the origin stored in the animation should be used as start position
    bool useAnimationOrigin; // Offset: 0x18

    // Joint in the animation to take motion from
    idStr jointName; // Offset: 0x20

    // indicate if the animation is stretched
    bool isStretched; // Offset: 0x50

    // weight curve
    idCurveTangent < float , float > weightCurveTangent; // Offset: 0x58

}; // Size: 0xC0
