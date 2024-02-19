struct idEnvironmentSuit : idInventoryItem
{
    enum absorbHealthOnDeathState_t : int
    {
        NO_STATE = -1,
        IDLE_STATE = 0,
        CHECK_FOR_HEALTH_PACKS_STATE = 1,
        FAKE_DEATH_STATE = 2,
        REVIVE_ANIMATION_STATE = 3,
        KILL_PLAYER_STATE = 4,
        MAX_STATES = 5
    };

    enum absorbHealthOnDeathTransition : int
    {
        NO_TRANSITION = -1,
        CHECK_FOR_HEALTH_PACKS_TRANSITION = 0,
        FAKE_DEATH_TRANSITION = 1,
        REVIVE_ANIMATION_TRANSITION = 2,
        KILL_PLAYER_TRANSITION = 3,
        IDLE_TRANSITION = 4,
        MAX_TRANSITIONS = 5
    };

    typedef idInternalFsm < idEnvironmentSuit , idEnvironmentSuit::absorbHealthOnDeathState_t , idEnvironmentSuit::absorbHealthOnDeathTransition > idAbsorbHealthOnDeathFSM;

    // fsm used to do the absorb health on death
    idInternalFsm < idEnvironmentSuit , idEnvironmentSuit::absorbHealthOnDeathState_t , idEnvironmentSuit::absorbHealthOnDeathTransition >* absorbHealthOnDeathFSM; // Offset: 0x110

    // Environment Suit Durability.
    idSimpleHealth health; // Offset: 0x118

    // How long it takes before the suit recharges
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > rechargeDelay; // Offset: 0x248

    // How long it takes for the suit to recharge.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > rechargeTime; // Offset: 0x250

    // Last time the suit was damaged.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTime; // Offset: 0x258

    // upgrade component for the overall suit
    idInventoryItemUpgrade upgradeComponent; // Offset: 0x260

    // the current user of the suit
    idPlayer* ownerEntity; // Offset: 0x290

    idAbility_Dash* dashItem; // Offset: 0x298

    // ability upgrades double jump info parameters
    idUpgradeMod_Abilities* doubleJump; // Offset: 0x2A0

    // power up gives armor parameters
    idUpgradeMod_Abilities* powerUpArmor; // Offset: 0x2A8

    // power up gives health parameters
    idUpgradeMod_Abilities* powerUpHealth; // Offset: 0x2B0

    // power up does double damage when bfg is full
    idUpgradeMod_Abilities* doubleDamageBfgFull; // Offset: 0x2B8

    // parameters to award increased bfg capacity
    idUpgradeMod_Abilities* increaseBfgCapacity; // Offset: 0x2C0

    // equipment upgrades parameters to absorb health on death
    idUpgradeMod_Equipment* absorbHealthOnDeath; // Offset: 0x2C8

    // parameters to receive speed boost on armor breaking
    idUpgradeMod_Equipment* speedBoostOnArmorBreak; // Offset: 0x2D0

    // parameters to allow demons to kill each other if they drop below a certain health
    idUpgradeMod_Equipment* demonsFightThemselves; // Offset: 0x2D8

    // parameters to allow the user to mitigate damage when armor is present
    idUpgradeMod_Equipment* armorMitigation; // Offset: 0x2E0

    // parameters to allow the user to mitigate damage when armor is present
    idUpgradeMod_Equipment* modEnemyDamageOnHealth; // Offset: 0x2E8

    // parameters to allow the user to modify the enemy stagger duration
    idUpgradeMod_Equipment* takeAndDealMoreDamage; // Offset: 0x2F0

    // parameters to allow the user to modify the enemy stagger toughness
    idUpgradeMod_Equipment* modEnemyStaggerToughness; // Offset: 0x2F8

    // parameters to upgrade dexterity
    idUpgradeMod_Equipment* dexterityIncrease; // Offset: 0x300

    // parameters to reflect incoming projectiles with melee
    idUpgradeMod_Equipment* reflectIncomingProjectiles; // Offset: 0x308

    // parameters to glory kill emits shockwave
    idUpgradeMod_Equipment* glorykillEmitsShockwave; // Offset: 0x310

    // current upgrade level for health capacity
    int healthCapacityLevel; // Offset: 0x318

    // current upgrade level for armor capacity
    int armorCapacityLevel; // Offset: 0x31C

    // current upgrade level for armor coefficient
    int armorCoefficientLevel; // Offset: 0x320

    // current upgrade level for ammo capacity
    int ammoCapacityLevel; // Offset: 0x324

    // if true, health, armor and ammo capacity levels are ignored
    bool ignoreCapacityLevels; // Offset: 0x328

    // used to determine the history of the speed boost so we don't activated it multiple times but allow the time of the boost to be extended if needed
    bool speedBoostActivated; // Offset: 0x329

    // used to determine if the speed boost is active
    bool speedBoostActive; // Offset: 0x32A

    // the time to end the speed boost
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > speedBoostFinalTime; // Offset: 0x330

    // the stack level for the speed boost
    int speedBoostStackLevel; // Offset: 0x338

    // keep track of the last armor value to know when it breaks
    float lastArmorValue; // Offset: 0x33C

    // keeps track on the value we had when we modofied the stagger
    float lastGlogalStaggerValue; // Offset: 0x340

    // the modifier for glory kill max distances
    float currDistanceModifierGK; // Offset: 0x344

    // the modifier to the level of damage we make on combat
    float combatScoringMultiplier; // Offset: 0x348

    // the modifier to the level of damage we take on combat
    float damageScoringMultiplier; // Offset: 0x34C

    // the current combat level for scoring modifiers
    int currCombatLevel; // Offset: 0x350

    // the current combat level changed this frame
    bool currCombatLevelChanged; // Offset: 0x354

    // time before focus is available to be used again
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > focusCooldownTime; // Offset: 0x358

    // time while the dash damage boost is active
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > dashDamageBoostActiveTime; // Offset: 0x360

    // do we have a dash in the queue
    bool dashQueued; // Offset: 0x368

    // was melee performed during dash
    bool meleeDuringDash; // Offset: 0x369

    idUpgradeMod_Equipment* mostRecentSpeedBoostEffect; // Offset: 0x370

    // used to query for health packs when we are dead
    idHavokGatherQueryId healthPacketsQuery; // Offset: 0x378

    // keep a pointer to the damage params last received
    idDamageParms lastDamageParms; // Offset: 0x380

    // this protects the player against death during combat
    bool protectAgainstDeath; // Offset: 0xDD0

    // this is the current list of weapon upgrades received
    idList < const idUpgradeMod_Equipment * , TAG_IDLIST , false > weaponModData; // Offset: 0xDD8

    // list of health and armor upgrades to do after serialization
    idList < const idUpgradeMod_Data * , TAG_IDLIST , false > healthAndArmorUpgrades; // Offset: 0xDF0

    idSyncAttack_History attackHistory; // Offset: 0xE08

}; // Size: 0xE50
