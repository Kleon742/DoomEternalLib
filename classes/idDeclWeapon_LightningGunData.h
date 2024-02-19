struct idDeclWeapon_LightningGunData : idDeclWeapon_Data
{
    // how much the charge increases per shot hit [0 - 1]
    float heatIncreasePerShot; // Offset: 0x90

    // how much heat drains per second
    float headDecayPerSec; // Offset: 0x94

    // how far does heat need to drain after an overheat before can use again
    float overheatLowerLimit; // Offset: 0x98

    // damage multiplier when in secondary
    float damageMultiplier; // Offset: 0x9C

    // additive animation to expand the muzzle
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > muzzleAnim; // Offset: 0xA0

    // how many MS to transition from fully open to fully closed
    milliToGameTime_t muzzleContractMS; // Offset: 0xA8

    // sound to play when the lightning gun switches firing modes to primary.
    idSoundEvent* modeSwitchSound_ToPrimary; // Offset: 0xB8

    // sound to play when the lightning gun switches firing modes to secondary.
    idSoundEvent* modeSwitchSound_ToSecondary; // Offset: 0xC0

    // sound to play when the secondary fire chain radius is created
    idSoundEvent* secondaryFire_chainRadiusSound; // Offset: 0xC8

    // a list of range modifiers. index into the list = fire count from the weapon entity {{ units = m }}
    idList < float , TAG_IDLIST , false > rangeModifiers; // Offset: 0xD0

}; // Size: 0xE8
