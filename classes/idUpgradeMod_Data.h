struct idUpgradeMod_Data : idUpgradeMod
{
    enum dataModType_t : int
    {
        DMT_ENV_SUIT_HEALTH = 0,
        DMT_PROJECTILE_DECL = 1,
        DMT_DAMAGE_DECL = 2,
        DMT_TIME_SCALER = 3,
        DMT_STATUSEFFECT_BERSERK_EXTEND_DURATION = 4,
        DMT_STATUSEFFECT_BERSERK_EXTEND_DURATION_PERKILL = 5,
        DMT_STATUSEFFECT_BERSERK_EXTEND_DURATION_PERKILL_MAX = 6,
        DMT_STATUSEFFECT_BERSERK_EXTEND_DURATION_PERKILL_TABLE = 7,
        DMT_STATUSEFFECT_BERSERK_DAMAGE_REDUCTION = 8,
        DMT_STATUSEFFECT_SLOWMO_EXTEND_DURATION = 9,
        DMT_STATUSEFFECT_SLOWMO_HEADSHOT_MULTIPLIER = 10,
        DMT_NUM_ALLOWED_PERKS_ACTIVE = 11,
        DMT_HEALTH_CAPACITY = 12,
        DMT_ARMOR_CAPACITY = 13,
        DMT_ARMOR_COEFFICIENT = 14,
        DMT_ADRENALINE_CAPACITY = 15,
        DMT_DAMAGE_OUTPUT = 16,
        DMT_MAX_NUM_MODS = 17
    };

    // data modification type
    idUpgradeMod_Data::dataModType_t type; // Offset: 0x8

    // operator type
    upgradeModOperator_t opType; // Offset: 0xC

    // value to use for this data mod
    upgradeDataValue_t data; // Offset: 0x10

}; // Size: 0x88
