struct idDeclAIComponent_Immolator : idDeclAIComponent
{
    // damage to be applied when immolating
    idDeclDamage* damageDecl; // Offset: 0x98

    // minimum visibility on a target required for immolation to happen
    float minVisibilityForImmolation; // Offset: 0xA0

    // base value to use for how much "immolation" is increased per second
    float increase_deltaPerSecond_base; // Offset: 0xA4

    // base value to use for how much "immolation" is decreased per second
    float decrease_deltaPerSecond_base; // Offset: 0xA8

    // max number of burned AI at once, produced by us only
    float maxSimultaneousBurnedAI; // Offset: 0xAC

    // list of shader/table pairs for ramp up during non-player immolation
    idList < soundShaderTablePair_t , TAG_IDLIST , false > nonPlayerImmolationSounds; // Offset: 0xB0

    // list of shader/table pairs for ramp up during player immolation
    idList < soundShaderTablePair_t , TAG_IDLIST , false > playerImmolationSounds; // Offset: 0xC8

    // emitter entitydef for fire snake
    idDeclEntityDef* snakeEmitter; // Offset: 0xE0

    // emitter entitydef for snake burst
    idDeclEntityDef* snakeBurstEmitter; // Offset: 0xE8

    // speed of fire snake {{ units = m / s }}
    float snakeSpeed; // Offset: 0xF0

    // amplitude of fire snake {{ units = m }}
    float snakeAmplitude; // Offset: 0xF4

    // phase of fire snake
    float snakePhase; // Offset: 0xF8

    // width of fire snake {{ units = m }}
    float snakeWidth; // Offset: 0xFC

    // how often along path an emitter will be dropped {{ units = m }}
    float snakeEmitterDropDistance; // Offset: 0x100

}; // Size: 0x108
