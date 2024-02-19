struct idHUDMenu_PVPEndOfMatch : idHUDElement
{
    enum endOfMatchStage_t : int
    {
        END_OF_MATCH_STAGE_NONE = -1,
        END_OF_MATCH_STAGE_RESULT = 0,
        END_OF_MATCH_STAGE_REWARDS = 1,
        NUM_END_OF_MATCH_STAGES = 2
    };

    struct deferredEvent_t
    {
        enum type_t : int
        {
            INVALID = -1,
            SHOW_VIDEO = 0
        };

        idHUDMenu_PVPEndOfMatch::deferredEvent_t::type_t eventType; // Offset: 0x0

        idMaterial2* video; // Offset: 0x8

    }; // Size: 0x10

    idHUDMenu_PVPEndOfMatch::endOfMatchStage_t stageToStart; // Offset: 0xF8

    idHUDMenu_PVPEndOfMatch_Stage_MatchResult* stageMatchResult; // Offset: 0x100

    idHUDMenu_PVPEndOfMatch_Stage_Rewards* stageMatchRewards; // Offset: 0x108

    idSWFWidget_PlayerBadge* playerBadge; // Offset: 0x110

    idSWFWidget* background; // Offset: 0x118

    idSWFWidget_CommandBar* commandBar; // Offset: 0x120

    idHUDMenu_PVPEndOfMatch_Stage* currentStage; // Offset: 0x128

    int lastSeasonXP; // Offset: 0x130

    bool canTransitionStages; // Offset: 0x134

    asyncio::idTaskResultPtr < bool , bool > seasonProgressUpdate; // Offset: 0x138

    int seasonProgressRetryAttempts; // Offset: 0x140

    idList < idHUDMenu_PVPEndOfMatch::deferredEvent_t , TAG_IDLIST , false > deferredProcessingQueue; // Offset: 0x148

}; // Size: 0x160
