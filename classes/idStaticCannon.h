struct idStaticCannon : idWeapon
{
    struct idStaticCannonSyncData
    {
        float chargeValue; // Offset: 0x0

        float chargeValueForFireEvent; // Offset: 0x4

    }; // Size: 0x8

    idStaticCannon::idStaticCannonSyncData staticCannonSyncData; // Offset: 0x3BA0

    float chargeValue; // Offset: 0x3BA8

    float previousCharge; // Offset: 0x3BAC

    // allow charge drain if we're after this time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > drainTime; // Offset: 0x3BB0

    // for idle sound tracking
    idSoundEvent* idleSoundHandle; // Offset: 0x3BB8

    // for the spiny one, 0 to 1
    float chargeAnimPos; // Offset: 0x3BC0

}; // Size: 0x3BC8
