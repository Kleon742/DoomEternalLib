struct idShared_LightFalter : idAIState
{
    bool hasReentered; // Offset: 0x130

    // Animation to play after pain, if empty, use current
    idAnimWebPath_Atomic destAnim; // Offset: 0x138

    // blend frames into anim, if -1 use value of ai_painBlendFrames
    int blendFrames; // Offset: 0x178

    // if true, treat this as an animation action ( start a new action, use ChildFinished transition )
    bool animAction; // Offset: 0x17C

    // if true, return to standard idle after pain
    bool returnToIdle; // Offset: 0x17D

}; // Size: 0x180
