struct idDeclProp_HealthComponent : idDeclProp_UseComponent
{
    enum healLimitType_t : int
    {
        HEAL_LIMIT_NONE = 0,
        HEAL_LIMIT_ABSOLUTE = 1,
        HEAL_LIMIT_STARTING = 2,
        HEAL_LIMIT_DRAINLIMIT = 3,
        HEAL_LIMIT_MAX = 4,
        HEAL_LIMIT_MAX_PLUS_OVERAGE = 5
    };

    struct healItem_t
    {
        // Which player health component to heal
        playerHealthComponent_t componentToHeal; // Offset: 0x0

        // the user-friendly name for this health component
        idStrId componentName; // Offset: 0x4

        // Amount to heal
        int amountToHeal; // Offset: 0x8

        // How much bonus healing is applied
        int bonusAmountToHeal; // Offset: 0xC

        // How much armor to give when the 'Extra Protection' hack mod is active
        int extraProtectionArmorBonus; // Offset: 0x10

        // Where to limit healing
        idDeclProp_HealthComponent::healLimitType_t healLimitType; // Offset: 0x14

        // Most we will heal up to for limit absolute, or 0 for no limit (not compatible with overflow)
        int healLimit; // Offset: 0x18

        // Interpret the amount as a percentage or absolute.
        propCountSpecifier_t countSpecifier; // Offset: 0x1C

        // allow healing to spill into player's next component (this is not the same as the next healItem in this array)
        bool overflow; // Offset: 0x20

        // Dont try to overflow, or heal, just set the component to this value.
        bool set; // Offset: 0x21

        // amount to heal when over the max amount
        float healToMaxPlusAmount; // Offset: 0x24

        // amount to charge the blood punch meter if overarmor is full
        float bloodPunchChargeAmount; // Offset: 0x28

        // allows adjusting aspects of this item based on game difficulty level (for items DROPPED by AI)
        idDeclGameDifficulty* gameDifficultyDecl_Dropped; // Offset: 0x30

        // allows adjusting aspects of this item based on game difficulty level (for items placed in the map by LDs)
        idDeclGameDifficulty* gameDifficultyDecl_Pickup; // Offset: 0x38

    }; // Size: 0x40

    // Determines if the health pack can be picked up if the player won't be healed by it.
    bool canBePickedUpIfNoEffect; // Offset: 0x130

    // If positive, this limits how much total health is given across all healItems. 0 gives no limit.
    float totalHealingForAllComponents; // Offset: 0x134

    // All the healing we do.
    idList < idDeclProp_HealthComponent::healItem_t , TAG_IDLIST , false > healItems; // Offset: 0x138

    // codex to give when picking this up.
    idDeclCodexEntry* codex; // Offset: 0x150

    // pickup sound to play when using specific hack modules
    idSoundEvent* overrideSound; // Offset: 0x158

}; // Size: 0x160
