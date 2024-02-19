struct idPlayerDashboard : idDamageCompiler_Listener
{
    // Owner of the dashboard.
    idManagedClassPtr < idPlayer > owner; // Offset: 0x8

    // Meters The rad meter of the player.
    idRadMeter radMeter; // Offset: 0x28

    // The dash meter of the player.
    idDashMeter dashMeter; // Offset: 0x190

    // The stun meter of the player.
    idStunMeter stunMeter; // Offset: 0x290

    // The power strike meter of the player.
    idPowerStrikeMeter powerStrikeMeter; // Offset: 0x348

    // The judgement meter of the player.
    idJudgementMeter judgementMeter; // Offset: 0x510

    // The oxygen meter of the player.
    idOxygenMeter oxygenMeter; // Offset: 0x718

    // Managers. The manager for notifications
    idNotificationManager notificationManager; // Offset: 0x880

    // The manager for weapon upgrades.
    idWeaponManager weaponManager; // Offset: 0x1E68

    // The manager for runes.
    idRuneManager runeManager; // Offset: 0x1ED8

    // The manager for suit perks.
    idSuitManager suitManager; // Offset: 0x2060

    // The manager for codex entries.
    idCodexManager codexManager; // Offset: 0x2380

    // The manager for unlockables.
    idUnlockableManager unlockableManager; // Offset: 0x24A8

    // The manager for stats.
    idStatManager statManager; // Offset: 0xE7A8

    // The manager for the collectibles.
    idCollectibleManager collectibleManager; // Offset: 0xE818

    // The manager for handling ui walkthrough tutorials
    idUIWalkthroughManager uiWalkthroughManager; // Offset: 0xE850

    // The manager for sound packs.
    idSoundPackManager soundPackManager; // Offset: 0xEA98

    // The manager for scoring for horde mode
    idScoreManager scoreManager; // Offset: 0xEAE8

    // Instruments. The Player's Entity Diagnostics System.
    idPlayerDiagnostics playerDiagnostics; // Offset: 0xECE0

    // The Player's Diagnostics System for online play.
    idPlayerDiagnosticsOnline playerDiagnosticsOnline; // Offset: 0xED80

    // The Player's Compass.
    idPlayerCompass playerCompass; // Offset: 0xEDF0

    // Violence Events to check on kill
    idList < const idDeclViolenceEvent * , TAG_IDLIST , false > violenceKillEvents; // Offset: 0xEE18

    // Violence Events to check on hit
    idList < const idDeclViolenceEvent * , TAG_IDLIST , false > violenceHitEvents; // Offset: 0xEE30

    // The Player's Weapon Wheel.
    idWeaponWheel WeaponWheel; // Offset: 0xEE48

    // Upgrade Handlers. Handler for the player upgrades.
    idUI_UpgradeHandler UIUpgrades; // Offset: 0xF090

    // Handler for the player upgrades.
    idGK_UpgradeHandler GKUpgrades; // Offset: 0xF148

    // Handler for the player upgrades.
    idEquipment_UpgradeHandler equipmentUpgrades; // Offset: 0xF2D8

    // Handler for the player upgrades.
    idAbility_UpgradeHandler abilityUpgrades; // Offset: 0xF778

    // Debug Wrapper for various combat-related debug outputs and displays
    idCombatDebug combatDebug; // Offset: 0xF9C0

}; // Size: 0xFA18
