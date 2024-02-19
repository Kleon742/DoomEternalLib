struct idOxygenMeter : idPlayerMeter
{
    struct hazardInfo_t
    {
        // type of damage
        idDeclDamage* declDamage; // Offset: 0x0

        // amount of time before player starts taking damage, when he has the dive suit
        idTypesafeTime < int , millisecondUnique_t , 1000 > noDamageTimeWithSuitMS; // Offset: 0x8

        // DAMAGE DECREASES METER: value to decrease meter each time player takes damage
        float meterDecreasePerDamage; // Offset: 0xC

    }; // Size: 0x10

    fxCondition_t curFxCondition; // Offset: 0xA0

    bool hasOxygenSuit; // Offset: 0xA4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTakingDamageTime; // Offset: 0xA8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > repeatWarningSoundTime; // Offset: 0xB0

    bool warningActive; // Offset: 0xB8

    bool hazardBeingShielded; // Offset: 0xB9

    bool isInDeepWaterHazard; // Offset: 0xBA

    // the global fx manager handle
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0xC0

    bool fxHandleInit; // Offset: 0xC8

    bool playingHazardSound; // Offset: 0xC9

    bool playing25percentSound; // Offset: 0xCA

    // inventory item that represents the oxygen suit -- DAMAGE DECREASES SHIELD
    idDeclInventory* oxygenSuitItemDecl; // Offset: 0xD0

    // inventory item that represents the recharge item
    idDeclInventory* oxygenSuitRechargeItemDecl; // Offset: 0xD8

    idOxygenMeter::hazardInfo_t* mostRecentHazardInfo; // Offset: 0xE0

    // ( 0 - 1 ) oxygen percentage at which warning sound is played
    float oxygenWarningPercentage; // Offset: 0xE8

    // fx condtion to start the warning fx
    fxCondition_t suitWarningFxStartCondition; // Offset: 0xEC

    // fx condtion to stop the warning fx
    fxCondition_t suitWarningFxStopCondition; // Offset: 0xF0

    // time in between repeating warning sound
    idTypesafeTime < int , millisecondUnique_t , 1000 > suitWarningSoundDelay; // Offset: 0xF4

    // sound to play when warning level is reached
    idSoundEvent* suitWarningSoundDecl; // Offset: 0xF8

    // fx condtion when shield depleted
    fxCondition_t suitDepletedFxCondition; // Offset: 0x100

    // sound to play when shield depleted
    idSoundEvent* suitDepletedSoundDecl; // Offset: 0x108

    // list of hazards and times
    idList < idOxygenMeter::hazardInfo_t , TAG_IDLIST , false > hazardInfoList; // Offset: 0x110

    // the FX Decl to use for the effect.
    idDeclFX* fxDecl; // Offset: 0x128

    // sound to play when meter is at 25 percent or less
    idSoundEvent* meter25PercentSoundDecl; // Offset: 0x130

    // sound to play when first entering deep water hazard
    idSoundEvent* startDeepWaterSoundDecl; // Offset: 0x138

    // sound to play when exiting deep water hazard
    idSoundEvent* stopDeepWaterSoundDecl; // Offset: 0x140

    // how much to scale the meter for display in the UI
    float uiMeterScale; // Offset: 0x148

    // global environment damage multiplier if the suit is equipped
    float environmentDamageMultiplier; // Offset: 0x14C

    // time above water before we can regen the oxygen meter
    idTypesafeTime < float , secondUnique_t , 1 > oxygenRegenDelay; // Offset: 0x150

    // last time we were underwater and in a deep water env hazard volume
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTimeUnderwaterInDeepWaterHazard; // Offset: 0x158

    // refill instantly if on land
    bool refillInstantlyOnLand; // Offset: 0x160

}; // Size: 0x168
