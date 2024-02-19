struct idInvasionMenu_Versus : idMenuElement
{
    enum invasionVersusStageType_t : int
    {
        INVASION_VERSUS_STAGE_ROLL_ON = 0,
        INVASION_VERSUS_STAGE_VS_ANIMATION = 1,
        INVASION_VERSUS_STAGE_TRIUMPHS = 2,
        INVASION_VERSUS_STAGE_ROLL_OFF = 3,
        NUM_INVASION_VERSUS_STAGES = 4
    };

    idDeclUICustomData_InvasionMenu_Versus* uiData; // Offset: 0x100

    idHUDEvent_InvasionShowIntro eventData; // Offset: 0x108

    idSWFWidget* versusMain; // Offset: 0x180

    idSWFWidget* versusText; // Offset: 0x188

    idSWFWidget_PlayerBadge* slayerPlayerBadge; // Offset: 0x190

    idSWFWidget_PlayerBadge* demonPlayerBadge[2]; // Offset: 0x198

    idSWFWidget_Invasion_TriumphProgressTally* triumphs; // Offset: 0x1A8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stageVisibleDuration[4]; // Offset: 0x1B0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stageTotalDuration[4]; // Offset: 0x1D0

    int currentStage; // Offset: 0x1F0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentStageHideTime; // Offset: 0x1F8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextStageShowTime; // Offset: 0x200

    bool playerFrozen; // Offset: 0x208

}; // Size: 0x210
