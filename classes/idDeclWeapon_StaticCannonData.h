struct idDeclWeapon_StaticCannonData : idDeclWeapon_Data
{
    // How much charge do you build for every 100 units you move {{ units = 1 / m }}
    float chargePerThousandUnits; // Offset: 0x90

    // How much charge do you build for every 100 units you move while zoomed {{ units = 1 / m }}
    float chargePerThousandUnitsZoom; // Offset: 0x94

    // etc etc charge build when the weapon isn't equipped {{ units = 1 / m }}
    float chargePerThousandUnitsUnequipped; // Offset: 0x98

    // How much charge do you build per sec for remote viewers
    float chargePerSecRemote; // Offset: 0x9C

    // Max charge that can be built in a single frame
    float chargeCapPerFrame; // Offset: 0xA0

    // Max charge you can build per frame while zoomed
    float chargeCapPerFrameZoom; // Offset: 0xA4

    // Max charge you can build per frame while affected by Haste
    float chargeCapPerFrameHaste; // Offset: 0xA8

    // How much charge drains per second
    float chargeDrainPerSecond; // Offset: 0xAC

    // How much charge drains while zoomed
    float chargeDrainPerSecZoom; // Offset: 0xB0

    // etc etc drain when the weapon isn't equipped
    float chargeDrainPerSecUnequipped; // Offset: 0xB4

    // Delay before we decay if we are not at full charge
    int chargeDrainDelayNotFull; // Offset: 0xB8

    // Delay before we decay if we are at full charge
    int chargeDrainDelayAtFull; // Offset: 0xBC

    // How much charge drains per second for remote viewers
    float chargeDrainPerSecRemote; // Offset: 0xC0

    // How much charge constitutes a "fully charged" shot [0-1], less than this constitutes a partially charged shot
    float chargeUsedPerShot; // Offset: 0xC4

    // Maximum amount of charge the weapon has, can be larger than 1
    float maxWeaponCharge; // Offset: 0xC8

    // charge scale table, input value for charge clamped between 0 and 1
    idDeclTable* chargeDamageScaleTable; // Offset: 0xD0

    // Do we clear charge when you swap weapons?
    bool resetChargeOnUnequip; // Offset: 0xD8

    // Do we charge only when on the ground?
    bool chargeRequiresGroundContact; // Offset: 0xD9

    // material to use for friendly laser beams
    idMaterial2* friendlyLaserBeamMtr; // Offset: 0xE0

    // material to use for friendly laser dots
    idMaterial2* friendlyLaserDotMtr; // Offset: 0xE8

    // color to use on the friendly laser beam.
    idColor friendlyLaserBeamColor; // Offset: 0xF0

    // charge value greater than this will show a laser
    float laserChargeThreshold; // Offset: 0x100

    // charge value greater than this will play the alternate "charged" fire vfx condition
    float chargeFireFXThreshold; // Offset: 0x104

    // projectile def to use when fully charged
    idDeclProjectile* fullyChargedProjectile; // Offset: 0x108

    // charge greater than this uses fully charged projectile
    float fullyChargedProjThreshold; // Offset: 0x110

    // do we always show a laser while zoomed, regardless of charge?
    bool laserOnZoom; // Offset: 0x114

    // looping charge sound that uses variable pitch according to charge value
    idSoundEvent* chargeSound; // Offset: 0x118

    // charge sound that plays when max charge is reached
    idSoundEvent* maxChargeSound; // Offset: 0x120

    // additive animation that builds charge from 0 to 1
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > chargeAnim1; // Offset: 0x128

    // additive animation that spins faster as charge builds
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > chargeAnim2; // Offset: 0x12A

    // how fast does charge anim 2 spin at full charge? (1.0 = 1 full play per second)
    float chargeAnim2Speed; // Offset: 0x12C

    // additive anim to play while fully charged
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > fullyChargedAnim; // Offset: 0x130

}; // Size: 0x138
