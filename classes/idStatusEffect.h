struct idStatusEffect : idEventReceiver
{
    struct upgradeOverride_t
    {
        // life time override in MS
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lifeTime; // Offset: 0x0

        float headShotMultiplier; // Offset: 0x8

        // the inverse of the overriding value for life time in ms
        float invOverride_LifeTimeMS; // Offset: 0xC

    }; // Size: 0x10

    // The Owner of the status effect.
    idManagedClassPtr < idEntity > owner; // Offset: 0x38

    // Owners Last weapon ( to update stuff if they change )
    idWeapon* ownerLastWeapon; // Offset: 0x58

    // How long the status effect has left to live. We need track time left so we can pause status effects
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeLeft; // Offset: 0x60

    // the global fx manager handle
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x68

    // data associated with the statusEffect.
    idDeclStatusEffect* decl; // Offset: 0x70

    // Whether the effect is active.
    bool inActive; // Offset: 0x78

    // Whether the effect is paused
    bool isPaused; // Offset: 0x79

    // last time the warning sound was played.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeLastWarningPlayed; // Offset: 0x80

    // the rate at which we play the warning sound.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > warningPlayRate; // Offset: 0x88

    // upgrade override values
    idStatusEffect::upgradeOverride_t overrides; // Offset: 0x90

    // the quick slot index we are currently ocupying
    int quickSlot; // Offset: 0xA0

    // the inverse of the value from the decl
    float invLifeTimeMS; // Offset: 0xA4

    // gametime that next rumble impulse will trigger
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextRumbleTime; // Offset: 0xA8

    // these are used to detect the "Power Overwhelming" challenge
    bool hasBeenUnequipped; // Offset: 0xB0

    int ownerKillsWhileEquipped; // Offset: 0xB4

    int ownerKillsThisActivePeriod; // Offset: 0xB8

    // This status effect has been flagged for removal by the server -> client serializer.
    bool removeEffectPending; // Offset: 0xBC

    // cache whether we are initialized
    bool fxHandleInit; // Offset: 0xBD

    // The entity that activated this status effect (typically the owner)
    idManagedClassPtr < idEntity > initiatingEntity; // Offset: 0xC0

    // volume instigator
    idManagedClassPtr < idEntity > instigatorEntity; // Offset: 0xE0

    // manager for glow fx on this status effect
    idStatusEffectGlow glowEffect; // Offset: 0x100

    // next valid time to play effect action audio
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextActionSoundTime; // Offset: 0x110

    // A list of status effects that were suspended by this effect
    idList < const idDeclStatusEffect * , TAG_IDLIST , false > suspendedStatusEffects; // Offset: 0x118

}; // Size: 0x130
