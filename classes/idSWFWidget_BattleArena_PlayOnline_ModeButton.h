struct idSWFWidget_BattleArena_PlayOnline_ModeButton : idSWFWidget_Button
{
    enum ButtonType_t : int
    {
        BUTTON_TYPE_INVALID = -1,
        BUTTON_TYPE_QUICK_PLAY = 0,
        BUTTON_TYPE_SLAYER = 1,
        BUTTON_TYPE_SINGLE_DEMON = 2,
        BUTTON_TYPE_DUAL_DEMON = 3,
        BUTTON_TYPE_PRIVATE_LOBBY = 4,
        BUTTON_TYPE_INVADE_RANDOM = 5,
        BUTTON_TYPE_INVADE_FRIEND = 6,
        ENUM_COUNT = 7
    };

    idSWFWidget_BattleArena_PlayOnline_ModeButton::ButtonType_t buttonType; // Offset: 0x2A0

    bool spinnerEnabled; // Offset: 0x2A4

}; // Size: 0x2A8
