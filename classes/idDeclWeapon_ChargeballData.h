struct idDeclWeapon_ChargeballData : idDeclWeapon_Data
{
    // interval is based on charge percentage ( 0 - 1 ) lerp from uncharged to charged
    milliToGameTime_t unchargedScoreIntervalMS; // Offset: 0x90

    // interval is based on charge percentage ( 0 - 1 ) lerp from uncharged to charged
    milliToGameTime_t fullyChargedScoreIntervalMS; // Offset: 0xA0

    // how much we score each interval
    float scoreAmount; // Offset: 0xB0

    // how much charge we gain per thousand units of velocity
    float chargeAmountPerThousandUnits; // Offset: 0xB4

    // score multiplier is based on charge percentage ( 0 - 1 ) lerp from min to max
    float minScoreMultiplier; // Offset: 0xB8

    // score multiplier is based on charge percentage ( 0 - 1 ) lerp from min to max
    float maxScoreMultiplier; // Offset: 0xBC

    // charge cap
    float maxCharge; // Offset: 0xC0

    // how much charge to drain
    idTypesafeTime < float , secondUnique_t , 1 > chargeDrainPerSecond; // Offset: 0xC4

    // charge up cap per second
    idTypesafeTime < float , secondUnique_t , 1 > maxChargeGainPerSecond; // Offset: 0xC8

    // delay before charge begins to drain
    milliToGameTime_t drainDelayMS; // Offset: 0xD0

    // the full screen fx that stays on during ball carry
    idDeclEnv* ballVision; // Offset: 0xE0

    // whether the ball vision environment effect will be used or not
    bool useBallVision; // Offset: 0xE8

    // additional speed of the ball when thrown in pass mode
    float ballPassSpeedMod; // Offset: 0xEC

    // Status effect applied to the player when he carries the ball
    idDeclStatusEffect* carrierEffect; // Offset: 0xF0

    // name of the bone on the hands used to determine spawn location for projectile
    idStr projectileSpawnBoneName; // Offset: 0xF8

    // name of the bone on the weapon used to lookup orientation for launched projectile
    idStr weaponOrientationBoneName; // Offset: 0x128

    // additive animations to play while the chargeball is equipped
    idArray < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , 4 > persistantAdditiveAnims; // Offset: 0x158

    // the max range to search for a quick pass target
    float quickPassRange; // Offset: 0x160

}; // Size: 0x168
