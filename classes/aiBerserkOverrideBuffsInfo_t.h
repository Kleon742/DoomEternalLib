struct aiBerserkOverrideBuffsInfo_t
{
    // if not DIFFICULTY_NONE, then will only get applied if the current difficulty matches
    gameDifficulty_t difficulty; // Offset: 0x0

    // if the buffed AI is hit with one of these decls, the buffs in this override will be used
    idDeclAIDamageDeclCollection* damageDecls; // Offset: 0x8

    // damage taken toward pain
    float painTakenScale; // Offset: 0x10

    // increase damage taken toward pain by this much absolute
    float painTakenBoost; // Offset: 0x14

    // damage taken toward pain
    float damageTakenScale; // Offset: 0x18

    // increase damage taken toward pain by this much absolute
    float damageTakenBoost; // Offset: 0x1C

    // scale damage applied to gore component
    float goreDamageScale; // Offset: 0x20

    // increase damage applied to gore component by this much absolute
    float goreDamageBoost; // Offset: 0x24

    // if true, the specified pain type is disabled
    painTypeBitFlags_t disabledPainTypes; // Offset: 0x28

    // if true, weak points are disabled
    bool disabledWeakpoints; // Offset: 0x2C

    // if true, the disabledPainTypes list includes weak points
    bool disabledPainTypesIncludeWeakpoints; // Offset: 0x2D

}; // Size: 0x30
