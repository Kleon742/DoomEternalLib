struct idDeclAIGlobalSettings : idGameDeclTypeInfo
{
    struct tokenDifficultyData_t
    {
        // this entry applies to this difficulty and all greater, unless other entries exist
        gameDifficulty_t difficulty; // Offset: 0x0

        // max number of AI that can be using this token at once
        int maxSimultaneousUsers; // Offset: 0x4

        // time in seconds between each possible use of one of the available tokens
        float secondsBetweenUses; // Offset: 0x8

        // if false, assume infite tokens of this type to be used in coop
        bool useInCoop; // Offset: 0xC

        // if true, allow override functionality on this token
        bool overrideAvailable; // Offset: 0xD

    }; // Size: 0x10

    struct tokenDifficultyInfo_t
    {
        // type of token, DO NOT CHANGE
        aiTokenType_t tokenType; // Offset: 0x0

        // per difficulty entries for this token type
        idList < idDeclAIGlobalSettings::tokenDifficultyData_t , TAG_IDLIST , false > difficulty_Entries; // Offset: 0x8

    }; // Size: 0x20

    struct difficultyFloatTuple_t
    {
        // this entry applies to this difficulty and all greater, unless other entries exist
        gameDifficulty_t difficulty; // Offset: 0x0

        // generic floating point multiplier
        float multiplier; // Offset: 0x4

    }; // Size: 0x8

    struct difficultyDistanceTuple_t
    {
        // this entry applies to this difficulty and all greater, unless other entries exist
        gameDifficulty_t difficulty; // Offset: 0x0

        // generic floating point multiplier {{ units = m }}
        float multiplier; // Offset: 0x4

    }; // Size: 0x8

    struct animationScaleData_t
    {
        // animweb scalar that is to be modified
        idAtomicString scalar; // Offset: 0x0

        // per difficulty rate scale modifiers
        idList < idDeclAIGlobalSettings::difficultyFloatTuple_t , TAG_IDLIST , false > difficulty_RateScaleModifiers; // Offset: 0x8

    }; // Size: 0x20

    struct difficultyTableNameTuple_t
    {
        // difficulty level for this table
        gameDifficulty_t difficulty; // Offset: 0x0

        // name of this table
        idAtomicString name; // Offset: 0x8

        // actual table decl
        idDeclTable* table; // Offset: 0x10

    }; // Size: 0x18

    struct aiDifficultyData_t
    {
        struct offensiveModifers_t
        {
            // multiplies any direct damage by this value, regardless of victim
            idList < idDeclAIGlobalSettings::difficultyFloatTuple_t , TAG_IDLIST , false > directDamageModifiers; // Offset: 0x0

            // multiplies overall attack speed by this value
            idList < idDeclAIGlobalSettings::difficultyFloatTuple_t , TAG_IDLIST , false > attackSpeedModifiers; // Offset: 0x18

            // multiplies primary projectile velocity by this value
            idList < idDeclAIGlobalSettings::difficultyFloatTuple_t , TAG_IDLIST , false > projectileSpeedModifiers_primary; // Offset: 0x30

            // multiplies secondary projectile velocity by this value
            idList < idDeclAIGlobalSettings::difficultyFloatTuple_t , TAG_IDLIST , false > projectileSpeedModifiers_secondary; // Offset: 0x48

            // 0.0f implies no accuracy, 1.0 implies full
            idList < idDeclAIGlobalSettings::difficultyDistanceTuple_t , TAG_IDLIST , false > predictionAccuracy; // Offset: 0x60

            // tables mapping target speed to desired accuracy modifier
            idList < idDeclAIGlobalSettings::difficultyTableNameTuple_t , TAG_IDLIST , false > projectileTargetSpeedAccuracyTables; // Offset: 0x78

        }; // Size: 0x90

        struct defensiveModifiers_t
        {
            // multiplies overall health by this value
            idList < idDeclAIGlobalSettings::difficultyFloatTuple_t , TAG_IDLIST , false > healthModifiers; // Offset: 0x0

            // multiplies stagger length by this value
            idList < idDeclAIGlobalSettings::difficultyFloatTuple_t , TAG_IDLIST , false > staggerLengthModifiers; // Offset: 0x18

            // multiplies falter length by this value
            idList < idDeclAIGlobalSettings::difficultyFloatTuple_t , TAG_IDLIST , false > falterLengthModfiers; // Offset: 0x30

            // multiplies any direct damage by this value, if victim is player
            idList < idDeclAIGlobalSettings::difficultyFloatTuple_t , TAG_IDLIST , false > incomingDamageModifiers; // Offset: 0x48

        }; // Size: 0x60

        struct behaviorModifiers_t
        {
            // multiplies animation rate
            idList < idDeclAIGlobalSettings::animationScaleData_t , TAG_IDLIST , false > animRateScales; // Offset: 0x0

            // multiplies number of items dropped by this value
            idList < idDeclAIGlobalSettings::difficultyFloatTuple_t , TAG_IDLIST , false > itemDropAmountModifiers; // Offset: 0x18

        }; // Size: 0x30

        // apply these settings to any entity that is a child of this def, unless a more specific entry exists
        idEntityDefRef parentEntityDef; // Offset: 0x0

        // modifiers affecting damage output
        idDeclAIGlobalSettings::aiDifficultyData_t::offensiveModifers_t offensiveModifiers; // Offset: 0x8

        // modifiers affecting how we react to damage
        idDeclAIGlobalSettings::aiDifficultyData_t::defensiveModifiers_t defensiveModifiers; // Offset: 0x98

        // modifiers dealing with animation and behavior choices
        idDeclAIGlobalSettings::aiDifficultyData_t::behaviorModifiers_t behaviorModifiers; // Offset: 0xF8

    }; // Size: 0x128

    struct snapToCampaignDamageEntry_t
    {
        // the source of the damage in snap
        idDeclDamage* sourceDecl; // Offset: 0x0

        // the target damage in campaign
        idDeclDamage* targetDecl; // Offset: 0x8

    }; // Size: 0x10

    struct aiTypeToNavSize_t
    {
        // type of ai
        aiTypeEnum_t aiType; // Offset: 0x0

        // nav size for this ai
        navSize_t navSize; // Offset: 0x8

    }; // Size: 0x10

    struct buffSettings_t
    {
        // if not DIFFICULTY_NONE, then will only get applied if the current difficulty matches
        gameDifficulty_t difficulty; // Offset: 0x0

        // ai types where ice bomb is allowed
        aiMonsterType_t iceBombAllowedMonsterTypes; // Offset: 0x8

    }; // Size: 0x10

    // test
    idArray < idDeclAIGlobalSettings::tokenDifficultyInfo_t , 44 > tokenData; // Offset: 0x90

    // if true, AI will ignore all token limitations
    bool ignoreTokens; // Offset: 0x610

    // global relationships between AI
    idDeclFactionGraph* factionGraph; // Offset: 0x618

    // list of all entitydef-->difficultydata mappings for the level
    idList < idDeclAIGlobalSettings::aiDifficultyData_t , TAG_IDLIST , false > entityDifficultyMappings; // Offset: 0x620

    // tables to use for distribution of prediction accuracy
    idList < idDeclAIGlobalSettings::difficultyTableNameTuple_t , TAG_IDLIST , false > projectilePredictionTables; // Offset: 0x638

    // tables mapping target speed to desired accuracy modifier
    idList < idDeclAIGlobalSettings::difficultyTableNameTuple_t , TAG_IDLIST , false > projectileTargetSpeedAccuracyTables; // Offset: 0x650

    // defines what nav sizes go with what AI
    idList < idDeclAIGlobalSettings::aiTypeToNavSize_t , TAG_IDLIST , false > aiNavSizes; // Offset: 0x668

    // defines how target prediction logic works
    idDeclAIPredictionKnobs* predictionKnobs; // Offset: 0x680

    // list of stuff that applies to various entitydefs
    idList < entityDefInfo_t , TAG_IDLIST , false > entityDefInfos; // Offset: 0x688

    // Health Direct Damage Splash Damage Attack Speed (animation rate scaler).  Token Usage num of tokens, generation of tokens. Projectile Speed. Stagger/pain recovery. Look at per AI type. Falter recovery speed. Attack recovery speed (per attack). Item drop amount. Prediction when attacking make attacks more/less difficult to dodge.for testing
    idList < traversalGenerationPack_t , TAG_IDLIST , false > traversalGenPacks; // Offset: 0x6A0

    // settings related to spirit possession
    idList < idDeclAIGlobalSettings::buffSettings_t , TAG_DECL , false > spiritPossessionSettings; // Offset: 0x6B8

    // settings related screecher buffs
    idList < idDeclAIGlobalSettings::buffSettings_t , TAG_DECL , false > screecherBuffSettings; // Offset: 0x6D0

}; // Size: 0x6E8
