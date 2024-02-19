struct idPlayerMeter
{
    struct pipMetering_t
    {
        // max pips is the max number of "slots" the entire health bar can have, minimum of 1 is always needed
        int maxNumPips; // Offset: 0x0

    }; // Size: 0x4

    struct regeneration_t
    {
        // rate of regeneration ( units per second )
        float regenRate; // Offset: 0x0

        // if > 0, regeneration will not raise current value above this value.
        float regenMax; // Offset: 0x4

        // if true, instantly gives a pip
        bool instant; // Offset: 0x8

        // last time we regen'd
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastRegenTime; // Offset: 0x10

        // How long to delay regen for.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > delayRegenTime; // Offset: 0x18

        // applied to the regenRate, to increase/decrease the rate through a scalar
        float regenScale; // Offset: 0x20

    }; // Size: 0x28

    struct decay_t
    {
        // rate of decay ( units per second )
        float decayRate; // Offset: 0x0

        // interval delay frequency
        idTypesafeTime < int , millisecondUnique_t , 1000 > intervalDecayFreqMS; // Offset: 0x4

        // interval delay amount
        float intervalDecayAmount; // Offset: 0x8

        // if > 0, decay will not lower current value below this value.
        float decayMin; // Offset: 0xC

        // last time we decayed
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDecayTime; // Offset: 0x10

        // How long to delay decay for.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > delayDecayTime; // Offset: 0x18

    }; // Size: 0x20

    // the current value of the meter.
    float currentValue; // Offset: 0x8

    // the previous value of the meter.
    float previousValue; // Offset: 0xC

    // max value of the meter.
    float maxValue; // Offset: 0x10

    // sound to play when max value is reached
    idSoundEvent* maxValueSound; // Offset: 0x18

    // should the max value sound play when the meter is initially set to the max value?
    bool playMaxValueSoundOnInit; // Offset: 0x20

    bool maxValueInitFinished; // Offset: 0x21

    // Allow the meter to be pip based instead of normalized 0.0 - 1.0
    idPlayerMeter::pipMetering_t pipMetering; // Offset: 0x24

    // regeneration modifiers.
    idPlayerMeter::regeneration_t regeneration; // Offset: 0x28

    // decay modifiers.
    idPlayerMeter::decay_t decay; // Offset: 0x50

    // previous update time value for calculating delta
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateTime; // Offset: 0x70

    // is the pip system currently enabled
    bool enabled; // Offset: 0x78

    // flag that gets set when decay was turned on after being off
    bool refreshDecayTime; // Offset: 0x79

    // flag that gets set when the regen was turned on after being off
    bool refreshRegenTime; // Offset: 0x7A

    // disables any kind of meter gain
    bool disableMeterGain; // Offset: 0x7B

    // when set, stops regeneration of the meter
    bool regenPaused; // Offset: 0x7C

    // when set, stops decay of the meter
    bool decayPaused; // Offset: 0x7D

    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x80

}; // Size: 0xA0
