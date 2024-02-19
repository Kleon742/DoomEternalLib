struct idDeclPlayerProps : idGameDeclTypeInfo
{
    struct lockOnSoundInfo_t
    {
        // monster type
        aiMonsterType_t monsterType; // Offset: 0x0

        // sound to play when the player is target locked by an enemy
        idSoundEvent* sndLockedOn; // Offset: 0x8

        // sound to play when an enemy loses target lock on the player (or the rockets are fired)
        idSoundEvent* sndLockedOnLost; // Offset: 0x10

    }; // Size: 0x18

    struct playerSounds_t
    {
        // Sound to play when a tutorial starts.
        idSoundEvent* sndObjectiveAdded; // Offset: 0x0

        // Sound to play when a tutorial starts.
        idSoundEvent* sndObjectiveCompleted; // Offset: 0x8

        // Sound to play when a tutorial starts.
        idSoundEvent* sndMainObjectiveAdded; // Offset: 0x10

        // Sound to play when a tutorial starts.
        idSoundEvent* sndMainObjectiveCompleted; // Offset: 0x18

        // Sound to play when a tutorial starts.
        idSoundEvent* sndMapUpdated; // Offset: 0x20

        // Sound to play when a tutorial starts.
        idSoundEvent* sndTutorialStart; // Offset: 0x28

        // Sound to play when starting to use something
        idSoundEvent* sndUseStart; // Offset: 0x30

        // Sound to play when finished using something
        idSoundEvent* sndUseEnd; // Offset: 0x38

        // sound to play when down and almost dead ( formerly while waiting for d e f i b )
        idSoundEvent* sndAlmostDead; // Offset: 0x40

        // sound to play when health drops below 10
        idSoundEvent* sndBreatheHeavy; // Offset: 0x48

        // sound to play when health drops below 20
        idSoundEvent* sndBreatheMedium; // Offset: 0x50

        // sound to play when health drops below 20
        idSoundEvent* sndBreatheSprinting; // Offset: 0x58

        // sound to play when player cannot use or pickup an item
        idSoundEvent* sndCantUseItem; // Offset: 0x60

        // sound to play when a checkpoint is saved
        idSoundEvent* sndCheckpointSaved; // Offset: 0x68

        // sound to play when quick using with no items available
        idSoundEvent* sndOutOfItems; // Offset: 0x70

        // generic sound for picking up an item
        idSoundEvent* sndPickup; // Offset: 0x78

        // sound for possessing actors
        idSoundEvent* sndPossess; // Offset: 0x80

        // sound looped during actor possession
        idSoundEvent* sndPossessLoop; // Offset: 0x88

        // sound to play when player receives potential health
        idSoundEvent* sndUseBandage; // Offset: 0x90

        // sound when burning
        idSoundEvent* sndBurn; // Offset: 0x98

        // controller sound
        idSoundEvent* sndButtonBad; // Offset: 0xA0

        // controller sound
        idSoundEvent* sndButtonDown; // Offset: 0xA8

        // When we go into Weapon select
        idSoundEvent* sndWeaponSelectIn; // Offset: 0xB0

        // When we go Out of Weapon select
        idSoundEvent* sndWeaponSelectOut; // Offset: 0xB8

        // When secondary fire is pulled but the weapon has none
        idSoundEvent* sndWeaponNoSecondary; // Offset: 0xC0

        // controller sound
        idSoundEvent* sndButtonUp; // Offset: 0xC8

        // sound when player tries dropping an item into a solid
        idSoundEvent* sndCantDropItem; // Offset: 0xD0

        // sound to play when the player tries to loot something but can't... maybe it's empty?
        idSoundEvent* sndCantLootEntity; // Offset: 0xD8

        // controller sound
        idSoundEvent* sndClickDown; // Offset: 0xE0

        // controller sound
        idSoundEvent* sndClickUp; // Offset: 0xE8

        // death sound
        idSoundEvent* sndDeath; // Offset: 0xF0

        // sound to play when the player disassembles something successfully
        idSoundEvent* sndDisassemble; // Offset: 0xF8

        // sound to play when the player view enters water (ie: a bubble loop)
        idSoundEvent* sndEnterWater; // Offset: 0x100

        // sound to play when the player view exits water (ie: some sort of gasp)
        idSoundEvent* sndExitWater; // Offset: 0x108

        // sound to play when jumping
        idSoundEvent* sndJump; // Offset: 0x110

        // sound to play when double jumping (demon player)
        idSoundEvent* sndDoubleJump; // Offset: 0x118

        // sound to play when crouching
        idSoundEvent* sndCrouch; // Offset: 0x120

        // sound to play when standing up
        idSoundEvent* sndStandUp; // Offset: 0x128

        // sound to play for a landing on a surface that has NO DAMAGE
        idSoundEvent* sndLandNoDamage; // Offset: 0x130

        // sound to play while falling when impact will be a large landing or worse
        idSoundEvent* sndFallingLargeLandingStart; // Offset: 0x138

        // sound to play to stop fallingLargeLanding sound
        idSoundEvent* sndFallingLargeLandingStop; // Offset: 0x140

        // sound to play when falling a fatal distance
        idSoundEvent* sndFallingFatal; // Offset: 0x148

        // sound to play when the player successfully loots something.
        idSoundEvent* sndLootEntity; // Offset: 0x150

        // sound to play when a cinematic is skipped
        idSoundEvent* sndSkipCinematic; // Offset: 0x158

        // sound to play when the player is at low health.
        idSoundEvent* sndLowHealth; // Offset: 0x160

        // sound to play when the player recovers from low health.
        idSoundEvent* sndLowHealthRecovery; // Offset: 0x168

        // how many ms to wait before can play sndLowHealth or sndLowHealthRecovery again after playing each one (tracked separately)
        idTypesafeTime < int , millisecondUnique_t , 1000 > minLowHealthSoundsRepeatMS; // Offset: 0x170

        // foley sound for legs crossing (added from Doom4)
        idSoundEvent* sndLegsCrossing; // Offset: 0x178

        // foley sound for legs crossing when crouched (added from Doom4)
        idSoundEvent* sndLegsCrossingCrouched; // Offset: 0x180

        // sound shader to play for small amounts of damage
        idSoundEvent* sndPainSmall; // Offset: 0x188

        // sound shader to play for medium amounts of damage
        idSoundEvent* sndPainMedium; // Offset: 0x190

        // sound shader to play for large amounts of damage
        idSoundEvent* sndPainLarge; // Offset: 0x198

        // sound shader to play for small amounts of damage instead of sndPainSmall when it's self-inflicted
        idSoundEvent* sndSelfPainSmall; // Offset: 0x1A0

        // sound shader to play for medium amounts of damage instead of sndPainMedium when it's self-inflicted
        idSoundEvent* sndSelfPainMedium; // Offset: 0x1A8

        // sound shader to play for large amounts of damage instead of sndPainMedium when it's self-inflicted
        idSoundEvent* sndSelfPainLarge; // Offset: 0x1B0

        // health threshold to use very low pain small, medium, large
        float veryLowSoundsHealthThreshold; // Offset: 0x1B8

        // if health is under veryLowSoundsHealthThreshold we always play this sound
        idSoundEvent* sndVeryLowPain; // Offset: 0x1C0

        // sound to play when the player's armor gets depleted
        idSoundEvent* sndSelfArmorDepleted; // Offset: 0x1C8

        // sound shader to play when the player is low health
        idSoundEvent* sndHeartBeatLub; // Offset: 0x1D0

        // sound shader to play when the player is low health
        idSoundEvent* sndHeartBeatDub; // Offset: 0x1D8

        // shader for canceling revive
        idSoundEvent* sndCancelRevive; // Offset: 0x1E0

        // shader for when revive goes through
        idSoundEvent* sndFinishRevive; // Offset: 0x1E8

        // don't play two of the same type of feedback sounds sooner than this many MS apart
        idTypesafeTime < int , millisecondUnique_t , 1000 > feedbackSoundMinRetriggerMS; // Offset: 0x1F0

        // damage feedback sound to play (non headshots only - headshots use sndDmgDealtHeadShotFeedback)
        idSoundEvent* sndDmgDealtFeedback; // Offset: 0x1F8

        // damage to armor feedback sound
        idSoundEvent* sndDmgDealtToArmorFeedback; // Offset: 0x200

        // damage feedback sound to play for melee damage
        idSoundEvent* sndMeleeDmgDealtFeedback; // Offset: 0x208

        // damage feedback sound to play for non melee headshots (headShot = true in damageScalarDamageFlags_t) (supersedes sndDmgDealthHeadShotFeedback)
        idSoundEvent* sndHeadShotDmgDealtFeedback; // Offset: 0x210

        // damage feedback on critical hits
        idSoundEvent* sndCritDmgDealtFeedback; // Offset: 0x218

        // attempted to teleport to a location that player will not fit and no good teleport positions were ever discovered
        idSoundEvent* sndMPTeleportFailed; // Offset: 0x220

        // threw a teleporter but never activated it
        idSoundEvent* sndMPTeleporterTimedOut; // Offset: 0x228

        // threw a teleporter but someone shot it
        idSoundEvent* sndMPTeleporterDestroyed; // Offset: 0x230

        // threw an exploding projectile and it didn't hit anyone
        idSoundEvent* sndMPExplosionMissed; // Offset: 0x238

        // my slicer got destroyed
        idSoundEvent* sndMPSlicerDestroyed; // Offset: 0x240

        // i got pinged by an enemy sensor
        idSoundEvent* sndMPPingVictim; // Offset: 0x248

        // my threat sensor got destroyed
        idSoundEvent* sndMPThreatSensorDestroyedExpired; // Offset: 0x250

        // my threat sensor expired or reployed
        idSoundEvent* sndMPThreatSensorExpired; // Offset: 0x258

        // i got pinged by an enemy sensor
        idSoundEvent* sndMPHealBySiphon; // Offset: 0x260

        // drone is seeking me
        idSoundEvent* sndMPDroneTarget; // Offset: 0x268

        // my drone is seeking a target
        idSoundEvent* sndMPDroneSeeking; // Offset: 0x270

        // my drone attacked its target
        idSoundEvent* sndMPDroneAttackedTarget; // Offset: 0x278

        // my turret was destroyed or timed out
        idSoundEvent* sndMPTurretDestroyed; // Offset: 0x280

        // my turret attacked somebody
        idSoundEvent* sndMPTurretAttacked; // Offset: 0x288

        // damaged by a siphon grenade
        idSoundEvent* sndMPDamageBySiphon; // Offset: 0x290

        // becoming frozen in Freeze Tag
        idSoundEvent* sndMPOnFrozen; // Offset: 0x298

        // played on a frozen player who begins being thawed
        idSoundEvent* sndMPStartThawingLoop; // Offset: 0x2A0

        // played when a frozen player being thawed is interrupted from thawing
        idSoundEvent* sndMPInterruptThawing; // Offset: 0x2A8

        // played when a frozen player is successfully thawed
        idSoundEvent* sndMPOnThawed; // Offset: 0x2B0

        // i entered an enemy siphon, start the loop
        idSoundEvent* sndMPStartEnterSiphonLoop; // Offset: 0x2B8

        // stop the siphon loop
        idSoundEvent* sndMPStopEnterSiphonLoop; // Offset: 0x2C0

        // i'm inside the siphon, modify all sounds
        idSoundEvent* sndMPStartSiphonDistortion; // Offset: 0x2C8

        // left the siphon, stop the distortion
        idSoundEvent* sndMPStopSiphonDistortion; // Offset: 0x2D0

        // sound shader to play when quad damage end
        idSoundEvent* sndEndQuadDamage; // Offset: 0x2D8

        // gieger tick which is played more rapidly as we approach danger
        idSoundEvent* sndRadiationWarning; // Offset: 0x2E0

        // sound when we are actually in the radiation volume
        idSoundEvent* sndRadiationDamage; // Offset: 0x2E8

        // sound to play when the player gets to full Radiation.
        idSoundEvent* sndRadiationVO; // Offset: 0x2F0

        // extreme heat tick which is played more rapidly as we approach danger
        idSoundEvent* sndFireWarning; // Offset: 0x2F8

        // sound when we are taking damage from heat
        idSoundEvent* sndFireDamage; // Offset: 0x300

        // sound to play when the player gets to full Heat.
        idSoundEvent* sndFireVO; // Offset: 0x308

        // gieger tick which is played more rapidly as we approach danger
        idSoundEvent* sndBioWarning; // Offset: 0x310

        // sound when we are actually in the radiation volume
        idSoundEvent* sndBioDamage; // Offset: 0x318

        // sound to play when the player gets to full Radiation.
        idSoundEvent* sndBioVO; // Offset: 0x320

        // extreme heat tick which is played more rapidly as we approach danger
        idSoundEvent* sndLavaWarning; // Offset: 0x328

        // sound when we are taking damage from heat
        idSoundEvent* sndLavaDamage; // Offset: 0x330

        // sound to play when the player gets to full Heat.
        idSoundEvent* sndLavaVO; // Offset: 0x338

        // sound to play when EMInterference is present
        idSoundEvent* sndEMIPresent; // Offset: 0x340

        // sound to play when EMInterference dissipates
        idSoundEvent* sndEMIDissipate; // Offset: 0x348

        // sound when the environment suit is charging
        idSoundEvent* sndEnviromentSuitCharge; // Offset: 0x350

        // sound when the environment suit is finished charging
        idSoundEvent* sndEnviromentSuitChargeDone; // Offset: 0x358

        // Sound when player initiates a dodge.
        idSoundEvent* sndDodgeInitiate; // Offset: 0x360

        // Sound when player ends a dodge.
        idSoundEvent* sndDodgeEnd; // Offset: 0x368

        // Sound when player has valid backstab.
        idSoundEvent* sndDodgeBackstab; // Offset: 0x370

        // Sound when enemy is glory killable.
        idSoundEvent* sndHostileGloryKillable; // Offset: 0x378

        // Sound when player goes up a level
        idSoundEvent* sndLevelUp; // Offset: 0x380

        // Sound when player goes up an echelon
        idSoundEvent* sndEchelonUp; // Offset: 0x388

        // Sound when player completes a challenge
        idSoundEvent* sndChallengeComplete; // Offset: 0x390

        // Sound when player completes a challenge
        idSoundEvent* sndChallengeUpdate; // Offset: 0x398

        // Sound when player finds secret.
        idSoundEvent* sndSecretFound; // Offset: 0x3A0

        // sound when player unlocks suit slot.
        idSoundEvent* sndSuitSlotUnlock; // Offset: 0x3A8

        // sound when player purchases an upgrade
        idSoundEvent* sndDossierPurchaseUpgrade; // Offset: 0x3B0

        // sound when player begins a purchase
        idSoundEvent* sndDossierBeginPurchase; // Offset: 0x3B8

        // sound when player cancels a purchase
        idSoundEvent* sndDossierCancelPurchase; // Offset: 0x3C0

        // sound when player gains a mastery
        idSoundEvent* sndDossierGetMastery; // Offset: 0x3C8

        // sound when player gains a mod
        idSoundEvent* sndGainWeaponMod; // Offset: 0x3D0

        // Sound when player is in fast Hint level.
        idSoundEvent* secretHintLevelFast; // Offset: 0x3D8

        // Sound when player is in medium Hint level.
        idSoundEvent* secretHintLevelMedium; // Offset: 0x3E0

        // Sound when player is in slow Hint level.
        idSoundEvent* secretHintLevelSlow; // Offset: 0x3E8

        // Sound when player Gains a codex.
        idSoundEvent* sndCodexGained; // Offset: 0x3F0

        // Sound when player gains a point from combat score.
        idSoundEvent* sndCombatScoreStarComplete; // Offset: 0x3F8

        // Sound when visor appears on EOL.
        idSoundEvent* sndEOLVisor; // Offset: 0x400

        // Sound when combat score appears on EOL
        idSoundEvent* sndEOLCombatScore; // Offset: 0x408

        // Sound when challenges appear on EOL.
        idSoundEvent* sndEOLChallenges; // Offset: 0x410

        // Sound when collectibles appear on EOL.
        idSoundEvent* sndEOLCollectables; // Offset: 0x418

        // Sound when player continues to the next level.
        idSoundEvent* sndEOLContinue; // Offset: 0x420

        // Sound photomode pause unpause events
        idSoundEvent* sndPhotoModePause; // Offset: 0x428

        // Sound photomode pause unpause events
        idSoundEvent* sndPhotoModeUnpause; // Offset: 0x430

        // Sound when an equipped rune's passive ability activates
        idSoundEvent* sndRunePassiveTriggered; // Offset: 0x438

        // Sound when the player tries to use an argentum ability when it's not ready to be used.
        idSoundEvent* sndArgentumAbilityUnusable; // Offset: 0x440

        // sound to play when equipment is charged and ready
        idSoundEvent* sndEquipmentChargedAndReadyFrag; // Offset: 0x448

        // sound to play when the ice bomb is charged and ready
        idSoundEvent* sndEquipmentChargedAndReadyIceBomb; // Offset: 0x450

        // sound to play when flame belch is charged and ready
        idSoundEvent* sndEquipmentChargedAndReadyFlameBelch; // Offset: 0x458

        // sound to play when chainsaw is charged and ready
        idSoundEvent* sndChainsawChargedAndReady; // Offset: 0x460

        // sound to play when using chainsaw with not enough fuel
        idSoundEvent* sndOutOfChainsawFuel; // Offset: 0x468

        // sound to play when using crucible with not enough fuel
        idSoundEvent* sndOutOfCrucibleFuel; // Offset: 0x470

        // sound to play when demon ability is denied
        idSoundEvent* sndDemonAbilityDenied; // Offset: 0x478

        // locked on sounds
        idList < idDeclPlayerProps::lockOnSoundInfo_t , TAG_IDLIST , false > lockedOnSounds; // Offset: 0x480

    }; // Size: 0x498

    struct pain_t
    {
        // time between playing pain sound
        idTypesafeTime < int , millisecondUnique_t , 1000 > pain_delay; // Offset: 0x0

        // how much damage monster can take at any one time before playing pain animation
        int pain_threshold; // Offset: 0x4

        // if damage is equal to or over this number it is considered medium instead of small
        float pain_mediumDamageAmount; // Offset: 0x8

        // if damage is equal to or over this number it is considered heave instead of medium
        float pain_heavyDamageAmount; // Offset: 0xC

    }; // Size: 0x10

    struct damageFeedback_t
    {
        // how much to decay the fade by ever tick
        float centerIndicatorDecay; // Offset: 0x0

        // 1.0f - 0.0f this is screen ratio
        float spikeIndicatorOffset; // Offset: 0x4

        // 1.0f - 0.0f this is screen ratio
        float spikeIndicatorWidth; // Offset: 0x8

        // Angle spread between indicators (degrees)
        int spikeIndicatorSpread; // Offset: 0xC

        // how much to decay the fade by ever tick
        float spikeIndicatorDecay; // Offset: 0x10

        // 0 - 255 for start alpha
        int spikeIndicatorMinAlpha; // Offset: 0x14

        // 0 - 255 for end alpha
        int spikeIndicatorMaxAlpha; // Offset: 0x18

        // low health value needed to start full screen overlay/flash
        float healthToStartFullScreenFlash; // Offset: 0x1C

        // the value where the low health effect kicks in
        float lowDamageFXValue; // Offset: 0x20

        // the value where the really low health effect kicks in
        float reallyLowDamageFXValue; // Offset: 0x24

        // the value where the low armor effect kicks in
        float lowArmorFXValue; // Offset: 0x28

        // the value where the low radiation effect kicks in
        float lowRadShieldFXValue; // Offset: 0x2C

        // the value where the low oxygen effect kicks in
        float lowOxygenFXValue; // Offset: 0x30

        // table to use to fade in soundEnvironment as the player takes damage
        idDeclTable* worldFadeTable; // Offset: 0x38

    }; // Size: 0x40

    struct playerDamageMitigation_t
    {
        // the game difficulty with which to use these values
        gameDifficulty_t gameDifficulty; // Offset: 0x0

        // damage scale to use when lowDamageFX are active for AI damage only
        float lowDamageFXHealthMitigationScaleSP; // Offset: 0x4

        // damage scale to use when reallyLowDamageFX are active for AI damage only
        float reallyLowDamageFXHealthMitigationScaleSP; // Offset: 0x8

        // damage scale to mitigate damage coming from behind the player
        float rearwardDamageMitigation; // Offset: 0xC

        // Brink of Death data cooldown between activation of brink of death
        idTypesafeTime < int , millisecondUnique_t , 1000 > brinkOfDeathCooldown; // Offset: 0x10

        // length of time after receiving damage that player takes no damage
        idTypesafeTime < int , millisecondUnique_t , 1000 > postDamageInvulnerabilityMS; // Offset: 0x14

        // Health threshold to activate/deactivate brink of death
        float brinkOfDeathThreshold; // Offset: 0x18

        // HP to cap when activating brink of death
        float brinkOfDeathCap; // Offset: 0x1C

        // Scale to apply when microwaving the spirit
        float spiritMicrowaveMitigationScale; // Offset: 0x20

    }; // Size: 0x24

    struct lootDropRestrictionDamageDecl_t
    {
        // loot drop restriction
        lootDropRestriction_t lootDropRestrictionDamageDecls; // Offset: 0x0

        // damage decl associated with restriction
        idDeclDamage* damageDecl; // Offset: 0x8

    }; // Size: 0x10

    struct playerCheckpointDeathInventory_t
    {
        struct playerCheckpointDeathAmmoInventory_t
        {
            enum ammoType_t : int
            {
                AMMO_NONE = -1,
                AMMO_BULLET = 0,
                AMMO_SHELL = 1,
                AMMO_CELL = 2,
                AMMO_ROCKET = 3,
                AMMO_FUEL = 4,
                AMMO_BFG = 5,
                AMMO_CRUCIBLE = 6,
                AMMO_NUM = 7
            };

            // ammo type
            idDeclPlayerProps::playerCheckpointDeathInventory_t::playerCheckpointDeathAmmoInventory_t::ammoType_t ammoType; // Offset: 0x0

            // decl ammmo
            idDeclAmmo* declAmmo; // Offset: 0x8

            // ammo count value to be used when reloading from a checkpoint after death
            int ammoCount; // Offset: 0x10

        }; // Size: 0x18

        // the game difficulty with which to use these values
        gameDifficulty_t gameDifficulty; // Offset: 0x0

        // ammo list where we can tune by value or percentage to be used when reloading from a checkpoint after death
        idList < idDeclPlayerProps::playerCheckpointDeathInventory_t::playerCheckpointDeathAmmoInventory_t , TAG_IDLIST , false > ammoInventoryList; // Offset: 0x8

        // health count value to be used when reloading from a checkpoint after death
        int healthCount; // Offset: 0x20

        // armor count value to be used when reloading from a checkpoint after death
        int armorCount; // Offset: 0x24

    }; // Size: 0x28

    struct playerFalling_t
    {
        // if fall is less then this no sound is played. {{ units = m }}
        float minDistForSound; // Offset: 0x0

        // distance to play an uninterruptive small landing anim {{ units = m }}
        float smallLandingReactionDistance; // Offset: 0x4

        // distance to play an uninterruptive medium landing anim {{ units = m }}
        float mediumLandingReactionDistance; // Offset: 0x8

        // distance to play an uninterruptive large landing anim {{ units = m }}
        float largeLandingReactionDistance; // Offset: 0xC

        // distance to play an interruptive extra large landing anim {{ units = m }}
        float extraLargeLandingReactionDistance; // Offset: 0x10

        // min distance to take damage {{ units = m }}
        float minDamageDistance; // Offset: 0x14

        // max distance for linear damage. constant damage from here to fatalDistance. {{ units = m }}
        float maxDamageDistance; // Offset: 0x18

        // player dies when this distance is reached / exceeded {{ units = m }}
        float fatalDamageDistance; // Offset: 0x1C

        // how far down to look for ground to detect case of no clip geo below {{ units = m }}
        float groundTestDistance; // Offset: 0x20

        // when there is no ground detected, this is how long to let the player fall before killing him {{ units = m }}
        float noGroundKillPlayerFallDist; // Offset: 0x24

    }; // Size: 0x28

    struct controllerRumble_t
    {
        struct rumbleInfo_t
        {
            // high magnitude of rumble ( 0.0 - 1.0 )
            float highMagnitude; // Offset: 0x0

            // high duration (in MS) of rumble
            idTypesafeTime < int , millisecondUnique_t , 1000 > highDuration; // Offset: 0x4

            // low magnitude of rumble ( 0.0 - 1.0 )
            float lowMagnitude; // Offset: 0x8

            // low duration (in MS) of rumble
            idTypesafeTime < int , millisecondUnique_t , 1000 > lowDuration; // Offset: 0xC

        }; // Size: 0x10

        // rumble for single jump
        idDeclPlayerProps::controllerRumble_t::rumbleInfo_t singleJump; // Offset: 0x0

        // rumble for double jump
        idDeclPlayerProps::controllerRumble_t::rumbleInfo_t doubleJump; // Offset: 0x10

        // rumble for ledge grab
        idDeclPlayerProps::controllerRumble_t::rumbleInfo_t ledgeGrab; // Offset: 0x20

        // rumble when player lands on ground at playerFalling.maxDamageDistance (scaled down for lower falling distances)
        idDeclPlayerProps::controllerRumble_t::rumbleInfo_t landing; // Offset: 0x30

        // rumble when player lands on ground at the FATAL distance (which currently doesn't kill player, but needs to produce a distinct rumble effect)
        idDeclPlayerProps::controllerRumble_t::rumbleInfo_t landingFatal; // Offset: 0x40

        // rumble for light damage hit
        idDeclPlayerProps::controllerRumble_t::rumbleInfo_t lightDamageRumble; // Offset: 0x50

        // rumble for medium damage hit
        idDeclPlayerProps::controllerRumble_t::rumbleInfo_t mediumDamageRumble; // Offset: 0x60

        // rumble for heavy damage hit
        idDeclPlayerProps::controllerRumble_t::rumbleInfo_t heavyDamageRumble; // Offset: 0x70

        // damage aboves this value uses lightDamageRumble
        float lightDamage; // Offset: 0x80

        // damage aboves this value uses mediumDamageRumble
        float mediumDamage; // Offset: 0x84

        // damage aboves this value uses heavyDamageRumble
        float heavyDamage; // Offset: 0x88

        // the minimum magnitude of the high rumble motor ( 0.0 - 1.0 )
        float landingHighMinMagnitude; // Offset: 0x8C

        // the minimum magnitude of the low rumble motor ( 0.0 - 1.0 )
        float landingLowMinMagnitude; // Offset: 0x90

    }; // Size: 0x94

    struct xpEvents_t
    {
        // xp granted for a completed bounty
        int completedBountyXP; // Offset: 0x0

        // xp granted on gaining a weapon point from combat encounters
        int combatWeaponPointXP; // Offset: 0x4

        // xp granted on gaining a weapon point from a secret encounter
        int secretWeaponPointXP; // Offset: 0x8

        // xp granted on gaining a weapon point from slayer gate
        int slayerGateWeaponPointXP; // Offset: 0xC

        // xp granted for interacting with a mod station
        int modStationXP; // Offset: 0x10

        // xp granted for gaining a weapon mastery token
        int gainWeaponMasteryTokenXP; // Offset: 0x14

        // xp granted for purchasing weapon upgrades
        int weaponUpgradeXP; // Offset: 0x18

        // xp granted for mastering a weapon mod
        int weaponModMasteryXP; // Offset: 0x1C

        // xp granted for acquiring a rune
        int runeAcquiredXP; // Offset: 0x20

        // xp granted for gaining a rune mastery token
        int gainRuneMasteryTokenXP; // Offset: 0x24

        // xp granted for mastering a rune
        int runeMasteryXP; // Offset: 0x28

        // xp granted for interacting with an argent cell
        int argentCellXP; // Offset: 0x2C

        // xp for unlocking a hub room
        int hubRoomUnlockXP; // Offset: 0x30

        // xp for gaining an unmaykr token / slayer battery / empyrean shard
        int gainUnmaykrTokenXP; // Offset: 0x34

        // xp for picking up a crucible upgrade
        int crucibleUpgradeXP; // Offset: 0x38

        // xp for gaining the equipment launcher
        int gainEquipmentLauncherXP; // Offset: 0x3C

        // xp for the first time completing a (sp) level
        int firstLevelCompletionXP; // Offset: 0x40

        // xp for the first time completing each mission challenge
        int firstMissionChallengeXP; // Offset: 0x44

        // xp for completing a (sp) level after the first time
        int repeatLevelCompletionXP; // Offset: 0x48

        // xp for completing an invasion match
        int invasionMatchXP; // Offset: 0x4C

        // xp for completing a battle arena match
        int battleArenaMatchXP; // Offset: 0x50

    }; // Size: 0x54

    struct newXPData_t
    {
        // SP xp awarded per corruption percent for encounters in SP
        int spCorruptionPercentXP; // Offset: 0x0

        // MP xp awarded per second a player is in a MP match (not awarded until the end of the match)
        int mpPerSecondXP; // Offset: 0x4

        // xp/s limit for MP matches
        int mpPerSecondXPLimit; // Offset: 0x8

        // xp awarded for completing a MP match
        int mpMatchCompleteXP; // Offset: 0xC

        // xp awarded for winning a MP match
        int mpMatchWonXP; // Offset: 0x10

    }; // Size: 0x14

    struct idModPointMaterialData_t
    {
        // amount of points
        int pointAmount; // Offset: 0x0

        // icon
        idMaterial2* icon; // Offset: 0x8

    }; // Size: 0x10

    struct validEquipmentEntry_t
    {
        // the equipment item
        idDeclInventory* item; // Offset: 0x0

        // selectable or not - generally yes but in the case of the equipment launcher
        bool selectable; // Offset: 0x8

        // there are left and right equipment launcher items but only the left will be selectable and then both are used at once if present for convenience to be able to associate this decl with a type for use with Equipment_UpgradeHandler
        equipmentType_t type; // Offset: 0xC

    }; // Size: 0x10

    struct idArgentUpgradeData_t
    {
        // Inventory Decl to give when we upgrade Health.
        idDeclInventory* health; // Offset: 0x0

        // Inventory Decl to give when we upgrade Armor.
        idDeclInventory* armor; // Offset: 0x8

        // Inventory Decl to give when we upgrade Ammo.
        idDeclInventory* ammo; // Offset: 0x10

    }; // Size: 0x18

    struct vegaTraining_t
    {
        // suit mod obtained by beating simulation
        idDeclLootDrop* suitModToGive; // Offset: 0x0

        // name of map to load
        idStr mapName; // Offset: 0x8

        // name of checkpoint to load into
        idStr checkpointName; // Offset: 0x38

    }; // Size: 0x68

    struct vegaPerkUpgrade_t
    {
        // number of completed vega training required to get perk
        int numCompletedTraining; // Offset: 0x0

        // perk to get
        idDeclPerk* perkToGive; // Offset: 0x8

    }; // Size: 0x10

    struct vegaTrainingInfo_t
    {
        // list of sims and suitmod rewards
        idList < idDeclPlayerProps::vegaTraining_t , TAG_IDLIST , false > trainingList; // Offset: 0x0

        // list of perks to give after completing a certain number of vega training
        idList < idDeclPlayerProps::vegaPerkUpgrade_t , TAG_IDLIST , false > perkUpgrade; // Offset: 0x18

        // codex given when a suit mod is achieved
        idDeclCodexEntry* codexDecl; // Offset: 0x30

    }; // Size: 0x38

    struct playerSpeedClamping_t
    {
        // Set speed limit for ledge grabs scale value. 1.0 = default speed, higher is faster
        float ledgeGrabClampScale; // Offset: 0x0

        // Set speed limit for weapon switch scale value. 1.0 = default speed, lower is faster
        float weaponSwitchClampScale; // Offset: 0x4

        // Set base speed that is affected by upgrades, etc.
        float weaponModSwitchBaseScale; // Offset: 0x8

        // Set speed limit for mod switch scale value. 1.0 = default speed, lower is faster
        float weaponModSwitchClampScale; // Offset: 0xC

    }; // Size: 0x10

    struct playerFastTravelParameters_t
    {
        // length of time for the warp loop effect in milliseconds
        idTypesafeTime < int , millisecondUnique_t , 1000 > warpLength; // Offset: 0x0

        // length of time in milliseconds to lock controls during fast travel
        idTypesafeTime < int , millisecondUnique_t , 1000 > lockControls; // Offset: 0x4

        // Enable debug fade-to-black and fade-to-normal
        bool warpFade; // Offset: 0x8

        // Time in milliseconds to fade out to 100% black
        idTypesafeTime < int , millisecondUnique_t , 1000 > warpFadeOut; // Offset: 0xC

        // time in milliseconds to fade back to normal from 100% black
        idTypesafeTime < int , millisecondUnique_t , 1000 > warpFadeIn; // Offset: 0x10

    }; // Size: 0x14

    // ------------------------ sounds ------------------------ player sound effects
    idDeclPlayerProps::playerSounds_t sounds; // Offset: 0x90

    // who is speaking this.
    idStrId hazardVOName; // Offset: 0x528

    // ------------------------ pain ------------------------
    idDeclPlayerProps::pain_t pain; // Offset: 0x52C

    // ------------------------ pain ------------------------
    idDeclPlayerProps::damageFeedback_t damageFeedback; // Offset: 0x540

    // ------------------------ player damage mitigation ------------------------
    idDeclPlayerProps::playerDamageMitigation_t baseDamageMitigation; // Offset: 0x580

    // list of damage mitigation values
    idList < idDeclPlayerProps::playerDamageMitigation_t , TAG_IDLIST , false > damageMitigationList; // Offset: 0x5A8

    // These damage decls are exempt from mitigation based on brink of death
    idList < idDeclDamage * , TAG_IDLIST , false > brinkOfDeathExemptionList; // Offset: 0x5C0

    // damage decls associated with specific loot drop restrictions (used by DOTComponent when AnimEvent_DropFatLoot is triggered)
    idList < idDeclPlayerProps::lootDropRestrictionDamageDecl_t , TAG_IDLIST , false > lootDropRestrictionDamageDecls; // Offset: 0x5D8

    // ------------------------ player checkpoint death inventory ------------------------
    idDeclPlayerProps::playerCheckpointDeathInventory_t basePlayerCheckpointDeathInventory; // Offset: 0x5F0

    // list of checkpoint death mitigation values
    idList < idDeclPlayerProps::playerCheckpointDeathInventory_t , TAG_IDLIST , false > playerCheckpointDeathInventoryList; // Offset: 0x618

    // ------------------------ pain ------------------------
    idDeclPlayerProps::playerFalling_t playerFalling; // Offset: 0x630

    // ------------------------ rumble ------------------------
    idDeclPlayerProps::controllerRumble_t controllerRumble; // Offset: 0x658

    // ------------------------ xp events ------------------------
    idDeclPlayerProps::xpEvents_t xpEvents; // Offset: 0x6EC

    // ------------------------ New XP Data ------------------------
    idDeclPlayerProps::newXPData_t newXPData; // Offset: 0x740

    // ------------------------ Misc ------------------------ inventory decl for revive item attachment (co-op)
    idDeclInventory* reviveItemDecl; // Offset: 0x758

    // background icon for coop scoring
    idMaterial2* coopMultiplierBG; // Offset: 0x760

    // foreground icon for coop scoring
    idMaterial2* coopMultiplierIcon; // Offset: 0x768

    // Material to use when applying a drop shadow to the player
    idMaterial2* dropShadow; // Offset: 0x770

    // default slow motion kill camera trigger
    idDeclCameraTrigger* defaultKillCameraTrigger; // Offset: 0x778

    // item needed to open up challenges
    idDeclInventory* challengeGateDecl; // Offset: 0x780

    // switch weapon to fists when all ammo from all weapons is depleted
    bool switchToFistsWhenOutOfAllAmmo; // Offset: 0x788

    // radiation damage fx
    fxCondition_t fxRadiationDamage; // Offset: 0x78C

    // codex given when first weapon upgrade point is received
    idDeclCodexEntry* weaponUpgradePointsCodexDecl; // Offset: 0x790

    // codex given when first see a bounty.
    idDeclCodexEntry* firstBountyCodexDecl; // Offset: 0x798

    // Sound when player is in fast Hint level.
    idDeclRumble* secretHintLevelFast; // Offset: 0x7A0

    // Sound when player is in medium Hint level.
    idDeclRumble* secretHintLevelMedium; // Offset: 0x7A8

    // Sound when player is in slow Hint level.
    idDeclRumble* secretHintLevelSlow; // Offset: 0x7B0

    // How many weapon points it costs for a mastery token
    int weaponPointsToMasteryTokenExchangeRate; // Offset: 0x7B8

    // ------------------------ GUI ------------------------ Materials for player upgrade currencies
    idArray < const idMaterial2 * , 9 > currencyMaterials; // Offset: 0x7C0

    // Materials for more than one mod upgrade point sources
    idList < idDeclPlayerProps::idModPointMaterialData_t , TAG_IDLIST , false > modUpgradeIcons; // Offset: 0x808

    // cooldown time on the laucher before another item can be used
    idTypesafeTime < int , millisecondUnique_t , 1000 > equipmentCooldownTimeMS; // Offset: 0x820

    // cooldown time on the frag grenade before another can be used
    idTypesafeTime < int , millisecondUnique_t , 1000 > fragGrenadeCooldownTimeMS; // Offset: 0x824

    // launch delay for right item
    idTypesafeTime < int , millisecondUnique_t , 1000 > fragGrenadeRightLaunchDelayMS; // Offset: 0x828

    // cooldown time on the ice bomb before another can be used
    idTypesafeTime < int , millisecondUnique_t , 1000 > iceBombCooldownTimeMS; // Offset: 0x82C

    // launch delay for right item
    idTypesafeTime < int , millisecondUnique_t , 1000 > iceBombRightLaunchDelayMS; // Offset: 0x830

    // cooldown time on the flame belch before another can be used
    idTypesafeTime < int , millisecondUnique_t , 1000 > flameBelchCooldownTimeMS; // Offset: 0x834

    // launch delay for right item
    idTypesafeTime < int , millisecondUnique_t , 1000 > flameBelchRightLaunchDelayMS; // Offset: 0x838

    // list of equipment items player can pickup, cycle through, and use
    idList < idDeclPlayerProps::validEquipmentEntry_t , TAG_IDLIST , false > validEquipmentList; // Offset: 0x840

    // the cost structure to upgrade equipment, based on how many have already been upgraded (ie: 1st mod cost 1, 2nd costs 2, etc..)
    idList < int , TAG_IDLIST , false > equipmentUpgradeCost; // Offset: 0x858

    // max number of uses available without upgrades
    int equipmentInitialMaxUses; // Offset: 0x870

    // minimum time to wait before player is able to use the same equipment item again (paces multiple charges on the same equipment item)
    idTypesafeTime < int , millisecondUnique_t , 1000 > equipmentMinUseDelayMS; // Offset: 0x874

    // ------------------------ ARGENT UPGRADE ------------------------ Argent Upgrade Data.
    idDeclPlayerProps::idArgentUpgradeData_t argentUpgrades; // Offset: 0x878

    // vega training info
    idDeclPlayerProps::vegaTrainingInfo_t vegaTrainingInfo; // Offset: 0x890

    // ------------------------ Key Cards ------------------------ all potential keys
    idList < const idDeclInventory * , TAG_IDLIST , false > keyCards; // Offset: 0x8C8

    // tutorial for glory kill
    idDeclTutorialEvent* gloryKillTutorial; // Offset: 0x8E0

    // trigger this when the player finds the third weapon
    idDeclCodexEntry* thirdWeaponCodex; // Offset: 0x8E8

    // ClassicMaps material for doom 1 classic map
    idMaterial2* doom1Material; // Offset: 0x8F0

    // material for doom 2 classic map
    idMaterial2* doom2Material; // Offset: 0x8F8

    // codex entry for classic map tutorial
    idDeclCodexEntry* classicMapCodexEntry; // Offset: 0x900

    // so buildgame knows it exists!
    idDeclAbility_Dash* dashDecl; // Offset: 0x908

    // Player Speed Clamping max clamp for all speed scalars applied for haste and suit upgrades
    idDeclPlayerProps::playerSpeedClamping_t playerSpeedClamping; // Offset: 0x910

    // Fast Travel
    idDeclPlayerProps::playerFastTravelParameters_t playerFastTravelParameters; // Offset: 0x920

}; // Size: 0x938
