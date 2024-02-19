struct idDemonPlayer_PainElemental : idDemonPlayer
{
    enum painElemental_FireType : int
    {
        FIRE_MAIN = 0,
        FIRE_ALT = 1
    };

    struct soulLauncherData_t
    {
        // Time between fire
        idTypesafeTime < int , millisecondUnique_t , 1000 > fireRate; // Offset: 0x0

    }; // Size: 0x4

    struct PainElementalData
    {
        // horizontal friction {{ units = 1 / s }}
        float horizontalFriction; // Offset: 0x0

        // horizontal accel rate {{ units = 1 / s }}
        float horizontalAccelRate; // Offset: 0x4

        // vertical friction {{ units = 1 / s }}
        float verticalFriction; // Offset: 0x8

        // vertical accel rate {{ units = 1 / s }}
        float verticalAccelRate; // Offset: 0xC

        // max vertical speed {{ units = m / s }}
        float verticalSpeed; // Offset: 0x10

        // maximum movement speed {{ units = m / s }}
        float maximumSpeed; // Offset: 0x14

        // maximum falling speed when idle {{ units = m / s }}
        float gravitySpeed; // Offset: 0x18

        // speed when using shield {{ units = m / s }}
        float shieldSpeed; // Offset: 0x1C

        // how fast to transition between up and down
        float bobSpeed; // Offset: 0x20

        // high to bob up / down
        float bobHeight; // Offset: 0x24

        // sound to play when in idle state (not attacking and just moving around)
        idSoundEvent* idleSound; // Offset: 0x28

        // rtpc for moving around
        idSoundRTPC* movingRTPC; // Offset: 0x30

        // duration of shield launch state
        idTypesafeTime < int , millisecondUnique_t , 1000 > shieldLaunchMS; // Offset: 0x38

        // current bob offset
        float bobAmount; // Offset: 0x3C

    }; // Size: 0x40

    struct PainElementalInput
    {
        // Main fire
        usercmdButton_t primaryAttack; // Offset: 0x0

        // Activate Soul Barrier
        usercmdButton_t soulBarrierActivate; // Offset: 0x8

        // Launch Soul Barrier
        usercmdButton_t soulBarrierLaunch; // Offset: 0x10

    }; // Size: 0x18

    // P R O T E C T E D soul launcher data
    idDemonPlayer_PainElemental::soulLauncherData_t soulLauncherData; // Offset: 0x36FC8

    // P R I V A T E pain elemental data
    idDemonPlayer_PainElemental::PainElementalData painElementalData; // Offset: 0x36FD0

    // Pain Elemental input bindings
    idDemonPlayer_PainElemental::PainElementalInput inputBindings; // Offset: 0x37010

    // additive lag for third person animations
    idDemonPlayerAdditiveLagAnim thirdPersonAdditiveLag; // Offset: 0x37028

    idDemonPlayer_PainElemental::painElemental_FireType currentFireType; // Offset: 0x37290

    // pain elemental soul barrier info
    idSoulBarrier soulBarrier; // Offset: 0x37298

    // sound to play when soul barrier completes its cooldown period
    idSoundEvent* soulBarrierReady; // Offset: 0x37460

    bool soulBarrierCoolingDown; // Offset: 0x37468

    // Entitydef for lost soul the pain elemental will hold
    idDeclEntityDef* lostSoulEntityDef; // Offset: 0x37470

    // first person shoot additive anim alias
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > firstPersonShootAdditiveAnimAlias; // Offset: 0x37478

    // first person shoot additive blend time
    idTypesafeTime < int , millisecondUnique_t , 1000 > firstPersonShootBlendTimeMS; // Offset: 0x3747C

    // first person shoot additive anim alias
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > soulBarrierSummonAdditiveAnimAlias; // Offset: 0x37480

    // first person shoot additive blend time
    idTypesafeTime < int , millisecondUnique_t , 1000 > soulBarrierSummonBlendTimeMS; // Offset: 0x37484

    // demon card info for the soul barrier ability
    idDeclDemonCard* soulBarrierDemonCard; // Offset: 0x37488

    // Dash info color the dash UI will show in
    demonHudColor_t dashHudColor; // Offset: 0x37490

    // icon shown in the dash UI
    idMaterial2* dashHudIcon; // Offset: 0x37498

}; // Size: 0x374A0
