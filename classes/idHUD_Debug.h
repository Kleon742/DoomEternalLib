struct idHUD_Debug : idHUDElement
{
    struct notificationData_t
    {
        idStr text; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > killTime; // Offset: 0x30

        bool fullscreen; // Offset: 0x38

    }; // Size: 0x40

    struct elementData_t
    {
        idStr name; // Offset: 0x0

        float x; // Offset: 0x30

        float y; // Offset: 0x34

        float width; // Offset: 0x38

        float height; // Offset: 0x3C

        float prct; // Offset: 0x40

        idColor frameColor; // Offset: 0x44

        idColor barColor; // Offset: 0x54

        idStr barText; // Offset: 0x68

        bool visible; // Offset: 0x98

    }; // Size: 0xA0

    struct pvpMatchStartData_t
    {
        bool showPVPMatchStart; // Offset: 0x0

        bool localPlayerReady; // Offset: 0x1

        bool allOtherPlayersReady; // Offset: 0x2

    }; // Size: 0x3

    idStr overlayMaterialName; // Offset: 0xF8

    float berzerkPowerupRemainingPct; // Offset: 0x128

    float cruciblePowerupRemainingPct; // Offset: 0x12C

    float overdrivePowerupRemainingPct; // Offset: 0x130

    float onslaughtPowerupRemainingPct; // Offset: 0x134

    float bloodFueledRemainingPct; // Offset: 0x138

    float groundslamRemainingPct; // Offset: 0x13C

    float flameBelchRemainingPct; // Offset: 0x140

    bool cruciblePowerupMeterShow; // Offset: 0x144

    float sonicBoostPct; // Offset: 0x148

    float slowMoTimerPct; // Offset: 0x14C

    float demonAbilityButtonHold; // Offset: 0x150

    float jetPackPct; // Offset: 0x154

    bool jetPackAboveMin; // Offset: 0x158

    idList < idHUD_Debug::notificationData_t , TAG_IDLIST , false > debugNotificationData; // Offset: 0x160

    idList < idHUD_Debug::elementData_t , TAG_IDLIST , false > debugElementData; // Offset: 0x178

    idHUD_Debug::pvpMatchStartData_t pvpMatchStartData; // Offset: 0x190

    bool pvpDeathShow; // Offset: 0x193

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pvpDeathEndTime; // Offset: 0x198

    bool pvpMatchEndShow; // Offset: 0x1A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pvpMatchEndEndTime; // Offset: 0x1A8

    bool pvpMatchEndSlayerVictory; // Offset: 0x1B0

    bool pvpMatchEndLocalIsSlayer; // Offset: 0x1B1

}; // Size: 0x1B8
