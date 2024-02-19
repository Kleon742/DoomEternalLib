struct CACODEMON_CanTrapEnemy : idAIStateTransition
{
    // Animation
    idAnimWebPath snareAnim; // Offset: 0xF8

    // min/max distance to enemy to allow attack {{ units = m }}
    idRange < float > distanceToEnemy; // Offset: 0x128

    // maximum allowed angle difference
    idTypesafeNumber < float , DegreesUnique_t > maxAngleDiff; // Offset: 0x130

    // maximum height difference to enemy to allow attack {{ units = m }}
    float maxHeightDiffToEnemy; // Offset: 0x134

    // how long into the future we want to predict where the player's going to be
    idTypesafeTime < float , secondUnique_t , 1 > predictionTime; // Offset: 0x138

}; // Size: 0x140
