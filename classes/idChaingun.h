struct idChaingun : idWeapon
{
    enum idChaingunBarrelState : int
    {
        CHAINGUN_BARREL_RESETTING = 0,
        CHAINGUN_BARREL_STOPPED = 1,
        CHAINGUN_BARREL_ACCEL = 2,
        CHAINGUN_BARREL_DECEL = 3,
        CHAINGUN_BARREL_ALIGNING = 4
    };

    struct idChainGunSyncData
    {
        bool barrelIsSpinningUp; // Offset: 0x0

    }; // Size: 0x1

    struct drillbackRounds_t
    {
        // list of active drillback projectiles
        idList < idManagedClassPtr < idProjectile > , TAG_IDLIST , false > activeList; // Offset: 0x0

        int counter; // Offset: 0x18

    }; // Size: 0x20

    idChaingun::idChainGunSyncData chainGunSyncData; // Offset: 0x3BA0

    // 0 to 360 degrees
    float barrelPos; // Offset: 0x3BA4

    // stores the last barrel pos
    float lastBarrelPos; // Offset: 0x3BA8

    // angular velocity in degs/sec
    float barrelVel; // Offset: 0x3BAC

    // parameter for barrel vel curve
    float barrelVelT; // Offset: 0x3BB0

    // force the barrel to spin
    bool barrelForceSpin; // Offset: 0x3BB4

    // decel rate to use based on vel when decel begins
    float barrelDecel; // Offset: 0x3BB8

    // stores this to use during the reset
    float barrelVelAtReset; // Offset: 0x3BBC

    // used to track which barrel anim is playing
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > barrelAnim; // Offset: 0x3BC0

    // when player started firing weapon
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fireWeaponStartedTime; // Offset: 0x3BC8

    // when player started alt firing weapon
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > altFireWeaponStartedTime; // Offset: 0x3BD0

    // time when sound can be played
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextHighDamageAmmoSoundTime; // Offset: 0x3BD8

    // time when sound can be played
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextHighDamageAmmoRequiredSoundTime; // Offset: 0x3BE0

    // time when high damage ammo starts depleting
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > highDamageAmmoHoldTime; // Offset: 0x3BE8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastAmmoChangeTime; // Offset: 0x3BF0

    bool usingChaingun; // Offset: 0x3BF8

    bool spinSoundPlaying; // Offset: 0x3BF9

    bool spinSoundRTPCPlaying; // Offset: 0x3BFA

    bool abortedAltTriggerPull; // Offset: 0x3BFB

    bool dischargeAdditiveAnim_HasBeenPlayed; // Offset: 0x3BFC

    idChaingun::idChaingunBarrelState barrelState; // Offset: 0x3C00

    // drillback rounds data
    idChaingun::drillbackRounds_t drillbackRounds; // Offset: 0x3C08

    bool energyShellReleasedAltTrigger; // Offset: 0x3C28

    bool energyShellPlayedAdditivePausedAnim; // Offset: 0x3C29

    idSoundObject energyShellFiredSoundObject; // Offset: 0x3C30

    idSoundWwiseID energyShellFireSoundID; // Offset: 0x3C40

}; // Size: 0x3C48
