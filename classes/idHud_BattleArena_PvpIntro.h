struct idHud_BattleArena_PvpIntro : idMenuElement
{
    struct deferredEvent_t
    {
        enum type_t : int
        {
            INVALID = -1,
            SHOW_PLAYER_CARD = 0,
            HIDE_PLAYER_CARD = 1,
            SHOW_VIDEO = 2
        };

        idHud_BattleArena_PvpIntro::deferredEvent_t::type_t eventType; // Offset: 0x0

        int slot; // Offset: 0x4

        idMaterial2* video; // Offset: 0x8

    }; // Size: 0x10

    idSWFWidget_PlayerBadge* playerBadge; // Offset: 0x100

    idList < idHud_BattleArena_PvpIntro::deferredEvent_t , TAG_IDLIST , false > deferredProcessingQueue; // Offset: 0x108

}; // Size: 0x120
