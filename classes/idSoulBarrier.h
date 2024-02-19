struct idSoulBarrier : idDemonPlayerShield
{
    struct colorHealthPair_t
    {
        // health unary (1.0 full, 0.0 destroyed)
        float health; // Offset: 0x0

        // color to show
        idColor color; // Offset: 0x4

    }; // Size: 0x14

    // How many lost souls to spawn, hp will be divided between them evenly
    int numSoulsToSpawn; // Offset: 0xF8

    // How long before we can use our shield / primary attack after launching soul barrier
    idTypesafeTime < int , millisecondUnique_t , 1000 > vulnerabilityPeriod; // Offset: 0xFC

    // How long should we wait after playing screen dmg fx before displaying it again
    idTypesafeTime < int , millisecondUnique_t , 1000 > barrierDamageScreenFxCooldownMS; // Offset: 0x100

    // How fast do the lost souls rotate ( degrees per second )
    float rotationSpeed; // Offset: 0x104

    // How fast to rotate when launched
    float launchRotationSpeed; // Offset: 0x108

    // How far apart the lost souls are at launch
    float launchRadius; // Offset: 0x10C

    // How far apart are the souls around the pain elemental
    float radius; // Offset: 0x110

    // Allow main fire when active
    bool allowMainFireWhenActive; // Offset: 0x114

    // Automatically fire off all souls when shield times out
    bool autoLaunchOnTimeout; // Offset: 0x115

    // lost soul projectile decl
    idDeclProjectile* lostSoul; // Offset: 0x118

    // upgraded lost soul projectile decl
    idDeclProjectile* lostSoulUpgraded; // Offset: 0x120

    // sound to play when soul barrier is launched as a projectile
    idSoundEvent* launchSound; // Offset: 0x128

    // second sound to play when soul barrier is launched
    idSoundEvent* launchSound2; // Offset: 0x130

    // Rumble decl to play when barrier is spawned
    idDeclRumble* shieldSpawnRumble; // Offset: 0x138

    // Rumble decl to play when barrier is launched
    idDeclRumble* controllerRumbleDecl; // Offset: 0x140

    // shake decl to play when barrier is launched
    idDeclAdvancedViewShake* fireViewShakeDecl; // Offset: 0x148

    // shield entity to spawn
    idDeclEntityDef* shieldEntityDef; // Offset: 0x150

    // color values for shield conditions (1.0 is full health, 0.0 is destroyed)
    idList < idSoulBarrier::colorHealthPair_t , TAG_IDLIST , false > colorValues; // Offset: 0x158

    bool useUpgradedSoul; // Offset: 0x170

    float roll; // Offset: 0x174

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > vulnerabilityEndTime; // Offset: 0x178

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastBarrierDamageScreenFxGT; // Offset: 0x180

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUseFailTime; // Offset: 0x188

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > projectiles; // Offset: 0x190

    idManagedClassPtr < idEntity > shieldEntity; // Offset: 0x1A8

}; // Size: 0x1C8
