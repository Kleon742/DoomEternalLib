struct battlemodeStreakDefinition_t
{
    // Unique Id for the currently active battlemode period
    idStr rankingPeriodId; // Offset: 0x0

    idVector < idSharedPtr < battlemodeStreak_t > > streakDefinitions; // Offset: 0x30

    // The default starting streak
    idWeakPtr < battlemodeStreak_t > startingStreak; // Offset: 0x48

}; // Size: 0x50
