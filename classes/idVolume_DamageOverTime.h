struct idVolume_DamageOverTime : idVolume
{
    enum volumeAffectsFilter_t : int
    {
        AFFECTS_EVERYONE = 0,
        AFFECTS_DEMON_PLAYERS = 1,
        AFFECTS_HUMAN_PLAYERS = 2,
        AFFECTS_ONLY_CACODEMON = 3
    };

    struct damagedEntityInfo_t
    {
        idManagedClassPtr < idEntity > entityBeingDamaged; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextDamageTime; // Offset: 0x20

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageInterval; // Offset: 0x28

    }; // Size: 0x30

    // the current list of entities that are receiving damage
    idList < idVolume_DamageOverTime::damagedEntityInfo_t , TAG_IDLIST , false > damagedEntityList; // Offset: 0xC20

    // damage decl that is applied on each tick
    idDeclDamage* damageDecl; // Offset: 0xC38

    // who does this volume affect?
    idVolume_DamageOverTime::volumeAffectsFilter_t whoAffected; // Offset: 0xC40

    // delay in MS before damage starts per entity
    idTypesafeTime < int , millisecondUnique_t , 1000 > damageStartDelay; // Offset: 0xC44

    // how many MS to wait between attacks (actually game ticks not MS)
    idTypesafeTime < int , millisecondUnique_t , 1000 > damageInterval; // Offset: 0xC48

    // it scale the damage from the damage decl
    float damageScale; // Offset: 0xC4C

    // how fast time between attacks changes
    idTypesafeTime < int , millisecondUnique_t , 1000 > damageIntervalDelta; // Offset: 0xC50

    // min MS to wait between attacks
    idTypesafeTime < int , millisecondUnique_t , 1000 > damageIntervalMin; // Offset: 0xC54

    // max MS to wait between attacks
    idTypesafeTime < int , millisecondUnique_t , 1000 > damageIntervalMax; // Offset: 0xC58

    // lifetime of this entity in MS, or 0 for unlimited
    idTypesafeTime < int , millisecondUnique_t , 1000 > lifetimeMS; // Offset: 0xC5C

    // how long does the damage volume last
    idTypesafeTime < int , millisecondUnique_t , 1000 > removeAfterMS; // Offset: 0xC60

    // do we allow this volume to continue to think when empty?
    bool thinkWhenEmpty; // Offset: 0xC64

    // an fx decl to use
    idDeclFX* fxDecl; // Offset: 0xC68

    // if true, will check and damage only one set of entities
    bool onlyDamageOnce; // Offset: 0xC70

    // enables AI being damaged over time (so, damage even when they're no longer in volume)
    bool aiDamageOverTime; // Offset: 0xC71

    // damage decl used for 'aiDamageOverTime' (if NULL, uses volume's damageDecl)
    idDeclDamage* aiDotDamageDecl; // Offset: 0xC78

    // damage point manager to create for this damage
    idDeclEntityDef* envDamagePointManagerDef; // Offset: 0xC80

    // damage point to create for this damage
    idDeclEntityDef* envDamagePointDef; // Offset: 0xC88

    idManagedClassPtr < idEntity > envDamagePointManager; // Offset: 0xC90

    idManagedClassPtr < idEntity > envDamagePoint; // Offset: 0xCB0

    // who is the attacking player who owns this damage
    idManagedClassPtr < idEntity > attacker; // Offset: 0xCD0

    idColor serializedColor; // Offset: 0xCF0

    bool firstThink; // Offset: 0xD00

    // Does this volume expire over time? If so, don't shut off think when empty.
    bool expires; // Offset: 0xD01

    // used to serilize hazard fx's
    bool hasFxDecl; // Offset: 0xD02

    // if true, hazard will be on by default
    bool startOn; // Offset: 0xD03

    // if true will notify players that they are out of bounds
    bool isOutOfBoundsDamage; // Offset: 0xD04

    // local sound to play when player enters the volume
    idSoundEvent* localOnEnterSound; // Offset: 0xD08

    // local sound to play when player exits the volume
    idSoundEvent* localOnExitSound; // Offset: 0xD10

}; // Size: 0xD18
