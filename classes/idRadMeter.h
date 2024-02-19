struct idRadMeter : idPlayerMeter
{
    struct hazardInfo_t
    {
        // type of damage
        idDeclDamage* declDamage; // Offset: 0x0

        // amount of time before player starts taking damage, when he has the Rad Suit
        idTypesafeTime < int , millisecondUnique_t , 1000 > noDamageTimeWithRadMS; // Offset: 0x8

        // DAMAGE DECREASES METER: value to decrease meter each time player takes damage
        float meterDecreasePerDamage; // Offset: 0xC

    }; // Size: 0x10

    fxCondition_t curFxCondition; // Offset: 0xA0

    bool wasFull; // Offset: 0xA4

    bool hasRadShield; // Offset: 0xA5

    bool shieldIsActive; // Offset: 0xA6

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTakingDamageTime; // Offset: 0xA8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > repeatWarningSoundTime; // Offset: 0xB0

    bool modeDamageBased; // Offset: 0xB8

    bool modeTimeBased; // Offset: 0xB9

    bool warningActive; // Offset: 0xBA

    bool meterWasEmpty; // Offset: 0xBB

    bool isInHazard; // Offset: 0xBC

    bool hazardBeingShielded; // Offset: 0xBD

    // the global fx manager handle
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0xC0

    bool fxHandleInit; // Offset: 0xC8

    bool playingHazardSound; // Offset: 0xC9

    bool playing25percentSound; // Offset: 0xCA

    // TEMP: having 2 decls is temporary so we can easily test the different versions in the same map ... radShieldItemDecl2 will eventually go away.... inventory item that represents the rad shield -- DAMAGE DECREASES SHIELD
    idDeclInventory* radShieldItemDecl; // Offset: 0xD0

    // inventory item that represents the rad shield -- TIME DECREASES SHIELD
    idDeclInventory* radShieldItemDecl2; // Offset: 0xD8

    // inventory item that represents the recharge item
    idDeclInventory* radShieldRechargeItemDecl; // Offset: 0xE0

    idRadMeter::hazardInfo_t mostRecentHazardInfo; // Offset: 0xE8

    // __def milliseconds_tdecayDelayTimeMS; time to wait before meter decay occurs ( 0 - 1 ) shield percentage at which warning sound is played
    float shieldWarningPercentage; // Offset: 0xF8

    // fx condtion to start the warning fx
    fxCondition_t shieldWarningFxStartCondition; // Offset: 0xFC

    // fx condtion to stop the warning fx
    fxCondition_t shieldWarningFxStopCondition; // Offset: 0x100

    // time in between repeating warning sound
    idTypesafeTime < int , millisecondUnique_t , 1000 > shieldWarningSoundDelay; // Offset: 0x104

    // sound to play when warning level is reached
    idSoundEvent* shieldWarningSoundDecl; // Offset: 0x108

    // fx condtion when shield depleted
    fxCondition_t shieldDepletedFxCondition; // Offset: 0x110

    // sound to play when shield depleted
    idSoundEvent* shieldDepletedSoundDecl; // Offset: 0x118

    // list of hazards and times
    idList < idRadMeter::hazardInfo_t , TAG_IDLIST , false > hazardInfoList; // Offset: 0x120

    // the FX Decl to use for the effect.
    idDeclFX* fxDecl; // Offset: 0x138

    // sound to play when first entering hazard
    idSoundEvent* startHazardSoundDecl; // Offset: 0x140

    // sound to play when exiting hazard
    idSoundEvent* stopHazardSoundDecl; // Offset: 0x148

    // sound to play when meter is at 25 percent or less
    idSoundEvent* meter25PercentSoundDecl; // Offset: 0x150

    // how much to scale the meter for display in the UI
    float uiMeterScale; // Offset: 0x158

    // global environment damage multiplier if the suit is equipped
    float environmentDamageMultiplier; // Offset: 0x15C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > radRegenPauseAmount; // Offset: 0x160

}; // Size: 0x168
