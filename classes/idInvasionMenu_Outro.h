struct idInvasionMenu_Outro : idMenuElement
{
    enum invasionOutroStageType_t : int
    {
        INVASION_OUTRO_STAGE_LOSERS = 0,
        INVASION_OUTRO_STAGE_WINNERS = 1,
        INVASION_OUTRO_STAGE_SEASON_PROGRESS = 2,
        INVASION_OUTRO_STAGE_PLAYER_PROGRESS = 3,
        INVASION_OUTRO_STAGE_TRIUMPHS = 4,
        NUM_INVASION_OUTRO_STAGES = 5
    };

    idDeclUICustomData_InvasionMenu_Outro* uiData; // Offset: 0x100

    idHUDEvent_InvasionShowOutroScreen eventData; // Offset: 0x108

    idSWFWidget_CharacterPodium* podiums[2]; // Offset: 0x160

    idSWFWidget_PlayerBadge* playerBadges[3]; // Offset: 0x170

    idSWFWidget_EOL_SeasonProgressTally* seasonProgress; // Offset: 0x188

    idSWFWidget_EOL_DoomLevelProgressTally* playerProgress; // Offset: 0x190

    idSWFWidget_Invasion_TriumphProgressTally* triumphProgress; // Offset: 0x198

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stageVisibleDuration[5]; // Offset: 0x1A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stageTotalDuration[5]; // Offset: 0x1C8

    int currentStage; // Offset: 0x1F0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentStageHideTime; // Offset: 0x1F8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextStageShowTime; // Offset: 0x200

}; // Size: 0x208
