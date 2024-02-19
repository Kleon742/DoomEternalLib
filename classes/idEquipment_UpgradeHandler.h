struct idEquipment_UpgradeHandler : idUpgradeHandler
{
    struct focusParms_t
    {
        // health component used during focus
        idSimpleHealth focusHealth; // Offset: 0x0

        // the time to end the focus attack
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > focusFinalTime; // Offset: 0x130

        // the time to end the focus attack invulnerability
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > focusInvulFinalTime; // Offset: 0x138

        // screen FX slot for FX_SAVING_THR
        int savingThrowFXSlot; // Offset: 0x140

        // the num of times we have used this focusOW
        int focusUsedTimes; // Offset: 0x144

        // keeps track of whether we activated focus or not
        bool activeFocus; // Offset: 0x148

    }; // Size: 0x150

    idUpgradeSystem < idEquipment_UpgradeHandler > upgradeSystem; // Offset: 0x88

    idArray < const idUpgradeMod_Equipment * , 4 > equipment_rechargeTime1; // Offset: 0xB8

    idArray < const idUpgradeMod_Equipment * , 4 > override_rechargeTime; // Offset: 0xD8

    idUpgradeMod_Equipment* equipSystem_rechargeTime_onDamage; // Offset: 0xF8

    idUpgradeMod_Equipment* equipSystem_rechargeTime_1; // Offset: 0x100

    idUpgradeMod_Equipment* equipSystem_rechargeTime_2; // Offset: 0x108

    idArray < const idUpgradeMod_Equipment * , 4 > equipment_itemMaxCapacity; // Offset: 0x110

    idUpgradeMod_Equipment* equipSystem_itemMaxCapacity; // Offset: 0x130

    idArray < const idUpgradeMod_Equipment * , 4 > equipment_upgrade1; // Offset: 0x138

    idArray < const idUpgradeMod_Equipment * , 4 > equipment_upgrade2; // Offset: 0x158

    idUpgradeMod_Equipment* equipSystemTier2; // Offset: 0x178

    idUpgradeMod_Equipment* equipSystemTier3; // Offset: 0x180

    idUpgradeMod_Equipment* equipSystemDecreaseRechargeTime; // Offset: 0x188

    idUpgradeMod_Equipment* equipSystemArmorRegenAt0Charge; // Offset: 0x190

    idUpgradeMod_Equipment* equipSystemNoHealthLimitDrain; // Offset: 0x198

    idUpgradeMod_Equipment* equipSystemNoShieldLimitDrain; // Offset: 0x1A0

    idUpgradeMod_Equipment* equipSystemArmorShardModifier; // Offset: 0x1A8

    idUpgradeMod_Equipment* equipSystemAmmoDropOnBarrels; // Offset: 0x1B0

    idUpgradeMod_Equipment* equipSystemEMPFreeze; // Offset: 0x1B8

    // parameters to allow the user to have infinite ammo
    idUpgradeMod_Equipment* infiniteAmmo; // Offset: 0x1C0

    // parameters to allow the user to have infinite ammo
    idUpgradeMod_Equipment* infiniteAmmoOnCondition; // Offset: 0x1C8

    // parameters to modify equipment on level
    idUpgradeMod_Equipment* equipmentEffectiveness; // Offset: 0x1D0

    // parameters to modify equipment area of effect (damage radius, flame arc params)
    idUpgradeMod_Equipment* equipSystemIncreaseAreaOfEffect; // Offset: 0x1D8

    // parameters to activate focus on death blow
    idUpgradeMod_Equipment* activateFocusOnDeathBlow; // Offset: 0x1E0

    // parameters to allow the user to better control the double jump
    idUpgradeMod_Equipment* doubleJumpAirControl; // Offset: 0x1E8

    // parameters to allow the user to increase drop distance
    idUpgradeMod_Equipment* increaseDropRadius; // Offset: 0x1F0

    // parameters to allow the user to have more ammo drops appear
    idUpgradeMod_Equipment* modAmmoDrops; // Offset: 0x1F8

    // parameters to allow for free ammo on weapon swap
    idUpgradeMod_Equipment* freeAmmoOnSwap; // Offset: 0x200

    // parameters to allow for a window of infinite ammo on weapon / mod swap
    idUpgradeMod_Equipment* infiniteAmmoOnSwap; // Offset: 0x208

    // parameters to allow for using health as ammo
    idUpgradeMod_Equipment* useHealthAsAmmo; // Offset: 0x210

    // parameters to allow for enemies to remain staggered for a longer period of time
    idUpgradeMod_Equipment* modifyStaggerDuration; // Offset: 0x218

    // parameters to allow the user to have their explosive equipment draw in enemies before exploding
    idUpgradeMod_Equipment* equipmentPull; // Offset: 0x220

    // parameters to allow explosive barrels to respawn
    idUpgradeMod_Equipment* barrelsRespawn; // Offset: 0x228

    // parameters to allow collided barrels
    idUpgradeMod_Equipment* heakSeekingBarrel; // Offset: 0x230

    // parameters to increase reveal radius in the automap
    idUpgradeMod_Equipment* automapIncreasedFogRadius; // Offset: 0x238

    // parameters to increase traversal radius in the automap
    idUpgradeMod_Equipment* automapIncreasedTraversalRadius; // Offset: 0x240

    // parameters to show progression items in the automap
    idUpgradeMod_Equipment* automapShowProgressionItems; // Offset: 0x248

    // parameters to show progression items in the automap
    idUpgradeMod_Equipment* dossierShowProgressionItems; // Offset: 0x250

    // parameters to shake the compass when the player is near a secret
    idUpgradeMod_Equipment* compassSecretShake; // Offset: 0x258

    // parameters to get health past the max value
    idUpgradeMod_Equipment* overhealth; // Offset: 0x260

    // parameters to get armor past the max value
    idUpgradeMod_Equipment* overarmor; // Offset: 0x268

    // parameters to get ammo past the max value
    idUpgradeMod_Equipment* overammo; // Offset: 0x270

    // parameters for when we have double launchers
    idUpgradeMod_Equipment* doubleLaunchers; // Offset: 0x278

    // parameters to show slayer gates on the automap
    idUpgradeMod_Equipment* automapShowSlayerGates; // Offset: 0x280

    // parameters to show the automap station on the automap
    idUpgradeMod_Equipment* automapShowAutomapStation; // Offset: 0x288

    // parameters to have enemies explode after dying
    idUpgradeMod_Equipment* explodingDeadEnemies; // Offset: 0x290

    // parameters for flame belch napalm
    idUpgradeMod_Equipment* napalm; // Offset: 0x298

    // parameters for ammo that can set things on fire
    idUpgradeMod_Equipment* flameRounds; // Offset: 0x2A0

    // parameters for armor pickups to add to Blood Punch meter
    idUpgradeMod_Equipment* convertArmorToBloodPunch; // Offset: 0x2A8

    // parameters for health pickups to add to Blood Punch meter
    idUpgradeMod_Equipment* convertHealthToBloodPunch; // Offset: 0x2B0

    // parameters for hammer charge
    idUpgradeMod_Equipment* hammerChargeMeter; // Offset: 0x2B8

    // parameters to allow use of second launcher for frags only
    idUpgradeMod_Equipment* equipmentLauncherRightFrag; // Offset: 0x2C0

    // AOE explosion happens with debuffs active
    idUpgradeMod_Equipment* aoeOnDeathWithActiveStatusEffect; // Offset: 0x2C8

    // allow loot drops from hammer slam damage
    idUpgradeMod_Equipment* hammerSlamLootDrops; // Offset: 0x2D0

    // list of AI using the modified stagger FX
    idList < idManagedClassPtr < idAI2 > , TAG_IDLIST , false > modifiedStaggerFXAIs; // Offset: 0x2D8

    idEquipment_UpgradeHandler::focusParms_t focusParms; // Offset: 0x2F0

    // the current amount of clusters bombs spawned
    int currentAmountOfClusterBombsSpawned; // Offset: 0x440

    // the recharge modifier to deduct from the equipment recharge time
    idArray < idTypesafeTime < int , millisecondUnique_t , 1000 > , 4 > equipmentRechargeTimeOnDamage; // Offset: 0x444

    // the recharge modifier to deduct from the launcher's recharge time
    idTypesafeTime < int , millisecondUnique_t , 1000 > launcherRechargeTimeOnDamage; // Offset: 0x454

    // the total recharge modifier to deduct from the recharge time
    idTypesafeTime < int , millisecondUnique_t , 1000 > currentRechargeTimeOnDamage; // Offset: 0x458

    // the last time we played the napalm spread sound
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextNapalmSpreadSFXTime; // Offset: 0x460

    // when are we allowed to fill the hammer supermeter again
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextHammerChargeTime; // Offset: 0x468

    // was ammo boost toggled, should we send a broadcast?
    bool ammoBoostChanged; // Offset: 0x470

    // amount of time to have infinite ammo for
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > infiniteAmmoTimer; // Offset: 0x478

    // sound ID to keep for stopping infinite ammo
    idSoundWwiseID infiniteAmmoSoundID; // Offset: 0x480

    // amount of time to have infinite ammo for
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ammoDecayTimer; // Offset: 0x488

    // sound ID to keep for stopping infinite ammo
    idSoundWwiseID ammoDecaySoundID; // Offset: 0x490

    // current hammer supermeter charge
    float hammerCharge; // Offset: 0x494

    // true if we have a hammer but the charge meter doesn't exist yet
    bool hammerChargeMeterPending; // Offset: 0x498

    // caches any charge attempted while the charge meter is pending
    float pendingHammerCharge; // Offset: 0x49C

}; // Size: 0x4A0
