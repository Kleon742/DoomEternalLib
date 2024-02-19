struct idWeaponTargetLockData_t
{
    // locking allowed with this weapon
    bool canLock; // Offset: 0x0

    // type of aim point group targets to consider (AIMPOINT_BEST to consider all)
    aimPoint_t aimPointType; // Offset: 0x4

    // FOV of lock-on area (for initial acquisition)
    float lockFOV; // Offset: 0x8

    // FOV to unlock target (or -1 to default to lockFOV)
    float unlockFOV; // Offset: 0xC

    // FOV to use while acquiring a lock-on target (or -1 to default to lockFOV)
    float acquiringFOV; // Offset: 0x10

    // FOV of lock-on area (for initial acquisition)
    float spiritLockFOV; // Offset: 0x14

    // FOV to use while acquiring a lock-on target (or -1 to default to lockFOV)
    float spiritAcquiringFOV; // Offset: 0x18

    // OPTIONAL. Allows specifying lockFOV, unlockFOV, and acquiringFOV for specific entity types (e.g. idTarget_SmartAIProxy). Entity types NOT specified in this list will use the global values.
    idList < entityTypeFOVData_t , TAG_IDLIST , false > entityTypeFOVData; // Offset: 0x20

    // When set, system is constantly looking for a better target, even when there's a currently locked target.
    bool lockTargetConstantEvaluation; // Offset: 0x38

    // the max dist to targets (or 0 to ignore) {{ units = m }}
    float lockMaxDist; // Offset: 0x3C

    // used when targeting spirit AI
    float spiritLockMaxDist; // Offset: 0x40

    // time to acquire lock
    milliToGameTime_t lockTime; // Offset: 0x48

    // if true, all targets are ACQUIRED / LOCKED at the same time (rather than each target waiting for previous targeting ACQUIRE / LOCKED to process)
    bool multipleTargetsAquiredSimultaneously; // Offset: 0x58

    // if true then lock % = charge %
    bool linkLockToCharge; // Offset: 0x59

    // if true utilize the total lock % [0, maxTargets] (example: allowing the hud to display additional animations for multiple locks).
    bool useLockTotalPct; // Offset: 0x5A

    // how long after losing or breaking a lock can a target be acquired again?
    milliToGameTime_t lockTimeout; // Offset: 0x60

    // max time target stays locked
    milliToGameTime_t unlockTime; // Offset: 0x70

    // max time target can be outside of FOV (before breaking the lock)
    milliToGameTime_t outOfFovTime; // Offset: 0x80

    // max time target can be out of LOS
    milliToGameTime_t outOfLOSTime; // Offset: 0x90

    // max time target can be out of LOS or FOV while acquiring
    milliToGameTime_t acquiringLockLOSFOVTime; // Offset: 0xA0

    // maintain lock without holding 'lock' button
    bool automaticallyMaintainLock; // Offset: 0xB0

    // lock is started / acquired automatically (no button presses required to lock / maintain lock)
    bool automaticallyInitiateLock; // Offset: 0xB1

    // array of lock sounds that correspond to which number target they are (index 0 = 1st target lock, 1 = 2nd target lock, etc)
    idList < const idSoundEvent * , TAG_IDLIST , false > soundsAquiring; // Offset: 0xB8

    // played on trigger pull if no target
    idSoundEvent* soundNoTarget; // Offset: 0xD0

    // sound that plays when a target lock is acquired
    idSoundEvent* soundLocked; // Offset: 0xD8

    // sound that plays when a target lock is broken (target outside of FOV for too long, target locked for too long)
    idSoundEvent* soundLockBroken; // Offset: 0xE0

    // sound that plays when a target lock is broken? (manual disengage, target dead)
    idSoundEvent* soundLockDisengage; // Offset: 0xE8

    // if true then any lock is lost when the weapon is fired
    bool loseLockOnFire; // Offset: 0xF0

    // if true then must have a locked target to fire
    bool requireLockToFire; // Offset: 0xF1

    // if true then to set the firemode there must be a potential target but it doesn't need to be locked
    bool requireTargetForFireMode; // Offset: 0xF2

    // it true, then stack-lock fire will continue shooting per-lock after releasing the secondary firing trigger
    bool continueStackFireRelease; // Offset: 0xF3

    // specifies the stack lock mode (none, multi, single, dual)
    stackLockMode_t stackLockMode; // Offset: 0xF4

    // sound to play if firing is attempted without a required target
    idSoundEvent* noTargetDenySound; // Offset: 0xF8

    // maximum number of targets that can be locked at once
    int maxTargets; // Offset: 0x100

    // how long after locking a target before targeting can begin acquiring another target
    milliToGameTime_t nextTargetTimeout; // Offset: 0x108

    // clear targeting after firing this many shots
    int clearAfterNumShots; // Offset: 0x118

    // should other players block line of sight to a target that's being acquired or is locked
    bool playersBlockLineOfSight; // Offset: 0x11C

    // should collision block line of sight to a target that's being acquired or is locked
    bool collisionBlocksLineOfSight; // Offset: 0x11D

    // Relocking a previously locked target within this time will grant a reduction to lock time.
    milliToGameTime_t relockExpireTime; // Offset: 0x120

    // Ratio of the normal lock time to use when qualified for re-lock bonus.
    float relockTimeReductionFactor; // Offset: 0x130

    // automatically breaks lock after unlockTimeSec elapses, will not try to hold on to target
    bool autoBreakLock; // Offset: 0x134

    // if true then fire one projectile for each locked target, ammo permitting
    bool fireProjectilePerLock; // Offset: 0x135

    // if true then additional projectiles added due to multiple targets (fireProjectilePerLock) don't cost extra ammo
    bool additionalProjectilesFreeAmmo; // Offset: 0x136

    // fire projectiles in a burst instead of all at once, using burstInfo
    bool fireBurst; // Offset: 0x137

    // allows locked targets obscured by geometry to have outlines visible through geometry
    bool outlineHiddenTargets; // Offset: 0x138

    // require enemy to remain in fov while being locked
    bool losWhileAquiringLock; // Offset: 0x139

    // if true the lockPOI will always be drawn on the target center
    bool forcePOIatCenter; // Offset: 0x13A

    // POI to show on enemy that is locked. Use idWeapon::ShowTargetingPOI() to control when it's visible
    idDeclPOI* lockPOI; // Offset: 0x140

    // if true then can target when weapon is empty
    bool canTargetWhenEmpty; // Offset: 0x148

    // can target invisible players (does not apply to AI)
    bool canTargetInvisiblePlayers; // Offset: 0x149

}; // Size: 0x150
