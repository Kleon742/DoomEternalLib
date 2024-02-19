struct idProjectileShield : idDynamicEntity
{
    struct projectileDamageScale_t
    {
        // projectile
        idDeclProjectile* declProjectile; // Offset: 0x0

        // damage scale
        float damageScale; // Offset: 0x8

    }; // Size: 0x10

    // The projectile that's used when the shield returns fire from trace damage buildup
    idDeclEntityDef* returnProjectile; // Offset: 0xCF8

    // Speed that return fire will travel ( m/s )
    float returnFireSpeed; // Offset: 0xD00

    // Amount of damage it takes to creat a projectile
    float damageLimitForProjectile; // Offset: 0xD04

    // Release the projectile as they are created or wait for a singular event driven by AI
    bool immediateRelease; // Offset: 0xD08

    // reflected projectile damage scales
    idList < idProjectileShield::projectileDamageScale_t , TAG_IDLIST , false > reflectedProjectileDamageScales; // Offset: 0xD10

    float damageBucket; // Offset: 0xD28

    int queuedProjectileCount; // Offset: 0xD2C

    idList < idManagedClassPtr < idProjectile > , TAG_IDLIST , false > heldProjectiles; // Offset: 0xD30

    idManagedClassPtr < idEntity > owner; // Offset: 0xD48

}; // Size: 0xD68
