struct idElectricBoltEmitter : idDynamicEntity
{
    // min amount of time between target resets (ms)
    idTypesafeTime < int , millisecondUnique_t , 1000 > minResetTime; // Offset: 0xCF8

    // max amount of time between target resets (ms)
    idTypesafeTime < int , millisecondUnique_t , 1000 > maxResetTime; // Offset: 0xCFC

    // won't activate until initially triggered
    bool startOff; // Offset: 0xD00

    // electric bolt decl
    idDeclElectricBolt* electricBoltSystem; // Offset: 0xD08

    // sound to play when powering down
    idSoundEvent* sndPowerDown; // Offset: 0xD10

    // sound to play when powering up
    idSoundEvent* sndPowerUp; // Offset: 0xD18

    // when no target list is specified, create a vector within this cone angle
    float maxConeAngle; // Offset: 0xD20

    // when no target list is specified, create a vector of [min,max] length {{ units = m }}
    idVec2 length; // Offset: 0xD24

    // specify a spline for the electricity to follow
    idManagedClassPtr < idSplinePath > controlPath; // Offset: 0xD30

    // if true, continuously plane bolt on control path, otherwise, one-shot when triggered
    bool loopControlPath; // Offset: 0xD50

    // time, in ms, for bolt to fully grow to cover all control nodes
    int controlPathGrowTime; // Offset: 0xD54

    // Damage control parameters what kind of damage do I do?
    idDeclDamage* damage; // Offset: 0xD58

    // Apply damage decl to player on touch
    bool damagePlayer; // Offset: 0xD60

    // APply damage decl to AI entities on touch
    bool damageAI; // Offset: 0xD61

    // Time between applying the damage to entities ( ms )
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeBetweenDamage; // Offset: 0xD64

    // list of all the target points {{ units = m }}
    idList < idVec3 , TAG_IDLIST , false > targetPoints; // Offset: 0xD68

    idElectricBolt* ebolt; // Offset: 0xD80

    // {{ ___ts = m }}
    idCurve_Spline < idVec3 >* spline; // Offset: 0xD88

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextResetTime; // Offset: 0xD90

    bool firstSerialize; // Offset: 0xD98

    idVec3 emitterPosition; // Offset: 0xD9C

    bool useRandomMinAndMaxTime; // Offset: 0xDA8

    // Damage and clip queries
    idHavokQueryId query; // Offset: 0xDB0

    int entitiesToDamage; // Offset: 0xDB8

    bool checkForDamage; // Offset: 0xDBC

    idList < idSpawnId , TAG_IDLIST , false > damagedEntities; // Offset: 0xDC0

    idList < float , TAG_IDLIST , false > damageTimers; // Offset: 0xDD8

}; // Size: 0xDF0
