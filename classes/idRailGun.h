struct idRailGun : idWeapon
{
    struct idRailGunSyncData
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > adsServerChargeStartTime; // Offset: 0x0

        // {{ units = m }}
        idVec3 laserFocalPoint; // Offset: 0x8

        float chargeValueForFireEvent; // Offset: 0x14

    }; // Size: 0x18

    idRailGun::idRailGunSyncData railGunSyncData; // Offset: 0x3BA0

    // {{ units = m }}
    idVec3 idClientSmoothLaserFocalPoint; // Offset: 0x3BB8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > adsChargeStartTime; // Offset: 0x3BC8

    float lastChargePercent; // Offset: 0x3BD0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > railGunLastChargeDuration; // Offset: 0x3BD8

    idColor laserBeamColor; // Offset: 0x3BE0

    // muzzle tag 0 to 1
    float muzzlePos; // Offset: 0x3BF0

    idTagInfo* muzzleTagInfo; // Offset: 0x3BF8

    // flag toggled when the gun becomes fully charged.
    bool fullyCharged; // Offset: 0x3C00

    // sound handle for the secondary charging sound.
    idSoundEvent* chargingSoundHandle; // Offset: 0x3C08

    bool fxCinematic1Started; // Offset: 0x3C10

    bool fxCinematic2Started; // Offset: 0x3C11

    bool fxCinematic3Started; // Offset: 0x3C12

}; // Size: 0x3C18
