struct idDeclAIUpgrades : idGameDeclTypeInfo
{
    struct onslaught_t
    {
        // damage boost, as a multiplier of current damage output
        float damageScale; // Offset: 0x0

        // simply add this much damage to every hit
        float damageBoost; // Offset: 0x4

    }; // Size: 0x8

    struct overdrive_t
    {
        // movement speeds up this much
        float speedScale_movement; // Offset: 0x0

        // shots fly this much quicker
        float speedScale_projectiles; // Offset: 0x4

        // animation and attacks are this quicker
        float rateScale_haste; // Offset: 0x8

    }; // Size: 0xC

    struct berserk_t
    {
        // damage taken toward pain
        float painTakenScale; // Offset: 0x0

        // increase damage taken toward pain by this much absolute
        float painTakenBoost; // Offset: 0x4

        // damage taken toward pain
        float damageTakenScale; // Offset: 0x8

        // increase damage taken toward pain by this much absolute
        float damageTakenBoost; // Offset: 0xC

        // scale damage applied to gore component
        float goreDamageScale; // Offset: 0x10

        // increase damage applied to gore component by this much absolute
        float goreDamageBoost; // Offset: 0x14

        // if true, the specified pain type is disabled
        painTypeBitFlags_t disabledPainTypes; // Offset: 0x18

        // if true, weak points are disabled
        bool disabledWeakpoints; // Offset: 0x1C

        // if true, the disabledPainTypes list includes weak points
        bool disabledPainTypesIncludeWeakpoints; // Offset: 0x1D

        // these context flags will be added to the AI that gets buffed
        aiContextFlags_t contextFlagsToApply; // Offset: 0x20

        // Info about buffs that should be ignored when the AI is hit with certain damage decls
        aiBerserkIgnoreBuffsInfo_t buffIgnoreInfo; // Offset: 0x28

        // Info about buffs that should be overridden when the AI is hit with certain damage decls
        idList < aiBerserkOverrideBuffsInfo_t , TAG_DECL , false > buffOverrides; // Offset: 0x38

    }; // Size: 0x50

    struct monsterTypeUpgradeMapping_t
    {
        // if not DIFFICULTY_NONE, then will only get applied if the current difficulty matches
        gameDifficulty_t difficulty; // Offset: 0x0

        // ai types for this mapping
        aiMonsterType_t monsterTypes; // Offset: 0x8

        // use onslaught like this for these monsters
        idDeclAIUpgrades::onslaught_t onslaught; // Offset: 0x10

        // use onslaught like this for these monsters
        idDeclAIUpgrades::overdrive_t overdrive; // Offset: 0x18

        // use onslaught like this for these monsters
        idDeclAIUpgrades::berserk_t berserk; // Offset: 0x28

    }; // Size: 0x78

    // list of monster type to data mappings
    idList < idDeclAIUpgrades::monsterTypeUpgradeMapping_t , TAG_DECL , false > upgradeMappings; // Offset: 0x90

}; // Size: 0xA8
