struct idDashMeter : idPlayerMeter
{
    struct dashKillBonus_t
    {
        // Ai type to be used
        aiMonsterType_t aiMonsterType; // Offset: 0x0

        // meter points for this Ai type
        float bonusPoints; // Offset: 0x8

    }; // Size: 0x10

    struct eventBonus_t
    {
        // the scoring event associated with the event multiplier
        idDeclViolenceEvent* violenceEvent; // Offset: 0x0

        // the value of the meter to add upon event
        float meterValue; // Offset: 0x8

        // does this event require direct damage from player
        bool requiresDirectDamageFromPlayer; // Offset: 0xC

    }; // Size: 0x10

    // value to add per unit of damage
    float damageScaling; // Offset: 0xA0

    // amount to add when killing an enemy. Set to 0.0 to use per-monster meter bonuses
    float deathBonus; // Offset: 0xA4

    // amount to add when killing an enemy. Set to 0.0 to use per-monster meter bonuses
    float gkDeathBonus; // Offset: 0xA8

    // list of per-monster meter bonuses to use.
    idList < idDashMeter::dashKillBonus_t , TAG_IDLIST , false > dashKillBonuses; // Offset: 0xB0

    // used to track momentum multipliers list of per-monster meter bonuses to use.
    idList < idDashMeter::eventBonus_t , TAG_IDLIST , false > eventBonuses; // Offset: 0xC8

    // How long to wait before allowing to regen again
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > regenPauseTime; // Offset: 0xE0

    // How much time until it unpauses
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > remainingPauseTime; // Offset: 0xE8

    bool wasEmptyWhenRechargeBegan; // Offset: 0xF0

    // we play this variant if the recharge was starting from empty
    idSoundEvent* maxValueSoundRechargedFromEmpty; // Offset: 0xF8

}; // Size: 0x100
