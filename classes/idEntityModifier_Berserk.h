struct idEntityModifier_Berserk : idEntityModifier
{
    // damage taken toward pain
    float painTakenScale; // Offset: 0x30

    // increase damage taken toward pain by this much absolute
    float painTakenBoost; // Offset: 0x34

    // damage taken toward pain
    float damageTakenScale; // Offset: 0x38

    // increase damage taken toward pain by this much absolute
    float damageTakenBoost; // Offset: 0x3C

    // scale damage applied to gore component
    float goreDamageScale; // Offset: 0x40

    // increase damage applied to gore component by this much absolute
    float goreDamageBoost; // Offset: 0x44

    // optionally, use values from this decl
    idDeclAIUpgrades* upgradesDecl; // Offset: 0x48

    // if true, the specified pain type is disabled
    painTypeBitFlags_t disabledPainTypes; // Offset: 0x50

    // if true, weak points are disabled
    bool disabledWeakpoints; // Offset: 0x54

    // if true, the disabledPainTypes list includes weak points
    bool disabledPainTypesIncludeWeakpoints; // Offset: 0x55

    // these context flags will be added to the AI that gets buffed
    aiContextFlags_t contextFlagsToApply; // Offset: 0x58

    // Info about buffs that should be ignored when the AI is hit with certain damage decls
    aiBerserkIgnoreBuffsInfo_t buffIgnoreInfo; // Offset: 0x60

    // Info about buffs that should be overridden when the AI is hit with certain damage decls
    idList < aiBerserkOverrideBuffsInfo_t , TAG_DECL , false > buffOverrides; // Offset: 0x70

}; // Size: 0x88
