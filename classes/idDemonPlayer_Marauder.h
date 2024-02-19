struct idDemonPlayer_Marauder : idDemonPlayer
{
    struct marauderData_t
    {
        struct shotgunData_t
        {
            // transition time in
            idTypesafeTime < int , millisecondUnique_t , 1000 > transitionTimeIn; // Offset: 0x0

            // transition time out
            idTypesafeTime < int , millisecondUnique_t , 1000 > transitionTimeOut; // Offset: 0x4

            // cooldown
            idTypesafeTime < int , millisecondUnique_t , 1000 > cooldown; // Offset: 0x8

        }; // Size: 0xC

        struct shieldData_t
        {
            // the demon player shield data
            idDemonPlayerShield demonPlayerShield; // Offset: 0x0

            // movement speed scale
            float movementSpeedScale; // Offset: 0xF8

            // look sensitivity scale
            float lookSensitivityScale; // Offset: 0xFC

            // can fire the shotgun while shield is active
            bool canFireShotgun; // Offset: 0x100

            // can throw the axe while shield is active
            bool canThrowAxe; // Offset: 0x101

            // slow the marauder for a period of time after the shield is destroyed
            bool slowWhenDestroyed; // Offset: 0x102

            // how much to scale movement speed when the shield is destroyed
            float destroyPenaltySpeedScale; // Offset: 0x104

            // how much hatred does the shield cost per second
            float hatredCostPerSecond; // Offset: 0x108

            // how long to slow when shield is destroyed
            idTypesafeTime < int , millisecondUnique_t , 1000 > slowDuration; // Offset: 0x10C

            // entity def for the shield
            idDeclEntityDef* shieldDef; // Offset: 0x110

            // shake decl for when the shield is damaged
            idDeclAdvancedViewShake* shieldDamageShakeDecl; // Offset: 0x118

            // shake decl for when the shield is destroyed
            idDeclAdvancedViewShake* shieldDestroyedShakeDecl; // Offset: 0x120

        }; // Size: 0x128

        struct wolfData_t
        {
            // demon card for wolf summon. This is the active Demoncard Decl
            idDeclDemonCard* demonCard; // Offset: 0x0

            // The possible upgrade decl for this DemonCard
            idDeclDemonCard* wolfUpgradeDecl; // Offset: 0x8

            // buff to apply for duration of wolf life
            idDeclStatusEffect* wolfBuff; // Offset: 0x10

            // status effect to apply to victim
            idDeclStatusEffect* marauderStatusEffect; // Offset: 0x18

            // Sound to play when wolf summon is started
            idSoundEvent* wolfStartSummon; // Offset: 0x20

            // Sound to play when wolf summon is complete
            idSoundEvent* wolfSummonComplete; // Offset: 0x28

            // Sound to play when slayer is highlighted
            idSoundEvent* slayerHighlightSound; // Offset: 0x30

            // Highlight decl to apply to slayer when wolf is locked on
            idDeclHighlight* wolfSlayerHighlight; // Offset: 0x38

        }; // Size: 0x40

        struct buryTheHatchetData_t
        {
            // throw distance at which the healing effect is active
            float triggerDistance; // Offset: 0x0

            // applied to damage value before converted to health
            float damageToHealthMultiplier; // Offset: 0x4

        }; // Size: 0x8

        // shotgun data
        idDemonPlayer_Marauder::marauderData_t::shotgunData_t shotgunData; // Offset: 0x0

        // shield data
        idDemonPlayer_Marauder::marauderData_t::shieldData_t shieldData; // Offset: 0x10

        // wolf data
        idDemonPlayer_Marauder::marauderData_t::wolfData_t wolfData; // Offset: 0x138

        // bury the hatchet upgrade data
        idDemonPlayer_Marauder::marauderData_t::buryTheHatchetData_t buryTheHatchetData; // Offset: 0x178

    }; // Size: 0x180

    struct abilityResourceData_t
    {
        // Resource cost
        float cost; // Offset: 0x0

        // how long until we can regen after using this ability
        idTypesafeTime < int , millisecondUnique_t , 1000 > regenCooldownMS; // Offset: 0x4

        // can this resource overdraw the well
        bool canOverdraw; // Offset: 0x8

    }; // Size: 0xC

    struct marauderResourceData_t
    {
        float currentEnergy; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextRegenTime; // Offset: 0x8

        // maximum energy
        float maxEnergy; // Offset: 0x10

        // regeneration rate
        float energyRegenPerSecond; // Offset: 0x14

        // sound event to play when player uses an ability they don't have enough resource for
        idSoundEvent* notEnoughResourceSound; // Offset: 0x18

        // how much cooldown penalty to suffer for overdrawing
        idTypesafeTime < int , millisecondUnique_t , 1000 > overdrawPenalty; // Offset: 0x20

        // axe throe ability data
        idDemonPlayer_Marauder::abilityResourceData_t axeResourceData; // Offset: 0x24

        // shotgun blast ability data
        idDemonPlayer_Marauder::abilityResourceData_t shotgunResourceData; // Offset: 0x30

        // wolf summon ability data
        idDemonPlayer_Marauder::abilityResourceData_t wolfResourceData; // Offset: 0x3C

        // shield ability data
        idDemonPlayer_Marauder::abilityResourceData_t shieldResourceData; // Offset: 0x48

    }; // Size: 0x58

    struct marauderParms_t
    {
        struct axeParms_t
        {
            bool cooldownShowing; // Offset: 0x0

        }; // Size: 0x1

        struct shotgunParms_t
        {
            // time when able to swap fire modes again
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextFireModeSwapTime; // Offset: 0x0

            // time when can fire shotgun next
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextShotgunFireTime; // Offset: 0x8

            bool cooldownShowing; // Offset: 0x10

        }; // Size: 0x18

        struct shieldParms_t
        {
            bool activeShowing; // Offset: 0x0

            bool cooldownShowing; // Offset: 0x1

            idTypesafeTime < long long , gameTimeUnique_t , 999960 > movementPenaltyTime; // Offset: 0x8

        }; // Size: 0x10

        struct wolfParams_t
        {
            bool cooldownShowing; // Offset: 0x0

        }; // Size: 0x1

        idDemonPlayer_Marauder::marauderParms_t::axeParms_t axeParms; // Offset: 0x0

        idDemonPlayer_Marauder::marauderParms_t::shotgunParms_t shotgunParms; // Offset: 0x8

        idDemonPlayer_Marauder::marauderParms_t::shieldParms_t shieldParms; // Offset: 0x20

        idDemonPlayer_Marauder::marauderParms_t::wolfParams_t wolfParms; // Offset: 0x30

    }; // Size: 0x38

    struct marauderInput_t
    {
        // throw axe
        usercmdButton_t throwAxe; // Offset: 0x0

        // fire shotgun
        usercmdButton_t fireShotgun; // Offset: 0x8

        // deploy shield
        usercmdButton_t deployShield; // Offset: 0x10

        // summon wolf
        usercmdButton_t summonWolf; // Offset: 0x18

        // jump button
        usercmdButton_t jump; // Offset: 0x20

    }; // Size: 0x28

    // data specific to Marauder
    idDemonPlayer_Marauder::marauderData_t marauderData; // Offset: 0x36FC8

    // Our shield
    idManagedClassPtr < idDynamicEntity_Damageable > shieldEnt; // Offset: 0x37148

    // Marauder resource pool data
    idDemonPlayer_Marauder::marauderResourceData_t marauderResourceData; // Offset: 0x37168

    idDemonPlayer_Marauder::marauderParms_t marauderParms; // Offset: 0x371C0

    // input bindings
    idDemonPlayer_Marauder::marauderInput_t inputBindings; // Offset: 0x371F8

    // Dash info color the dash UI will show in
    demonHudColor_t dashHudColor; // Offset: 0x37220

    // icon shown in the dash UI
    idMaterial2* dashHudIcon; // Offset: 0x37228

    // gets shown on hands show, bringup
    meshKitComponents_t axeKitType; // Offset: 0x37230

    // axe can be hidden by anim and interupted, this shows it on hands show, bringup
    idAtomicString axeMeshKitName; // Offset: 0x37238

    // third person wolf summon additive anim alias
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonWolfSummonAdditiveAnimAlias; // Offset: 0x37240

    // third person wolf summon additive blend time
    idTypesafeTime < int , millisecondUnique_t , 1000 > thirdPersonWolfSummonBlendTimeMS; // Offset: 0x37244

    // is there a wolf on the way
    bool wolfIncoming; // Offset: 0x37248

    // spawn ID of the incoming wolf
    idSpawnId wolfSpawnID; // Offset: 0x3724C

    // Is the wolf buff applied
    bool wolfBuffActive; // Offset: 0x37250

    // Are wolf outlines applied to slayer
    bool wolfOutlinesActive; // Offset: 0x37251

    // what wolf is currently outlining
    idManagedClassPtr < idEntity > wolfOutlineTarget; // Offset: 0x37258

    // Is the wolf UI Showing
    bool wolfUIShowing; // Offset: 0x37278

    // Did the wolf summon use fail in the last frame?
    bool wolfSummonUseFailed; // Offset: 0x37279

    // Keep track of our wolf for the buff & outlines
    idManagedClassPtr < idAI2 > activeWolf; // Offset: 0x37280

    bool healOnAxeHit; // Offset: 0x372A0

    idManagedClassPtr < idProjectile > lastAxeThrown; // Offset: 0x372A8

}; // Size: 0x372C8
