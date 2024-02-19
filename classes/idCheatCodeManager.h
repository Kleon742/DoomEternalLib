struct idCheatCodeManager : idClass
{
    enum idCheatCodesTypes_t : int
    {
        CHEAT_CODE_TYPE_INVALID = -1,
        CHEAT_CODE_TYPE_INFINITE_EXTRA_LIVES = 0,
        CHEAT_CODE_TYPE_SENTINEL_ARMOR = 1,
        CHEAT_CODE_TYPE_ONE_SHOT_STAGGER = 2,
        CHEAT_CODE_TYPE_ALL_MASTERED_RUNES = 3,
        CHEAT_CODE_TYPE_INFINITE_AMMO = 4,
        CHEAT_CODE_TYPE_ALL_MASTERED_WEAPONS_AND_EQUIPMENT = 5,
        CHEAT_CODE_TYPE_POWERUP_INFINITE_DURATION_ONSLAUGHT = 6,
        CHEAT_CODE_TYPE_ONE_SHOT_KILL_ON_STAGGER = 7,
        CHEAT_CODE_TYPE_FULLY_UPGRADED_PROGRESSION_WHEEL = 8,
        CHEAT_CODE_TYPE_POWERUP_INFINITE_DURATION_OVERDRIVE = 9,
        CHEAT_CODE_TYPE_DEMONS_DROP_NO_HEALTH_ARMOR = 10,
        CHEAT_CODE_TYPE_CONFETTI = 11,
        CHEAT_CODE_TYPE_POWERUP_INFINITE_DURATION_BERSERK = 12,
        CHEAT_CODE_TYPE_QUAKECON_MODE = 13,
        MAX_CHEAT_CODE_TYPES = 14
    };

    struct idCheatCodeData_t
    {
        idCheatCodeManager::idCheatCodesTypes_t cheatCodeType; // Offset: 0x0

        idDeclCheatCodesSKUBitFlags_t cheatCodeSKU; // Offset: 0x4

        bool isUnlocked; // Offset: 0x8

        bool isActivated; // Offset: 0x9

        bool disabledDueToDifficulty; // Offset: 0xA

        bool unlockedDueToCommand; // Offset: 0xB

    }; // Size: 0xC

    struct gloryKillDate_t
    {
        unsigned long long syncResourceID; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > removeTime; // Offset: 0x8

    }; // Size: 0x10

    // Keep track of our last few glory kills
    idList < idCheatCodeManager::gloryKillDate_t , TAG_IDLIST , false > gloryKillList; // Offset: 0x10

    idStr saveDataSectionBaseID; // Offset: 0x28

    idCheatCodeManager::idCheatCodeData_t cheatCodes[14]; // Offset: 0x58

    idCheatCodeManager::idCheatCodeData_t cacheDactiveatedCheatCodes[14]; // Offset: 0x100

    bool cheatsHaveBeenAppliedPostSaveComplete; // Offset: 0x1A8

    bool cheatsHaveBeenAppliedOnPlayerSpawn; // Offset: 0x1A9

    idList < const idDeclWeapon * , TAG_IDLIST , false > weaponsGrantedByCheatCodes; // Offset: 0x1B0

    idList < const idDeclPerk * , TAG_IDLIST , false > weaponPerksGrantedByCheatCodes; // Offset: 0x1C8

    idList < const idDeclInventory * , TAG_IDLIST , false > equipmentItemsGrantedByCheatCodes; // Offset: 0x1E0

    idList < idPair < gameStat_t , int > , TAG_IDLIST , false > statsGrantedByCheatCodes; // Offset: 0x1F8

    idList < const idPerkFamily * , TAG_IDLIST , false > perkFamiliesProgressionLockedByCheatCodes; // Offset: 0x210

    idDeclQuakeConModeSettings* quakeConSettingsDecl; // Offset: 0x228

    idList < idDeclQuakeConModeSettings::quakeConCondition_t , TAG_IDLIST , false > quakeConConditionList; // Offset: 0x230

    idDeclQuakeConModeSettings::demonKillEvent_t demonKillEventHistory[CheatCodesConstants::CHEAT_CODES_DEMON_KILL_BUFFER_SIZE]; // Offset: 0x248

    float nextRandomCheerTimeMS; // Offset: 0x270

    float currentGlobalCheerCooldownMS; // Offset: 0x274

    // These are mutable as this class is intended to not to be bit-wise const The user does not care of the value for these two variables below
    idStr currentMapToCheck; // Offset: 0x278

    bool currentMapIsCompleted; // Offset: 0x2A8

    bool cheatCodesAreGloballyUnlocked; // Offset: 0x2A9

    bool applyingCheatCodes; // Offset: 0x2AA

    bool cheatCodesDisablingInteractions; // Offset: 0x2AB

    bool automaticallyUnlockAllCheatCodes; // Offset: 0x2AC

}; // Size: 0x2B0
