struct idEnvironmentalDamage_Hurt_Trigger : idTrigger
{
    // type of environment damage this handles.
    environmentalDamageType_t envDamageType; // Offset: 0xC90

    // Damage we are doing.
    idDeclDamage* envDamage; // Offset: 0xC98

    // How many MS between damages.
    idTypesafeTime < int , millisecondUnique_t , 1000 > envDamageInterval; // Offset: 0xCA0

    // How many MS between warning sounds.
    idTypesafeTime < int , millisecondUnique_t , 1000 > envWarningInterval; // Offset: 0xCA4

    // scale the environmental warning will be set to on the player
    float envWarningScale; // Offset: 0xCA8

    // the length of time we do damage once we have exited the trigger
    idTypesafeTime < int , millisecondUnique_t , 1000 > dotOnExitLength; // Offset: 0xCAC

    // the length of time we extend the intervals when doing damage over time
    idTypesafeTime < int , millisecondUnique_t , 1000 > dotOnExitDecay; // Offset: 0xCB0

    // Damage we are doing over time after volume, if invalid will use the regular end damage
    idDeclDamage* dotOnExit; // Offset: 0xCB8

    // the vulnerability modifier on exit
    float vulnerabilityMod; // Offset: 0xCC0

    // the length of time we are vulnerable after exiting the volume
    idTypesafeTime < int , millisecondUnique_t , 1000 > vulnerabilityModMs; // Offset: 0xCC4

    // player speed adjusted by this scale while in trigger
    float playerSpeedScale; // Offset: 0xCC8

    // do not apply playerSpeedScale if resulting speed scalar is less than this value
    float minPlayerSpeedScale; // Offset: 0xCCC

    // status effect applied to player while player is in the volume
    idDeclStatusEffect* statusEffectDecl; // Offset: 0xCD0

    // the status effect should linger for this long after the player exits the trigger
    idTypesafeTime < int , millisecondUnique_t , 1000 > statusEffectLingerTime; // Offset: 0xCD8

    // if true, refresh status effect on Event_Touch()
    bool statusEffectRefreshOnTouch; // Offset: 0xCDC

    // fx decl
    idDeclFX* fxDecl; // Offset: 0xCE0

    // override fx start condition on spawn
    fxCondition_t fxOverrideStart; // Offset: 0xCE8

    // override fx start scale on spawn
    idVec3 fxOverrideScale; // Offset: 0xCEC

    // ignore demonplayers
    bool ignoreDemonPlayers; // Offset: 0xCF8

    // don't let the rad meter absorb damage from this specific entity
    bool ignoreRadMeterDamageMitigation; // Offset: 0xCF9

    // looping sound
    idSoundEvent* loopSound; // Offset: 0xD00

    // damage scale multiplier for external systems to upgrade
    float damageMultiplier; // Offset: 0xD08

    // interval modifier for external systems to increase/decrease the interval
    float damageIntervalMod; // Offset: 0xD0C

    // the last time something touched
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTouchTime; // Offset: 0xD10

    // the entities to siphon health to from damage
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > siphonDamageEnts; // Offset: 0xD18

    // the entities to siphon health to from damage
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > entsInVolume; // Offset: 0xD30

    // the entity that spawned this hazard
    idManagedClassPtr < idEntity > sourceEntity; // Offset: 0xD48

    // set the damage over time flag
    bool hasDOTonExit; // Offset: 0xD68

    bool hasVulnerabilityOnExit; // Offset: 0xD69

    bool isActive; // Offset: 0xD6A

    // if true, this trigger is currently applying playerSpeedScale to player
    bool playerSpeedScaleApplied; // Offset: 0xD6B

    idTypesafeTime < int , millisecondUnique_t , 1000 > lifeCycleMs; // Offset: 0xD6C

    // hack - remove
    idTypesafeTime < int , millisecondUnique_t , 1000 > clientSelfRemoveHackTime; // Offset: 0xD70

}; // Size: 0xD78
