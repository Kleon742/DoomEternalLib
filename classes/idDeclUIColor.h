struct idDeclUIColor : idDeclTypeInfo
{
    struct uiColorDef_t
    {
        // The color represented by this entry
        idColor color; // Offset: 0x0

        // The happy name of this color
        idStrId name; // Offset: 0x10

    }; // Size: 0x14

    // The display name of this color profile.
    idStrId displayName; // Offset: 0x88

    // Whether or not this color profile is for color blind accessibility
    bool isColorBlindProfile; // Offset: 0x8C

    // The color the hud draws in
    idDeclUIColor::uiColorDef_t hudBase; // Offset: 0x90

    // The shadow color for the hud
    idDeclUIColor::uiColorDef_t hudShadow; // Offset: 0xA4

    // The text color for the hud
    idDeclUIColor::uiColorDef_t hudText; // Offset: 0xB8

    // The text header color for the hud
    idDeclUIColor::uiColorDef_t hudHeader; // Offset: 0xCC

    // The base color for dash fills and the icon
    idDeclUIColor::uiColorDef_t dashBase; // Offset: 0xE0

    // The glow color for dash for the fill bar
    idDeclUIColor::uiColorDef_t dashGlow; // Offset: 0xF4

    // The color used for "ghost" images in notifications
    idDeclUIColor::uiColorDef_t notificationGhost; // Offset: 0x108

    // The color used across the UI for health
    idDeclUIColor::uiColorDef_t uiHealth; // Offset: 0x11C

    // The color used across the UI for health gradients
    idDeclUIColor::uiColorDef_t uiHealthGradient; // Offset: 0x130

    // The color used across the UI for low health
    idDeclUIColor::uiColorDef_t uiHealthLow; // Offset: 0x144

    // The color used across the UI for REALLY low health
    idDeclUIColor::uiColorDef_t uiHealthReallyLow; // Offset: 0x158

    // The color used across the UI for demon health
    idDeclUIColor::uiColorDef_t uiHealthDemon; // Offset: 0x16C

    // The color used across the UI for armor
    idDeclUIColor::uiColorDef_t uiArmor; // Offset: 0x180

    // The color used across the UI for armor gradients
    idDeclUIColor::uiColorDef_t uiArmorGradient; // Offset: 0x194

    // The color used across the UI for radiation
    idDeclUIColor::uiColorDef_t uiRadiation; // Offset: 0x1A8

    // The color used across the UI for radiation gradients
    idDeclUIColor::uiColorDef_t uiRadiationGradient; // Offset: 0x1BC

    // The color used across the UI for oxygen
    idDeclUIColor::uiColorDef_t uiOxygen; // Offset: 0x1D0

    // The color used across the UI for oxygen gradients
    idDeclUIColor::uiColorDef_t uiOxygenGradient; // Offset: 0x1E4

    // The color used across the UI for urgent warnings and alerts
    idDeclUIColor::uiColorDef_t uiWarning; // Offset: 0x1F8

    // The color used across the UI for successful actions
    idDeclUIColor::uiColorDef_t uiSuccess; // Offset: 0x20C

    // The color used across the UI for failed actions
    idDeclUIColor::uiColorDef_t uiFailure; // Offset: 0x220

    // The color used across the UI for cautions
    idDeclUIColor::uiColorDef_t uiCaution; // Offset: 0x234

    // The color used across the UI for the fill color in progress bars
    idDeclUIColor::uiColorDef_t uiProgressBarFill; // Offset: 0x248

    // The color used across the UI for progress complete (bars, text, etc.)
    idDeclUIColor::uiColorDef_t uiProgressComplete; // Offset: 0x25C

    // The color used for health background of demon players
    idDeclUIColor::uiColorDef_t uiHealthDemonBackground; // Offset: 0x270

    // The color used for health background of demon players when health is low
    idDeclUIColor::uiColorDef_t uiHealthDemonBackgroundLow; // Offset: 0x284

    // The color used for health background of demon players when health is really low
    idDeclUIColor::uiColorDef_t uiHealthDemonBackgroundReallyLow; // Offset: 0x298

    // The color used for health background of demon players when dead
    idDeclUIColor::uiColorDef_t uiHealthDemonBackgroundDead; // Offset: 0x2AC

    // The color used for health background glow of demon players
    idDeclUIColor::uiColorDef_t uiHealthDemonBackgroundGlow; // Offset: 0x2C0

    // The color used for health background glow of demon players when health is really low
    idDeclUIColor::uiColorDef_t uiHealthDemonBackgroundGlowReallyLow; // Offset: 0x2D4

    // The color used for health background glow of demon players when health is low
    idDeclUIColor::uiColorDef_t uiHealthDemonBackgroundGlowLow; // Offset: 0x2E8

    // The color used for health bar pip of green demon players when health is full
    idDeclUIColor::uiColorDef_t uiHealthDemonPipGreen; // Offset: 0x2FC

    // The color used for health bar pip gradient of green demon players when health is full
    idDeclUIColor::uiColorDef_t uiHealthDemonPipGreenGradient; // Offset: 0x310

    // The color used for health bar pip of orange demon players when health is full
    idDeclUIColor::uiColorDef_t uiHealthDemonPipOrange; // Offset: 0x324

    // The color used for health bar pip gradient of orange demon players when health is full
    idDeclUIColor::uiColorDef_t uiHealthDemonPipOrangeGradient; // Offset: 0x338

    // The color used for health bar pip of blue demon players when health is full
    idDeclUIColor::uiColorDef_t uiHealthDemonPipBlue; // Offset: 0x34C

    // The color used for health bar pip gradient of blue demon players when health is full
    idDeclUIColor::uiColorDef_t uiHealthDemonPipBlueGradient; // Offset: 0x360

    // The color used for health bar pip of demon players when health is low
    idDeclUIColor::uiColorDef_t uiHealthDemonPipLow; // Offset: 0x374

    // The color used for health bar pip gradient of demon players when health is low
    idDeclUIColor::uiColorDef_t uiHealthDemonPipLowGradient; // Offset: 0x388

    // The color used for health bar pip and gradient of demon players when dead
    idDeclUIColor::uiColorDef_t uiHealthDemonPipDead; // Offset: 0x39C

    // The color used for health bar icon of demon players
    idDeclUIColor::uiColorDef_t uiHealthDemonIcon; // Offset: 0x3B0

    // The color used for health bar icon gradient of demon players
    idDeclUIColor::uiColorDef_t uiHealthDemonIconGradient; // Offset: 0x3C4

    // The color used for health bar icon of demon players when health is low
    idDeclUIColor::uiColorDef_t uiHealthDemonIconLow; // Offset: 0x3D8

    // The color used for health bar icon gradient of demon players when health is low
    idDeclUIColor::uiColorDef_t uiHealthDemonIconGradientLow; // Offset: 0x3EC

    // The color used for health bar icon of demon players when health is really low
    idDeclUIColor::uiColorDef_t uiHealthDemonIconReallyLow; // Offset: 0x400

    // The color used for health bar icon gradient of demon players when health is really low
    idDeclUIColor::uiColorDef_t uiHealthDemonIconGradientReallyLow; // Offset: 0x414

    // The color used for health bar icon of demon players when dead
    idDeclUIColor::uiColorDef_t uiHealthDemonIconDead; // Offset: 0x428

    // The color used for health bar icon gradient of demon players when dead
    idDeclUIColor::uiColorDef_t uiHealthDemonIconGradientDead; // Offset: 0x43C

    // The color used for health bar glow bits of demon players
    idDeclUIColor::uiColorDef_t uiHealthDemonGlowBits; // Offset: 0x450

    // The color used for health bar glow bits of demon players when health is low
    idDeclUIColor::uiColorDef_t uiHealthDemonGlowBitsLow; // Offset: 0x464

    // The color used for health bar text of demon players
    idDeclUIColor::uiColorDef_t uiHealthDemonText; // Offset: 0x478

    // The color used for health bar text of demon players when health is low
    idDeclUIColor::uiColorDef_t uiHealthDemonTextLow; // Offset: 0x48C

    // The color used for unlocked doors in the world
    idDeclUIColor::uiColorDef_t worldUnlocked; // Offset: 0x4A0

    // The color used for locked doors in the world
    idDeclUIColor::uiColorDef_t worldLocked; // Offset: 0x4B4

    // The color of green for slayer ui
    idDeclUIColor::uiColorDef_t slayerGreen; // Offset: 0x4C8

    // The shade of red for demon ui
    idDeclUIColor::uiColorDef_t demonRed; // Offset: 0x4DC

    // The shade of yellow for demon ui
    idDeclUIColor::uiColorDef_t demonYellow; // Offset: 0x4F0

    // The shade of yellow for demon ui
    idDeclUIColor::uiColorDef_t white; // Offset: 0x504

    // The color representing the chainsaw in UI
    idDeclUIColor::uiColorDef_t weaponChainsaw; // Offset: 0x518

    // The color representing the combat shotgun in UI
    idDeclUIColor::uiColorDef_t weaponShotgun; // Offset: 0x52C

    // The color representing the double barrel shotgun in UI
    idDeclUIColor::uiColorDef_t weaponDoubleBarrel; // Offset: 0x540

    // The color representing the assualt rifle in UI
    idDeclUIColor::uiColorDef_t weaponAssualtRifle; // Offset: 0x554

    // The color representing the chaingun in UI
    idDeclUIColor::uiColorDef_t weaponChaingun; // Offset: 0x568

    // The color representing the plasma rifle in UI
    idDeclUIColor::uiColorDef_t weaponPlasmaRifle; // Offset: 0x57C

    // The color representing the ballista in UI
    idDeclUIColor::uiColorDef_t weaponBallista; // Offset: 0x590

    // The color representing the rocket launcher in UI
    idDeclUIColor::uiColorDef_t weaponRocketLauncher; // Offset: 0x5A4

    // The color representing the BFG in UI
    idDeclUIColor::uiColorDef_t weaponBfg; // Offset: 0x5B8

    // The color representing the Unmaykr in UI
    idDeclUIColor::uiColorDef_t weaponUnmaykr; // Offset: 0x5CC

    // The color representing the crucible in UI
    idDeclUIColor::uiColorDef_t weaponCrucible; // Offset: 0x5E0

    // The color representing the hammer in UI
    idDeclUIColor::uiColorDef_t weaponHammer; // Offset: 0x5F4

    // The color representing the weapons lacking ammo in UI
    idDeclUIColor::uiColorDef_t weaponNoAmmo; // Offset: 0x608

    // The color representing the disabled weapons in UI
    idDeclUIColor::uiColorDef_t weaponDisabled; // Offset: 0x61C

    // The color representing the combat shotgun when full in UI
    idDeclUIColor::uiColorDef_t weaponShotgunFull; // Offset: 0x630

    // The color representing the double barrel shotgun when full in UI
    idDeclUIColor::uiColorDef_t weaponDoubleBarrelFull; // Offset: 0x644

    // The color representing the assualt rifle when full in UI
    idDeclUIColor::uiColorDef_t weaponAssualtRifleFull; // Offset: 0x658

    // The color representing the chaingun when full in UI
    idDeclUIColor::uiColorDef_t weaponChaingunFull; // Offset: 0x66C

    // The color representing the plasma rifle when full in UI
    idDeclUIColor::uiColorDef_t weaponPlasmaRifleFull; // Offset: 0x680

    // The color representing the ballista when full in UI
    idDeclUIColor::uiColorDef_t weaponBallistaFull; // Offset: 0x694

    // The color representing the rocket launcher when full in UI
    idDeclUIColor::uiColorDef_t weaponRocketLauncherFull; // Offset: 0x6A8

    // The color representing the BFG when full in UI
    idDeclUIColor::uiColorDef_t weaponBfgFull; // Offset: 0x6BC

    // The color representing the Unmaykr when full in UI
    idDeclUIColor::uiColorDef_t weaponUnmaykrFull; // Offset: 0x6D0

    // The color representing the hammer when full in UI
    idDeclUIColor::uiColorDef_t weaponHammerFull; // Offset: 0x6E4

    // The color representing the reticle base
    idDeclUIColor::uiColorDef_t reticleBase; // Offset: 0x6F8

    // The color representing the reticle glow
    idDeclUIColor::uiColorDef_t reticleGlow; // Offset: 0x70C

    // The color representing the reticle cooldown base
    idDeclUIColor::uiColorDef_t reticleCooldownBase; // Offset: 0x720

    // The color representing the reticle cooldown glow
    idDeclUIColor::uiColorDef_t reticleCooldownGlow; // Offset: 0x734

    // The color representing the reticle warning base
    idDeclUIColor::uiColorDef_t reticleWarningBase; // Offset: 0x748

    // The color representing the reticle warning glow
    idDeclUIColor::uiColorDef_t reticleWarningGlow; // Offset: 0x75C

    // The color representing the reticle alt stroke (eg. crucible)
    idDeclUIColor::uiColorDef_t reticleAltStroke; // Offset: 0x770

    // The color representing the reticle alt base (eg. crucible)
    idDeclUIColor::uiColorDef_t reticleAltBase; // Offset: 0x784

    // The color representing the reticle alt glow (eg. crucible)
    idDeclUIColor::uiColorDef_t reticleAltGlow; // Offset: 0x798

    // The color representing the reticle alt 2 stroke (eg. unmakyr)
    idDeclUIColor::uiColorDef_t reticleAlt2Stroke; // Offset: 0x7AC

    // The color representing the reticle alt 2 base (eg. unmakyr)
    idDeclUIColor::uiColorDef_t reticleAlt2Base; // Offset: 0x7C0

    // The color representing the reticle alt 2 glow (eg. unmakyr)
    idDeclUIColor::uiColorDef_t reticleAlt2Glow; // Offset: 0x7D4

    // The color representing blue keycards
    idDeclUIColor::uiColorDef_t keycardBlue; // Offset: 0x7E8

    // The color representing red keycards
    idDeclUIColor::uiColorDef_t keycardRed; // Offset: 0x7FC

    // The color representing yellow keycards
    idDeclUIColor::uiColorDef_t keycardYellow; // Offset: 0x810

    // The color representing the slayer key
    idDeclUIColor::uiColorDef_t keycardSlayer; // Offset: 0x824

    // The color used in menus for background bases
    idDeclUIColor::uiColorDef_t menuBackBase; // Offset: 0x838

    // The color used in menus for background strokes
    idDeclUIColor::uiColorDef_t menuBackStroke; // Offset: 0x84C

    // The color used in menus for background bases when selected
    idDeclUIColor::uiColorDef_t menuSelectionBase; // Offset: 0x860

    // The color used in menus for background strokes when selected
    idDeclUIColor::uiColorDef_t menuSelectionStroke; // Offset: 0x874

    // The color used in menus for background bases when pressed
    idDeclUIColor::uiColorDef_t menuBackPress; // Offset: 0x888

    // The color used in menus for header text
    idDeclUIColor::uiColorDef_t menuHeaderText; // Offset: 0x89C

    // The color used in menus for items that have been collected
    idDeclUIColor::uiColorDef_t collectedItem; // Offset: 0x8B0

    // The color used for the corruption meter hex background cleared element
    idDeclUIColor::uiColorDef_t corruptionHexCleared; // Offset: 0x8C4

    // The color used for the corruption meter hex glow background cleared element
    idDeclUIColor::uiColorDef_t corruptionHexGlowCleared; // Offset: 0x8D8

    // The color used for the corruption meter hex background corrupt element
    idDeclUIColor::uiColorDef_t corruptionHexCorrupt; // Offset: 0x8EC

    // The color used for the corruption meter hex glow background corrupt element
    idDeclUIColor::uiColorDef_t corruptionHexGlowCorrupt; // Offset: 0x900

    // The color used for the corruption meter container cleared element
    idDeclUIColor::uiColorDef_t corruptionContainerCleared; // Offset: 0x914

    // The color used for the corruption meter container corrupt element
    idDeclUIColor::uiColorDef_t corruptionContainerCorrupt; // Offset: 0x928

    // The color used for the corruption cleared indicators
    idDeclUIColor::uiColorDef_t corruptionClear; // Offset: 0x93C

    // The color used for the glow of corruption cleared indicators
    idDeclUIColor::uiColorDef_t corruptionClearGlow; // Offset: 0x950

    // The color used for the corruption cleared indicators when partially cleared
    idDeclUIColor::uiColorDef_t corruptionPartialClear; // Offset: 0x964

    // The color used for the glow of corruption cleared indicators when partially cleared
    idDeclUIColor::uiColorDef_t corruptionPartialClearGlow; // Offset: 0x978

    // The color used for the combat encounter corruption indicators
    idDeclUIColor::uiColorDef_t corruptionCombat; // Offset: 0x98C

    // The color used for the glow of combat encounter corruption indicators
    idDeclUIColor::uiColorDef_t corruptionCombatGlow; // Offset: 0x9A0

    // The color used for the slayer gate corruption indicators
    idDeclUIColor::uiColorDef_t corruptionSlayerGate; // Offset: 0x9B4

    // The color used for the glow of slayer gate corruption indicators
    idDeclUIColor::uiColorDef_t corruptionSlayerGateGlow; // Offset: 0x9C8

    // The color used for the secret encounter corruption indicators
    idDeclUIColor::uiColorDef_t corruptionSecret; // Offset: 0x9DC

    // The color used for the glow of secret encounter corruption indicators
    idDeclUIColor::uiColorDef_t corruptionSecretGlow; // Offset: 0x9F0

    // The color used for the boss encounter corruption indicators
    idDeclUIColor::uiColorDef_t corruptionBoss; // Offset: 0xA04

    // The color used for the glow of boss encounter corruption indicators
    idDeclUIColor::uiColorDef_t corruptionBossGlow; // Offset: 0xA18

    // The color used for the default corruption indicators
    idDeclUIColor::uiColorDef_t corruptionBase; // Offset: 0xA2C

    // The color used for the default corruption overlays
    idDeclUIColor::uiColorDef_t corruptionOverlay; // Offset: 0xA40

    // The color used for the escalation encounter corruption indicators
    idDeclUIColor::uiColorDef_t corruptionEscalation; // Offset: 0xA54

    // The color used for the glow of escalation encounter corruption indicators
    idDeclUIColor::uiColorDef_t corruptionEscalationGlow; // Offset: 0xA68

    // The color used for the extra life icon
    idDeclUIColor::uiColorDef_t extraLifeIcon; // Offset: 0xA7C

    // The color used for the extra life icon glow
    idDeclUIColor::uiColorDef_t extraLifeIconGlow; // Offset: 0xA90

    // The color used for the extra life refund timer
    idDeclUIColor::uiColorDef_t extraLifeTimer; // Offset: 0xAA4

    // The color used for the extra life refund timer glow
    idDeclUIColor::uiColorDef_t extraLifeTimerGlow; // Offset: 0xAB8

    // The color used for the argent cell menu
    idDeclUIColor::uiColorDef_t argentCell; // Offset: 0xACC

    // The color used for weapon point earned notifications
    idDeclUIColor::uiColorDef_t weaponPoint; // Offset: 0xAE0

    // The color used for praetor point earned notifications
    idDeclUIColor::uiColorDef_t praetorPoint; // Offset: 0xAF4

    // The color used for sentinel battery earned notifications
    idDeclUIColor::uiColorDef_t sentinelBattery; // Offset: 0xB08

    // The color used for the demon hud's backers
    idDeclUIColor::uiColorDef_t demonHudBacker; // Offset: 0xB1C

    // The color used for the demon ability hud selection elements glow
    idDeclUIColor::uiColorDef_t demonHudAbilitiesSelectionGlow; // Offset: 0xB30

    // The color used for the demon ability hud selection elements stroke
    idDeclUIColor::uiColorDef_t demonHudAbilitiesSelectionStroke; // Offset: 0xB44

    // The color used for the demon ability hud frame
    idDeclUIColor::uiColorDef_t demonHudAbilityFrame; // Offset: 0xB58

    // The color used for the demon ability hud glow that appears under the frame when unselected
    idDeclUIColor::uiColorDef_t demonHudAbilityFrameGlowUnselected; // Offset: 0xB6C

    // The color used for the demon ability hud glow that appears under the frame when selected
    idDeclUIColor::uiColorDef_t demonHudAbilityFrameGlowSelected; // Offset: 0xB80

    // The color used for the demon cards that need a teal color base
    idDeclUIColor::uiColorDef_t demonHudTealBase; // Offset: 0xB94

    // The color used for the demon cards that need a teal color gradient
    idDeclUIColor::uiColorDef_t demonHudTealGradient; // Offset: 0xBA8

    // The color used for the demon cards that need a teal color overlay
    idDeclUIColor::uiColorDef_t demonHudTealOverlay; // Offset: 0xBBC

    // The color used for the demon cards that need a teal color icon
    idDeclUIColor::uiColorDef_t demonHudTealIcon; // Offset: 0xBD0

    // The color used for the demon cards that need a yellow color base
    idDeclUIColor::uiColorDef_t demonHudYellowBase; // Offset: 0xBE4

    // The color used for the demon cards that need a yellow color gradient
    idDeclUIColor::uiColorDef_t demonHudYellowGradient; // Offset: 0xBF8

    // The color used for the demon cards that need a yellow color overlay
    idDeclUIColor::uiColorDef_t demonHudYellowOverlay; // Offset: 0xC0C

    // The color used for the demon cards that need a yellow color icon
    idDeclUIColor::uiColorDef_t demonHudYellowIcon; // Offset: 0xC20

    // The color used for the demon cards that need a orange color base
    idDeclUIColor::uiColorDef_t demonHudOrangeBase; // Offset: 0xC34

    // The color used for the demon cards that need a orange color gradient
    idDeclUIColor::uiColorDef_t demonHudOrangeGradient; // Offset: 0xC48

    // The color used for the demon cards that need a orange color overlay
    idDeclUIColor::uiColorDef_t demonHudOrangeOverlay; // Offset: 0xC5C

    // The color used for the demon cards that need a orange color icon
    idDeclUIColor::uiColorDef_t demonHudOrangeIcon; // Offset: 0xC70

    // The color used for the demon cards that need a blue color base
    idDeclUIColor::uiColorDef_t demonHudBlueBase; // Offset: 0xC84

    // The color used for the demon cards that need a blue color gradient
    idDeclUIColor::uiColorDef_t demonHudBlueGradient; // Offset: 0xC98

    // The color used for the demon cards that need a blue color overlay
    idDeclUIColor::uiColorDef_t demonHudBlueOverlay; // Offset: 0xCAC

    // The color used for the demon cards that need a blue color icon
    idDeclUIColor::uiColorDef_t demonHudBlueIcon; // Offset: 0xCC0

    // The color used for the demon cards that need a purple color base
    idDeclUIColor::uiColorDef_t demonHudPurpleBase; // Offset: 0xCD4

    // The color used for the demon cards that need a purple color gradient
    idDeclUIColor::uiColorDef_t demonHudPurpleGradient; // Offset: 0xCE8

    // The color used for the demon cards that need a purple color overlay
    idDeclUIColor::uiColorDef_t demonHudPurpleOverlay; // Offset: 0xCFC

    // The color used for the demon cards that need a purple color icon
    idDeclUIColor::uiColorDef_t demonHudPurpleIcon; // Offset: 0xD10

    // The color used for the demon cards that need a red color base
    idDeclUIColor::uiColorDef_t demonHudRedBase; // Offset: 0xD24

    // The color used for the demon cards that need a red color gradient
    idDeclUIColor::uiColorDef_t demonHudRedGradient; // Offset: 0xD38

    // The color used for the demon cards that need a red color overlay
    idDeclUIColor::uiColorDef_t demonHudRedOverlay; // Offset: 0xD4C

    // The color used for the demon cards that need a red color icon
    idDeclUIColor::uiColorDef_t demonHudRedIcon; // Offset: 0xD60

    // The color used for the demon cards that need a green color base
    idDeclUIColor::uiColorDef_t demonHudGreenBase; // Offset: 0xD74

    // The color used for the demon cards that need a green color gradient
    idDeclUIColor::uiColorDef_t demonHudGreenGradient; // Offset: 0xD88

    // The color used for the demon cards that need a green color overlay
    idDeclUIColor::uiColorDef_t demonHudGreenOverlay; // Offset: 0xD9C

    // The color used for the demon cards that need a green color icon
    idDeclUIColor::uiColorDef_t demonHudGreenIcon; // Offset: 0xDB0

    // The color used for the demon card icons that are on cooldown
    idDeclUIColor::uiColorDef_t demonHudIconCooldown; // Offset: 0xDC4

    // The color used for the demon card base that are on cooldown
    idDeclUIColor::uiColorDef_t demonHudBaseCooldown; // Offset: 0xDD8

    // The color used for the demon card gradient that are on cooldown
    idDeclUIColor::uiColorDef_t demonHudGradientCooldown; // Offset: 0xDEC

    // The color used for the demon card overlay that are on cooldown
    idDeclUIColor::uiColorDef_t demonHudOverlayCooldown; // Offset: 0xE00

    // The color used for the cover of a demon card on cooldown
    idDeclUIColor::uiColorDef_t demonHudAbilityCooldownCover; // Offset: 0xE14

    // The color used for the gamepad summons wheel stroke lines
    idDeclUIColor::uiColorDef_t demonHudWheelStroke; // Offset: 0xE28

    // The color used for the gamepad summons wheel base
    idDeclUIColor::uiColorDef_t demonHudWheelBase; // Offset: 0xE3C

    // The color used for the gamepad summons wheel glow
    idDeclUIColor::uiColorDef_t demonHudWheelGlow; // Offset: 0xE50

    // The base color for demon hud notifications
    idDeclUIColor::uiColorDef_t demonHudNotificationBase; // Offset: 0xE64

    // The icon color for demon hud notifications
    idDeclUIColor::uiColorDef_t demonHudNotificationIcon; // Offset: 0xE78

    // The stroke color for demon hud notifications
    idDeclUIColor::uiColorDef_t demonHudNotificationStroke; // Offset: 0xE8C

    // The header color for demon hud notifications
    idDeclUIColor::uiColorDef_t demonHudNotificationHeader; // Offset: 0xEA0

    // The text color for demon hud notifications
    idDeclUIColor::uiColorDef_t demonHudNotificationText; // Offset: 0xEB4

    // The glow color for demon hud notifications
    idDeclUIColor::uiColorDef_t demonHudNotificationGlow; // Offset: 0xEC8

    // The color used for the frame of the player widget in the HUD's header when the player is a demon
    idDeclUIColor::uiColorDef_t demonHudDemonPlayerFrame; // Offset: 0xEDC

    // The color used for the frame of the player widget in the HUD's header when the player is the slayer
    idDeclUIColor::uiColorDef_t demonHudSlayerPlayerFrame; // Offset: 0xEF0

    // The color used for the back-glow of the frame of the player widget in the HUD's header when the player is a demon
    idDeclUIColor::uiColorDef_t demonHudDemonPlayerFrameBackglow; // Offset: 0xF04

    // The color used for the back-glow of the frame of the player widget in the HUD's header when the player is the slayer
    idDeclUIColor::uiColorDef_t demonHudSlayerPlayerFrameBackglow; // Offset: 0xF18

    // The color used for common text in the HUD's header (player list and match summary)
    idDeclUIColor::uiColorDef_t demonHudHeaderText; // Offset: 0xF2C

    // The color used for number text in the HUD's match summary
    idDeclUIColor::uiColorDef_t demonHudHeaderTextNumbers; // Offset: 0xF40

    // The color used for the match summary's frame elements
    idDeclUIColor::uiColorDef_t demonHudMatchSummaryFrame; // Offset: 0xF54

    // The color used for the match summary's background elements
    idDeclUIColor::uiColorDef_t demonHudMatchSummaryBacking; // Offset: 0xF68

    // The color used for player's status list backglow
    idDeclUIColor::uiColorDef_t hudStatusBuffBackglow; // Offset: 0xF7C

    // The color used for player's status list backer
    idDeclUIColor::uiColorDef_t hudStatusBuffBacker; // Offset: 0xF90

    // Seaons Menu - Default element color
    idDeclUIColor::uiColorDef_t menuSeasonBase; // Offset: 0xFA4

    // Cosmetic Items - Default Rarity
    idDeclUIColor::uiColorDef_t cosmeticRarityDefault; // Offset: 0xFB8

    // Cosmetic Items - Tier 1 Rarity
    idDeclUIColor::uiColorDef_t cosmeticRarityTier1; // Offset: 0xFCC

    // Cosmetic Items - Tier 2 Rarity
    idDeclUIColor::uiColorDef_t cosmeticRarityTier2; // Offset: 0xFE0

    // Cosmetic Items - Tier 3 Rarity
    idDeclUIColor::uiColorDef_t cosmeticRarityTier3; // Offset: 0xFF4

    // pvp notifications ticker item stroke color
    idDeclUIColor::uiColorDef_t pvpTickerStroke; // Offset: 0x1008

    // pvp notifications ticker item backer color
    idDeclUIColor::uiColorDef_t pvpTickerBacker; // Offset: 0x101C

    // pvp notifications ticker item color when slayer player is the actor of the notification
    idDeclUIColor::uiColorDef_t pvpTickerSlayer; // Offset: 0x1030

    // base color for all demon reticles
    idDeclUIColor::uiColorDef_t demonReticle; // Offset: 0x1044

    // glow color for the revenant reticle
    idDeclUIColor::uiColorDef_t revenantReticleGlow; // Offset: 0x1058

    // gradient color for the revenant reticle
    idDeclUIColor::uiColorDef_t revenantReticleGradient; // Offset: 0x106C

    // base color for the revenant reticle
    idDeclUIColor::uiColorDef_t revenantReticleBase; // Offset: 0x1080

    // glow color for the archvile reticle
    idDeclUIColor::uiColorDef_t archvileReticleGlow; // Offset: 0x1094

    // gradient color for the archvile reticle
    idDeclUIColor::uiColorDef_t archvileReticleGradient; // Offset: 0x10A8

    // base color for the archvile reticle
    idDeclUIColor::uiColorDef_t archvileReticleBase; // Offset: 0x10BC

    // glow color for the painElemental reticle
    idDeclUIColor::uiColorDef_t painElementalReticleGlow; // Offset: 0x10D0

    // gradient color for the painElemental reticle
    idDeclUIColor::uiColorDef_t painElementalReticleGradient; // Offset: 0x10E4

    // base color for the painElemental reticle
    idDeclUIColor::uiColorDef_t painElementalReticleBase; // Offset: 0x10F8

    // gradient color for the painElemental reticle in low shields
    idDeclUIColor::uiColorDef_t painElementalReticleWarningGradient; // Offset: 0x110C

    // base color for the painElemental reticle in low shields
    idDeclUIColor::uiColorDef_t painElementalReticleWarningBase; // Offset: 0x1120

    // base color for a completed milestone
    idDeclUIColor::uiColorDef_t milestoneCompleteBase; // Offset: 0x1134

    // gradient color for a completed milestone
    idDeclUIColor::uiColorDef_t milestoneCompleteGradient; // Offset: 0x1148

    // icon color for a completed milestone
    idDeclUIColor::uiColorDef_t milestoneCompleteIcon; // Offset: 0x115C

    // text color for a completed milestone
    idDeclUIColor::uiColorDef_t milestoneCompleteText; // Offset: 0x1170

    // base color for a completed milestone
    idDeclUIColor::uiColorDef_t progressionItemCompleteBase; // Offset: 0x1184

    // base color for the sentinel armor hud
    idDeclUIColor::uiColorDef_t sentinelArmorStroke; // Offset: 0x1198

    // glow color for the sentinel armor hud
    idDeclUIColor::uiColorDef_t sentinelArmorGlow; // Offset: 0x11AC

    // the color definition for the screen damage hud effect
    idDeclUIColor::uiColorDef_t screenDamage; // Offset: 0x11C0

    // frag grenade hud color
    idDeclUIColor::uiColorDef_t hudEquipmentFrag; // Offset: 0x11D4

    // frag grenade Icon hud color
    idDeclUIColor::uiColorDef_t hudEquipmentFragIcon; // Offset: 0x11E8

    // cyro grenade hud color
    idDeclUIColor::uiColorDef_t hudEquipmentCyro; // Offset: 0x11FC

    // cyro grenade Icon hud color
    idDeclUIColor::uiColorDef_t hudEquipmentCyroIcon; // Offset: 0x1210

    // chainsaw hud color
    idDeclUIColor::uiColorDef_t hudEquipmentChainsaw; // Offset: 0x1224

    // chainsaw Icon hud color
    idDeclUIColor::uiColorDef_t hudEquipmentChainsawIcon; // Offset: 0x1238

    // flame belch hud color
    idDeclUIColor::uiColorDef_t hudEquipmentFlameBelch; // Offset: 0x124C

    // flame belch Icon hud color
    idDeclUIColor::uiColorDef_t hudEquipmentFlameBelchIcon; // Offset: 0x1260

    // crucible hud color
    idDeclUIColor::uiColorDef_t hudEquipmentCrucible; // Offset: 0x1274

    // crucible Icon hud color
    idDeclUIColor::uiColorDef_t hudEquipmentCrucibleIcon; // Offset: 0x1288

    // hammer hud color
    idDeclUIColor::uiColorDef_t hudEquipmentHammer; // Offset: 0x129C

    // hammer Icon hud color
    idDeclUIColor::uiColorDef_t hudEquipmentHammerIcon; // Offset: 0x12B0

    // hammer Icon hud color when supercharged
    idDeclUIColor::uiColorDef_t hudEquipmentHammerSupercharge; // Offset: 0x12C4

    // hammer gradient hud color
    idDeclUIColor::uiColorDef_t hudEquipmentHammerGradient; // Offset: 0x12D8

    // boss health color
    idDeclUIColor::uiColorDef_t hudBossHealthBase; // Offset: 0x12EC

    // boss health gradient color
    idDeclUIColor::uiColorDef_t hudBossHealthGradient; // Offset: 0x1300

    // boss shield color
    idDeclUIColor::uiColorDef_t hudBossShieldBase; // Offset: 0x1314

    // boss shield glow color
    idDeclUIColor::uiColorDef_t hudBossShieldGlow; // Offset: 0x1328

    // boss Stuff
    idDeclUIColor::uiColorDef_t hudBossKhanMykerBarBorder; // Offset: 0x133C

    // boss Stuff
    idDeclUIColor::uiColorDef_t hudBossKhanMykerBarGradient; // Offset: 0x1350

    // boss Stuff
    idDeclUIColor::uiColorDef_t hudBossKhanMykerBarBase; // Offset: 0x1364

    // boss Stuff
    idDeclUIColor::uiColorDef_t hudBossDemonLordMortarPOIBase; // Offset: 0x1378

    // boss Stuff
    idDeclUIColor::uiColorDef_t hudBossDemonLordMortarPOIArrow; // Offset: 0x138C

    // door Stuff
    idDeclUIColor::uiColorDef_t doorLockRed; // Offset: 0x13A0

    // door Stuff
    idDeclUIColor::uiColorDef_t doorLockBlue; // Offset: 0x13B4

    // door Stuff
    idDeclUIColor::uiColorDef_t doorLockYellow; // Offset: 0x13C8

    // door Stuff
    idDeclUIColor::uiColorDef_t doorLockGreen; // Offset: 0x13DC

    // invasion red color
    idDeclUIColor::uiColorDef_t invasionRed; // Offset: 0x13F0

    // invasion orange color
    idDeclUIColor::uiColorDef_t invasionOrange; // Offset: 0x1404

    // invasion yellow color
    idDeclUIColor::uiColorDef_t invasionYellow; // Offset: 0x1418

    // player badge streak win color
    idDeclUIColor::uiColorDef_t playerBadgeStreakWin; // Offset: 0x142C

    // player badge streak loss color
    idDeclUIColor::uiColorDef_t playerBadgeStreakLoss; // Offset: 0x1440

    // color used for the button of master levels that are locked
    idDeclUIColor::uiColorDef_t masterLevelLocked; // Offset: 0x1454

    // color used for the support rune elements
    idDeclUIColor::uiColorDef_t supportRuneBase; // Offset: 0x1468

    // glow color used for the support rune elements
    idDeclUIColor::uiColorDef_t supportRuneGlow; // Offset: 0x147C

    // The color used in menus for background strokes
    idDeclUIColor::uiColorDef_t supportRuneStroke; // Offset: 0x1490

    // The color used in menus for background bases when selected
    idDeclUIColor::uiColorDef_t supportRuneSelectionBase; // Offset: 0x14A4

    // color used for supercharged blood punch on HUD
    idDeclUIColor::uiColorDef_t bloodPunchSuperchargeBase; // Offset: 0x14B8

    // glow color used for supercharged blood punch on HUD
    idDeclUIColor::uiColorDef_t bloodPunchSuperchargeGlow; // Offset: 0x14CC

    // glow color used for supercharged blood punch on HUD
    idDeclUIColor::uiColorDef_t cursedProwlerBase; // Offset: 0x14E0

    // glow color used for supercharged blood punch on HUD
    idDeclUIColor::uiColorDef_t cursedProwlerGlow; // Offset: 0x14F4

    // color used for onslaught powerup on HUD
    idDeclUIColor::uiColorDef_t powerupOnslaught; // Offset: 0x1508

    // color used for overdrive powerup on HUD
    idDeclUIColor::uiColorDef_t powerupOverdrive; // Offset: 0x151C

    // color used for berserk powerup on HUD
    idDeclUIColor::uiColorDef_t powerupBerserk; // Offset: 0x1530

    // color used for horde progress nodes that have been beaten
    idDeclUIColor::uiColorDef_t hordeProgressSuccess; // Offset: 0x1544

    // color used for the horde progress node that is active
    idDeclUIColor::uiColorDef_t hordeProgressCurrent; // Offset: 0x1558

    // color used for horde progress nodes that have not been beaten
    idDeclUIColor::uiColorDef_t hordeProgressLocked; // Offset: 0x156C

    // color used for horde progress nodes that are bonus
    idDeclUIColor::uiColorDef_t hordeProgressBonus; // Offset: 0x1580

}; // Size: 0x1598
