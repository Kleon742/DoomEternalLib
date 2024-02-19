struct idHUDEvent_DemonAbilityUpdate
{
    struct demonDeckInfo_t
    {
        struct demonCardInfo_t
        {
            idDeclDemonCard* card; // Offset: 0x0

            // 0-1
            float cardCooldownPercent; // Offset: 0x8

            float cardSummonHealth; // Offset: 0xC

            // 0-1
            float cardDuration; // Offset: 0x10

            int cardLevel; // Offset: 0x14

            int cardResourceCost; // Offset: 0x18

            int cardCoolDownTime; // Offset: 0x1C

            // -1 uses resources, >= 0 usage is based on number of spawned demons in world
            int spawnCountLimit; // Offset: 0x20

            // number alive in world
            int spawnCountAlive; // Offset: 0x24

            bool hasResources; // Offset: 0x28

            bool dealtDamageThisFrame; // Offset: 0x29

            bool tookDamageThisFrame; // Offset: 0x2A

            bool useFailedThisFrame; // Offset: 0x2B

            // currently only used with DCC_QUICKUSE_3
            bool isActive; // Offset: 0x2C

            bool outOfUses; // Offset: 0x2D

            bool isChargingUp; // Offset: 0x2E

            demonCardArchetype_t archType; // Offset: 0x30

            // only set for cards that require it
            cmdGenButton_t button; // Offset: 0x34

            bindSet_t bindset; // Offset: 0x38

        }; // Size: 0x40

        idHUDEvent_DemonAbilityUpdate::demonDeckInfo_t::demonCardInfo_t cards[10]; // Offset: 0x0

        int numCards; // Offset: 0x280

        int activeCard; // Offset: 0x284

        // Pip Meter info
        int maxPips; // Offset: 0x288

        int numReservedPips; // Offset: 0x28C

        int numUsablePips; // Offset: 0x290

        // 0-1
        float pipMeterPercent; // Offset: 0x294

        // Team Supermeter
        float teamSupermeterPercent; // Offset: 0x298

    }; // Size: 0x2A0

    idHUDEvent_DemonAbilityUpdate::demonDeckInfo_t info; // Offset: 0x0

}; // Size: 0x2A0
