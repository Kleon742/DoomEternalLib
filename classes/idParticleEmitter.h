struct idParticleEmitter : idBloatedEntity
{
    struct idSoundInfo
    {
        // sound info for this emitter sound shader associated with this light
        idSoundEvent* event; // Offset: 0x0

    }; // Size: 0x8

    struct idSurfaceSpawnInfo
    {
        // depth offset
        float depthOffset; // Offset: 0x0

        // scale factor applied to surface spawning rate based on velocities
        float surfaceSpawnRateVelocityBased; // Offset: 0x4

    }; // Size: 0x8

    // won't activate until initially triggered
    bool startOff; // Offset: 0xB88

    // restart effect with sequential triggerings. If false, the emitter will start and stop with sequential triggering.
    bool cycleTrigger; // Offset: 0xB89

    // looping emitters only - randomly add an offset to the start time
    bool randomizeStartTime; // Offset: 0xB8A

    // if true, particle lights spawned by this system can cast shadows
    bool castShadows; // Offset: 0xB8B

    // distance at which light sources start fading out {{ units = m }}
    float lightFadeOutStart; // Offset: 0xB8C

    // distance at which light sources completely fade out {{ units = m }}
    float lightFadeOutEnd; // Offset: 0xB90

    // distance at which shadows start fading out {{ units = m }}
    float shadowFadeOutStart; // Offset: 0xB94

    // distance at which shadows completely fade out {{ units = m }}
    float shadowFadeOutEnd; // Offset: 0xB98

    // fade the entire system in on trigger-show
    float fadeIn; // Offset: 0xB9C

    // fade the entire system out on a trigger-show
    float fadeOut; // Offset: 0xBA0

    // soft particle alphascale override
    float alphaScale; // Offset: 0xBA4

    // start delay, in ms
    idTypesafeTime < int , millisecondUnique_t , 1000 > startDelay; // Offset: 0xBA8

    // if true, the particle system should inherit the bind master's velocity
    bool inheritMasterVelocity; // Offset: 0xBAC

    // if inheritMasterVelocity true, scale the velocity by this amount before applying
    float masterVelocityScale; // Offset: 0xBB0

    // how the particle effects light will affect the scene
    lightParticleEffect_t particleLightEffect; // Offset: 0xBB4

    // the scale of the particle light on the particles
    float particleLightScale; // Offset: 0xBB8

    // disable the particle shadowing
    bool disableParticleShadowing; // Offset: 0xBBC

    // disable the particle light
    bool disableParticleLight; // Offset: 0xBBD

    // scale factor applied to the surface spawning rate
    float surfaceSpawnRateScale; // Offset: 0xBC0

    // settings for the emitters sound
    idParticleEmitter::idSoundInfo soundInfo; // Offset: 0xBC8

    // settings for surface spawning
    idParticleEmitter::idSurfaceSpawnInfo surfaceSpawnInfo; // Offset: 0xBD0

    // networked vars adjusts the smoke emission rate, if using the smoke system
    int smokeSystemRate; // Offset: 0xBD8

    // amount to scale the particle system's distribution
    idVec3 distributionScale; // Offset: 0xBDC

    // {{ units = m / s }}
    idVec3 velocity; // Offset: 0xBE8

    idNetEvent < 15 > activated; // Offset: 0xBF8

    idNetEvent < 15 > deactivated; // Offset: 0xC10

    bool active; // Offset: 0xC28

    // particle decl given during SetParticle
    idDeclParticle* particleSystem; // Offset: 0xC30

    // particle decl we've serialized
    idDeclParticle* serializedParticleSystem; // Offset: 0xC38

    // fading fade helper
    idFadeHelper fade; // Offset: 0xC40

}; // Size: 0xC60
