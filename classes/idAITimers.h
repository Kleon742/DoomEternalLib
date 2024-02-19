struct idAITimers
{
    enum timer_t : int
    {
        TIMER_NONE = -1,
        TIMER_SPAWN = 0,
        TIMER_WAIT = 1,
        TIMER_LAST_DAMAGE = 2,
        TIMER_LAST_STUN = 3,
        TIMER_ENEMY_LAST_SEEN = 4,
        TIMER_ACTION_NODE_BLOCKED = 5,
        TIMER_LAST_SURPRISED = 6,
        TIMER_NEXT_MOVE = 7,
        TIMER_LAST_MOVE_FAILED = 8,
        TIMER_MOVE_START = 9,
        TIMER_LAST_MOVE_FINISHED = 10,
        TIMER_LAST_MAJOR_POSITION_CHECK = 11,
        TIMER_LAST_DODGE = 12,
        TIMER_LAST_AVOID = 13,
        TIMER_LAST_DIVE = 14,
        TIMER_LAST_FIRED_AT = 15,
        TIMER_LAST_AIMED_AT = 16,
        TIMER_LAST_HEAVY_AIMED_AT = 17,
        TIMER_END_HEAVY_AIMED_AT = 18,
        TIMER_LAST_HEAVY_FIRED_AT = 19,
        TIMER_JUST_AIMED_AT = 20,
        TIMER_LAST_INTIMIDATION = 21,
        TIMER_START_INTIMIDATION = 22,
        TIMER_WANT_RAGE = 23,
        TIMER_NEXT_RAGE = 24,
        TIMER_SOONEST_RAGE = 25,
        TIMER_LAST_RAGE = 26,
        TIMER_WANT_TAUNT = 27,
        TIMER_NEXT_TAUNT = 28,
        TIMER_SOONEST_TAUNT = 29,
        TIMER_CLOSE_MELEE = 30,
        TIMER_LAST_CHARGE = 31,
        TIMER_NEXT_CHARGE = 32,
        TIMER_NEXT_LEAP = 33,
        TIMER_NEXT_THROW = 34,
        TIMER_LAST_FIRED = 35,
        TIMER_RANGED_ATTACK1 = 36,
        TIMER_RANGED_ATTACK2 = 37,
        TIMER_RANGED_ATTACK3 = 38,
        TIMER_MELEE_ATTACK1 = 39,
        TIMER_MELEE_ATTACK2 = 40,
        TIMER_MELEE_ATTACK3 = 41,
        TIMER_ANY_ATTACK = 42,
        TIMER_RETRY_COMBAT = 43,
        TIMER_OPEN_COMBAT_END = 44,
        TIMER_OPEN_COMBAT_COVER_CHECK = 45,
        TIMER_REACHED_COVER = 46,
        TIMER_NEXT_COVER_ACTION = 47,
        TIMER_END_COVER_ACTION = 48,
        TIMER_EXIT_COVER = 49,
        TIMER_COVERING_FIRE = 50,
        TIMER_COVER_EXPOSED = 51,
        TIMER_END_BURST = 52,
        TIMER_NEXT_BURST = 53,
        TIMER_LAST_ENGAGE = 54,
        TIMER_LAST_ICY_FREEZE = 55,
        TIMER_LAST_BFG_FREEZE = 56,
        TIMER_LAST_MICROWAVE_FREEZE = 57,
        TIMER_MISC_1 = 58,
        TIMER_MAX = 59
    };

    // actual time values for each timer, unique to an AI
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 59 > timers; // Offset: 0x0

    // actual time values for each timer, unique to an AI
    idStaticList < aiTimer_t , 128 , false , TAG_IDLIST > newTimers; // Offset: 0x1D8

    // special case for when ai has behavior overrides for timers
    idAI2* ownerAI; // Offset: 0x9F0

}; // Size: 0x9F8
