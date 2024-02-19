struct idGK_UpgradeHandler : idUpgradeHandler
{
    idUpgradeSystem < idGK_UpgradeHandler > upgradeSystem; // Offset: 0x88

    // animation speed.
    idUpgradeMod_GK* animationSpeedScale; // Offset: 0xB8

    idUpgradeMod_GK* animationSpeedScaleChainsaw; // Offset: 0xC0

    // Player speed.
    idUpgradeMod_GK* playerSpeed; // Offset: 0xC8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > playerSpeedScaleStartTime; // Offset: 0xD0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > playerSpeedScaleEndTime; // Offset: 0xD8

    // Loot drop info.
    idUpgradeMod_GK* armorLootDrops; // Offset: 0xE0

    idUpgradeMod_GK* healthLootDrops; // Offset: 0xE8

    idUpgradeMod_GK* bfgAmmoLootDrops; // Offset: 0xF0

    // charged Melee. const idUpgradeMod_GK *m_chargedMelee;
    idUpgradeMod_GK* blood_punch_base; // Offset: 0xF8

    idUpgradeMod_GK* blood_punch_max_charges; // Offset: 0x100

    idUpgradeMod_GK* blood_punch_extra_charges; // Offset: 0x108

    idUpgradeMod_GK* blood_punch_damage_multiplier; // Offset: 0x110

    idUpgradeMod_GK* blood_punch_area_of_effect; // Offset: 0x118

    idUpgradeMod_GK* blood_punch_loot_drop; // Offset: 0x120

    idUpgradeMod_GK* blood_punch_ai_charge_rate; // Offset: 0x128

    idUpgradeMod_GK* blood_punch_low_health_bonus_damage; // Offset: 0x130

    // increases by some fractional amount for each GK -- can only be used when >= 1.0f
    float bloodPunchChargePercent; // Offset: 0x138

    // SlowMotion
    idUpgradeMod_GK* slowMotion; // Offset: 0x140

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > slowmotionStartTime; // Offset: 0x148

    float curSlowMotionAmount; // Offset: 0x150

    // Seek and Destroy
    idUpgradeMod_GK* seekAndDestroy; // Offset: 0x158

    // last time a blood punch was used locally
    idUpgradeMod_GK* bloodPunchBonus; // Offset: 0x160

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTimeBloodPunchUsed; // Offset: 0x168

    bool bloodPunchUIActive; // Offset: 0x170

    bool fillBloodPunchOnNextEquip; // Offset: 0x171

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextBloodPunchSoundTime; // Offset: 0x178

    fxCondition_t fxBloodPunchAOE; // Offset: 0x180

    fxCondition_t fxBloodPunchAOEThirdPerson; // Offset: 0x184

    bool gloryKillSpeedBoostApplied; // Offset: 0x188

    bool bloodPunchSuperChargedSoundActivated; // Offset: 0x189

}; // Size: 0x190
