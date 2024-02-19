struct demonCardUpgradeOptionPayload_t
{
    struct durationData_t
    {
        // the duration of the card to increment by
        idTypesafeTime < int , millisecondUnique_t , 1000 > durationInc; // Offset: 0x0

    }; // Size: 0x4

    struct frequencyData_t
    {
        // the cooldown decrease to increase the use frequency
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownDec; // Offset: 0x0

    }; // Size: 0x4

    struct damageLevelModData_t
    {
        // the damage to modify as a multiplier[ 0.0 - 2.0 ]
        float damageLevelPct; // Offset: 0x0

    }; // Size: 0x4

    struct damageFreqModData_t
    {
        // the damage to modify as a multiplier[ 0.0 - 2.0 ]
        float damageFrequencyPct; // Offset: 0x0

    }; // Size: 0x4

    struct healRadiusData_t
    {
        // the amount to heal
        float healAmount; // Offset: 0x0

        // the pct to heal relative to the base card heal as a multiplier[ 0.0 - 2.0 ]
        float healAmountPct; // Offset: 0x4

        // the distance they must be at to be healed [-1.0 == infinite]
        float radius; // Offset: 0x8

        // the time it takes to heal, [ 0 == immediate ]
        idTypesafeTime < int , millisecondUnique_t , 1000 > healTimeMs; // Offset: 0xC

    }; // Size: 0x10

    struct healData_t
    {
        // the amount to heal
        float healAmount; // Offset: 0x0

        // the pct to heal relative to the base card heal as a multiplier[ 0.0 - 2.0 ]
        float healAmountPct; // Offset: 0x4

        // the time it takes to heal, [ 0 == immediate ]
        idTypesafeTime < int , millisecondUnique_t , 1000 > healTimeMs; // Offset: 0x8

    }; // Size: 0xC

    struct hasteData_t
    {
        // the speed modifier/multiplier to use
        float speedModifier; // Offset: 0x0

        // the distance they must be at [-1.0 == infinite]
        float radius; // Offset: 0x4

        // the time we have haste on for ai
        idTypesafeTime < int , millisecondUnique_t , 1000 > hasteTimeMs; // Offset: 0x8

    }; // Size: 0xC

    struct dropsToResource_t
    {
        // the resource to be given to the player
        idDeclInventory* resourceItem; // Offset: 0x0

    }; // Size: 0x8

    struct dropsToTeamMeter_t
    {
        // the team meter value to give out
        float teamMeterValue; // Offset: 0x0

    }; // Size: 0x4

    struct extraSpawnData_t
    {
        // the number of extra Ai to spawn
        int numExtraAiSpawns; // Offset: 0x0

    }; // Size: 0x4

    struct statusEffectData_t
    {
        // the power up/ status effect to give
        idDeclStatusEffect* statusEffDecl; // Offset: 0x0

    }; // Size: 0x8

    struct entitySpawnData_t
    {
        // the type of entity to spawn
        idEntityDefRef entitySpawn; // Offset: 0x0

    }; // Size: 0x8

    struct damageSourceData_t
    {
        // the source of damage we have to modify
        idDamageParms::damageSource_t damageSource; // Offset: 0x0

        // the modifier for that specific type
        float damageModifier; // Offset: 0x8

    }; // Size: 0x10

    struct vulnerabilityData_t
    {
        // the vulnerability modifier on player
        float vulnerabilityMod; // Offset: 0x0

        // the length of time players are vulnerable
        idTypesafeTime < int , millisecondUnique_t , 1000 > vulnerabilityModMs; // Offset: 0x4

    }; // Size: 0x8

    struct staggerModData_t
    {
        // stagger multiplier
        float staggerMult; // Offset: 0x0

    }; // Size: 0x4

    // the name of this upgrade level
    idStrId name; // Offset: 0x0

    // the description of this upgrade level
    idStrId description; // Offset: 0x4

    // item icon as displayed in the inventory screen
    idMaterial2* icon; // Offset: 0x8

    // used for accent on icons ( multiple layers )
    idMaterial2* iconDetails; // Offset: 0x10

    // upgrade command
    demonCardArchetypeCommand_t archetypeCommand; // Offset: 0x18

    // the adjustment to the pip cost to play this card
    int resourceCost; // Offset: 0x1C

    // the duration of the card to increment by
    demonCardUpgradeOptionPayload_t::durationData_t durationData; // Offset: 0x20

    // the cooldown value to decrease in order to increase the use frequency
    demonCardUpgradeOptionPayload_t::frequencyData_t frequencyData; // Offset: 0x24

    // the damage to modify as a multiplier[ 0.0 - 2.0 ]
    demonCardUpgradeOptionPayload_t::damageLevelModData_t damageLevelModData; // Offset: 0x28

    // the damage frequency to modify as a multiplier[ 0.0 - 2.0 ]
    demonCardUpgradeOptionPayload_t::damageFreqModData_t damageFreqModData; // Offset: 0x2C

    // data to heal nearby summons
    demonCardUpgradeOptionPayload_t::healRadiusData_t healNearbySummons; // Offset: 0x30

    // data to heal nearby teammates
    demonCardUpgradeOptionPayload_t::healRadiusData_t healNearbyTeammates; // Offset: 0x40

    // data to heal ourselves
    demonCardUpgradeOptionPayload_t::healData_t healSelfData; // Offset: 0x50

    // data to convert drops to heal amount
    demonCardUpgradeOptionPayload_t::healData_t dropsConvertHealData; // Offset: 0x5C

    // data to convert damage done to heal summoner
    demonCardUpgradeOptionPayload_t::healData_t damageDoneHealSummoner; // Offset: 0x68

    // data to convert damage done to heal summoner
    demonCardUpgradeOptionPayload_t::healData_t soldierMeleeHealSummoner; // Offset: 0x74

    // data to convert damage done to heal summoner
    demonCardUpgradeOptionPayload_t::healData_t soldierGunHealSummoner; // Offset: 0x80

    // data to convert ai death into ai healing
    demonCardUpgradeOptionPayload_t::healRadiusData_t aiHealOnDeathData; // Offset: 0x8C

    // data to convert to heal summoner on ai death
    demonCardUpgradeOptionPayload_t::healData_t summonerHealOnDeathData; // Offset: 0x9C

    // data to haste nearby summons
    demonCardUpgradeOptionPayload_t::hasteData_t hasteSummonsData; // Offset: 0xA8

    // data for converting denied drops to resource
    demonCardUpgradeOptionPayload_t::dropsToResource_t dropsToResource; // Offset: 0xB8

    // data for converting denied drops to team meter value
    demonCardUpgradeOptionPayload_t::dropsToTeamMeter_t dropsToTeamMeter; // Offset: 0xC0

    // data for adding additional spawns
    demonCardUpgradeOptionPayload_t::extraSpawnData_t extraSpawnData; // Offset: 0xC4

    // data for converting denied drops to power-up
    demonCardUpgradeOptionPayload_t::statusEffectData_t deniedDropsToPowerUp; // Offset: 0xC8

    // data for powering up teammates
    demonCardUpgradeOptionPayload_t::statusEffectData_t powerUpTeammates; // Offset: 0xD0

    // data for converting soldier melee to status effect
    demonCardUpgradeOptionPayload_t::statusEffectData_t soldierMeleeToStatusEffect; // Offset: 0xD8

    // data for converting soldier gun damage to status effect
    demonCardUpgradeOptionPayload_t::statusEffectData_t soldierGunToStatusEffect; // Offset: 0xE0

    // data for converting soldier melee to status effect
    demonCardUpgradeOptionPayload_t::statusEffectData_t hellKnightMeleeToStatusEffect; // Offset: 0xE8

    // data for spawning an entity on an ai death
    demonCardUpgradeOptionPayload_t::entitySpawnData_t deathSpawnsEntity; // Offset: 0xF0

    // data to upgrade the resiliance to damage sources
    demonCardUpgradeOptionPayload_t::damageSourceData_t resilienceToDamageSources; // Offset: 0xF8

    // data to upgrade the damage out from specific sources
    demonCardUpgradeOptionPayload_t::damageSourceData_t upgradeDamageForSources; // Offset: 0x108

    // data to modify the vulnerability of the player
    demonCardUpgradeOptionPayload_t::vulnerabilityData_t playerVulOnBlockedDrops; // Offset: 0x118

    // data to modify the vulnerability of the player
    demonCardUpgradeOptionPayload_t::vulnerabilityData_t playerVulOnAiDeath; // Offset: 0x120

    // data to modify the stagger duration
    demonCardUpgradeOptionPayload_t::staggerModData_t staggerModData; // Offset: 0x128

}; // Size: 0x130
