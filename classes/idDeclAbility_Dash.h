struct idDeclAbility_Dash : idDeclInventory
{
    // cost to use this ability
    float argentumCost; // Offset: 0x3F8

    // screen shake params
    idDeclAdvancedViewShake* screenShakeDecl; // Offset: 0x400

    // movement speed and distance
    idDeclTable* movementTable; // Offset: 0x408

    // time (in sec) before player control is regained after dashing into AI
    float postHitAiDelaySec; // Offset: 0x410

    // damage Ai receives when hit by player during ability
    idDeclDamage* damageDecl; // Offset: 0x418

    // distance (from ground) to apply gravity, rather than instantly push down to the ground {{ units = m }}
    float applyGravityDist; // Offset: 0x420

    // sound played when player dashes into AI
    idSoundEvent* sndHitAI; // Offset: 0x428

    // sound played when player dashes while in water
    idSoundEvent* useInWaterSound; // Offset: 0x430

    // screen shake params used when player hits AI during dash
    idDeclAdvancedViewShake* screenShakeHitAIDecl; // Offset: 0x438

    // time to wait before regen starts
    idTypesafeTime < int , millisecondUnique_t , 1000 > regenDelayMS; // Offset: 0x440

    // if false, requires player to be on the ground for meter to regen
    bool allowRegenInAir; // Offset: 0x444

    // maximum amount dash can charge when in air
    float airRegenMax; // Offset: 0x448

    // the FX Decl to use for the effect.
    idDeclFX* fxDecl; // Offset: 0x450

    // overall damage scale for when hitting ai
    float damageScale; // Offset: 0x458

    // stops the dash move on ai hit
    bool stopDashOnAiHit; // Offset: 0x45C

    // How much of an upwards 'Hop' to put on the dash
    float verticalHop; // Offset: 0x460

    // if no input is being pressed launch backwards instead of forward
    bool defaultBackwards; // Offset: 0x464

    // if true, then consider the user in the air during dash
    bool considerInAir; // Offset: 0x465

    // if true, then the player can only dash in the horizontal plane when not underwater
    bool clampDashToXyPlane; // Offset: 0x466

    // scale the dash speed when dashing out of a water
    float dampeningScaleDashingFromWater; // Offset: 0x468

}; // Size: 0x470
