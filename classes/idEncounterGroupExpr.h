struct idEncounterGroupExpr
{
    enum triggerVar_t : int
    {
        GROUP_AVERAGE_HEALTH = 0,
        GROUP_MEMBERS_DEAD = 1,
        GROUP_MEMBERS_DEAD_UNALERTED = 2,
        GROUP_MEMBERS_ALIVE = 3,
        GROUP_MEMBERS_ALIVE_UNALERTED = 4,
        GROUP_PERCENT_ALIVE = 5,
        GROUP_NUMBERS_ADVANTAGE = 6,
        AVERAGE_ENEMY_HEALTH = 7,
        LOWEST_PLAYER_HEALTH = 8,
        LOWEST_TARGET_PLAYER_HEALTH = 9,
        HIGHEST_PLAYER_HEALTH = 10,
        HIGHEST_TARGET_PLAYER_HEALTH = 11,
        GROUP_LEADER_HEALTH = 12,
        HAS_ENEMY = 13,
        NUM_IN_COMBAT = 14,
        NUM_IN_SEARCH = 15,
        NUM_IN_RELAXED = 16,
        NUM_WITH_ENEMY = 17,
        NUM_WITH_PLAYER_ENEMY = 18,
        TRIGGERVAR_MAX = 19
    };

    enum activator_t : int
    {
        ACTIVATOR_NONE = 0,
        ACTIVATOR_GROUP_LEADER = 1,
        ACTIVATOR_RANDOM_GROUP_MEMBER = 2,
        ACTIVATOR_RANDOM_LIVE_GROUP_MEMBER = 3,
        ACTIVATOR_RANDOM_DEAD_GROUP_MEMBER = 4,
        ACTIVATOR_RANDOM_ENEMY = 5,
        ACTIVATOR_TARGET_PLAYER_LOWEST_HEALTH = 6,
        ACTIVATOR_TARGET_PLAYER_HIGHEST_HEALTH = 7,
        ACTIVATOR_PLAYER_LOWEST_HEALTH = 8,
        ACTIVATOR_PLAYER_HIGHEST_HEALTH = 9
    };

    enum triggerOp_t : int
    {
        TRIGGEROP_LESS_THAN = 0,
        TRIGGEROP_LESS_THAN_EQUAL = 1,
        TRIGGEROP_EQUAL = 2,
        TRIGGEROP_GREATER_THAN = 3,
        TRIGGEROP_GREATER_THAN_EQUAL = 4
    };

    // the value on which to trigger
    float value; // Offset: 0x0

    // operator to evaluate value
    idEncounterGroupExpr::triggerOp_t op; // Offset: 0x4

    // the type of trigger
    idEncounterGroupExpr::triggerVar_t type; // Offset: 0x8

    // target to activate when expression is true
    idManagedClassPtr < idEntity > target; // Offset: 0x10

    // who to send as the activator of the trigger
    idEncounterGroupExpr::activator_t activator; // Offset: 0x30

    // should this trigger only happen once OR be evaluated every update
    bool triggerOnce; // Offset: 0x34

    // true if already triggered
    bool triggered; // Offset: 0x35

}; // Size: 0x38
