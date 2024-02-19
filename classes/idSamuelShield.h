struct idSamuelShield : idDynamicEntity
{
    enum shieldState_t : int
    {
        SHIELD_STATE_ACTIVE = 0,
        SHIELD_STATE_DAMAGED = 1,
        SHIELD_STATE_INACTIVE = 2,
        SHIELD_STATE_INVALID = 3
    };

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
    idList < idSamuelShield::projectileDamageScale_t , TAG_IDLIST , false > reflectedProjectileDamageScales; // Offset: 0xD10

    // Sound when the shield is damaged
    idSoundEvent* shieldDamagedSound; // Offset: 0xD28

    // Sound when the shield is destroyed
    idSoundEvent* shieldDestroyedSound; // Offset: 0xD30

    float damageBucket; // Offset: 0xD38

    int queuedProjectileCount; // Offset: 0xD3C

    idList < idManagedClassPtr < idProjectile > , TAG_IDLIST , false > heldProjectiles; // Offset: 0xD40

    idManagedClassPtr < idEntity > owner; // Offset: 0xD58

    // Entities who's health is tied to the shield
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > associatedEntities; // Offset: 0xD78

    idSamuelShield::shieldState_t shieldState; // Offset: 0xD90

}; // Size: 0xD98
