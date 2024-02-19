struct idHUDEvent_BossBarShow
{
    enum bossType_t : int
    {
        BOSS_INVALID = -1,
        BOSS_GENERIC = 0,
        BOSS_CYBERDEMON = 1,
        BOSS_GUARDS = 2,
        BOSS_SPIDER = 3,
        BOSS_GLADIATOR = 4,
        BOSS_KHAN_MAYKR = 5,
        BOSS_ICON_OF_SIN = 6,
        BOSS_SAMUEL = 7,
        BOSS_DARK_LORD = 8,
        BOSS_DOOM_HUNTER = 9
    };

    struct bossBarShowData_t
    {
        idHUDEvent_BossBarShow::bossType_t bossType; // Offset: 0x0

        float totalHealth; // Offset: 0x4

        float totalHealth2; // Offset: 0x8

        float currentHealth; // Offset: 0xC

        float currentHealth2; // Offset: 0x10

        float currentDrain; // Offset: 0x14

        bool vulnerable; // Offset: 0x18

        bool isGKActive; // Offset: 0x19

        bool isDead; // Offset: 0x1A

        int stage; // Offset: 0x1C

        int index; // Offset: 0x20

        int shieldCount; // Offset: 0x24

        swfNamedColors_t color; // Offset: 0x28

        swfNamedColors_t iconColor; // Offset: 0x2C

    }; // Size: 0x30

    idHUDEvent_BossBarShow::bossBarShowData_t info; // Offset: 0x0

}; // Size: 0x30
