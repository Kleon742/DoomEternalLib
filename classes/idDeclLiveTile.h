struct idDeclLiveTile : idGameDeclTypeInfo
{
    struct platformActionLocation_t
    {
        // Name of platform (e.g. "steam", "xboxlive", etc), same as online counterpart.
        idStr platformName; // Offset: 0x0

        // Action location for this platform.
        idStr actionLocation; // Offset: 0x30

    }; // Size: 0x60

    // Headline to use for the brief (preview) pane.
    idStrId briefHeadline; // Offset: 0x90

    // Leader text to use for the brief (preview) pane.
    idStrId briefLeader; // Offset: 0x94

    // Image to use for the brief (preview) pane.
    idMaterial2* briefImage; // Offset: 0x98

    // Headline to use for the main article pane.
    idStrId articleHeadline; // Offset: 0xA0

    // Body text to use for the main article pane.
    idStrId articleBody; // Offset: 0xA4

    // Image to use for the main article pane.
    idMaterial2* articleImage; // Offset: 0xA8

    // Layout to use for the main article pane.
    liveTileArticleLayout_t articleLayout; // Offset: 0xB0

    // Delay (in ms) before the player is allowed to interact with the article pane (e.g. dismiss it or select a button)
    idTypesafeTime < int , millisecondUnique_t , 1000 > articleInputDelay; // Offset: 0xB4

    // Action type to use for the main article pane.
    liveTileActionType_t articleActionType; // Offset: 0xB8

    // Action location to use for the main article pane. Not used for STORE article action types (platformActionLoactions is used instead).
    idStr articleActionLocation; // Offset: 0xC0

    // Text alignment to use for the main article body. Defaults to center aligned.
    liveTileArticleBodyAlignment_t articleBodyAlignment; // Offset: 0xF0

    // Set close button text to "NEXT" instead of "OK"
    bool useNextAsCloseButtonText; // Offset: 0xF4

    // Image to use to imitate showing index of pages in multiple live tiles strung together. Leave empty for no image.
    idMaterial2* paginatorImage; // Offset: 0xF8

    // Platform-specific action locations. Used only for STORE article action types.
    idList < idDeclLiveTile::platformActionLocation_t , TAG_IDLIST , false > platformActionLocations; // Offset: 0x100

    // Number of times this live tile can be viewed before it vanishes.
    int viewLimit; // Offset: 0x118

    // Common live tile info struct
    liveTileInfo_t liveTileInfo; // Offset: 0x120

}; // Size: 0x3D0
