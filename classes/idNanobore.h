struct idNanobore : idThrowableItem
{
    idManagedClassPtr < idProjectile > spawnedProjectile; // Offset: 0x110

    idManagedClassPtr < idEntity > spawnedFromExplosion; // Offset: 0x130

    idDeclProjectile* currentProjectileDef; // Offset: 0x150

    idInventoryItemUpgrade upgradeComponent; // Offset: 0x158

    idManagedClassPtr < idEntity > playerTarget; // Offset: 0x188

}; // Size: 0x1A8
