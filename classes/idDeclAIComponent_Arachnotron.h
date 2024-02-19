struct idDeclAIComponent_Arachnotron : idDeclAIComponent
{
    struct grenadeLauncherInfo_t
    {
        // time interval (seconds) to sample enemy position for flushing grenades
        idTypesafeTime < float , secondUnique_t , 1 > enemyMoveIntervalToTrigger; // Offset: 0x0

        // use flushing grenades when enemy position samples are within this radius {{ units = m }}
        float enemyMoveRadiusToTrigger; // Offset: 0x4

        // projectile entity to use when spawning grenades
        idDeclEntityDef* grenadeEntityDef; // Offset: 0x8

        // default grenade launch speed {{ units = m / s }}
        float defaultSpeed; // Offset: 0x10

        // if true, adjust speed within acceptable parms ( below )
        bool enableShortFire; // Offset: 0x14

        // range of possible launch speed if shortfire is enabled {{ units = m / s }}
        idRange < float > speedRange; // Offset: 0x18

        // range of possible target distances {{ units = m }}
        idRange < float > distRange; // Offset: 0x20

    }; // Size: 0x28

    struct electricGridInfo_t
    {
        // damage decl to use for applying electric grid damage
        idDeclDamage* gridDamage; // Offset: 0x0

        // how long (in seconds) will arachnotron wait to send next query (
        idRange < float > queryInterval; // Offset: 0x8

        // how long (in seconds) will the query be valid
        float queryLifetime; // Offset: 0x10

        // number of arachnotrons needed to activate electric grid
        int activationSize; // Offset: 0x14

        // how long (in seconds) will the grid last after activation
        float activeLifetime; // Offset: 0x18

    }; // Size: 0x20

    // parms associated with grenade launcher attack
    idDeclAIComponent_Arachnotron::grenadeLauncherInfo_t grenadeLauncherInfo; // Offset: 0x98

    // parms associated with the arachnotron electric grid attack
    idDeclAIComponent_Arachnotron::electricGridInfo_t electricGridInfo; // Offset: 0xC0

    // range of consecutive beam shots to try per each attempt (random selection)
    idRange < int > beamShotRange; // Offset: 0xE0

}; // Size: 0xE8
