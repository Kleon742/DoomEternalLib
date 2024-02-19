struct guiComponentCommand_t
{
    enum guiCommand_t : int
    {
        SPRITE_PLAY_FRAME = 0,
        SPRITE_STOP_FRAME = 1,
        SPRITE_HIDE = 2,
        SPRITE_SHOW = 3,
        SPRITE_SET_TEXT = 4,
        SPRITE_SET_DYNAMIC_TEXT = 5,
        SPRITE_SET_VAR = 6
    };

    struct guiCommandVar_t
    {
        // The name of the variable to set
        idAtomicString variableName; // Offset: 0x0

        // The text value to set the variable to
        idAtomicString valueText; // Offset: 0x8

    }; // Size: 0x10

    // Used to specify the variable parms for the SPRITE_SET_VAR command Type of command.
    guiComponentCommand_t::guiCommand_t commandType; // Offset: 0x0

    // sprite path to use.
    idList < idAtomicString , TAG_IDLIST , false > spritePath; // Offset: 0x8

    // frame to use.
    int frame; // Offset: 0x20

    // frame label to use.
    idAtomicString frameLabel; // Offset: 0x28

    // Index of the screen.
    int screenIndex; // Offset: 0x30

    // type of screen transition.
    menuTransitionType_t screenTransition; // Offset: 0x34

    // text to set.
    idStrId text; // Offset: 0x38

    // the dynamic text to set
    idStr dynamicText; // Offset: 0x40

    // Time we called for execution.
    int time; // Offset: 0x70

    // Used to specify the variable parms for the SPRITE_SET_VAR command
    guiComponentCommand_t::guiCommandVar_t commandVariable; // Offset: 0x78

}; // Size: 0x88
