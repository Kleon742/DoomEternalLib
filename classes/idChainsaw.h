struct idChainsaw : idWeapon
{
    enum idChainsawState : int
    {
        STATE_STOP = 0,
        STATE_PAUSE = 1,
        STATE_START = 2,
        STATE_START_IF_ALLOWED = 3,
        STATE_START_IN_IDLE = 4,
        STATE_IDLE = 5,
        STATE_REV = 6,
        STATE_REV_SURGE = 7,
        STATE_REV_CUT = 8,
        STATE_REV_CUT_SURGE = 9,
        STATE_MAX = 10
    };

    struct chainRPMBurstInfo_t
    {
        // start time
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x0

        // end time
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x8

    }; // Size: 0x10

    // the state of the chainsaw
    idChainsaw::idChainsawState chainsawState; // Offset: 0x3BA0

    // active state when pause was requested
    idChainsaw::idChainsawState prePauseState; // Offset: 0x3BA4

    // running start time of the current run session
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > runningStartTime; // Offset: 0x3BA8

    // stop time of the current run session
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > runningStopTime; // Offset: 0x3BB0

    // cutting chainsaw cutting start time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cuttingStartTime; // Offset: 0x3BB8

    // chainsaw cutting end time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cuttingEndTime; // Offset: 0x3BC0

    // length of the current or most recent cut
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastCuttingTime; // Offset: 0x3BC8

    // entity currently being cut
    idManagedClassPtr < idEntity > cuttingTarget; // Offset: 0x3BD0

    // record this to properly shut down FX since the cuttingTarget may disappear out from under us and not be available for testing.
    bool playingCuttingFleshFX; // Offset: 0x3BF0

    // records which type of extra condition to use for the FX on the surface the chainsaw is currently cutting (if any)
    fxExtraCondition_t extraConditionImpact; // Offset: 0x3BF4

    // placed at the cut location to play gore particles
    idEntityFx* goreFXEntity; // Offset: 0x3BF8

    // surging chainsaw surging end time (this is for the state RUN_SURGE, not to be confused with the random chain surging during every state)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > surgingEndTime; // Offset: 0x3C00

    // engine RPM modeled from 0-100
    float curEngineRPM; // Offset: 0x3C08

    // current chain speed / rpm
    float curChainRPM; // Offset: 0x3C0C

    // current chain animation position (0 to 1)
    float curChainNormalizedFrame; // Offset: 0x3C10

    // current chain rpm burst info
    idChainsaw::chainRPMBurstInfo_t curChainRPMBurstInfo; // Offset: 0x3C18

    // kick time when the chainsaw will kick its owner and target
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextKickTime; // Offset: 0x3C28

    // if true then the player is locked in place
    bool lockOwnerInPlace; // Offset: 0x3C30

    // sound
    idSoundEvent* stopChainsaw; // Offset: 0x3C38

    idSoundEvent* stopGloryChainsaw; // Offset: 0x3C40

    // stores the channel that the always sound is playing on
    idSoundEvent* soundHandleAlways; // Offset: 0x3C48

    // stores the channel that the always sound is playing on
    idSoundEvent* soundHandleRevBased; // Offset: 0x3C50

    bool sound_RTPC_engine_rpm_playing; // Offset: 0x3C58

    bool sound_RTPC_chain_rpm_playing; // Offset: 0x3C59

    // control stall at the end of a sync anim
    bool deferStall; // Offset: 0x3C5A

    // keep track if flame belch was activated
    bool flameBelchActivated; // Offset: 0x3C5B

    // delay to handle sounds not playing when reset and hidden on the same frame
    bool deferStartInIdle; // Offset: 0x3C5C

    // ammo determine this at the sync start but don't deduct it until the end
    float syncMeleeAmmoCostToUse; // Offset: 0x3C60

    // tracks whether the sync was chainsaw or not
    bool syncMeleeWithChainsawStarted; // Offset: 0x3C64

    // actual value of fuel gauge as it seeks target value
    float fuelGaugeActual; // Offset: 0x3C68

    // target value for fuel gauge to seek
    float fuelGaugeTarget; // Offset: 0x3C6C

    // for ammo regen upgrade, this tracks the partial ammo value as it increases up to 1
    float ammoRegenVal; // Offset: 0x3C70

}; // Size: 0x3C78
