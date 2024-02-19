struct idAICombatHint : idAIHint
{
    enum combatHintClass_t : int
    {
        CLASS_A = 1,
        CLASS_B = 2,
        CLASS_C = 4,
        CLASS_ALL = 7
    };

    enum combatHintType_t : int
    {
        COMBAT_HINT_DEFENSE_POINT = 0,
        COMBAT_HINT_ASSAULT_POINT = 1,
        COMBAT_HINT_FLANK_POINT = 2,
        COMBAT_HINT_FLANK_TARGET_POINT = 3,
        COMBAT_HINT_FLANK_PATH_POINT = 4,
        COMBAT_HINT_GRENADE_POINT = 5,
        COMBAT_HINT_RECHARGE_POINT = 6,
        COMBAT_HINT_SUPPRESION_FIRE_POINT = 7,
        COMBAT_HINT_MAX = 8
    };

    // type of combat hint
    idAICombatHint::combatHintType_t combatHintType; // Offset: 0xB98

    // the primitive type used for inside tests
    idAIHintPrimitive primitive; // Offset: 0xBA0

    // weight at "dist" units from hint origin. ( 0 for linear falloff from center, 1.0 for no falloff. Must be >= 0.0 and <= 1.0 )
    float minWeight; // Offset: 0xBD0

    // milliseconds within hint required for triggering purposes
    milliToGameTime_t delay; // Offset: 0xBD8

    // optional class that AI will be confined to once they have committed to a class
    idAICombatHint::combatHintClass_t hintClass; // Offset: 0xBE8

    // aas cover points contained within this hint - used to prune cover quickly
    idList < int , TAG_IDLIST , false > coverIndices; // Offset: 0xBF0

    // don't use this hint until this time is reached
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > dontUseUntil; // Offset: 0xC08

}; // Size: 0xC10
