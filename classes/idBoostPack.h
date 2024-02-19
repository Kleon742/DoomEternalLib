struct idBoostPack : idInventoryItem
{
    // true if the player owner is actively jumping from a boost
    bool isJumpActive; // Offset: 0x110

    // records whether the player's forward movement has been disabled, so we can restore it later
    bool disabledForwardMovement; // Offset: 0x111

    // were boosters firing last frame
    bool lastBoostersFiring; // Offset: 0x112

    // desired primary impulse for the currently active boost {{ units = kg * m / s }}
    idVec3 desiredPrimaryImpulse; // Offset: 0x114

    // caches the player's velocity immediately after the boost was applied, for reference during any 'ground boost' up ramps {{ units = m / s }}
    idVec3 postImpulseVelocity; // Offset: 0x120

    // fuel, 0.0 - 100.0
    float fuel; // Offset: 0x12C

    // last update time (used to calc time delta for fuel changes)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateTime; // Offset: 0x130

    // last time fuel was empty
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > emptyTime; // Offset: 0x138

    // record last time we begin holding jump
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > jumpButtonHoldStart; // Offset: 0x140

    // last time boost was applied
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastBoostTime; // Offset: 0x148

}; // Size: 0x150
