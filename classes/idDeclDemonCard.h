struct idDeclDemonCard : idGameDeclTypeInfo
{
    enum demonCardLongevity_t : int
    {
        DCL_ETERNAL = 0,
        DCL_LIMITED_USE = 1,
        DCL_EPHEMERAL = 2
    };

    enum demonCardCategory_t : int
    {
        DCC_INVALID = 0,
        DCC_DEMON = 1,
        DCC_EFFECT = 2,
        DCC_QUICKUSE_1 = 3,
        DCC_QUICKUSE_2 = 4,
        DCC_QUICKUSE_3 = 5,
        DCC_QUICKUSE_4 = 6,
        DCC_QUICKUSE_5 = 7,
        DCC_QUICKUSE_6 = 8,
        DCC_INVASION = 9
    };

    enum cardSpecialConditions_t : int
    {
        DCSC_NONE = 0,
        DCSC_LAST_DEMON_ONLY = 1
    };

    enum pipAllocManagement_t : int
    {
        PAM_IMMEDIATE = 0,
        PAM_SPAWN_DEATH = 1,
        PAM_COOL_DOWN = 2,
        PAM_ENT_REMOVE = 4,
        PAM_SPAWN_DEATH_PARTIAL_BACK = 8,
        PAM_SPAWN_DEATH_PARTIAL_FRONT = 16,
        PAM_FIXED_NUMBER = 32
    };

    enum payloadCommand_t : int
    {
        PC_INVALID = -1,
        PC_SPAWN_DEMON = 0,
        PC_SPAWN_DEMON_NEAR = 1,
        PC_HEAL_DEMONS = 2,
        PC_HEAL_SELF = 3,
        PC_HEAL_TEAM = 4,
        PC_GIVE_EFFECT = 5,
        PC_GIVE_EFFECT_TO_TEAMMATES = 6,
        PC_GIVE_STAGED_EFFECT = 7,
        PC_GIVE_EFFECT_TO_OTHER = 8,
        PC_DENY_DROPS = 9,
        PC_SPAWN_ENTITY = 10,
        PC_ATTACK_ENTITY = 11,
        PC_DEFEND_STANCE = 12,
        PC_SPAWN_AS_ENTITY = 13,
        PC_SPAWN_AS_ENTITY_TARGETED = 14,
        PC_POSSESS_ENTITY = 15,
        PC_REMOVE_LOOT = 16,
        PC_RESURRECT_TEAMMATE = 17,
        PC_RESET_COOLDOWN = 18,
        PC_BECOME_GHOST = 19,
        PC_REVEAL = 20,
        PC_WARP_TO_SLAYER = 21,
        PC_SPRING_TRAP = 22
    };

    struct statusEffectOverride_t
    {
        // override status effect decl
        idDeclStatusEffect* statusEffectDecl; // Offset: 0x0

        // monster type this override applies to
        aiMonsterType_t monsterType; // Offset: 0x8

    }; // Size: 0x10

    struct stagedStatusEffect_t
    {
        // The minimum time at which this effect becomes valid
        idTypesafeTime < int , millisecondUnique_t , 1000 > minTime; // Offset: 0x0

        // The status effect to give at this stage
        idDeclStatusEffect* statEfct; // Offset: 0x8

    }; // Size: 0x10

    struct demonCardPayload_t
    {
        // the type of payload we have to execute
        idDeclDemonCard::payloadCommand_t payloadCommand; // Offset: 0x0

        // the def of demon to spawn
        idEntityDefRef demonSpawn; // Offset: 0x8

        // the type of demon to spawn
        aiMonsterType_t demonSpawnType; // Offset: 0x10

        // the life span of the demon we are spawning -1==infinite
        idTypesafeTime < int , millisecondUnique_t , 1000 > demonSpawnMs; // Offset: 0x18

        // the type of entity to spawn
        idEntityDefRef entitySpawn; // Offset: 0x20

        // the life span of the entity we are spawning -1==infinite
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > entitySpawnMs; // Offset: 0x28

        // restrict spawned entities to over the nav mesh only
        bool entitySpawnNavOnly; // Offset: 0x50

        // Will use the summoner's origin as the spawn position
        bool entitySpawnUseSummonerPos; // Offset: 0x51

        // status effect to give the player when deny drops is active
        idDeclStatusEffect* denyDropStatEfct; // Offset: 0x58

        // the length of time for which to deny drops to the player
        idTypesafeTime < int , millisecondUnique_t , 1000 > denyDropMs; // Offset: 0x60

        // the length of time to attack a focused enemy -1==infinite
        int attackEntityMs; // Offset: 0x64

        // the number of demons to spawn
        int numDemonPawns; // Offset: 0x68

        // if spawning more than one demon, pad out spawn timing by this much (in MS)
        idTypesafeTime < int , millisecondUnique_t , 1000 > multiSpawnDelayMS; // Offset: 0x6C

        // the max number of summoned ai that can be in the world
        int maxSpawnInstances; // Offset: 0x70

        // the max distance to spawn an entity
        float maxSpawnDistance; // Offset: 0x74

        // distance in front of character to spawn when using PC_SPAWN_DEMON_NEAR
        float spawnNearDistance; // Offset: 0x78

        // the maximum nav mesh distance where we can spawn a demon from the view pos {{ units = m }}
        float maxSpwnAiNavMeshDist; // Offset: 0x7C

        // the maximum nav mesh distance vertically where we can spawn a demon from the view pos {{ units = m }}
        float maxSpwnAiNavMeshVerticalDist; // Offset: 0x80

        // the radius allowed to spawn the demons {{ units = m }}
        float maxSpawnRadius; // Offset: 0x84

        // the heal amount to be given out
        idBranchedOptionValue < declInputBranch_t , float > healAmount; // Offset: 0x88

        // treat the heal amount as a percent of max health (0.0-1.0)
        bool healAmountIsPercent; // Offset: 0xB0

        // the length of time the heal takes
        idTypesafeTime < int , millisecondUnique_t , 1000 > healTime; // Offset: 0xB4

        // the distance/radius to heal around for healing demons {{ units = m }}
        float maxHealDistance; // Offset: 0xB8

        // the distance/radius to defend around
        float maxDefendDist; // Offset: 0xBC

        // the degrees to clamp the view to when culling out ai to set to defend [ 0 - 90 ]
        float maxDefendViewDeg; // Offset: 0xC0

        // max distance away can give status effect from
        float maxGiveEffectDistance; // Offset: 0xC4

        // highlight decl to use for targeting
        idDeclHighlight* giveEffectTargetHighlight; // Offset: 0xC8

        // if true we will divide m_healAmount by the number of demons within our radius
        bool healDivideAmt; // Offset: 0xD0

        // if true only heal demon players not AI (for payloadCommand == PC_HEAL_DEMONS)
        bool healPlyrsOnly; // Offset: 0xD1

        // if true only heal the demon I am looking at on my cross hairs
        bool healSelected; // Offset: 0xD2

        // the status effect to give to the user of the card
        idDeclStatusEffect* giveStatEfct; // Offset: 0xD8

        // duration of giveStatEfct (zero means infinite)
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > statusEffectTimeMS; // Offset: 0xE0

        // override status effects
        idList < idDeclDemonCard::statusEffectOverride_t , TAG_IDLIST , false > statEfctOverrides; // Offset: 0x108

        // a list of status effects to give based on the time since the last use of this card
        idList < idDeclDemonCard::stagedStatusEffect_t , TAG_IDLIST , false > giveStagedStatEfct; // Offset: 0x120

        // give status effect to other can work on AI
        bool giveEffectToAI; // Offset: 0x138

        // give status effect to other can work on demon players
        bool giveEffectToDP; // Offset: 0x139

        // if true the defend stance will get applied to demons in view only
        bool defendStncInView; // Offset: 0x13A

        // the places where to put the entity spawns if we have more than 1 demon to spawn
        idList < idVec3 , TAG_IDLIST , false > demonOffsets; // Offset: 0x140

        // How much vertical offset to apply to the Demon Spawn
        float demonVerticalOffset; // Offset: 0x158

        // the type of entity to spawn as (player will become this entity - prop hunt mode)
        idEntityDefRef entitySpawnAs; // Offset: 0x160

        // the list of loot types to remove when activating remove loot command
        idList < lootType_t , TAG_IDLIST , false > removeLootTypes; // Offset: 0x168

        // reset cooldown card will target other card in this category
        idDeclDemonCard::demonCardCategory_t resetCooldownCategory; // Offset: 0x180

        // healing feedback data
        healingFeedbackComponentData_t healingFeedback; // Offset: 0x188

    }; // Size: 0x198

    struct demonCardLevel_t
    {
        // A cooldown to apply at the start of a round
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > roundStartCoolDown; // Offset: 0x0

        // the cooldown to apply after use
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > useCoolDown; // Offset: 0x28

        // The amount of additional cooldown to add on after each use
        idTypesafeTime < int , millisecondUnique_t , 1000 > useCoolDownIncrement; // Offset: 0x50

        // A cooldown to apply after the entity or AI has been killed or despawned
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > removedCoolDown; // Offset: 0x58

        // the commands to execute when using this card
        idList < idDeclDemonCard::demonCardPayload_t , TAG_IDLIST , false > payloadCmds; // Offset: 0x80

    }; // Size: 0x98

    struct cardUIinfo_t
    {
        // ability icon for each upgraded level.
        idList < const idMaterial2 * , TAG_IDLIST , false > iconLevels; // Offset: 0x0

        // class icons of the ability.
        idList < const idMaterial2 * , TAG_IDLIST , false > archTypeIcons; // Offset: 0x18

        // color the ability slot will use on the hud
        demonHudColor_t cardColor; // Offset: 0x30

        // use extra-fancy glow effect (e.g. for power upgrades)
        bool useFancyGlowEffect; // Offset: 0x34

    }; // Size: 0x38

    // the card is turned on automatically
    bool autoActivate; // Offset: 0x90

    // the category for this demon card
    idDeclDemonCard::demonCardCategory_t category; // Offset: 0x94

    // the current longevity dictated for this card
    idDeclDemonCard::demonCardLongevity_t longevity; // Offset: 0x98

    // the pip cost to play this card. 0 == infinite Uses, -1 == invalid cost/not useable
    int baseResourceCost; // Offset: 0x9C

    // the flags to manage the pip consumption
    idDeclDemonCard::pipAllocManagement_t pipAllocMgntFlags; // Offset: 0xA0

    // the number of times a card might be used in a match. -1 == infinite
    int maxMatchUses; // Offset: 0xA4

    // the number of times a card might be used in a round. -1 == infinite
    int maxRoundUses; // Offset: 0xA8

    // the special description field
    idStrId cardFlavorText; // Offset: 0xAC

    // the special ability info
    idStrId cardSpecialAbilityInfo; // Offset: 0xB0

    // special conditions for the cards
    idDeclDemonCard::cardSpecialConditions_t specialConditions; // Offset: 0xB4

    // if non-zero, activating this card requires holding button for this time
    idTypesafeTime < int , millisecondUnique_t , 1000 > requiredButtonHoldMS; // Offset: 0xB8

    // if non-zero, activating this card will queue it to be used in x milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > requiredQueueTimeMS; // Offset: 0xBC

    // the list of in-match progression for this card
    idList < idDeclDemonCard::demonCardLevel_t , TAG_IDLIST , false > cardLevels; // Offset: 0xC0

    // the list of archtype upgrade paths for this card
    idList < demonCardUpgradePath_t , TAG_IDLIST , false > upgradeArchetypePaths; // Offset: 0xD8

    // the initial archetype tier this card starts with
    demonCardArchetypeTier_t initialArchetypeTier; // Offset: 0xF0

    // human-readable name for the item (player may see this)
    idStrId displayName; // Offset: 0xF4

    // the human-readable name that is used when the 'Tactical Advantage' hack mod is active
    idStrId shortDisplayName; // Offset: 0xF8

    // description of item
    idStrId description; // Offset: 0xFC

    // sound to play on use
    idSoundEvent* useSound; // Offset: 0x100

    // if true, demon invader being on cooldown will block use of this card
    bool honorGlobalCooldown; // Offset: 0x108

    // if true, triggers global cooldown system
    bool triggerGlobalCooldown; // Offset: 0x109

    // UI Information on the card.
    idDeclDemonCard::cardUIinfo_t uiInfo; // Offset: 0x110

    // Only for quick use abilities, if false will not show the ability on the HUD
    bool showOnHUD; // Offset: 0x148

    // Only for core demon wheel abilities, if false will not show the ability on the demon wheel
    bool showOnWheel; // Offset: 0x149

    // The "use" buttons is not a valid input for this card (used for tutorial case)
    bool ignoreUseButton; // Offset: 0x14A

    // For certain players that have invisibility this card doesn't break it
    bool keepInvisibilityOnUse; // Offset: 0x14B

    // Demon player mode that card can be used
    demonCardPlayerModeBits_t usableDemonPlayerModes; // Offset: 0x14C

}; // Size: 0x150
