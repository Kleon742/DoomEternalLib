struct idDeclUIAnchor : idDeclTypeInfo
{
    enum anchorProfile_t : int
    {
        ANCHOR_PROFILE_4K = 0,
        ANCHOR_PROFILE_1080 = 1,
        ANCHOR_PROFILE_720 = 2,
        ANCHOR_PROFILE_NUM = 3
    };

    struct uiAnchor_t
    {
        // The offset to use for a swf drawn with this anchor
        idVec2 offset; // Offset: 0x0

        // The scale to draw the swf at with this anchor
        float scale; // Offset: 0x8

    }; // Size: 0xC

    // The anchor to use for 720 resolution
    idDeclUIAnchor::uiAnchor_t anchor720; // Offset: 0x88

    // The anchor to use for 1080 resolution
    idDeclUIAnchor::uiAnchor_t anchor1080; // Offset: 0x94

    // The anchor to use for 4K resolution
    idDeclUIAnchor::uiAnchor_t anchor4k; // Offset: 0xA0

}; // Size: 0xB0
