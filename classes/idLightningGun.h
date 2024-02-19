struct idLightningGun : idWeapon
{
    struct idLightningGunSyncData
    {
        // {{ units = m }}
        idVec3 ribbonFocalPoint; // Offset: 0x0

    }; // Size: 0xC

    idLightningGun::idLightningGunSyncData lightningGunSyncData; // Offset: 0x3BA0

    // {{ units = m }}
    idVec3 idClientSmoothRibbonFocalPoint; // Offset: 0x3BAC

    // muzzle 0 to 1
    float muzzlePos; // Offset: 0x3BB8

    // the last time the ribbon was updated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextRibbonUpdateTime; // Offset: 0x3BC0

    // used for consistent range dithering
    short fireCount; // Offset: 0x3BC8

}; // Size: 0x3BD0
