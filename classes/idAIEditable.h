struct idAIEditable
{
    struct idAIAmbient
    {
        // ambient sound shader
        idSoundEvent* sndAmbient; // Offset: 0x0

        // death sound shader replace ambient sound with this on death. (different the death vo's, this is to help fade out the ambient sound);
        idSoundEvent* sndAmbientEnd; // Offset: 0x8

        // if sndDeath is NULL, fade the ambient sound to silence over this many seconds
        float ambientFadeSeconds; // Offset: 0x10

    }; // Size: 0x18

    struct deathTargetInfo_t
    {
        // damage decl to match
        idDeclDamage* damageDecl; // Offset: 0x0

        // trigger this ent on match
        idManagedClassPtr < idEntity > trigger_on_match; // Offset: 0x8

        // trigger this ent on mismatch
        idManagedClassPtr < idEntity > trigger_mismatch; // Offset: 0x28

    }; // Size: 0x48

    struct idAIDeath
    {
        // entity will not take any damage from any damage decl that ANDs with this value
        idDamageParms::damageType_t ignoreDamageType; // Offset: 0x0

        // entity will not take any deathblow damage from any damage decl that ANDs with this value
        idDamageParms::damageType_t ignoreDeathblowDamageType; // Offset: 0x4

        // entity to trigger on death
        idManagedClassPtr < idEntity > trigger; // Offset: 0x8

        // entity to trigger on death by glory kill
        idManagedClassPtr < idEntity > triggerGloryKill; // Offset: 0x28

        // entity to trigger on death by normal kill
        idManagedClassPtr < idEntity > triggerNonGloryKill; // Offset: 0x48

        // list of specific triggers to pair with killingb blow damage decl
        idList < idAIEditable::deathTargetInfo_t , TAG_AI_UNIT , false > triggerSpecific; // Offset: 0x68

        // delay burn-away fx until at least after this much time ( 0 uses default, negative implies never )
        idTypesafeTime < float , secondUnique_t , 1 > fadeOutAfterDeathDelay_Seconds; // Offset: 0x80

        // remove the entity this long after burn away fx start
        idTypesafeTime < float , secondUnique_t , 1 > removeAfterFadeOutDelay_Seconds; // Offset: 0x84

        // animation to force on death
        idAnimWebPath_Atomic deathAnim; // Offset: 0x88

        // list of death voiceovers and their associated damage type
        idList < idAIDeathSound , TAG_AI_UNIT , false > deathSounds; // Offset: 0xC8

        // decl for mapping twitch pains to alias handles
        idDeclTwitchPain* declTwitchPain; // Offset: 0xE0

        // false to disable stagger pain animations
        bool enableStaggerPain; // Offset: 0x0

        // false to disable twitch pain
        bool enableTwitchPain; // Offset: 0x0

        // if true, AI can become injured and use injured runs and idles
        bool canBecomeInjured; // Offset: 0x0

        // if true, AI will have health subtracted when damaged. If false, they will do everything associated with taking damage except lose health (and as a consequence they will not die)
        bool removeHealthWhenDamaged; // Offset: 0x0

        // true if the AI should use armor surface types on idActor::damageGroups
        bool useArmorSurfTypeOnDG; // Offset: 0x0

        // Default armor type to apply when taking armor from damage groups
        surfTypes_t defaultArmorType; // Offset: 0xEC

        // if true, AI will ragdoll on death
        bool enableRagdollOnDeath; // Offset: 0x0

        // true if AI should use death anims
        bool useDeathAnims; // Offset: 0x0

        // true if the AI will only die as a result of receiving sync damage (glory killed)
        bool onlyDieByGK; // Offset: 0x0

        // tracks whether future damage scale FX are playing
        bool futureDamageScaleFXPlaying; // Offset: 0x0

        // tracks whether future damage scale FX are playing
        bool ignoreStatusEffectDamage; // Offset: 0x0

        // scale future damage until this time is reached
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > futureDamageScaleEndTime; // Offset: 0xF8

        // scale future damage by this much
        float futureDamageScaleMultiplier; // Offset: 0x100

        // decl for explosion this AI can cause when on fire
        idDeclExplosion* explosionDecl; // Offset: 0x108

        // sound to play when an AI is killed while frozen
        idSoundEvent* frozenDeathSound; // Offset: 0x110

        // notification to show on AI death (e.g. for screecher )
        idDeclNotification* notificationDecl; // Offset: 0x118

        // scoring item
        idDeclScoringItem* scoringItem; // Offset: 0x120

        // if true, this AI can suicide to prevent progression blockers
        bool allowInvalidSuicide; // Offset: 0x128

    }; // Size: 0x130

    struct idAIMovement
    {
        // how far an AI can randomly wander from its spawn position {{ units = m }}
        float wanderRadius; // Offset: 0x0

        // wander radius for anim nodes {{ units = m }}
        float wanderRadius_animNodes; // Offset: 0x4

        // walkstate we like to be in during combat, all else being equal
        walkState_t preferredCombatWalkState; // Offset: 0x8

        // if true, can use class A traversals
        bool useTraversalClassA; // Offset: 0xC

        // if true, can use class B traversals
        bool useTraversalClassB; // Offset: 0xD

        // if true, can use class C traversals
        bool useTraversalClassC; // Offset: 0xE

        // AI hint class to use, CLASS_ALL to auto-assign
        idAICombatHint::combatHintClass_t combatHintClass; // Offset: 0x10

        // if true, the AI will touch triggers each frame
        bool touchTriggers; // Offset: 0x14

        // AI can't move, can only shoot
        bool turretMode; // Offset: 0x15

        // if true, AI will attack damageable objects in the world, that are blocking its path.
        bool attackPathBlockers; // Offset: 0x16

        // ai won't wander unless this is set to true
        bool allowWander; // Offset: 0x17

    }; // Size: 0x18

    struct idInteractions
    {
        // if true player should lower weapon on close approach
        bool playerShouldLowerWeapon; // Offset: 0x0

        // if true, the player has to exit the interact radius before an AI that just finished all their interactions will start idle tracking them
        bool playerMustLeaveBeforeIdleTracking; // Offset: 0x1

        // distance at which AI can go into interact anim if they have no interaction (0 = no interaction allowed) {{ units = m }}
        float idleTrackFriendlyDist; // Offset: 0x4

    }; // Size: 0x8

    struct idAICoverInfo
    {
        // max radius at which the AI will check for cover {{ units = m }}
        float coverRadius; // Offset: 0x0

        // max distance for cover checks {{ units = m }}
        float maxEnemyCoverDistance; // Offset: 0x4

    }; // Size: 0x8

    struct idAIMissingArmor
    {
        // damage group whose armor may or may not be there
        idAtomicString damageGroup; // Offset: 0x0

        // 0-100 % chance that armor is missing
        char missingChance; // Offset: 0x8

    }; // Size: 0x10

    struct factionAndRelation_t
    {
        // anyone in this faction ...
        idAtomicString factionName; // Offset: 0x0

        // I will have this respect vs....
        socialRespect_t overrideRespect; // Offset: 0x8

        // I will have this emotion vs ....
        socialEmotion_t overrideEmotion; // Offset: 0xC

        // for this long in seconds after spawning
        idTypesafeTime < float , secondUnique_t , 1 > durationInSeconds; // Offset: 0x10

    }; // Size: 0x18

    struct idAISpawn
    {
        // only use initial state if group was alerted
        bool onlyIfGroupAlerted; // Offset: 0x0

        // initial FSM stack to set up at spawn or show time if there is no actionScript set.
        aiStateOverride_t initialState; // Offset: 0x4

        // initial animation to play specified via animref if entranceAnim not given
        idAnimWebPath_Atomic entranceAnimPath; // Offset: 0x8

        // if true AI will return to their spawn position if they have nothing else to do
        bool returnToSpawnPos; // Offset: 0x48

        // initial target entity required for some initialState settings
        idManagedClassPtr < idEntity > initialTarget; // Offset: 0x50

        // % chances armor at damage locations are missing, should match entity damage group names
        idList < idAIEditable::idAIMissingArmor , TAG_AI_UNIT , false > chanceMissingArmor; // Offset: 0x70

        // intial role AI takes upon spawn. May be altered on next group role update.
        encounterGroupRole_t initialRole; // Offset: 0x88

        // optional portal this AI is associated with when it spawns
        idManagedClassPtr < idPortalSurface > spawnPortal; // Offset: 0x90

        // if true, initial role is locked in until unlocked by script
        bool lockInitialRole; // Offset: 0xB0

        // if true, character will be burning on spawn
        bool igniteOnSpawn; // Offset: 0xB1

        // entity def for func fx we use at spawn time, when coming in via teleportation
        idDeclEntityDef* spawnFXEntityDef; // Offset: 0xB8

        // how long to wait after we are told to show, before we actually show
        milliToGameTime_t teleportDelayMS; // Offset: 0xC0

        // if set it won't play any voice overs until it sees the player
        bool supressVoiceUntilSeenEnemy; // Offset: 0xD0

        // if set, the AI will ignore its initial target after being hit
        bool canLeaveForceMoveToOnPain; // Offset: 0xD1

        // skin Index to use for this AI's md6Mesh
        int skinIndex; // Offset: 0xD4

        // Set to randomize this AI's skin. Will ignore skinIndex
        bool randomizeSkinIndex; // Offset: 0xD8

        // need this since teleportDelayMS will be set to 0
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > snapTeleportDelay; // Offset: 0xE0

        // timers to set when spawn settings applied
        idList < nameRangePair_t , TAG_AI_UNIT , false > timers_setOnSpawn; // Offset: 0xE8

        // this ai will be gameplay critical for a second or so after spawn or spawn anim
        bool gameplayCritical; // Offset: 0x100

        // notification to show on AI spawn (e.g. for buff pods)
        idDeclNotification* notificationDecl; // Offset: 0x108

        // scoring item ( multiplier ) to add when this demon spawns, mainly for archvile
        idDeclScoringItem* scoringItem; // Offset: 0x110

        // ------------- AI Specific - placed here for LDs convenience initial number of Lost Souls that a Pain Elemental spawns with
        int painElementalNumLostSouls; // Offset: 0x118

        // force relations against these factions on spawn
        idList < idAIEditable::factionAndRelation_t , TAG_IDLIST , false > overrideFactionRelations; // Offset: 0x120

    }; // Size: 0x138

    struct idAIFacialInfo
    {
        // facial anim set this character will use when no others have been specified
        idDeclFacialAnimationSet* defaultFacialAnimSet; // Offset: 0x0

    }; // Size: 0x8

    struct idAIDemonTeamInfo
    {
        // true if lost souls can possess this guy
        bool canHostLostSouls; // Offset: 0x0

    }; // Size: 0x1

    struct idAIComponentMapData
    {
        // portal entity to use for custom gateway entry
        idManagedClassPtr < idPortalSurface > gatewayEntryPortal; // Offset: 0x0

        // portal entity to use for custom gateway exit
        idManagedClassPtr < idPortalSurface > gatewayExitPortal; // Offset: 0x20

        // portal entity for archvile flare prototyping
        idManagedClassPtr < idPortalSurface > flarePortal; // Offset: 0x40

        // info null targeting other info nulls specifying how to place flares in portal
        idManagedClassPtr < idInfo > flareCollection; // Offset: 0x60

        // info null specifiying where flare starts in world space, relative to spike models
        idManagedClassPtr < idInfo > flareStart; // Offset: 0x80

    }; // Size: 0xA0

    struct freezeParms_t
    {
        // minimum cold damage for an AI get frozen
        float damageThreshold; // Offset: 0x0

        // time in seconds an AI is frozen
        float freezeTime; // Offset: 0x4

    }; // Size: 0x8

    struct damageSourceModifier
    {
        // the source of damage we have to modify
        idDamageParms::damageSource_t damageSource; // Offset: 0x0

        // the modifier/multiplier for that specific type
        float damageModifier; // Offset: 0x8

    }; // Size: 0x10

    struct difficultySettings_t
    {
        // scale all anims by this much
        float animRateScale; // Offset: 0x0

    }; // Size: 0x4

    // editable settings related to perception
    idAIPerception perception; // Offset: 0x0

    // optionally, point to a decl
    idDeclAISensorySettings* perceptionDecl; // Offset: 0x30

    // use touch components for AI;
    bool useTouchComponent; // Offset: 0x38

    // editable settings related to ambient sounds
    idAIEditable::idAIAmbient ambient; // Offset: 0x40

    // editable settings related to death
    idAIEditable::idAIDeath death; // Offset: 0x58

    // editable settings related to movement
    idAIEditable::idAIMovement movement; // Offset: 0x188

    // world and player interactions
    idAIEditable::idInteractions interactions; // Offset: 0x1A0

    // editable settings related to cover
    idAIEditable::idAICoverInfo cover; // Offset: 0x1A8

    // editable settings related to ai spawning
    idAIEditable::idAISpawn spawnSettings; // Offset: 0x1B0

    // editable settings related to facial features
    idAIEditable::idAIFacialInfo facialInfo; // Offset: 0x2E8

    // describes behaviors for this AI
    idAIBehaviors behaviors; // Offset: 0x2F0

    // name of the encounter group this AI is in
    idStr groupName; // Offset: 0x320

    // portrait image used for when AI's health bar is needed to be shown
    idMaterial2* aiPortrait; // Offset: 0x350

    // global types the scanner bot is interested in
    idList < const idTypeInfo * , TAG_AI_UNIT , false > scannerBotInterestTypes; // Offset: 0x358

    // individual entity types the scanner bot is interested in
    idList < const idDeclEntityDef * , TAG_AI_UNIT , false > scannerBotInterestEntities; // Offset: 0x370

    // editable settings related to how demons interact with each other
    idAIEditable::idAIDemonTeamInfo demonTeamInfo; // Offset: 0x388

    // map specific data that components might need
    idAIEditable::idAIComponentMapData componentMapData; // Offset: 0x390

    // parameters for freeze mechanics
    idAIEditable::freezeParms_t freeze; // Offset: 0x430

    // the list of damage source modifiers that this ai carries
    idList < idAIEditable::damageSourceModifier , TAG_AI_UNIT , false > damageSourceModifiers; // Offset: 0x438

    // the list of damage out modifiers that this ai carries
    idList < idAIEditable::damageSourceModifier , TAG_AI_UNIT , false > damageOutModifiers; // Offset: 0x450

    // mostly for buff pod ...
    idList < idTypeInfoObjectPtr < idEntityModifier > , TAG_IDLIST , false > buffModifiers; // Offset: 0x468

    // add these values to temp memory on spawn
    idList < stringIntegerTuple_t , TAG_AI_UNIT , false > tempMemoryData; // Offset: 0x480

    // AI will start with these behavior keys allowed ( empty implies all )
    idList < idAtomicString , TAG_AI_UNIT , false > behaviorKeys_allowed; // Offset: 0x498

    // AI will start with these behavior keys disabled ( empty implies all )
    idList < idAtomicString , TAG_AI_UNIT , false > behaviorKeys_disabled; // Offset: 0x4B0

    // the list of temporary damage modifiers per decl
    idList < damageDeclModifier_t , TAG_IDLIST , false >* tempDmgDeclModList; // Offset: 0x4C8

    // how to process damage taken from other AI
    damageCategoryMask_t vsAIDamageMask; // Offset: 0x4D0

    // if true will
    bool ignoreDemonplayerDamage; // Offset: 0x4D4

    // if false, ai will not stagger ESC_JH added for snapmap
    bool staggerEnabled; // Offset: 0x4D5

    // allow this demon to be shadowable by demon cards
    bool shadowable; // Offset: 0x4D6

    // parameters for per-ai instance difficulty stuff
    idAIEditable::difficultySettings_t difficultySettings; // Offset: 0x4D8

    // toggle whether or not this AI can become empowered by the demon bounty system
    bool canBeEmpowered; // Offset: 0x4DC

}; // Size: 0x4E0
