struct idDeclPVPUpgrade : idDeclTypeInfo
{
    struct demonPlayerUpgradeData_t
    {
        // increase demon player's damage by this scale factor (0.5 = 50% increase)
        float damageIncrease; // Offset: 0x0

        // increase demon player's health by this scale factor (0.5 = 50% increase)
        float healthIncrease; // Offset: 0x4

        // Indicates the healthIncrease field represents a fixed amount, otherwise percentage increase
        bool healthIncreaseFixed; // Offset: 0x8

        // How fast jet pack recharges
        float revenantJetPackRechargeRate; // Offset: 0xC

        // How much recharge delay jet pack has
        idTypesafeTime < int , millisecondUnique_t , 1000 > revenantJetPackRechargeDelayMS; // Offset: 0x10

        // How much jet pack dash penalty
        idTypesafeTime < int , millisecondUnique_t , 1000 > revenantJetPackDashPenaltyMS; // Offset: 0x14

        // How long can you fire the jet pack?
        idTypesafeTime < int , millisecondUnique_t , 1000 > revenantJetPackPowerTimeMS; // Offset: 0x18

        // how long to delay recharge once grounded
        idTypesafeTime < int , millisecondUnique_t , 1000 > revenantJetPackGroundRechargeDelay; // Offset: 0x1C

        // recharge rate if ground recharge only
        float revenantJetPackGroundRechargeRate; // Offset: 0x20

        // Dash cost
        float revenantDashCost; // Offset: 0x24

        // Number of bursts to fire
        int revenantBarrageNumBursts; // Offset: 0x28

        // How many shots per burst
        idBranchedOptionValue < declInputBranch_t , int > revenantBarrageNumShotsPerBurst; // Offset: 0x30

        // time between shots
        idTypesafeTime < int , millisecondUnique_t , 1000 > revenantBarrageShotDelay; // Offset: 0x58

        // time between bursts
        idTypesafeTime < int , millisecondUnique_t , 1000 > revenantBarrageBurstDelay; // Offset: 0x5C

        // barrage damage scale
        float revenantBarrageDamageScale; // Offset: 0x60

        // barrage cooldown time
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > revenantBarrageCooldownMS; // Offset: 0x68

        // is redline upgrade active?
        bool revenantRedlineActive; // Offset: 0x90

        // Mancubus heat per shot
        float mancubusHeatPerShot; // Offset: 0x94

        // Mancubus heat max
        float mancubusHeatMax; // Offset: 0x98

        // Passive heat gain per second
        float mancubusHeatGainPerSecond; // Offset: 0x9C

        // Flamethrower heat per second
        float mancubusFlameHeatPerSecond; // Offset: 0xA0

        // Fire delay for steam blast
        idTypesafeTime < int , millisecondUnique_t , 1000 > mancubusSteamBlastFireDelay; // Offset: 0xA4

        // Demon card for steam blast hazard
        idDeclDemonCard* mancubusSteamBlastHazardCard; // Offset: 0xA8

        // Potentially override the smoke ammo
        idDeclAmmo* mancubusSmokeAmmoOverride; // Offset: 0xB0

        // Override smoke cooldown
        idTypesafeTime < int , millisecondUnique_t , 1000 > mancubusSmokeCooldown; // Offset: 0xB8

        // Potentially override primary ammo
        idDeclAmmo* painElementalAmmoOverride; // Offset: 0xC0

        // Speed when using soul shield
        float painElementalShieldSpeed; // Offset: 0xC8

        // Soul shield max health
        float painElementalShieldHealth; // Offset: 0xCC

        // How long it takes for dash to recharge
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > painElementalDashCooldown; // Offset: 0xD0

        // Does soul shield get a better projectile
        bool painElementalBetterShieldSoul; // Offset: 0xF8

        // Does archvile shield power up fireball
        bool archvileShieldModsFireball; // Offset: 0xF9

        // Override archvile lake of fire hazard
        idDeclEntityDef* archvileLakeOfFireHazard; // Offset: 0x100

        // Override marauder wolf card
        idDeclDemonCard* marauderWolfCard; // Offset: 0x108

        // Marauder wolf applies this status effect to marauder on attack
        idDeclStatusEffect* marauderWolfAttackStatusEffect; // Offset: 0x110

        // Marauder axe should heal marauder on direct hit
        bool marauderHealOnAxeHit; // Offset: 0x118

        // Refund dreadknight's berserk cooldown on energy wave hit
        bool dreadknightRefundBerserkOnHit; // Offset: 0x119

        // duration of invisibility after the ground slam
        idTypesafeTime < int , millisecondUnique_t , 1000 > dreadknightInvisibilityDurationAfterGroundSlam; // Offset: 0x11C

        // explosion entity after the ground slam if it is invisibile
        idDeclEntityDef* dreadknightInvisibilityExplosionEntityAfterGroundSlam; // Offset: 0x120

        // aoe entity after the ground slam if it is invisible
        idDeclEntityDef* dreadknightInvisibilityAOEEntityAfterGroundSlam; // Offset: 0x128

        // duration of invisible aoe entity
        idTypesafeTime < int , millisecondUnique_t , 1000 > dreadknightInvisibilityAOEEntityDuration; // Offset: 0x130

        // start invis sound
        idSoundEvent* dreadknightInvisibilityStartSound; // Offset: 0x138

        // stop invis sound
        idSoundEvent* dreadknightInvisibilityStopSound; // Offset: 0x140

    }; // Size: 0x148

    struct upgradeDataUIDesc_t
    {
        // description flair text
        idStrId description; // Offset: 0x0

        // ui icon
        idMaterial2* icon; // Offset: 0x8

    }; // Size: 0x10

    struct upgradeData_t
    {
        // title of upgrade
        idStrId upgradeTitle; // Offset: 0x0

        // description of upgrade
        idStrId upgradeDescription; // Offset: 0x4

        // value of upgrade, shown to the side ("+50" for example)
        idStrId upgradeValueText; // Offset: 0x8

        // ui icon
        idMaterial2* icon; // Offset: 0x10

        // telemetry string
        idStr telemetryIdentifier; // Offset: 0x18

        // some upgrades (e.g. doom marine health boost) only apply once and dont keep adding each round
        bool applyOnce; // Offset: 0x48

        // upgrade awards these perks
        idList < const idDeclPerk * , TAG_IDLIST , false > perks; // Offset: 0x50

        // upgrade info specify to demon players
        idDeclPVPUpgrade::demonPlayerUpgradeData_t demonPlayerData; // Offset: 0x68

        // extra description Data
        idList < idDeclPVPUpgrade::upgradeDataUIDesc_t , TAG_IDLIST , false > descData; // Offset: 0x1B0

    }; // Size: 0x1C8

    struct upgrade_t
    {
        idDeclPVPUpgrade* upgradeDecl; // Offset: 0x0

        idFlags activeUpgrades; // Offset: 0x8

    }; // Size: 0x10

    // title text for this upgrade
    idStrId upgradeTitle; // Offset: 0x88

    // icon for this upgrade path
    idMaterial2* upgradeIcon; // Offset: 0x90

    // list of upgrades
    idList < idList < idDeclPVPUpgrade::upgradeData_t > , TAG_IDLIST , false > upgrades; // Offset: 0x98

    // the number of upgrades needed to activate the mastery
    int numToMaster; // Offset: 0xB0

    // mastery upgrade
    idDeclPVPUpgrade::upgradeData_t upgradeMastery; // Offset: 0xB8

}; // Size: 0x280
