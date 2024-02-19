struct idAICondition_Shared_IsMuzzleAimedAtTarget : idAICondition
{
    // the muzzle type to check
    aiFoci_t muzzleType; // Offset: 0x18

    // if the angle is <= to this then it counts as aiming at the target
    float maxAngle; // Offset: 0x1C

}; // Size: 0x20
