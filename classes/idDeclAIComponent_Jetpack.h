struct idDeclAIComponent_Jetpack : idDeclAIComponent
{
    // tag to apply impulse from during out of control death spin
    idAtomicString impulseTagName; // Offset: 0x98

    // if true uses death impulse direction
    bool useDeathImpulseDirection; // Offset: 0xA0

    // if true, only use 2D component of initial death impulse
    bool use2DDeathImpulse; // Offset: 0xA1

    // if true it sets damaged by default
    bool damagedOnDeath; // Offset: 0xA2

    // if true it sets malfunctioning by default
    bool malfunctioningOnDeath; // Offset: 0xA3

    // if true, goes in the opposite direction to the attacker
    bool getAwayFromAttacker; // Offset: 0xA4

    // if true, sets death impulse to direction from attacker
    bool getAwayFromAttacker_initial; // Offset: 0xA5

    // blow up when this close to other AI, when malfunctioning
    float explodeOnCollideAI_radius; // Offset: 0xA8

    // if true calls OwnerKilled()/detonation when jetpackHealth goes to or below zero
    bool ownerKilledOnZeroHealth; // Offset: 0xAC

    // if <= 1.0f, will trigger detonation when collision normal * velocity is over this threshold
    float explodeOnCollideDot; // Offset: 0xB0

    // don't explode on collision unless we are going at least this fast {{ units = m / z }}
    float explodeOnCollideMinSpeed; // Offset: 0xB4

    // how strong detonation is for gibs that spawn {{ units = kg * m / s }}
    float detonationImpulse; // Offset: 0xB8

    // set gravity factor on havok ragdoll during jetpack out of control sequence
    float ragdollGravityFactor; // Offset: 0xBC

    // if > 0, amount of damage jetpack can take before it is considered "damgaged"
    float jetpackHealth; // Offset: 0xC0

    // damage group names which will lead to a health drop of jetpack
    idList < idAtomicString , TAG_IDLIST , false > healthGroupNames; // Offset: 0xC8

    // amount of impulse to apply when out of control {{ units = m / s }}
    idRange < float > impulse_outOfControl; // Offset: 0xE0

    // amount of impulse to apply when in misfire blend {{ units = m / s }}
    idRange < float > impulse_misfireBlend; // Offset: 0xE8

    // lateral impulse acceleration {{ units = m / ( s * s ) }}
    float lateralImpulseAcceleration; // Offset: 0xF0

    // vertical impulse acceleration {{ units = m / ( s * s ) }}
    float verticalImpulseAcceleration; // Offset: 0xF4

    // initial lateral impulse {{ units = m / s }}
    float initialLateralImpulse; // Offset: 0xF8

    // initial vertical impulse {{ units = m / s }}
    float initialVerticalImpulse; // Offset: 0xFC

    // adjust impulse direction to flatten out velocity (i.e. bias velocity z-value towards 0 )
    float flatVelocityBias; // Offset: 0x100

    // how much to dampen AF body linear velocity each frame of out of control sequence
    float damping_linear; // Offset: 0x104

    // how much to dampen AF body angular velocity each frame of out of control sequence
    float damping_angular; // Offset: 0x108

    // gore name to enalbe after detonation
    idStr detonationGoreName; // Offset: 0x110

    // gore node name to enable after detonation
    idStr detonationGoreNodeName; // Offset: 0x140

    // explosion decl to use for generic detonation (or colliding with non-AI entity, e.g. world). Overrides AI's default explosion decl.
    idDeclExplosion* detonationExplosion; // Offset: 0x170

    // special-case explosion decl to use for detonation when colliding with another AI, or a player-controlled demon
    idDeclExplosion* detonationExplosionHitAI; // Offset: 0x178

    // when starting out of control sequence, time to blend new impulse with old linear velocity
    idTypesafeTime < float , secondUnique_t , 1 > misfireBlendTime; // Offset: 0x180

    // when starting out of control, how much to bias impulse with up vector
    float initialUpFactor; // Offset: 0x184

    // time in seconds, after death, before jetpack explodes
    idRange < idTypesafeTime < float , secondUnique_t , 1 > > secondsUntilDetonation; // Offset: 0x188

    // time jetpack should toast stuff on ground, after it blows up
    idRange < idTypesafeTime < float , secondUnique_t , 1 > > crashBurnTimeInSeconds; // Offset: 0x190

    // any damage over this threshold will cause immediate detonation
    float immediateExplosionDamageThreshold; // Offset: 0x198

    // being killed by any of these damages will trigger a delayed explosion
    idList < const idDeclDamage * , TAG_IDLIST , false > delayedExplosionDamageTypes; // Offset: 0x1A0

    // being killed by any of these damages will skip explosion
    idList < const idDeclDamage * , TAG_IDLIST , false > noExplosionDamageTypes; // Offset: 0x1B8

    // list allowing for more granular definition of collide speeds
    idList < floatFloatTuple_t , TAG_IDLIST , false > explodeOnCollideSpeedDists; // Offset: 0x1D0

    // spawn this fx ent and orient to face misfire impulse each frame
    idDeclEntityDef* misfireFxEnt; // Offset: 0x1E8

    // if any of these wounds are active, then we do not allow the special jetpack death anims
    idList < const idDeclGoreWound * , TAG_IDLIST , false > disallowJetpackDeathAnimWounds; // Offset: 0x1F0

}; // Size: 0x208
