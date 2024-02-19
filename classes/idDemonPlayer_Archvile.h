struct idDemonPlayer_Archvile : idDemonPlayer
{
    struct archvileData_t
    {
        // button used for primary attack
        usercmdButton_t primaryAttackButton; // Offset: 0x0

        // button used for lake of fire
        usercmdButton_t lakeOfFireButton; // Offset: 0x8

        // button used for flame wall
        usercmdButton_t flameWallButton; // Offset: 0x10

        // button used to teleport the archvile
        usercmdButton_t teleportButton; // Offset: 0x18

        // button used for power attack
        usercmdButton_t powerAttackButton; // Offset: 0x20

        // power attack weapon
        idDeclWeapon* powerAttackWeapon; // Offset: 0x28

        // until we have proper animation, power attack takes a fixed time to perform
        idTypesafeTime < int , millisecondUnique_t , 1000 > powerAttackDurationMS; // Offset: 0x30

        // flame wall data how far forward from demon wall spawns (m)
        float flameWallSpacing; // Offset: 0x34

    }; // Size: 0x38

    struct wildFireData_t
    {
        // how long to cool down after firing
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldown; // Offset: 0x0

        // sound to play when wild fire is used
        idSoundEvent* useSound; // Offset: 0x8

        // projectile entity to fire
        idDeclEntityDef* projectileDecl; // Offset: 0x10

    }; // Size: 0x18

    struct teleportData_t
    {
        // how far to try to teleport
        float teleportMaxDistance; // Offset: 0x0

        // how much vertical room do we need to teleport
        float teleportHeightCheck; // Offset: 0x4

        // cooldown time
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > teleportCooldown; // Offset: 0x8

        // sfx for teleport start
        idSoundEvent* teleportStartSound; // Offset: 0x30

        // sfx for teleport end
        idSoundEvent* teleportEndSound; // Offset: 0x38

        // sfx for teleport target loop
        idSoundEvent* teleportTargetLoopSound; // Offset: 0x40

        // sfx for teleport fail
        idSoundEvent* teleportFailSound; // Offset: 0x48

        // decl for targeting ribbon with valid location
        idDeclRibbon2* valid_ribbonDecl; // Offset: 0x50

        // decl for targeting ribbon with invalid location
        idDeclRibbon2* invalid_ribbonDecl; // Offset: 0x58

    }; // Size: 0x60

    struct lakeOfFireData_t
    {
        // entitydef for lake of fire hazard
        idDeclEntityDef* hazardDef; // Offset: 0x0

        // how long it takes to cast
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > castDuration; // Offset: 0x8

        // how long the hazard stays in the world
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > lifeTime; // Offset: 0x30

        // how long until it can be used again after a successful cast
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > cooldown; // Offset: 0x58

        // short time spacing (in ms) between flame entities in each ring spawning
        idTypesafeTime < int , millisecondUnique_t , 1000 > flameRingTimeSpacing; // Offset: 0x80

        // sound to play when casting lake of fire
        idSoundEvent* startTargetingSound; // Offset: 0x88

        // sound to play when lake of fire is spawned
        idSoundEvent* lakeOfFireSpawnSound; // Offset: 0x90

        // sound to play when lake of fire fails
        idSoundEvent* lakeOfFireCancelSound; // Offset: 0x98

        // max distance at which to spawn the lake of fire
        float maxSpawnDistance; // Offset: 0xA0

        // how far to test from trace point for NAV
        idVec3 aasSearchSize; // Offset: 0xA4

        // how much to scale look sensitivity while casting
        float lookSpeedScalar; // Offset: 0xB0

        // how much to scale movement speed while casting
        float moveSpeedScalar; // Offset: 0xB4

        // CAREFUL! spacing radius of each flame fx entity (don't make this too small - will exponentially increase number of entities spawned)
        float flameEntRadius; // Offset: 0xB8

        // radius of whole lake
        float lakeRadius; // Offset: 0xBC

        // CAREFUL! how far up above target spot we start to trace downward
        float lakeTraceUpOffset; // Offset: 0xC0

        // CAREFUL! how far down in total we trace
        float lakeTraceDownDist; // Offset: 0xC4

        // used for UI Purposes
        idDeclDemonCard* lakeofFireCard; // Offset: 0xC8

        // lake of fire feedback
        weaponFeedBack_t feedback; // Offset: 0xD0

        // lake of fire view shake
        idDeclAdvancedViewShake* viewShake; // Offset: 0x2E8

    }; // Size: 0x2F0

    struct flameWallData_t
    {
        // entity to use for archvile flame shield
        idDeclEntityDef* shieldEntity; // Offset: 0x0

        // shield entity radius
        float shieldEntityRadius; // Offset: 0x8

        // supplementary blockers for tracers / explosions
        idDeclEntityDef* blockerEntity; // Offset: 0x10

        // How far apart blocker entities should be placed from each other
        float blockerOffset; // Offset: 0x18

        // hazard entity to use for archvile flame shield
        idDeclEntityDef* hazardEntity; // Offset: 0x20

        // sound to play when shield is activated
        idSoundEvent* activationSound; // Offset: 0x28

        // sound to play when shield is deactivated
        idSoundEvent* deactivationSound; // Offset: 0x30

        // sound to play when shield fails to activate
        idSoundEvent* failActivationSound; // Offset: 0x38

        // shield fx decl
        idDeclFX* shieldFxDecl; // Offset: 0x40

        // how long the flame wall exists for (ms)
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > durationMS; // Offset: 0x48

        // how long until it becomes useable again once it's deactivated
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > cooldown; // Offset: 0x70

        // how long after a failed cast until they can cast again
        idTypesafeTime < int , millisecondUnique_t , 1000 > failPenalty; // Offset: 0x98

        // used for UI Purposes
        idDeclDemonCard* flameWallCard; // Offset: 0xA0

        // color of shield at max health
        idColor maxHealthColor; // Offset: 0xA8

        // color of shield at min health
        idColor minHealthColor; // Offset: 0xB8

        // color of shield with fire specialist upgrade at max health
        idColor maxHealthUpgradedColor; // Offset: 0xC8

        // color of shield with fire specialist upgrade at min health
        idColor minHealthUpgradedColor; // Offset: 0xD8

        // flame wall feedback
        weaponFeedBack_t feedback; // Offset: 0xE8

        // flame wall view shake
        idDeclAdvancedViewShake* viewShake; // Offset: 0x300

    }; // Size: 0x308

    struct lakeOfFireEntityQueue_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > spawnTime; // Offset: 0x0

        idHavokMultiHitQueryId queryId; // Offset: 0x8

        bool queryResolved; // Offset: 0x10

        idVec3 traceStartPos; // Offset: 0x14

        idVec3 aimTargetPos; // Offset: 0x20

        idVec3 spawnPosition; // Offset: 0x2C

    }; // Size: 0x38

    struct flameEntityJobParms_t
    {
        idDemonPlayer_Archvile* archvile; // Offset: 0x0

        idList < idEntity * , TAG_IDLIST , false > entitiesToProcess; // Offset: 0x8

    }; // Size: 0x20

    // data specific to Archvile
    idDemonPlayer_Archvile::archvileData_t archvileData; // Offset: 0x36FC8

    // data specific to wild fire attack
    idDemonPlayer_Archvile::wildFireData_t wildFireData; // Offset: 0x37000

    // data specific to archvile teleport
    idDemonPlayer_Archvile::teleportData_t teleportData; // Offset: 0x37018

    // Flame wall data
    idDemonPlayer_Archvile::flameWallData_t flameWallData; // Offset: 0x37078

    // Lake of fire data
    idDemonPlayer_Archvile::lakeOfFireData_t lakeOfFireData; // Offset: 0x37380

    // teleport targeting reticle
    idDeclEntityDef* reticleEntityDef; // Offset: 0x37670

    // teleport targeting adjusted destination
    idDeclEntityDef* targetEntityDef; // Offset: 0x37678

    // lake of fire targetting entity def
    idDeclEntityDef* lakeOfFireTargetEntityDef; // Offset: 0x37680

    // first person shoot additive anim alias
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > firstPersonShootAdditiveAnimAlias; // Offset: 0x37688

    // first person shoot additive blend time
    idTypesafeTime < int , millisecondUnique_t , 1000 > firstPersonShootBlendTimeMS; // Offset: 0x3768C

    // third person lake of fire additive anim alias
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonLakeOfFireAdditiveAnimAlias; // Offset: 0x37690

    // third person lake of fire additive blend time
    idTypesafeTime < int , millisecondUnique_t , 1000 > thirdPersonLakeOfFireBlendTimeMS; // Offset: 0x37694

    // flame wall ability cooldown
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidFlameWallTime; // Offset: 0x37698

    // next time wild fire can be used
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextFireTime; // Offset: 0x376A0

    // next time the archvile can teleport
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidTeleportTime; // Offset: 0x376A8

    // when does the flame shield time out?
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > shieldDeactivateTime; // Offset: 0x376B0

    // last time we tried to use flame wall, but failed (due to cooldown)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastFlameWallUseFailTime; // Offset: 0x376B8

    // we create an entity to display FX at the teleport crosshair location
    idManagedClassPtr < idEntity > teleportReticleEntity; // Offset: 0x376C0

    // we create an entity to display FX at the adjusted teleport destination location
    idManagedClassPtr < idEntity > teleportTargetEntity; // Offset: 0x376E0

    // we create an entity to display FX at lake of fire target location
    idManagedClassPtr < idEntity > lakeOfFireTargetEntity; // Offset: 0x37700

    // when to remove the lake of fire entity
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lakeOfFireRemoveTime; // Offset: 0x37720

    // when can we use Lake of fire next
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextLakeOfFireCastTime; // Offset: 0x37728

    // last time we tried to use lake of fire, but failed (due to cooldown)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastLakeOfFireUseFailTime; // Offset: 0x37730

    // teleport info ( visual only ) list of teleport points
    idArray < idVec3 , 100 > teleportArcPoints; // Offset: 0x37738

    // number of teleport traces
    int numTeleportTraces; // Offset: 0x37BE8

    // targetting ribbon for archvile teleport with valid destination
    idRibbon2 teleportRibbon_valid; // Offset: 0x37BF0

    // targetting ribbon for archvile teleport with invalid destination
    idRibbon2 teleportRibbon_invalid; // Offset: 0x37D08

    // which ribbon are we using currently?
    idRibbon2* currentRibbon; // Offset: 0x37E20

    // owner wants to teleport
    bool ownerWantsToTeleport; // Offset: 0x37E28

    // spectating client currently has fx/visuals setup for wanting to teleport
    bool clientWantsToTeleport; // Offset: 0x37E29

    // tracked projectiles for archvile shield
    idList < idManagedClassPtr < idProjectile > , TAG_IDLIST , false > trackedProjectiles; // Offset: 0x37E30

    // shield entity
    idManagedClassPtr < idDynamicEntity_Damageable > shieldEntity; // Offset: 0x37E48

    // shield blocker 1 entity
    idManagedClassPtr < idDynamicEntity_Damageable > shieldBlockerEntity1; // Offset: 0x37E68

    // shield blocker 2 entity
    idManagedClassPtr < idDynamicEntity_Damageable > shieldBlockerEntity2; // Offset: 0x37E88

    // shield hazard entity
    idManagedClassPtr < idEnvironmentalDamage_Hurt_Trigger > shieldHazardEntity; // Offset: 0x37EA8

    // are we searching for a teleport destination right now?
    bool wantsToTeleport; // Offset: 0x37EC8

    // is our current destination valid?
    bool validTeleportDestination; // Offset: 0x37EC9

    bool teleportTargetSoundPlaying; // Offset: 0x37ECA

    idHavokQueryId teleportQuery; // Offset: 0x37ED0

    trace_t teleportResult; // Offset: 0x37ED8

    idVec3 teleportDestination; // Offset: 0x37F58

    // normal of the teleport destination
    idVec3 teleportDestinationNormal; // Offset: 0x37F64

    bool lakeOfFireDestinationValid; // Offset: 0x37F70

    trace_t lakeOfFireResult; // Offset: 0x37F74

    idVec3 lakeOfFireDestination; // Offset: 0x37FF4

    idHavokQueryId flameWallQuery; // Offset: 0x38000

    // last valid target pos for flame wall
    idVec3 flameWallTargetPos; // Offset: 0x38008

    // is the teleportation indicator showing?
    bool teleportButtonShowing; // Offset: 0x38014

    // is our shield currently enabled
    bool shieldEnabled; // Offset: 0x38015

    // is primary attack button down
    bool primaryAttackDown; // Offset: 0x38016

    // does flame wall mod fireball (mid-match upgrade)
    bool flameWallModsFireball; // Offset: 0x38017

    // server queues up lake of fire flame entities to spawn
    idList < idDemonPlayer_Archvile::lakeOfFireEntityQueue_t , TAG_IDLIST , false > queuedLakeOfFireEntities; // Offset: 0x38018

    // number of flame entities waiting to spawn
    int numQueuedLakeOfFireEntites; // Offset: 0x38030

    // entity pool for spawning the flame entities
    idEntityPool* lakeOfFireEntityPool; // Offset: 0x38038

    jobHandle_t lakeOfFireJobHandle; // Offset: 0x38040

    idDemonPlayer_Archvile::flameEntityJobParms_t flameEntityJobParms; // Offset: 0x38048

}; // Size: 0x38068
