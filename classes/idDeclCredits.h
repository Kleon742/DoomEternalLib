struct idDeclCredits : idGameDeclTypeInfo
{
    enum creditStyle_t : int
    {
        CREDIT_STYLE_CAMPAIGN = 0,
        CREDIT_STYLE_BASIC = 1
    };

    enum creditType_t : int
    {
        CREDIT_INVALID = 0,
        CREDIT_HEADING = 1,
        CREDIT_SUBHEADING = 2,
        CREDIT_SINGLE = 3,
        CREDIT_DOUBLE = 4,
        CREDIT_IMAGE = 5,
        CREDIT_PARAGRAPH = 6,
        CREDIT_SPACER = 7
    };

    struct creditInfo_t
    {
        // type of credit (e.g. header, double line, single line, etc.)
        idDeclCredits::creditType_t creditType; // Offset: 0x0

        // text value to be displayed, not localized.
        idStr text; // Offset: 0x8

        // text value to be displayed on the right side, not localized. Only used for double columns.
        idStr textRight; // Offset: 0x38

        // Image to be displayed
        idMaterial2* image; // Offset: 0x68

    }; // Size: 0x70

    // display style for credits
    idDeclCredits::creditStyle_t style; // Offset: 0x90

    // cinematics (binks) to play before rolling credits
    idList < const idMaterial2 * , TAG_IDLIST , false > cinematics; // Offset: 0x98

    // text credit lines
    idList < idDeclCredits::creditInfo_t , TAG_IDLIST , false > credits; // Offset: 0xB0

    // start event for credits music
    idSoundState* creditsSoundStart; // Offset: 0xC8

    // stop event for credits music
    idSoundState* creditsSoundStop; // Offset: 0xD0

    // Music switch to execute when starting credits
    idSoundSwitch* creditsStartMusicSwitch; // Offset: 0xD8

    // Music to play when ending starting
    idStr creditsStartMusicName; // Offset: 0xE0

    // Music switch to execute when ending credits
    idSoundSwitch* creditsEndMusicSwitch; // Offset: 0x110

    // Music to play when ending credits
    idStr creditsEndMusicName; // Offset: 0x118

    // time, in ms, after credits scroll has ended to wait before closing the screen
    idTypesafeTime < int , millisecondUnique_t , 1000 > afterCreditsDelay; // Offset: 0x148

}; // Size: 0x150
