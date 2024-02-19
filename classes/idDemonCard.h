struct idDemonCard : idEventReceiver
{
    enum cooldownSource_t : int
    {
        CS_INVALID = 0,
        CS_USE = 1,
        CS_ROUND_START = 2,
        CS_FORCE_REMOVED = 3,
        CS_MAX = 4
    };

    struct entSpawnData_t
    {
        idTypesafeTime < int , millisecondUnique_t , 1000 > timeStamp; // Offset: 0x0

        // the demon spawns currently active
        idList < idSpawnId , TAG_IDLIST , false > entSpawnIds; // Offset: 0x8

        int remainingCost; // Offset: 0x20

        // the partial remaining cost we have accumulated
        float partialRemCost; // Offset: 0x24

    }; // Size: 0x28

    struct demonHealData_t
    {
        float healAmount; // Offset: 0x0

        idSpawnId demonSpawnId; // Offset: 0x4

    }; // Size: 0x8

    struct delayedSpawnDemon_t
    {
        idDeclDemonCard::demonCardPayload_t* payload; // Offset: 0x0

        idDemonCard::entSpawnData_t* spawnData; // Offset: 0x8

        int index; // Offset: 0x10

        bool shadowable; // Offset: 0x14

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > spawnTime; // Offset: 0x18

    }; // Size: 0x20

    idList < idDemonCard::delayedSpawnDemon_t , TAG_IDLIST , false > pendingDemonSpawns; // Offset: 0x38

    // can this card be used?
    bool activated; // Offset: 0x50

    // the index of this card into the demon deck
    int deckIndex; // Offset: 0x54

    // the remaining match uses we have in this card -1 == infinite
    int remainingMatchUses; // Offset: 0x58

    // the remaining round uses we have in this card -1 == infinite
    int remainingRoundUses; // Offset: 0x5C

    // set when the cooldown should not
    bool roundStartCooldownLocked; // Offset: 0x60

    // the number of times the card has been used this round
    int roundUseCount; // Offset: 0x64

    // the pips in reserve to cash out later
    int remainingCost; // Offset: 0x68

    // the level of this card (0 initially, 1, 2 etc. when upgraded during play)
    int level; // Offset: 0x6C

    // the expiration date of this card
    tm expirationDate; // Offset: 0x70

    // the mannor in which this card was placed on cooldown
    idDemonCard::cooldownSource_t validUseCooldownSource; // Offset: 0x94

    // current use mark in gametime
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > validUseMarkGt; // Offset: 0x98

    // current use mark in gametime
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > globalUseMarkGt; // Offset: 0xA0

    // duration of the payload
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > payLoadDuration; // Offset: 0xA8

    // when was the payload Activated.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > payLoadActivationGt; // Offset: 0xB0

    // last time local user sent a message trying to use this card
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastMessageTime; // Offset: 0xB8

    // local user just tried and failed to use this card (i.e. it was unavailable/on cooldown)
    bool useJustFailed; // Offset: 0xC0

    // time to activate card, if holding button required
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > buttonHoldEnd; // Offset: 0xC8

    // time to activate card, if queued to use
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > queuedUseTimeEnd; // Offset: 0xD0

    // current demon spawn data to keep track of
    idList < idDemonCard::entSpawnData_t , TAG_IDLIST , false > demonSpawnData; // Offset: 0xD8

    // list of demons to heal
    idList < idDemonCard::demonHealData_t , TAG_IDLIST , false > demonHealData; // Offset: 0xF0

    // current spawn data (not demon) for the entities we created
    idList < idDemonCard::entSpawnData_t , TAG_IDLIST , false > entSpawnData; // Offset: 0x108

    // trace results for view
    trace_t traceResult; // Offset: 0x120

    // position to spawn entity in {{ units = m }}
    idVec3 entSpawnPos; // Offset: 0x1A0

    // surface normal to spawn at (if targeted)
    idVec3 entSpawnNormal; // Offset: 0x1AC

    // the opponent in view where we need to attack against
    idPlayer* swarmOpponent; // Offset: 0x1B8

    // the list of Ai that need to be set to defend
    idList < idAI2 * , TAG_IDLIST , false > defendingAi; // Offset: 0x1C0

    // the current archetype selected for this type
    demonCardArchetype_t curArchetype; // Offset: 0x1D8

    // the current archetype tier for this card
    demonCardArchetypeTier_t curArchetypeTier; // Offset: 0x1DC

    // the map to the selected upgrades for this card
    archetypeUpgradeMap_t curUpgradeSelMap; // Offset: 0x1E0

    // the current resource cost we have
    int curResourceCost; // Offset: 0x1E8

    // the resource cost per spawned entity
    float curCostPerSpawn; // Offset: 0x1EC

    // the owner of this card
    idManagedClassPtr < idEntity > owner; // Offset: 0x1F0

    // my decl
    idDeclDemonCard* decl; // Offset: 0x210

    // the last frame this card dealt damage
    int lastFrameDamageDealt; // Offset: 0x218

    // the last frame this card took damage
    int lastFrameDamageTaken; // Offset: 0x21C

    // Health of the AI.
    float healthOfAI; // Offset: 0x220

    // potential recipient of status effect
    idManagedClassPtr < idActor > giveEffectTarget; // Offset: 0x228

}; // Size: 0x248
