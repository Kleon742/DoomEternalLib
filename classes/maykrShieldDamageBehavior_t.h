struct maykrShieldDamageBehavior_t
{
    // damage scalar when shielded
    float shieldActiveDamageScalar; // Offset: 0x0

    // damage scalar when unshielded
    float shieldInactiveDamageScalar; // Offset: 0x4

    // if shield is active, should this damage disable it?
    bool disableShield; // Offset: 0x8

    // if shield is disabled, wait this long (in seconds) before re-enabling. NOTE: 0 implies never -- shield must be explicitly re-enabled!
    idTypesafeTime < float , secondUnique_t , 1 > enableShieldDelaySec; // Offset: 0xC

}; // Size: 0x10
