struct idDeclQuakeConModeSettings : idGameDeclTypeInfo
{
    enum quakeConCheerConditionType_t : int
    {
        QUAKECON_CHEER_CONDITION_MAP_STARTING = 0,
        QUAKECON_CHEER_CONDITION_END_OF_LEVEL_SCREEN = 1,
        QUAKECON_CHEER_CONDITION_GLORY_KILL = 2,
        QUAKECON_CHEER_CONDITION_DEMON_INTRO_ANIM = 3,
        QUAKECON_CHEER_CONDITION_DEMON_MULTIKILL = 4,
        QUAKECON_CHEER_CONDITION_SLAYER_DEATH = 5,
        QUAKECON_CHEER_CONDITION_MONEY_BAR_USE = 6,
        QUAKECON_CHEER_CONDITION_WALL_CLIMB_USE = 7,
        QUAKECON_CHEER_CONDITION_BLOOD_PUNCH = 8,
        QUAKECON_CHEER_CONDITION_FLAME_BELCH = 9,
        QUAKECON_CHEER_CONDITION_CHAINSAW = 10,
        QUAKECON_CHEER_CONDITION_CUTSCENES = 11,
        QUAKECON_CHEER_CONDITION_RANDOM_CHEER = 12,
        QUAKECON_CHEER_CONDITION_MEATHOOK = 13,
        QUAKECON_CHEER_CONDITION_AIR_KILL = 14,
        QUAKECON_CHEER_CONDITION_HEADSHOT = 15,
        QUAKECON_CHEER_CONDITION_AUTOMAP_OPEN = 16,
        QUAKECON_CHEER_CONDITION_INTERACTABLE = 17,
        QUAKECON_CHEER_CONDITION_INVALID = 18,
        NUM_QUAKECON_CHEER_CONDITIONS = 19
    };

    struct demonKillEvent_t
    {
        float timeStampMSForKill; // Offset: 0x0

    }; // Size: 0x4

    struct quakeConSoundIndexList_t
    {
        // List of QuakeCon mode sounds for the given index
        idList < idSoundEvent * , TAG_IDLIST , false > quakeConIndexSoundList; // Offset: 0x0

    }; // Size: 0x18

    struct quakeConCondition_t
    {
        // What is the condition type for the QuakeCon cheer
        idDeclQuakeConModeSettings::quakeConCheerConditionType_t conditionType; // Offset: 0x0

        // What is the cooldown rate, in milliseconds, for the QuakeCon cheer. Negative values means there is no cooldown
        float cheerCooldownMS; // Offset: 0x4

        // If the cheers escalate, what is the cooldown rate for the next level up cheer to play. Each chain occurrence also resets the cheerCooldownMS value. Negative value means do not use
        float cheerChainCooldownMS; // Offset: 0x8

        // Cooldown per unique glory kill, only relevant to QUAKECON_CHEER_CONDITION_GLORY_KILL
        idTypesafeTime < int , millisecondUnique_t , 1000 > cheerIndividualGKCooldown; // Offset: 0xC

        // Each time a chain cooldown is applied, this number will be multiplied by the chain cooldown amount. Use value 1.0f for no change. This value cannot be negative
        float cheerChainCooldownDecayCoefficient; // Offset: 0x10

        // If this is set and a given quakeCon soundindex has more than one sound, a random one will be selected. If not, it will progress naturally through the list
        bool shouldPlayRandomCheer; // Offset: 0x14

        // Associated Quakecon sounds for this condition type
        idList < idDeclQuakeConModeSettings::quakeConSoundIndexList_t , TAG_IDLIST , false > quakeconAssociatedSounds; // Offset: 0x18

        float remainingCooldownMS; // Offset: 0x30

        float lastChainCooldownMS; // Offset: 0x34

        float currentChainCooldownMS; // Offset: 0x38

        int currentIndexValue; // Offset: 0x3C

        int currentInnerIndexValue; // Offset: 0x40

    }; // Size: 0x48

    // Full list of conditions that can produce QuakeCon cheers when the QuakeCon Mode is activated as a Cheat Code
    idList < idDeclQuakeConModeSettings::quakeConCondition_t , TAG_IDLIST , false > quakeConConditionList; // Offset: 0x90

    // How many demons must be killed within the time interval specified for a multi-kill to be triggered
    int demonCountForMultiKillTrigger; // Offset: 0xA8

    // How long is the interval, in milliseconds, for demon multi-kills
    float demonMultiKillIntervalMS; // Offset: 0xAC

    // Floor value, in ms, for the random cheer interval
    float randomCheerFloorMS; // Offset: 0xB0

    // Ceiling value, in ms, for the random cheer interval. This value must always be larger than the min
    float randomCheerCeilingMS; // Offset: 0xB4

    // Global cooldown for all cheers. Negative number means no cooldown
    float cheerGlobalCooldownMS; // Offset: 0xB8

}; // Size: 0xC0
