struct idDeclAIComponent_Darklord : idDeclAIComponent
{
    struct falterLootBurst_t
    {
        // damage defs
        idDeclDamage* damageDef; // Offset: 0x0

        // Number of total drops
        int dropCount; // Offset: 0x8

    }; // Size: 0x10

    struct summonInfo_t
    {
        // string key of this info
        idAtomicString name; // Offset: 0x0

        // entitydef to spawn
        idDeclEntityDef* entityDef; // Offset: 0x8

    }; // Size: 0x10

    // -- Health / Stagger values Max points in the health meter
    float healthMeterMax; // Offset: 0x98

    // Max points in the health meter during stage 1
    float staggerMeterMax_Stage1; // Offset: 0x9C

    // Max points in the health meter during stage 2
    float staggerMeterMax_Stage2; // Offset: 0xA0

    // Max points in the health meter during stage 3
    float staggerMeterMax_Stage3; // Offset: 0xA4

    // Max points in the stagger meter
    float staggerMeterMax; // Offset: 0xA8

    // Max health pips
    int healthPipCount; // Offset: 0xAC

    // 0.0 to 1.0f scale to apply to incoming damage when the dark lord is not in falter mode.
    float nonFalterDamageScale; // Offset: 0xB0

    // Number of pips in phase 1
    int phase1PipCount; // Offset: 0xB4

    // Number of pips in phase 2
    int phase2PipCount; // Offset: 0xB8

    // Number of pips in phase 3
    int phase3PipCount; // Offset: 0xBC

    // How fast the stagger meter drains after damage cooldown (points per second)
    float staggerMeterDrainRate; // Offset: 0xC0

    // After damage is dealth, the is the cooldown period (seconds) before the meter starts to drain
    float staggerMeterCooldown; // Offset: 0xC4

    // Amount of stagger meter to drop when recovering from a stagger state
    float staggerRecoverPercent; // Offset: 0xC8

    // decl for loot when health is depleated
    idDeclLootDropComponent* healthDepleted_LootDropComp; // Offset: 0xD0

    // decl for loot when blooodpunched
    idDeclLootDropComponent* bloodpunch_LootDropComp; // Offset: 0xD8

    // decl for loot faltered
    idDeclLootDropComponent* falter_LootDropComp; // Offset: 0xE0

    // decl for loot penalty
    idDeclLootDropComponent* penalty_LootDropComp; // Offset: 0xE8

    // Delay between loot drop tests for the penalty shot
    float penalty_LootCooldown; // Offset: 0xF0

    // Flag to enable the benalty loot.
    bool penalty_LootEnabled; // Offset: 0xF4

    // damages we don't want to trigger the penalty
    idDeclAIDamageDeclCollection* penalty_excludedDamages; // Offset: 0xF8

    // falter loot for tier 1 of pinata mode
    idDeclLootDropComponent* falterLootTier1; // Offset: 0x100

    // falter loot for tier 2 of pinata mode
    idDeclLootDropComponent* falterLootTier2; // Offset: 0x108

    // falter loot for tier 3 of pinata mode
    idDeclLootDropComponent* falterLootTier3; // Offset: 0x110

    // Max number of drops furing the pinata mode
    int falterLootMaxDrops; // Offset: 0x118

    // Ms cooldown before the lootdrop system will be called between falter hits.
    float lootCooldownMS; // Offset: 0x11C

    // Damage types that will produce more than one loot drop
    idList < idDeclAIComponent_Darklord::falterLootBurst_t , TAG_IDLIST , false > falterLootBurstDecls; // Offset: 0x120

    // Damage scale to apply during tier 1 of the loot drop pinata
    float tier1DmgScale; // Offset: 0x138

    // Damage scale to apply during tier 2 of the loot drop pinata
    float tier2DmgScale; // Offset: 0x13C

    // Damage scale to apply during tier 3 of the loot drop pinata
    float tier3DmgScale; // Offset: 0x140

    // How many shots until hitting tier 2
    int tier1LootShots; // Offset: 0x144

    // How many shots until hitting tier 3
    int tier2LootShots; // Offset: 0x148

    // Sound to call to with each hit in tier 1 of the falter loot drop pinata
    idSoundEvent* tier1ImpactSound; // Offset: 0x150

    // Sound to call to with each hit in tier 2 of the falter loot drop pinata
    idSoundEvent* tier2ImpactSound; // Offset: 0x158

    // Sound to call to with each hit in tier 3 of the falter loot drop pinata
    idSoundEvent* tier3ImpactSound; // Offset: 0x160

    // Sound to call when completing tier 1 of the falter loot drop pinata
    idSoundEvent* tier1CompleteSound; // Offset: 0x168

    // Sound to call when completing tier 2 of the falter loot drop pinata
    idSoundEvent* tier2CompleteSound; // Offset: 0x170

    // Sound to call when completing tier 3 of the falter loot drop pinata
    idSoundEvent* tier3CompleteSound; // Offset: 0x178

    // Sound to call to with each bloodpunch
    idSoundEvent* bloodPunchPainSound; // Offset: 0x180

    // list of damage defs that the maykr is vulnerable to
    idList < const idDeclDamage * , TAG_IDLIST , false > staggerDmgDefs; // Offset: 0x188

    // list of damage defs that are ignored during pinata mode
    idList < const idDeclDamage * , TAG_IDLIST , false > pinataIgnoreDmgDefs; // Offset: 0x1A0

    // -- Mem keys for the component to drive the FSM Mem key to tell the FSM the dark lord is in his offensive state
    idAtomicString offensiveStateKey; // Offset: 0x1B8

    // Mem key to tell the FSM the dark lord is in his defensive state
    idAtomicString defensiveStateKey; // Offset: 0x1C0

    // Mem key set when in the first phase of the battle (arena 1)
    idAtomicString phase1Key; // Offset: 0x1C8

    // Mem key set when in the second phase of the battle (arena 2)
    idAtomicString phase2Key; // Offset: 0x1D0

    // Mem key set when in the third phase of the battle (arena 3)
    idAtomicString phase3Key; // Offset: 0x1D8

    // list of potential stuff to summon
    idList < idDeclAIComponent_Darklord::summonInfo_t , TAG_IDLIST , false > summonInfos; // Offset: 0x1E0

    // -- Checkpoints teleport target for the player, going into P2
    idAtomicString phase2_playerStartEnt; // Offset: 0x1F8

    // teleport target for the darklord, going into P2
    idAtomicString phase2_darklordStartEnt; // Offset: 0x200

    // teleport target for the player, going into P2
    idAtomicString phase3_playerStartEnt; // Offset: 0x208

    // teleport target for the darklord, going into P2
    idAtomicString phase3_darklordStartEnt; // Offset: 0x210

    // Name of the entity to trigger the tutorial pop up for the stagger meter
    idAtomicString staggerMeter_tutorialTrigger; // Offset: 0x218

    // List of FX to play when going to offensive mode
    idList < fxCondition_t , TAG_IDLIST , false > offenseTransitionFXList; // Offset: 0x220

    // List of FX to play when going back to defensive mode
    idList < fxCondition_t , TAG_IDLIST , false > defenseTransitionFXList; // Offset: 0x238

    // Gore wound groups listed in order they will be removed as darklord KM is bloodpunched
    idList < idList < const idDeclGoreWound * > , TAG_IDLIST , false > goreWoundGroups; // Offset: 0x250

    // Gore wound groups that are removed during the checkpoint loads or when a new entity is spawned post-transition.
    idList < idList < const idDeclGoreWound * > , TAG_IDLIST , false > checkpointGoreWoundGroups; // Offset: 0x268

    // List of VO to play during phase 2
    idList < idAtomicString , TAG_IDLIST , false > phase2VOEnts; // Offset: 0x280

    // List of VO to play during phase 3
    idList < idAtomicString , TAG_IDLIST , false > phase3VOEnts; // Offset: 0x298

    // List of VO to play when the darklord hits the player and recovers health
    idList < idAtomicString , TAG_IDLIST , false > recoveryVOEnts; // Offset: 0x2B0

    // Period to wait after last VO line before allowing a recovery VO. All VO lines activate this cooldown.
    float recoveryVOCooldown; // Offset: 0x2C8

}; // Size: 0x2D0
