struct timerStage_t
{
    // How long should this stage last?
    idTypesafeTime < float , secondUnique_t , 1 > stageDuration; // Offset: 0x0

    // What color should this stage be represented by?
    idColor stageColor; // Offset: 0x4

    // What multiplier should this stage have?
    idDeclScoringItem* stageMultiplier; // Offset: 0x18

    // Sound to play doe multiplied score
    idSoundEvent* multiplierSound; // Offset: 0x20

}; // Size: 0x28
