struct strategyConditionParms_t
{
    // if damaged this recently, choose a defense strategy
    milliToGameTime_t damageThreshold; // Offset: 0x0

    // if heavy aimed at this recently, choose a defense strategy
    milliToGameTime_t heavyAimThreshold; // Offset: 0x10

    // if fired at this recently, choose a defense strategy
    milliToGameTime_t firedAtThreshold; // Offset: 0x20

    // if aimed at this recently, choose a defense strategy
    milliToGameTime_t aimedAtThreshold; // Offset: 0x30

    // enemy needs to have been confirmed at least this recently
    milliToGameTime_t recentlyConfirmedThreshold; // Offset: 0x40

    // overall behavior type we want character to adhere to ( may modify above values )
    strategyBehaviorArchetype_t behaviorArchetype; // Offset: 0x50

}; // Size: 0x58
