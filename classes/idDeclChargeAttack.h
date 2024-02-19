struct idDeclChargeAttack : idDeclInventory
{
    // the maximum distance we are allowed to do a charge {{ units = m }}
    float maxChargeDistance; // Offset: 0x3F8

    // (upgraded version) the maximum distance we are allowed to do a charge {{ units = m }}
    float maxChargeDistance_Upgraded; // Offset: 0x3FC

    // the speed to travel to the target {{ units = m / s }}
    float speed; // Offset: 0x400

    // (upgraded version) the speed to travel to the target {{ units = m / s }}
    float speed_Upgraded; // Offset: 0x404

    // the time we need to show the fists coming up in milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > fistsEntryTimeMS; // Offset: 0x408

    // whether we are tied to the adrenaline meter
    bool useAdrenalineMeter; // Offset: 0x40C

    // forces a glory kill even if enemy not staggered or damaged enough
    bool overrideStaggerState; // Offset: 0x40D

    // sound to play when activated
    idSoundEvent* chargeAttackSound; // Offset: 0x410

    // not available to the outside, these values get computed during the parse function the inverse of maxChargeDistance {{ units = 1 / m }}
    float inverseMaxChargeDistance; // Offset: 0x418

    // the inverse of the speed in ms
    float inverseSpeedInMS; // Offset: 0x41C

}; // Size: 0x420
