struct idDeclAIVoiceOver : idDeclTypeInfo
{
    enum aiVoiceOverCategory_t : int
    {
        DEATH = 0,
        DEATH_LONG = 1,
        PAIN = 2,
        MELEE = 3,
        CALL_FOR_REINFORCEMENTS = 4,
        SPAWN_IN = 5,
        THROW_ATTACK = 6,
        THROW_ATTACK_SPECIAL = 7,
        CHARGE = 8,
        CHATTER = 9,
        ENEMY_LOST = 10,
        JUMP = 11,
        JUMP_LAND = 12,
        LUNGE = 13,
        RESPOND = 14,
        TRILL_NOTARGET = 15,
        ROAR = 16,
        ROAR_LONG = 17,
        ATTACK = 18,
        ANGER = 19,
        RAGE = 20,
        PAIN_GLORY_KILL = 21,
        DEATH_GLORY_KILL = 22,
        ALERT = 23,
        ALERT_CIN = 24,
        SWING = 25,
        CATEGORY_MAX = 26
    };

    struct aiVoiceOverCategoryInfo_t
    {
        // shader to play
        idSoundEvent* soundEvent; // Offset: 0x0

        // category type (don't change)
        idDeclAIVoiceOver::aiVoiceOverCategory_t categoryType; // Offset: 0x8

        // Whether this VO needs to be played
        bool essential; // Offset: 0xC

    }; // Size: 0x10

    // list of VO categories defined for this AI
    idArray < idDeclAIVoiceOver::aiVoiceOverCategoryInfo_t , 26 > categories; // Offset: 0x88

}; // Size: 0x228
