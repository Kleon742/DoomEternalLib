struct idProjectile_DamageOverTime : idProjectile_Grenade
{
    enum dotCancellationType_t : int
    {
        CANCEL_NONE = 0,
        CANCEL_HEAL_SUM = 1,
        CANCEL_HEAL_VALUE = 2,
        CANCEL_NUM = 3
    };

    idManagedClassPtr < idActor > damagedEntity; // Offset: 0x32A0

    // Triggered when we attach to a target so that target can start a damage effect
    idNetEvent < 15 > attachedToTarget; // Offset: 0x32C0

    // Triggered when the projectile explodes ( for effects )
    idNetEvent < 15 > explodedEvent; // Offset: 0x32D8

    // How many damage ticks to do
    int numDamageTicks; // Offset: 0x32F0

    // when did we last do damage
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTime; // Offset: 0x32F8

    // how often to do damage
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageInterval; // Offset: 0x3300

    // how, if at all, can we cancel from taking damage
    idProjectile_DamageOverTime::dotCancellationType_t cancellationType; // Offset: 0x3308

    // what value or sum of healing do we need to perform to cancel from this DOT
    float cancellationThreshold; // Offset: 0x330C

    // sound to play at the start of a player being stuck by this grenade
    idSoundEvent* attachStartSound; // Offset: 0x3310

    // looping sound to play for the player who is stuck by this and taking damage
    idSoundEvent* attachLoopSound; // Offset: 0x3318

    // stop sound for the looping burn sound
    idSoundEvent* attachStopSound; // Offset: 0x3320

    // damage applied every tick
    idDeclDamage* periodicDamageDecl; // Offset: 0x3328

    // handle to our looping sound
    bool loopingSoundHandle; // Offset: 0x3330

    // tracks how much the player was healed while taking damage ( for cumulative cancellation ).
    int totalPlayerHealed; // Offset: 0x3334

    // Increments stat for damaged player when the DOT is removed
    gameStat_t removedStat; // Offset: 0x3338

}; // Size: 0x3340
