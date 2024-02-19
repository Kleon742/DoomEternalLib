struct idWeaponMastery
{
    enum weaponMasteryType_t : int
    {
        WMT_NONE = 0,
        WMT_SHOTGUN_TRIPLE_BURST = 1,
        WMT_SHOTGUN_POP_ROCKETS = 2,
        WMT_PLASMA_RIFLE_AOE = 3,
        WMT_PLASMA_RIFLE_STUN_SHOT = 4,
        WMT_HEAVY_AR_ZOOM = 5,
        WMT_ROCKET_LAUNCHER_DETONATE = 6,
        WMT_CHAINGUN_TURRET = 7,
        WMT_CHAINGUN_GATLING = 8,
        WMT_GAUSS_SIEGE = 9,
        WMT_GAUSS_SNIPER = 10
    };

    // mastery type
    idWeaponMastery::weaponMasteryType_t type; // Offset: 0x0

    // sound to play when mastery event occurs
    idSoundEvent* masteryEventSound; // Offset: 0x8

    // fx to play when mastery event occurs
    fxCondition_t masteryEventFx; // Offset: 0x10

    // specify a damage scale here
    float damageScale; // Offset: 0x14

    // override projectile decl
    idDeclProjectile* projectileDecl; // Offset: 0x18

    // specify a passive charge time here
    milliToGameTime_t passiveChargeTimeMS; // Offset: 0x20

    // submunition info
    idSubmunitionInfo submunitionInfo; // Offset: 0x30

    // upgrade to give when mastery is acquired
    idDeclUpgrade* declUpgrade; // Offset: 0x88

    // Entity to spawn when an enemy is killed while stunned by mastered plasma stun shot
    idDeclEntityDef* spawnEntOnKillMasteryStunned; // Offset: 0x90

    // how many enemies must be killed to progress toward mastery completion
    int numEnemiesToKillForMasteryProgress; // Offset: 0x98

    // rocket detonate mastery - spawn when projectile is detonated
    idDeclEntityDef* explodeProjectilesEntityDef; // Offset: 0xA0

    // 2-D offsets from the primary explosion for delayed projectile explosions while proximity flare is active {{ units = m }}
    idArray < int , 8 > proximityFlareDelayedProjectileOffsetEnables; // Offset: 0xA8

}; // Size: 0xC8
