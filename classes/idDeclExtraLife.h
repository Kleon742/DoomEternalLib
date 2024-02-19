struct idDeclExtraLife : idDeclInventory
{
    // Decl for controlling game time
    idDeclGameTime* gameTimeDecl; // Offset: 0x3F8

    // How long to fade to black
    idTypesafeTime < float , secondUnique_t , 1 > fadeToBlackDuration; // Offset: 0x400

    // How long to fade from black
    idTypesafeTime < float , secondUnique_t , 1 > fadeFromBlackDuration; // Offset: 0x404

    // How long from the regen point should enemies continue ignoring the player?
    idTypesafeTime < float , secondUnique_t , 1 > enemyIgnoreDuration; // Offset: 0x408

    // How long should the extra lives regen last?
    idTypesafeTime < float , secondUnique_t , 1 > regenerationDuration; // Offset: 0x40C

    // After player comes back from using an extra life, how long should they be invulnerable?
    idTypesafeTime < float , secondUnique_t , 1 > invulnerabilityDuration; // Offset: 0x410

    // How much health should the player get when using an extra life?
    float percentHealthToGive; // Offset: 0x414

    // How much armor should the player get when using an extra life?
    float percentArmorToGive; // Offset: 0x418

    // max count for extra lives when game is in extra life mode
    int maxCount_extraLifeMode; // Offset: 0x41C

    // FX condition for when time is slowing down
    fxCondition_t regenerationFXCondition; // Offset: 0x420

    // FX condition for when the player is brought back after using an extra life
    fxCondition_t invulnerabilityFXCondition; // Offset: 0x424

    // Sound to play when time is slowing down
    idSoundEvent* regenerationSound; // Offset: 0x428

    // Sound to play when player is brought back after using an extra life
    idSoundEvent* invulnerabilitySound; // Offset: 0x430

}; // Size: 0x438
