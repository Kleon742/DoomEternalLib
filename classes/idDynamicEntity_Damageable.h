struct idDynamicEntity_Damageable : idDynamicEntity
{
    struct damageAndScale_t
    {
        // if true, then this will blow up the target
        bool explode; // Offset: 0x0

        // scale to use
        float damageScale; // Offset: 0x4

        // damage of this type is flagged as a weakness
        bool damageWeakness; // Offset: 0x8

        // damages to match ( logical OR )
        idDeclAIDamageDeclCollection* damageCollection; // Offset: 0x10

        // damages to match ( logical OR )
        idList < const idDeclDamage * , TAG_IDLIST , false > damageDecls; // Offset: 0x18

    }; // Size: 0x30

    struct damagePainPair_t
    {
        // damage decl to map to pain reaction
        idDeclDamage* damageDecl; // Offset: 0x0

        // damage decl collection
        idDeclAIDamageDeclCollection* damageDeclCollection; // Offset: 0x8

        // pain reaction
        painType_t painReaction; // Offset: 0x10

        // passed in during pain selection, animation will try to match this tag
        idAtomicString optionalTag; // Offset: 0x18

        // if true, allow moving version of this pain
        bool allowMoving; // Offset: 0x20

        // if true, pass through this damage
        bool passThrough; // Offset: 0x21

        // optional memory key to set on the owner
        idAtomicString memoryKeyName; // Offset: 0x28

    }; // Size: 0x30

    struct projectileDeclAndFX_t
    {
        // when any projectile that is a child of this def hits the shield
        idDeclProjectile* projectileDecl; // Offset: 0x0

        // play this vfx
        idDeclEntityDef* fxEntDef; // Offset: 0x8

    }; // Size: 0x10

    struct returnFireInfo_t
    {
        // The projectile that's used when the shield returns fire from trace damage buildup
        idDeclEntityDef* returnProjectile; // Offset: 0x0

        // Speed that return fire will travel ( m/s )
        float returnFireSpeed; // Offset: 0x8

        // Amount of damage it takes to creat a projectile
        float damageLimitForProjectile; // Offset: 0xC

        // Limit number of projectiles for return fire
        int projectileCountLimit; // Offset: 0x10

        // If greater than zero, limit damage within this time window
        idTypesafeTime < int , millisecondUnique_t , 1000 > damageWindowMS; // Offset: 0x14

    }; // Size: 0x18

    // how much this shield can absorb before blowing up
    float startingHealth; // Offset: 0xCF8

    // how low this shield's health can go, > 0 implies shield will never blow up but can be damaged
    float minimumHealth; // Offset: 0xCFC

    // set health to zero if damage is from EMP
    bool disableFromEMP; // Offset: 0xD00

    // reflect projectiles away from this thing
    bool reflectProjectiles; // Offset: 0xD01

    // forced surface type to apply to all shape data
    surfTypes_t forcedCollisionSurfaceType; // Offset: 0xD04

    // Should this entity interpolate across the network
    bool shouldInterpolate; // Offset: 0xD08

    // Allow demonplayers to pass through
    bool allowDemonplayerPassThrough; // Offset: 0xD09

    // if true, and owner entity is not NULL, ignore any damage coming from the owner entity
    bool ignoreDamageFromOwner; // Offset: 0xD0A

    // Should this activate blood punch
    bool activatesBloodPunch; // Offset: 0xD0B

    // last damage taken was of a type that this object is weak to
    bool tookWeaknessDamage; // Offset: 0xD0C

    float currentHealth; // Offset: 0xD10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTime; // Offset: 0xD18

    int lastLocalPlayerTelemetryManifoldFrame; // Offset: 0xD20

    int nonPredictedNetworkKey; // Offset: 0xD24

    idManagedClassPtr < idEntity > ownerEntity; // Offset: 0xD28

    idManagedClassPtr < idEntity > lastAttacker; // Offset: 0xD48

    idList < idSpawnId , TAG_IDLIST , false > moddedProjectiles; // Offset: 0xD68

    idList < int , TAG_IDLIST , false > projectilesToMod; // Offset: 0xD80

    // when hit by these damage decls or a child, force AI into specified pain reaction from FRONT
    idList < idDynamicEntity_Damageable::damagePainPair_t , TAG_IDLIST , false > passthroughPains; // Offset: 0xD98

    // scale incoming damage by this much, when decls are matched
    idList < idDynamicEntity_Damageable::damageAndScale_t , TAG_IDLIST , false > damageScales; // Offset: 0xDB0

    // color stuff
    idVec4 currentColor; // Offset: 0xDC8

    bool colorDirty; // Offset: 0xDD8

    // return fire info
    idDynamicEntity_Damageable::returnFireInfo_t returnFireInfo; // Offset: 0xDE0

    // list of projectile-impact mappings
    idList < idDynamicEntity_Damageable::projectileDeclAndFX_t , TAG_IDLIST , false > impactMappings; // Offset: 0xDF8

    // On collision with owner's projectile launch this one
    idDeclProjectile* modProjectile; // Offset: 0xE10

    // fx decl for this entity
    idDeclFX* fxDecl; // Offset: 0xE18

    // if true, this entity will block bfg tendrils
    bool blocksBFG; // Offset: 0xE20

    // if true, this entity will block destroyer blade projectiles
    bool blocksDestroyerBlade; // Offset: 0xE21

    // if true all seeing highlights through this entity
    bool allowHighlights; // Offset: 0xE22

    // if true, this entity will block flame belch
    bool blocksFlameBelch; // Offset: 0xE23

    // collide stuff
    bool collides; // Offset: 0xE24

    // they fire at us, we fire back
    bool shouldReturnFire; // Offset: 0xE25

    // change projectiles moving through this entity
    bool shouldModProjectile; // Offset: 0xE26

    // bucket 'o' damage
    float damageBucket; // Offset: 0xE28

    // track damage window
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > windowTime; // Offset: 0xE30

    // track projectiles within window
    int windowCount; // Offset: 0xE38

    // the projectile currently stuck to this shield
    idProjectile* stuckProjectile; // Offset: 0xE40

}; // Size: 0xE48
