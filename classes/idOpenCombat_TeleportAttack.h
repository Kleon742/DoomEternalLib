struct idOpenCombat_TeleportAttack : idAIState
{
    // any extra move flags needed for fake path functionality
    moveFlags_t moveFlags; // Offset: 0x130

    // update goal origin after AI has traveled this fraction of the original calculated path
    float goalUpdatePathFraction; // Offset: 0x138

    // time in seconds to predict enemy position for updating teleport goal
    idTypesafeTime < float , secondUnique_t , 1 > enemyPosPredictTime; // Offset: 0x13C

    // (in degrees) if > 0, add a random angle offset up to this maximum value. if == 0, use actual calculated arrival angle.
    idTypesafeNumber < float , DegreesUnique_t > maxArrivalAngleOffset; // Offset: 0x140

    // bias scalar in [0.0, 1.0] to favor random angles towards the maximum value (0 = normal distribution, 1 = always max).
    float maxAngleBias; // Offset: 0x144

    // attempt to find valid target axis to find arrival angle (ie, directly facing target axis). if false, or can't find valid target-relative axis, just use dir to target
    bool arrivalTargetRelative; // Offset: 0x148

    // if non-empty, grab path data ID from temp memory with this string, and use it to start teleport move
    idAtomicString pathKeyMemoryString; // Offset: 0x150

    // cached goal position, updated in Work()
    idVec3 curGoalOrigin; // Offset: 0x158

    // cached goal axis updated in Work()
    idMat3 curGoalAxis; // Offset: 0x164

}; // Size: 0x188
