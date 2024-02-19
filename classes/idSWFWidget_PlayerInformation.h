struct idSWFWidget_PlayerInformation : idSWFWidget
{
    enum spriteState_t : int
    {
        INVALID = 0,
        NORMAL = 1,
        HIT = 2,
        LOW_HEATH = 3,
        DEATH = 4
    };

    idHUDEvent_MatchInfoUpdate::playerInfo_t currentData; // Offset: 0x180

    idHUDEvent_MatchInfoUpdate::playerInfo_t previousData; // Offset: 0x278

    int respawnPlayer; // Offset: 0x370

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > respawnEndTime; // Offset: 0x378

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > healEndTime; // Offset: 0x380

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > suppressHealAndDeathFXUntilTime; // Offset: 0x388

    int fillFramesPerPip; // Offset: 0x390

    int maxPipsPerBar; // Offset: 0x394

    bool isDemonHud; // Offset: 0x398

    bool isRoundInProgress; // Offset: 0x399

    idSWFWidget_PlayerInformation::spriteState_t currentState; // Offset: 0x39C

}; // Size: 0x3A0
