struct idProjectile_SiphonGrenade : idProjectile_Grenade
{
    enum siphonGrenadeState_t : int
    {
        SIPHON_INITIAL = 0,
        SIPHON_BEGIN_DEPLOY = 1,
        SIPHON_DEPLOYING = 2,
        SIPHON_DEPLOYED = 3,
        SIPHON_SHUTDOWN = 4,
        SIPHON_DEAD = 5,
        SIPHON_MAX = 6
    };

    // spawned volume
    idManagedClassPtr < idVolume_Siphon > volume; // Offset: 0x32A0

    // def of volume that defines the siphon area
    idDeclEntityDef* volumeDef; // Offset: 0x32C0

    // how long does deployment last
    int deployTimeMS; // Offset: 0x32C8

    // how long does the grenade remain active after activating
    int lifetimeAfterDeploymentMS; // Offset: 0x32CC

    // how long to wait before we remove everything (this is the shutdown state when everything is hidden)
    int shutdownLifetimeMS; // Offset: 0x32D0

    // transparency of the friendly boundary shader
    float friendlyBoundaryAlpha; // Offset: 0x32D4

    // transparency of the enemy boundary shader
    float enemyBoundaryAlpha; // Offset: 0x32D8

    // how fast to shoot the siphon grenade off the ground {{ units = m / s }}
    float deployImpulse; // Offset: 0x32DC

    // perk associated with the increased health stolen upgrade
    idDeclPerk* increasedHealthUpgrade; // Offset: 0x32E0

    // scale applied to health stolen when increased health upgrade is active
    float increasedHealthScale; // Offset: 0x32E8

    // perk associated with the larger radius upgrade
    idDeclPerk* largerRadiusUpgrade; // Offset: 0x32F0

    // volume used when larger radius upgrade is active
    idDeclEntityDef* largerRadiusVolumeDef; // Offset: 0x32F8

    idProjectile_SiphonGrenade::siphonGrenadeState_t internalState; // Offset: 0x3300

    idSmartTimer < GAMETIME_SERVER > deployTimer; // Offset: 0x3308

    idSmartTimer < GAMETIME_SERVER > lifeTimer; // Offset: 0x3310

    idSmartTimer < GAMETIME_SERVER > shutdownTimer; // Offset: 0x3318

    bool playedTeamFx; // Offset: 0x3320

}; // Size: 0x3328
