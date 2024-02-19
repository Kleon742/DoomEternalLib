struct idChainsawBehavior_t
{
    // base chain rpm
    float chainBaseRPM; // Offset: 0x0

    // burst chain rpm
    float chainBurstRPM; // Offset: 0x4

    // chain acceleration up to the chainBurstRPM (should be a positive number)
    float chainAccel; // Offset: 0x8

    // chain deceleration down to the chainBaseRPM (should be a positive number)
    float chainDecel; // Offset: 0xC

    // min interval between chain bursts, ms
    milliToGameTime_t chainBurstIntervalMin; // Offset: 0x10

    // max interval between chain bursts, ms
    milliToGameTime_t chainBurstIntervalMax; // Offset: 0x20

    // min chain burst duration, ms
    milliToGameTime_t chainBurstDurationMin; // Offset: 0x30

    // max chain burst duration, ms
    milliToGameTime_t chainBurstDurationMax; // Offset: 0x40

    // engine base rpm
    float engineBaseRPM; // Offset: 0x50

    // minimum duration of the state in ms (only applies to STATE_RUN_CUT and STATE_RUN_SURGE)
    milliToGameTime_t minStateDurationMin; // Offset: 0x58

    // minimum duration of the state in ms (only applies to STATE_RUN_CUT and STATE_RUN_SURGE)
    milliToGameTime_t minStateDurationMax; // Offset: 0x68

    // sound to use when starting this behaviorfrom STATE_STOP
    idSoundEvent* sound_from_STOP; // Offset: 0x78

    // sound to use when starting this behaviorfrom STATE_START
    idSoundEvent* sound_from_START; // Offset: 0x80

    // sound to use when starting this behaviorfrom STATE_IDLE
    idSoundEvent* sound_from_IDLE; // Offset: 0x88

    // sound to use when starting this behaviorfrom STATE_REV
    idSoundEvent* sound_from_REV; // Offset: 0x90

    // sound to use when starting this behaviorfrom STATE_REV_SURGE
    idSoundEvent* sound_from_REV_SURGE; // Offset: 0x98

    // sound to use when starting this behaviorfrom STATE_REV_CUT
    idSoundEvent* sound_from_REV_CUT; // Offset: 0xA0

    // sound to use when starting this behaviorfrom STATE_REV_CUT_SURGE
    idSoundEvent* sound_from_REV_CUT_SURGE; // Offset: 0xA8

    // sound to use when starting this behaviorfrom STATE_REV_SURGE
    idSoundEvent* sound_from_PAUSE; // Offset: 0xB0

}; // Size: 0xB8
