struct idHUD_BossVitals : idHUDElement
{
    enum updateState_t : int
    {
        UPDATE_INITIAL = 0,
        UPDATE_QUEUED = 1,
        UPDATE_NEEDED = 2
    };

    struct bossData_t
    {
        struct barData_t
        {
            enum barType_t : int
            {
                HEALTHBAR_PRIMARY = 0,
                HEALTHBAR_SECONDARY = 1
            };

            enum barState_t : int
            {
                STATE_NORMAL = 0,
                STATE_INVULN = 1,
                STATE_DEAD = 2,
                STATE_REGEN = 3,
                STATE_GKABLE = 4
            };

            idHUD_BossVitals::bossData_t::barData_t::barType_t barType; // Offset: 0x0

            idSWFWidget* barWidget; // Offset: 0x8

            idSWFWidget* fillSprite; // Offset: 0x10

            idSWFWidget* drainSprite; // Offset: 0x18

            idList < idSWFWidget * , TAG_IDLIST , false > pipSprites; // Offset: 0x20

            float previousHealth; // Offset: 0x38

            float previousDrain; // Offset: 0x3C

            bool previousVulnerable; // Offset: 0x40

            bool previousIsDead; // Offset: 0x41

            int previousStage; // Offset: 0x44

            int previousShieldCount; // Offset: 0x48

            bool isHealthRegenAnimating; // Offset: 0x4C

            bool previousGloryKillable; // Offset: 0x4D

            idTypesafeTime < long long , gameTimeUnique_t , 999960 > drainTime; // Offset: 0x50

            idHUD_BossVitals::bossData_t::barData_t::barState_t state; // Offset: 0x58

            int previousNumPips; // Offset: 0x5C

        }; // Size: 0x60

        struct shieldData_t
        {
            int shieldID; // Offset: 0x0

            idSWFWidget* rootShieldWidget; // Offset: 0x8

            idList < idSWFWidget * , TAG_IDLIST , false > shieldWidgets; // Offset: 0x10

        }; // Size: 0x28

        idList < idHUD_BossVitals::bossData_t::barData_t , TAG_IDLIST , false > barDatum; // Offset: 0x0

        idList < idHUD_BossVitals::bossData_t::shieldData_t , TAG_IDLIST , false > shieldDatum; // Offset: 0x18

        int bossType; // Offset: 0x30

        idSWFWidget* rootWidget; // Offset: 0x38

        idSWFWidget* vitalsWidget; // Offset: 0x40

        idSWFWidget* healWidget; // Offset: 0x48

        idSWFWidget* iconWidget; // Offset: 0x50

        idSWFWidget* stageWidget; // Offset: 0x58

        idSWFWidget* stage0Widget; // Offset: 0x60

        idSWFWidget* stage1Widget; // Offset: 0x68

        bool forceSpriteRefresh; // Offset: 0x70

    }; // Size: 0x78

    idList < idHUD_BossVitals::bossData_t , TAG_IDLIST , false > bossDatum; // Offset: 0xF8

    int currentDatumIndex; // Offset: 0x110

    idHUD_BossVitals::updateState_t queuedUpdate; // Offset: 0x114

    bool bossGainedHealth; // Offset: 0x118

}; // Size: 0x120
