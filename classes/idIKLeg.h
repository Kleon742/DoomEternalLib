struct idIKLeg
{
    // The foot bone's connected to the ankle bone
    idAtomicString foot; // Offset: 0x0

    // The ankle bone's connected to the knee bone
    idAtomicString ankle; // Offset: 0x8

    // The knee bone's connected to the hip bone
    idAtomicString knee; // Offset: 0x10

    // The hip bone's connected to the waist bone
    idAtomicString hip; // Offset: 0x18

    // The forward bone's also connected to the knee bone
    idAtomicString forward; // Offset: 0x20

    // The footstep this leg cooresponds to.
    footStepType_t footstep; // Offset: 0x28

    // the knee direction in model space for this leg (if (0,0,0), use the knee dir from the decl)
    idVec3 kneeDir; // Offset: 0x2C

    // Offset from the model center where this leg will be pulled back if the leg would fall off the ledge (when pullBackToEdge is set) {{ units = m }}
    idVec3 pullBackOffset; // Offset: 0x38

}; // Size: 0x48
