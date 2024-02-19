struct idDeclWeapon_ChainsawSliceData : idDeclWeapon_Data
{
    // additive anim for rotating chain
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > additiveChainAnim; // Offset: 0x90

    // Sound to play while idle
    idSoundEvent* idleSound; // Offset: 0x98

    // Rumble decl to play while idling
    idDeclRumble* idleRumble; // Offset: 0xA0

    // Sound to play while swinging/attacking
    idSoundEvent* cuttingSound; // Offset: 0xA8

    // Sound to play when going from rev/attack back to idle
    idSoundEvent* revDownSound; // Offset: 0xB0

    // Sound to play when stopping/putting the weapon away
    idSoundEvent* stopSound; // Offset: 0xB8

    // sound to play when a sync starts (mutes the RTPC sound, etc.)
    idSoundEvent* sound_sync_start; // Offset: 0xC0

    // sound to play when a sync ends (mutes the RTPC sound, etc.)
    idSoundEvent* sound_sync_end; // Offset: 0xC8

    // How often we decay 1 ammo while the weapon is held (-1 ammo never decays)
    int ammoDecayIntervalMs; // Offset: 0xD0

    // How often does 1 ammo decay while firing. (-1 ammo never decays)
    int ammoDecayIntervalFiringMs; // Offset: 0xD4

    // Scalar. How fast you move while firing your weapon
    float movementSpeedWhileFiring; // Offset: 0xD8

    // list of entity defs and corresponding glory kill ammo costs (used for snap slice n' sync chainsaw)
    idDeclEntityDefFloatList* gloryKillAmmoCost; // Offset: 0xE0

    // def for fx entity that will be placed at the cut location and used to play gore particles
    idDeclEntityDef* goreFXEntityDef; // Offset: 0xE8

}; // Size: 0xF0
