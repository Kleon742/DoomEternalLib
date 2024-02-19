struct idAbility_UpgradeHandler : idUpgradeHandler
{
    struct savingThrowInfo_t
    {
        float currentCharge; // Offset: 0x0

        bool savingThrowActive; // Offset: 0x4

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > deactivationTime; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextActivationTime; // Offset: 0x10

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > invulnerabilityEndTime; // Offset: 0x18

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageMitigationEndTime; // Offset: 0x20

        // screen FX slot for FX_SAVING_THR
        int savingThrowFXSlot; // Offset: 0x28

        bool debugBarShowing; // Offset: 0x2C

    }; // Size: 0x30

    idUpgradeSystem < idAbility_UpgradeHandler > upgradeSystem; // Offset: 0x88

    // powerup mods power up does shockwave on usage
    idUpgradeMod_Abilities* powerupShockwave; // Offset: 0xB8

    // power up duration is increased
    idUpgradeMod_Abilities* powerupDuration; // Offset: 0xC0

    // power up does high damage resistance
    idUpgradeMod_Abilities* powerupDamageResist; // Offset: 0xC8

    // power up fully heals the player
    idUpgradeMod_Abilities* powerupFullHealth; // Offset: 0xD0

    // dexterity mods power up for ledge grabbing
    idUpgradeMod_Abilities* dexterityLedgeGrab; // Offset: 0xD8

    // power up for weapon switching
    idUpgradeMod_Abilities* dexterityWeaponSwitching; // Offset: 0xE0

    // power up for weapon mod switching
    idUpgradeMod_Abilities* dexterityWeaponModSwitching; // Offset: 0xE8

    // dash mods
    idUpgradeMod_Abilities* dashRegenRate; // Offset: 0xF0

    idUpgradeMod_Abilities* dashGKRestoreDash; // Offset: 0xF8

    idUpgradeMod_Abilities* dashMeleeDamageScale; // Offset: 0x100

    idUpgradeMod_Abilities* dashRegenDelay; // Offset: 0x108

    idUpgradeMod_Abilities* dashGKDropArmor; // Offset: 0x110

    idUpgradeMod_Abilities* dashReduceDamage; // Offset: 0x118

    idUpgradeMod_Abilities* dashIncreasesDamage; // Offset: 0x120

    idUpgradeMod_Abilities* dashLeaveHologram; // Offset: 0x128

    idUpgradeMod_Abilities* dashHeatSeekingBarrel; // Offset: 0x130

    idUpgradeMod_Abilities* targetStrikeMod; // Offset: 0x138

    // Set on status effect start and end
    bool enablePowerupDamageResist; // Offset: 0x140

    // cause an explosion when you destroy a weakpoint
    idUpgradeMod_Abilities* weakpointExplosion; // Offset: 0x148

    // drops loot when you destroy a weakpoint
    idUpgradeMod_Abilities* weakpointLootDrop; // Offset: 0x150

    // give back extra life if you kill the demon who "killed" you
    idUpgradeMod_Abilities* extraLifeRefund; // Offset: 0x158

    // bloodpunch mods upgrade to drop loot on blood punch damage
    idUpgradeMod_Abilities* bloodPunchLootDrop; // Offset: 0x160

    // PVP get extra ammo when killing enemies with BFG
    idUpgradeMod_Abilities* extraAmmoOnBFGKill; // Offset: 0x168

    // how much tendril damage BFG does to demon players
    idUpgradeMod_Abilities* demonPlayerTendrilDamage; // Offset: 0x170

    // for the glass cannon rune ability
    idUpgradeMod_Abilities* playerAIDamageBonus; // Offset: 0x178

    // for the saving throw ability
    idUpgradeMod_Abilities* savingThrow; // Offset: 0x180

    // for upgrading hammer slam radius
    idUpgradeMod_Abilities* hammerSlamRadius; // Offset: 0x188

    // hammer slam damage decl override
    idUpgradeMod_Abilities* hammerSlamDamageOverride; // Offset: 0x190

    // hammer recharge time reduced
    idUpgradeMod_Abilities* hammerRechargeTime; // Offset: 0x198

    // hammer pain falter scale
    idUpgradeMod_Abilities* hammerPainFalterTime; // Offset: 0x1A0

    idAbility_UpgradeHandler::savingThrowInfo_t savingThrowInfo; // Offset: 0x1A8

    // Target strike ability
    idTargetStrike targetStrike; // Offset: 0x1D8

}; // Size: 0x248
