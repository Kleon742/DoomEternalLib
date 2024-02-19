struct idEnergyShell : idAnimatedEntity
{
    struct damageOverrideScalar_t
    {
        // valid damage decl
        idDeclDamage* damage; // Offset: 0x0

        // override scalar
        float overrideDamageScale; // Offset: 0x8

    }; // Size: 0x10

    struct dmgScale_t
    {
        // how much damage has to be absorbed to use this value
        float damageAbsorbed; // Offset: 0x0

        // damage scale to apply
        float damageScale; // Offset: 0x4

    }; // Size: 0x8

    struct entityHitTime_t
    {
        idSpawnId spawnId; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > hitTime; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextDashDamageTime; // Offset: 0x10

    }; // Size: 0x18

    // if true then shield requires input button to be held down
    bool requireInputHeld; // Offset: 0x1B48

    // if true, we perform a direction check to make sure the damage is coming from the front 180 degrees of the player
    bool onlyAbsorbFrontal; // Offset: 0x1B49

    // how much health the shield has at the start of each activation
    float healthPoints; // Offset: 0x1B4C

    // rate of health decay (can be 0)
    float healthDecayPerSec; // Offset: 0x1B50

    // how much to scale the damage to the shield if coming from a demon player
    float demonPlayerDamageScale; // Offset: 0x1B54

    // how much to scale the damage to the shield if coming from a specific demon player
    idList < idEnergyShell::damageOverrideScalar_t , TAG_IDLIST , false > demonPlayerDamageScaleOverrides; // Offset: 0x1B58

    // if true then deduct absorbed damage from shield health
    bool deductAbsorbedDamageFromHealth; // Offset: 0x1B70

    // total amount of damage absorbed since deployment
    float damageAbsorbed; // Offset: 0x1B74

    // total amount of damage dealt since deployment
    float damageDealt; // Offset: 0x1B78

    // total number of hits against AI since deployment (shot count only, not recognizing multiple projectiles/hits per shot)
    int numHits; // Offset: 0x1B7C

    // track the hit frame so that multiple hits from a single shot don't count multiple times (chaingun has 8 projectiles per shot)
    int lastHitFrame; // Offset: 0x1B80

    // scale to apply to discharge timeout if deactivated when empty (lerps between this and the full value)
    float dischargeTimeoutScaleDeactivateEmpty; // Offset: 0x1B84

    // scale to apply to discharge timeout if deactivated when full (lerps between this and the empty value)
    float dischargeTimeoutScaleDeactivateFull; // Offset: 0x1B88

    // degrees of coverages centered on player forward
    float coverageDegs; // Offset: 0x1B8C

    // radius of spherical shell
    float radius; // Offset: 0x1B90

    // a smaller radius inside which no damage occurs
    float innerRadius; // Offset: 0x1B94

    // how far up from 1/2 player height
    float zOffset; // Offset: 0x1B98

    // damage that the shield does not block
    idList < const idDeclDamage * , TAG_IDLIST , false > unblockedDamage; // Offset: 0x1BA0

    // damage that is not blocked and instantly breaks the shield
    idList < const idDeclDamage * , TAG_IDLIST , false > instantBreakDamage; // Offset: 0x1BB8

    // damage to apply on contact with something
    idDeclDamage* contactDamage; // Offset: 0x1BD0

    // timeout after contact damage before it can be done again on the same enemy
    idTypesafeTime < int , millisecondUnique_t , 1000 > contactDamageTimeoutMS; // Offset: 0x1BD8

    // timeout after contact damage before it can be done again on the same enemy while dashing
    idTypesafeTime < int , millisecondUnique_t , 1000 > contactDamageDashingTimeoutMS; // Offset: 0x1BDC

    // damage to apply on contact with something during a dash
    idDeclDamage* dashContactDamage; // Offset: 0x1BE0

    // default damage to use.
    idDeclDamage* defaultDamage; // Offset: 0x1BE8

    // looping while active
    idSoundEvent* activateSound; // Offset: 0x1BF0

    // play this for any deactivation
    idSoundEvent* deactivateSound; // Offset: 0x1BF8

    // looping while active
    idSoundEvent* activeSound; // Offset: 0x1C00

    // absorb damage sound
    idSoundEvent* absorbDamageSound; // Offset: 0x1C08

    // collide with enemy
    idSoundEvent* collideSound; // Offset: 0x1C10

    // dealt damage sound
    idSoundEvent* dealtDamageSound; // Offset: 0x1C18

    // mastery projectile ready to fire
    idSoundEvent* masteryReadySound; // Offset: 0x1C20

    // plays when shield reaches maximum duration
    idSoundEvent* outOfTimeSound; // Offset: 0x1C28

    // plays when shield has absorbed as much damage as allowed
    idSoundEvent* maxDamageAbsorbedSound; // Offset: 0x1C30

    // deactivated due to input released
    idSoundEvent* inputReleasedSound; // Offset: 0x1C38

    // fx decl to use in third person
    idDeclFX* thirdPersonFX; // Offset: 0x1C40

    // if shield is mastered, fire this projectile when shield is deactivated
    idDeclEntityDef* masteryShieldDeactivatedProjectile; // Offset: 0x1C48

    // if true then fire the projectile only when the shield is deactivated fully depleted
    bool masteryShieldDeactivatedProjectileOnlyWhenDepleted; // Offset: 0x1C50

    // if >= 0, then the shield must absorb at least this much damage for the mastery projectile to be launched
    float masteryShieldDeactivatedProjectileMinAbsorbedDamage; // Offset: 0x1C54

    float inverseMasteryShieldDeactivatedProjectileMinAbsorbedDamage; // Offset: 0x1C58

    // if >= 0, then the player must deal at least this much damage to AIs for the mastery projectile to be launched
    float masteryShieldDeactivatedProjectileMinDealtDamage; // Offset: 0x1C5C

    float inverseMasteryShieldDeactivatedProjectileMinDealtDamage; // Offset: 0x1C60

    // if >= 0, then the player must score this many direct hits on AI for the mastery projectile to be launched
    float masteryShieldDeactivatedProjectileMinHits; // Offset: 0x1C64

    float inverseMasteryShieldDeactivatedProjectileMinHits; // Offset: 0x1C68

    // damage dealt type needs to match one in the collection to contribute to damage dealt mastery
    idDeclAIDamageDeclCollection* masteryDealtDamageTypes; // Offset: 0x1C70

    // damage scales for tiers of absorbed damage
    idList < idEnergyShell::dmgScale_t , TAG_IDLIST , false > masteryProjectileDamageScales; // Offset: 0x1C78

    // scale primary fire damage at different tiers of damage absorbed (needs WMT_WEAPON_DECL_ENERGY_SHELL_PRIMARY_FIRE_DAMAGE_SCALE)
    idList < idEnergyShell::dmgScale_t , TAG_IDLIST , false > primaryFireDamageScales; // Offset: 0x1C90

    // gain health for each hit against an active AI (needs WMT_WEAPON_DECL_ENERGY_SHELL_HEALTH_GAIN_ON_AI_HIT)
    float healthGainPerAIHit; // Offset: 0x1CA8

    // screen shake params when absorbing damage
    idDeclAdvancedViewShake* absorbScreenShakeDecl; // Offset: 0x1CB0

    // facing threshold to do damage on contact
    float contactDamageFacingThresholdDegrees; // Offset: 0x1CB8

    bool hasHealthGainUpgrade; // Offset: 0x1CBC

    // owning weapon
    idWeapon* weapon; // Offset: 0x1CC0

    // active or not
    bool active; // Offset: 0x1CC8

    // time of activation
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > activateTime; // Offset: 0x1CD0

    // track the hit ents so we can ignore them for the specified
    idList < idEnergyShell::entityHitTime_t , TAG_IDLIST , false > entityHitTimes; // Offset: 0x1CD8

    // length of time after hitting them health points remaining
    float healthPointsRemaining; // Offset: 0x1CF0

    // owner of energy shell
    idManagedClassPtr < idEntity > owner; // Offset: 0x1CF8

    // shape for testing contents
    idHavokShapePointer shape; // Offset: 0x1D18

    // shape for testing contents
    idHavokShapePointer innerShape; // Offset: 0x1D20

    // contents query
    idHavokGatherQueryId gatherQuery; // Offset: 0x1D28

    // contents query
    idHavokGatherQueryId innerGatherQuery; // Offset: 0x1D30

    // flags that shell ended due to time
    bool timedOut; // Offset: 0x1D38

    // flags that shell ended due to damage
    bool absorbedMaxDamage; // Offset: 0x1D39

    // forces deactivation
    bool forceDeactivate; // Offset: 0x1D3A

    float dischargeTimeoutScale; // Offset: 0x1D3C

    // mod is mastered
    bool mastered; // Offset: 0x1D40

    // force mastery effect on deactivation (non-local owner only)
    bool forceMastery; // Offset: 0x1D41

    // tracks what percent FX is using
    float fxHealthPercent; // Offset: 0x1D44

    // impact effects to use for non-projectile impacts
    idDeclImpactEffect* impactEffects; // Offset: 0x1D48

    // last time a demon player was hit
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTimeDemonPlayerHit; // Offset: 0x1D50

    // (needed because other client data is generally not accurate)
    bool forceSpawnExplosionEnt; // Offset: 0x1D58

    idVec3 forceExplosionEntOrigin; // Offset: 0x1D5C

    idVec3 forceExplosionEntForward; // Offset: 0x1D68

}; // Size: 0x1D78
