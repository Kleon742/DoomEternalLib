struct idFireParms
{
    // the attacking entity
    idManagedClassPtr < idEntity > attacker; // Offset: 0x0

    // HACK: This is the controller of the attacker (at the moment, the idDemonPlayer). We do this to override the listenerId when playing the weapon sound. We might need more, so use the entire entity for now.
    idManagedClassPtr < idEntity > controllerOfAttacker; // Offset: 0x20

    // optional ignoreEntity, if not set we use attacker as ignoreEntity. We are passing EntityNum instead of an EntityPtr so this can be done on the client.
    int ignoreEntityNum; // Offset: 0x40

    // list of multiple targets used for burst first weapons on multiple locked targets
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > targetList; // Offset: 0x48

    // list of joint indices corresponding to targets in targetList
    idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > targetJointIndexList; // Offset: 0x60

    // target of the attack (may be NULL for weapons that use a trace)
    idManagedClassPtr < idEntity > target; // Offset: 0x78

    // joint index to use for target
    idIndex < short , invalidJointIndex_t , - 1 > targetJointIndex; // Offset: 0x98

    // use this position as the target if useTargetPos == true {{ units = m }}
    idVec3 targetPos; // Offset: 0x9C

    // weapon that is being fired
    idManagedClassPtr < idWeapon > weapon; // Offset: 0xA8

    // weapon def
    idDeclWeapon* wepDef; // Offset: 0xC8

    // weapon entity
    idManagedClassPtr < idWeaponEntity > weaponEnt; // Offset: 0xD0

    // starting point of the projectile(s) {{ units = m }}
    idVec3 start; // Offset: 0xF0

    // the muzzle offset position from the fire pos. Used for visual tracer starting location. {{ units = m }}
    idVec3 muzzleOffset; // Offset: 0xFC

    // muzzle axis
    idMat3 muzzleAxis; // Offset: 0x108

    // axis along which the projectile(s) are fired
    idMat3 fireAxis; // Offset: 0x12C

    // secondary axis used by linked weapons
    idMat3 secondaryFireAxis; // Offset: 0x150

    // projectile def for the fired projectile
    idDeclProjectile* projDef; // Offset: 0x178

    // list of active weapon upgrades - this should replace weapon Mods
    idGrowableList < const idDeclUpgrade * , 8 , TAG_IDLIST > weaponUpgrades; // Offset: 0x180

    // created projectile - useful for cooked grenades.
    idManagedClassPtr < idProjectile > projectile; // Offset: 0x1D8

    // created entity that is firing on the attackers behalf
    idManagedClassPtr < idEntity > deployedEntity; // Offset: 0x1F8

    // if nonzero, overrides the value in weaponDecl->ammoPerShot
    int ammoCostOverride; // Offset: 0x218

    // statistics tag for this shot
    weaponStatsTag_t tag; // Offset: 0x220

    // if true, simulate projectiles when doing a test fire
    bool simulateProjectiles; // Offset: 0x0

    // if true, the weapon is silenced
    bool silenced; // Offset: 0x0

    // if true, don't use ammo when firing... so AI close to the player never has to reload
    bool freeAmmo; // Offset: 0x0

    // if true, the client predicted this spawn
    bool wasClientPredicted; // Offset: 0x0

    // force this shot to be a tracer round
    bool alwaysTracer; // Offset: 0x0

    // if true, use the targetPos as the target position
    bool useTargetPos; // Offset: 0x0

    // if true, then ignore any trace targets
    bool ignoreTraceTarget; // Offset: 0x0

    // don't add spread to shots
    bool forceNoSpread; // Offset: 0x0

    // don't create decals on damage (stops deferred decal manager asserts when doing damage from outside the game loop, i.e. from a console command)
    bool noDecals; // Offset: 0x0

    // skips over call to entity->Damage but otherwise performs FX as if damage was taken
    bool noDamage; // Offset: 0x0

    // if true can penetrate through the world
    bool worldPenetrate; // Offset: 0x0

    // if true then skip overheating logic and barrel heating
    bool noHeat; // Offset: 0x0

    // if true, will draw tracers even if the angle between the tracer and the muzzle direction is very large (used for weapons that don't necessarily have a muzzle like the bfg projectile shooting beams)
    bool ignoreTraceAxisError; // Offset: 0x0

    // if true, will use start instead of getting muzzle pos
    bool useStartForMuzzlePos; // Offset: 0x0

    // if true, this is a special deferred fire meant to just hit holograms
    bool hologramFire; // Offset: 0x0

    // if true, if the hit scan did not hit anything, don't show a tracer
    bool skipTracerNoHit; // Offset: 0x0

    // if true, skip the impact effect on fire (we should be doing one somewhere else, i.e. beam weapons)
    bool skipImpactEffect; // Offset: 0x0

    // if true, deployed entity current position will be used for muzzle pos
    bool useDeployedEntityPos; // Offset: 0x0

    // if true, this is an onslaught shot fired from equipment launcher
    bool isOnslaughtLauncherShot; // Offset: 0x0

    // if true, then protect this fire from being interpreted as erroneous and deleted
    bool dontClearDeferred; // Offset: 0x0

    // flag
    bool isProjectileAtShotCount; // Offset: 0x0

    // If TRUE, muzzle obstruction will be checked (Also used with DemonPlayers
    bool checkMuzzleObstruction; // Offset: 0x0

    // if TRUE will use secondary fire axis for firing a linked weapon
    bool useSecondaryAxisForLinkedWeapon; // Offset: 0x0

    // scale to apply to damage
    float damageScale; // Offset: 0x234

    // if >=0 then this overrides the damage value in the damage decl
    float damageOverride; // Offset: 0x238

    // if >= 0 then this overrides the damage scale
    float damageScaleOverride; // Offset: 0x23C

    // damage over time duration in MS
    int damageOverTimeDurationMS; // Offset: 0x240

    // damage interval in MS
    int damageOverTimeIntervalMS; // Offset: 0x244

    // scale to apply to damageOverTime
    float damageOverTimeScale; // Offset: 0x248

    // scale to apply to point blank damage over time
    float pointBlankDamageOverTimeScale; // Offset: 0x24C

    // added to proj->spread to adjust the level of accuracy
    float addSpread; // Offset: 0x250

    // scale applied to spread
    float spreadScale; // Offset: 0x254

    // -1 uses DEFAULT_SPEED from GetProjectileDef()->notHitscanInfo.speed {{ units = m / s }}
    float startSpeed; // Offset: 0x258

    // the max range to use on this {{ units = m }}
    float maxRange; // Offset: 0x25C

    // scale projectile speed up or down
    float speedScale; // Offset: 0x260

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x268

    // clip mask for potential targets
    int clipMask; // Offset: 0x270

    // if not -1, overrides the splash damage start radius {{ units = m }}
    float splashStartFalloffRadiusOverride; // Offset: 0x274

    // if not -1, overrides the splash damage end radius {{ units = m }}
    float splashEndFalloffRadiusOverride; // Offset: 0x278

    // scale to apply to ai stimulus
    float aiStimulusScale; // Offset: 0x27C

    // if >=0 how damage falls off with distance traveled {{ units = m }}
    float damageFalloffStartDist; // Offset: 0x280

    // if >=0 how damage falls off with distance traveled {{ units = m }}
    float damageFalloffEndDist; // Offset: 0x284

    // this is filled out by the deffered fire managers and is used to tell the game code how many timed this FP penetraded to scale the damage by.
    int numberOfPenetrations; // Offset: 0x288

    // the fire mode used for this shot
    weaponFireMode_t fireMode; // Offset: 0x28C

    // the interpolated server time at which the fire happened (time of release for grenades)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverTime; // Offset: 0x290

    // seed for deterministic random number generation on all machines, used for spread pattern generation.
    short fireSeed; // Offset: 0x298

    // additional projectiles to spawn when fired, based on multiple locked targets
    int additionalProjectiles; // Offset: 0x29C

    // slot the weapon was fired from
    equipSlot_t equipSlot; // Offset: 0x2A0

    // client forced weapon charge percent
    float clientWeaponChargeFireEvent; // Offset: 0x2A4

}; // Size: 0x2A8
