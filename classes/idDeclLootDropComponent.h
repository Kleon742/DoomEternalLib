struct idDeclLootDropComponent : idGameDeclTypeInfo
{
    struct angelWingsData_t
    {
        // Do we do angel wings ?
        bool enabled; // Offset: 0x0

        // limit the direction to these angles.
        idAngles limitAngles; // Offset: 0x4

        // Min Speed to apply to the wings
        float minSpeed; // Offset: 0x10

        // Max Speed to apply to the wings
        float maxSpeed; // Offset: 0x14

        // Randomly Change direction, instead of positional based.
        bool changeDirRandomly; // Offset: 0x18

        // Initial Velocity. ( a push )
        idVec3 initialVelocity; // Offset: 0x1C

    }; // Size: 0x28

    struct coneData_t
    {
        // do we use cone direction?
        bool enabled; // Offset: 0x0

        // limit the direction to these angles.
        idAngles limitAngles; // Offset: 0x4

        // Direction of the cone relative to dropper's orientation.
        idVec3 directionOffset; // Offset: 0x10

        // Initial Velocity. ( a push )
        idVec3 initialVelocity; // Offset: 0x1C

    }; // Size: 0x28

    struct overrideLaunchData_t
    {
        // loot this will override
        idList < const idDeclLootDrop * , TAG_IDLIST , false > lootDrops; // Offset: 0x0

        // angel wings override
        idDeclLootDropComponent::angelWingsData_t angelWingsData; // Offset: 0x18

        // cone override
        idDeclLootDropComponent::coneData_t coneData; // Offset: 0x40

    }; // Size: 0x68

    struct damageOverTimeDrops_t
    {
        struct dropPhysics_t
        {
            // speed to throw out loot
            float velocity; // Offset: 0x0

            // random, +/- towards player
            float horizAngle; // Offset: 0x4

            // min angle up
            float vertMinAngle; // Offset: 0x8

            // max angle up
            float vertMaxAngle; // Offset: 0xC

        }; // Size: 0x10

        struct weaponHitDrops_t
        {
            // type of weapon this applies to
            weaponDamageTypeBits_t weaponType; // Offset: 0x0

            // each hit by this weapon increases drop counter by this much
            float hitIncreaseRate; // Offset: 0x8

            // number of extra loot to drop when drop counter reaches / exceeds 1.0
            int numExtraToDrop; // Offset: 0xC

            // if true, drops produced by this weapon damage are capped by maxLifetimeDrops; if false, drops are always spawned
            bool dropsCappedByMaxCount; // Offset: 0x10

            // Drop numExtraToDrop per weapon shot rather than trace
            bool fixedDropPerWeaponShot; // Offset: 0x11

            // Delay time before drops are released.
            idTypesafeTime < int , millisecondUnique_t , 1000 > spawnDelayMs; // Offset: 0x14

            // how the loot drops from entity
            idDeclLootDropComponent::damageOverTimeDrops_t::dropPhysics_t dropPhysics; // Offset: 0x18

            // force a loot drop if time between shot damage exceeds this time
            idTypesafeTime < int , millisecondUnique_t , 1000 > forceDropDamageIntervalMS; // Offset: 0x28

        }; // Size: 0x30

        struct dropTimeAndCount_t
        {
            // amount of time initial item is dropped (after that, min/maxDropTimeMS is used)
            idTypesafeTime < int , millisecondUnique_t , 1000 > initialDropTimeMS; // Offset: 0x0

            // how often to drop while DOT is active (min amount of time)
            idTypesafeTime < int , millisecondUnique_t , 1000 > minDropTimeMS; // Offset: 0x4

            // how often to drop while DOT is active (max amount of time)
            idTypesafeTime < int , millisecondUnique_t , 1000 > maxDropTimeMS; // Offset: 0x8

            // min number of items to drop when drop time is reached
            int minNumToDrop; // Offset: 0xC

            // max number of items to drop when drop time is reached
            int maxNumToDrop; // Offset: 0x10

            // when multiple items are dropped, min time to delay before dropping next item
            idTypesafeTime < int , millisecondUnique_t , 1000 > minDropDelayMS; // Offset: 0x14

            // when multiple items are dropped, max time to delay before dropping next item
            idTypesafeTime < int , millisecondUnique_t , 1000 > maxDropDelayMS; // Offset: 0x18

            // always drop at least this many items when on fire
            int onDeathMinDrops; // Offset: 0x1C

            // weapon specific hit drops for this perk
            idList < idDeclLootDropComponent::damageOverTimeDrops_t::weaponHitDrops_t , TAG_IDLIST , false > weaponHitDrops; // Offset: 0x20

            // if true, drop the remaining armor drops when killed if on fire
            bool dropAllRemainingOnDeath; // Offset: 0x38

        }; // Size: 0x40

        // drops loot instantly when first hit with weapon
        bool dropOnFirstWeaponHit; // Offset: 0x0

        // item to drop
        idDeclEntityDef* itemEntity; // Offset: 0x8

        // item to drop with item upgrade
        idDeclEntityDef* upgradedItemEntity; // Offset: 0x10

        // What type of item is this.
        lootItemType_t itemType; // Offset: 0x18

        // sound to play when item is dropped
        idSoundEvent* dropItemSound; // Offset: 0x20

        // includes timing and number of items
        idDeclLootDropComponent::damageOverTimeDrops_t::dropTimeAndCount_t dropTimeAndCount; // Offset: 0x28

        // how the loot drops from entity
        idDeclLootDropComponent::damageOverTimeDrops_t::dropPhysics_t dropPhysics; // Offset: 0x68

        // amount of time loot will stay in world before being removed
        idTypesafeTime < int , millisecondUnique_t , 1000 > lifetimeMS; // Offset: 0x78

        // max loot that will be dropped from this damage
        int maxLifetimeDrops; // Offset: 0x7C

        // num drops is reset when flame belch is used on non-burning enemy.
        bool resetNumDropsOnFlameBelchDamage; // Offset: 0x80

        // perk required to activate upgraded timing and count
        idDeclPerk* upgradedPerkRequired; // Offset: 0x88

        // upgraded timing and count data
        idDeclLootDropComponent::damageOverTimeDrops_t::dropTimeAndCount_t upgradedTimingAndCount; // Offset: 0x90

    }; // Size: 0xD0

    struct damageOverTimeInfo_t
    {
        // damage decl this applies to
        idDeclDamage* declDamage; // Offset: 0x0

        // loot drop data used during damage over time
        idDeclLootDropComponent::damageOverTimeDrops_t dropData; // Offset: 0x8

    }; // Size: 0xD8

    // maximum number of dropped items for this component
    int maxDroppedItems; // Offset: 0x90

    // list of loot drop decls
    idList < const idDeclLootDrop * , TAG_IDLIST , false > droppableItems; // Offset: 0x98

    // Give the items to the player, instead of dropping.
    bool giveInsteadOfDrop; // Offset: 0xB0

    // list of stats we need to increment when this entity drops loot
    idList < statManipulation_t , TAG_IDLIST , false > lootDropStats; // Offset: 0xB8

    // This LootDrop can only drop once.
    bool onlyDropOnce; // Offset: 0xD0

    // allow extra drop delay
    bool allowDropDelay; // Offset: 0xD1

    // Data for Angel Wings.
    idDeclLootDropComponent::angelWingsData_t angelWingsData; // Offset: 0xD4

    // Data for Cone Spread.
    idDeclLootDropComponent::coneData_t coneData; // Offset: 0xFC

    // overrides global angel wings data and cone data, on any damage with matching context flags
    idList < idDeclLootDropComponent::overrideLaunchData_t , TAG_IDLIST , false > overrideLaunchData; // Offset: 0x128

    // loot dropped when a damage decl defines that it does damage over time
    idList < idDeclLootDropComponent::damageOverTimeInfo_t , TAG_IDLIST , false > damageOverTime; // Offset: 0x140

}; // Size: 0x158
