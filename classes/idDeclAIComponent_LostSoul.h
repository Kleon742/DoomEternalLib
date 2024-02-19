struct idDeclAIComponent_LostSoul : idDeclAIComponent
{
    struct defusedConfig_t
    {
        // being killed by any of these damages will defuse the lost soul
        idList < const idDeclDamage * , TAG_IDLIST , false > damageTypes; // Offset: 0x0

        // gore name
        idAtomicString gibGoreName; // Offset: 0x18

        // how long after being defused it will take for the lost soul to be gibbed
        idTypesafeTime < float , secondUnique_t , 1 > defusedGibDelay; // Offset: 0x20

    }; // Size: 0x28

    struct delayedExplosionConfig_t
    {
        // being killed by any of these damages will trigger a delayed explosion
        idList < const idDeclDamage * , TAG_IDLIST , false > damageTypes; // Offset: 0x0

        // maximum rotation speeds (per axis) {{ units = degrees / s }}
        idVec3 minRotationSpeeds; // Offset: 0x18

        // maximum rotation speeds (per axis) {{ units = degrees / s }}
        idVec3 maxRotationSpeeds; // Offset: 0x24

        // shoot angle
        idTypesafeNumber < float , DegreesUnique_t > shootAngle; // Offset: 0x30

        // duration of the impulse
        idTypesafeTime < float , secondUnique_t , 1 > impulseDuration; // Offset: 0x34

        // how long after the impulse before the lost soul is detonated
        idTypesafeTime < float , secondUnique_t , 1 > detonationDelayAfterImpulse; // Offset: 0x38

        // maximum speed {{ units = m / s }}
        float maxSpeed; // Offset: 0x3C

        // acceleration {{ units = m / ( s * s ) }}
        float acceleration; // Offset: 0x40

    }; // Size: 0x48

    // tag to apply impulse from during out of control death spin
    idAtomicString impulseTagName; // Offset: 0x98

    // charge destination offset {{ units = m }}
    idVec3 chargeDestinationOffset; // Offset: 0xA0

    // damage to be applied when immolating
    idDeclDamage* suicideDecl; // Offset: 0xB0

    // minimum distance to the enemy to allow a charge {{ units = m }}
    float minDistanceToCharge; // Offset: 0xB8

    // configuration values for a defused lost soul
    idDeclAIComponent_LostSoul::defusedConfig_t defusedConfig; // Offset: 0xC0

    // configuration values for the delayed explosion
    idDeclAIComponent_LostSoul::delayedExplosionConfig_t delayedExplosionConfig; // Offset: 0xE8

    // being hit by this damage kills lost soul
    idList < const idDeclDamage * , TAG_IDLIST , false > damageKillTypes; // Offset: 0x130

}; // Size: 0x148
