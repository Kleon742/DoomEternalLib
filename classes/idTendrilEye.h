struct idTendrilEye : idAnimatedEntity
{
    struct idDamageMititgationInfo_t
    {
        // Damage Mitigation name
        idAtomicString name; // Offset: 0x0

        // Damage Decl collection
        idDeclAIDamageDeclCollection* damageCollection; // Offset: 0x8

        // Scale of damage mitigated
        float damageScale; // Offset: 0x10

    }; // Size: 0x18

    struct idDamageFeedbackEntry_t
    {
        // Damage Decl collection
        idDeclAIDamageDeclCollection* damageCollection; // Offset: 0x0

        // Condition to raise
        fxCondition_t fxCondition; // Offset: 0x8

    }; // Size: 0x10

    // Scale for all components
    float scale; // Offset: 0x1B48

    // Distance to trace to the ground for placement
    float traceDistance; // Offset: 0x1B4C

    // how long (in ms) between each damage tick
    idTypesafeTime < int , millisecondUnique_t , 1000 > damageTickMS; // Offset: 0x1B50

    // DoT in the beam
    idDeclDamage* arcDamage; // Offset: 0x1B58

    // fx
    idDeclFX* arcFXDecl; // Offset: 0x1B60

    // Min time between arcs
    float minArcTime; // Offset: 0x1B68

    // Max time between arcs
    float maxArcTime; // Offset: 0x1B6C

    // Inner radius will use min arc time
    float innerArcRadius; // Offset: 0x1B70

    // Outer radius will use max arc time
    float outerArcRadius; // Offset: 0x1B74

    // Health to disable the eye
    float health; // Offset: 0x1B78

    // core eye FX
    idDeclFX* tendrilEyeFxDecl; // Offset: 0x1B80

    // slayer will be targeted unless this is set
    idManagedClassPtr < idEntity > targetOverride; // Offset: 0x1B88

    // Fraction of the full move for lerp
    float moveCoefficient; // Offset: 0x1BA8

    // Is this the initial move?
    bool inInitialMove; // Offset: 0x1BAC

    // Is this the initial move?
    bool inSecondMove; // Offset: 0x1BAD

    idVec3 groundPos; // Offset: 0x1BB0

    bool contactMade; // Offset: 0x1BBC

    // Position to start movement
    idVec3 startPoint; // Offset: 0x1BC0

    // Position to end movement
    idVec3 endPoint; // Offset: 0x1BCC

    // Entity the eye is moving to
    idManagedClassPtr < idEntity > targetEntity; // Offset: 0x1BD8

    // How long has it been since the last arc
    float timeSinceLastArc; // Offset: 0x1BF8

    idHavokQueryId groundQuery; // Offset: 0x1C00

    idHavokQueryId LOSQuery; // Offset: 0x1C08

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastServerTime; // Offset: 0x1C10

    // gameTime_tm_nextDamageTime; list of ribbon effects for the arc
    idList < const idDeclRibbon2 * , TAG_IDLIST , false > arcRibbonDecls; // Offset: 0x1C18

    // Ribbon list created for arcs
    idList < idRibbon2 , TAG_IDLIST , false > arcRibbons; // Offset: 0x1C30

    // Lifetime of the arc visual (seconds)
    float arcRibbonLifetime; // Offset: 0x1C48

    // Starting point for the arc FX
    idVec3 arcStartPoint; // Offset: 0x1C4C

    // End point for the arc FX
    idVec3 arcEndPoint; // Offset: 0x1C58

    // Sound that loops for the eye
    idSoundEvent* loopSound; // Offset: 0x1C68

    // Arc strike sound
    idSoundEvent* arcSound; // Offset: 0x1C70

    // Loot drop component to use after a health break
    idLootDropComponent lootDropComponent; // Offset: 0x1C78

    bool droppedLoot; // Offset: 0x1D10

    // Max health
    float maxHealth; // Offset: 0x1D14

    // tendril eye damage mitigation info
    idList < idTendrilEye::idDamageMititgationInfo_t , TAG_IDLIST , false > damageMitigationInfo; // Offset: 0x1D18

    // entity def to use to spawn ai proxies for lock on targeting
    idDeclEntityDef* aiProxyTargetEntityDef; // Offset: 0x1D30

    // entity def to use to spawn ai proxies for aim assist
    idDeclEntityDef* aiProxyAimAssistEntityDef; // Offset: 0x1D38

    // Offset of the target lock from the origin
    idVec3 targetingOffset; // Offset: 0x1D40

    // AI Proxy target for locking on
    idManagedClassPtr < idTarget_AIProxy > lockOnTargetEnt; // Offset: 0x1D50

    // AI Proxy target for locking on
    idManagedClassPtr < idTarget_AIProxy > aimAssistTargetEnt; // Offset: 0x1D70

    // manages all attachments
    idAttachmentCollection attachments; // Offset: 0x1D90

    // tendril eye damage feedback info
    idList < idTendrilEye::idDamageFeedbackEntry_t , TAG_IDLIST , false > damageFeedbackInfo; // Offset: 0x1DB0

    // emissive color at full health
    idColor maxHealthEmissiveColor; // Offset: 0x1DC8

    // emissive color at zero health
    idColor zeroHealthEmissiveColor; // Offset: 0x1DD8

    // emissive scale at full health
    float maxHealthEmissiveScale; // Offset: 0x1DE8

    // emissive scale at zero health
    float zeroHealthEmissiveScale; // Offset: 0x1DEC

}; // Size: 0x1DF0
