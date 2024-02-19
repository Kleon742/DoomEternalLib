struct idMidnightKeyPropLookAt : idMidnightKeyProperties
{
    // Target group. If empty, AI focus is deactivated (overrides all other parameters)
    idMidnightTargetGroupName targetGroup; // Offset: 0x10

    // weightCurve
    idCurveTangent < float , float > weightCurveTangent; // Offset: 0x18

    // Where to look on the target. Will be replaced by joint name later.
    lookAtAimPoint_t aimPoint; // Offset: 0x80

    // Joint's name. If set, this overrides the aim point
    idAtomicString jointName; // Offset: 0x88

    // <WIP> if true, AI will rotate to face the target
    bool rotateBody; // Offset: 0x90

    // If the ai can choose target for itself
    bool canChangeTarget; // Offset: 0x91

    // deprecated curves Old deprecated data -> keeped for compatibility
    idLookupTable weightCurve; // Offset: 0x94

    // define the weight curve of the clip
    idCurveTgt_deprecated < float , float > weightCurveTgt; // Offset: 0x2B8

}; // Size: 0x320
