struct idAIDeathVolume : idVolume
{
    // the direction from the center of the volume to this entity's origin is the reference direction for deciding which animation to play
    idVec3 referenceDir; // Offset: 0xC20

    // if true, only the anim in animFacingRefFwd will ever be played.
    bool unidirectional; // Offset: 0xC2C

    // if true, an AI killed in this volume will allow it's ragdoll to touch triggers
    bool makeRagdollTouchTriggers; // Offset: 0xC2D

    // once triggered, the death volume will continue killing any AI that enter it for this long
    float killDuration; // Offset: 0xC30

    // this damage will be done to any touching AI when this volume is triggered.
    idDeclDamage* damageDecl; // Offset: 0xC38

    // animation for AI to play when they're facing the same direction as the reference (ex: hit back makes ai move forward)
    idAnimWebPath_Atomic animFacingRefFwd; // Offset: 0xC40

    // animation for AI to play when they're facing to the left of the direction to the reference
    idAnimWebPath_Atomic animFacingRefLeft; // Offset: 0xC80

    // animation for AI to play when they're facing to the right of the direction to the reference
    idAnimWebPath_Atomic animFacingRefRight; // Offset: 0xCC0

    // animation for AI to play when they're facing opposite the direction as the reference
    idAnimWebPath_Atomic animFacingRefBack; // Offset: 0xD00

    // last entity that activated this volume
    idManagedClassPtr < idEntity > lastActivator; // Offset: 0xD40

}; // Size: 0xD60
