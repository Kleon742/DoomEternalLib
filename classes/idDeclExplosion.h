struct idDeclExplosion : idGameDeclTypeInfo
{
    struct screenShakeInfo_t
    {
        // view shake decl for this explosion
        idDeclAdvancedViewShake* screenShakeDecl; // Offset: 0x0

        // if true, apply shake only for a player that caused the explosion; if false, apply for all players
        bool detonationSourceOnly; // Offset: 0x8

    }; // Size: 0x10

    struct fireDamageInfo_t
    {
        // fx condition this radius applies to
        fxCondition_t condition; // Offset: 0x0

        // damage decl for fire
        idDeclDamage* fireDamage; // Offset: 0x8

        // radius of fire damage volume {{ units = m }}
        float radius; // Offset: 0x10

    }; // Size: 0x18

    // entitydef where all the relevant fx are contained
    idDeclEntityDef* fxEntityDef; // Offset: 0x90

    // radius damage this explosion will cause CAREFUL -- MAKE SURE PROJECTILE doesn't also have some
    idDeclDamage* explosionDamage; // Offset: 0x98

    // how intense the heat from this explosion is
    float intensity; // Offset: 0xA0

    // when burning intensity gets this high the fire manager detonates the entity
    float explosionIntensity; // Offset: 0xA4

    // radius from explosion center where fires are allowed to spawn {{ units = m }}
    float fireRadius; // Offset: 0xA8

    // how long after the explosion these fires should linger
    float fireDuration; // Offset: 0xAC

    // how long after the explosion heat should add to fire intensity
    float heatSourceDuration; // Offset: 0xB0

    // number of fires this explosion should create
    int numFires; // Offset: 0xB4

    // entitydef for fire damage trigger ( radius and damage set by code based on fireDamageInfos )
    idDeclEntityDef* fireDamageTriggerDef; // Offset: 0xB8

    // optional screen shake to apply to players when the explosion occurs
    idDeclExplosion::screenShakeInfo_t screenShakeInfo; // Offset: 0xC0

    // struct defining fire damage related to fxlist for how fire damage triggers should be set up when fx are playing
    idList < idDeclExplosion::fireDamageInfo_t , TAG_IDLIST , false > fireDamageInfos; // Offset: 0xD0

}; // Size: 0xE8
