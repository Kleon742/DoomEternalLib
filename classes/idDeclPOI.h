struct idDeclPOI : idGameDeclTypeInfo
{
    struct poiLerpInfo_t
    {
        // How long should the lerp take in milliseconds
        int durationMS; // Offset: 0x0

        // The location to lerp from/to
        idVec2 origin; // Offset: 0x4

        // Use lockon value as the lerp amount;
        bool useLockonValue; // Offset: 0xC

        // Use compass position as the lerp origin;
        bool useCompassPosition; // Offset: 0xD

        // lerp before hide, instead of on show.
        bool beforeHide; // Offset: 0xE

        // only lerp position, not frames.
        bool positionOnly; // Offset: 0xF

        // easing function to use when "l"erping. defaults to easeOutSine if not specified.
        idStr easeFunction; // Offset: 0x10

    }; // Size: 0x40

    // sprite path to use.
    idList < idStr , TAG_IDLIST , false > spritePath; // Offset: 0x90

    // sprite path to use for the compass.
    idList < idStr , TAG_IDLIST , false > compassSpritePath; // Offset: 0xA8

    // tag to use for position on-screen
    idStr onScreenTag; // Offset: 0xC0

    // tag to use for positioning off-screen
    idStr offScreenTag; // Offset: 0xF0

    // min distance at which it can be seen.
    float minViewDistance; // Offset: 0x120

    // max distance at which it can be seen. ( -1 = far clip )
    float maxViewDistance; // Offset: 0x124

    // smallest it can get on screen.
    float minDistanceScale; // Offset: 0x128

    // largest it can get on screen.
    float maxDistanceScale; // Offset: 0x12C

    // true to display POI on the compass.
    bool showOnCompass; // Offset: 0x130

    // wait until the in-world POI is hidden before showing it on the compass. Variable name sucks. :P
    bool compassWait; // Offset: 0x131

    // How many milliseconds to display
    int displayTime; // Offset: 0x134

    // How long to fade out after its been displayed
    int fadeOutTime; // Offset: 0x138

    // If within this distance, always show the POI even if it has surpassed its displaytime
    float alwaysOnDistance; // Offset: 0x13C

    // Should we draw this POI when off-screen?
    bool drawOffScreen; // Offset: 0x140

    // Does this POI have a special animation frame to use when off-screen?
    bool useOffScreenAnim; // Offset: 0x141

    // If true, only show the closest POI of this type.
    bool drawClosestOnly; // Offset: 0x142

    // If true, hide this POI during cinematics.
    bool hideDuringCinematics; // Offset: 0x143

    // Information on lerping (or null for no lerp)
    idDeclPOI::poiLerpInfo_t lerpInfo; // Offset: 0x148

    // sound to play on flourish
    idSoundEvent* onShowSound; // Offset: 0x188

    // should this POI appear in the automap?
    bool showOnAutomap; // Offset: 0x190

    // should this POI appear in limited HUD mode?
    bool showOnLimitedHud; // Offset: 0x191

    // is this POI a timer?
    bool isTimer; // Offset: 0x192

    // number of frames timer uses
    int timerFrameCount; // Offset: 0x194

    // image to use for generic poi
    idMaterial2* iconImg; // Offset: 0x198

    // color to use for generic poi
    swfNamedColors_t iconColor; // Offset: 0x1A0

    // used to apply an offset to the POI in world space.
    idVec3 worldOffset; // Offset: 0x1A4

    // hard cutoff for showing icon in case where we don't want it to scale
    float cutoffDistance; // Offset: 0x1B0

    // color for chevron if it's different from the rest of the POI
    swfNamedColors_t chevronColor; // Offset: 0x1B4

    // bool to determine whether offscreen_rotation layer of a POI icon should be a different color. Added for dark lord danger close.
    bool setDifferentChevronColor; // Offset: 0x1B8

    // Color for glow. If not set, default to iconColor.
    swfNamedColors_t glowColor; // Offset: 0x1BC

}; // Size: 0x1C0
