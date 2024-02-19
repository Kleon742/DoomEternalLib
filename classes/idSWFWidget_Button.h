struct idSWFWidget_Button : idSWFWidget
{
    enum animState_t : int
    {
        ANIM_STATE_UP = 0,
        ANIM_STATE_DOWN = 1,
        ANIM_STATE_OVER = 2,
        ANIM_STATE_DOWN_AND_OVER = 3,
        ANIM_STATE_CUSTOM = 4,
        ANIM_STATE_MAX = 5
    };

    enum buttonState_t : int
    {
        BUTTON_STATE_NORMAL = 0,
        BUTTON_STATE_LOCKED = 1,
        BUTTON_STATE_ACTIVE = 2,
        BUTTON_STATE_MAX = 3
    };

    idSWFWidget_MarqueeText* marqueeText; // Offset: 0x180

    idStr label; // Offset: 0x188

    idStr description; // Offset: 0x1B8

    idMaterial2* icon; // Offset: 0x1E8

    idMaterial2* iconGlow; // Offset: 0x1F0

    bool hideIconOnNullDecl; // Offset: 0x1F8

    bool isComponentIcon; // Offset: 0x1F9

    swfNamedColors_t iconColor; // Offset: 0x1FC

    swfNamedColors_t iconGlowColor; // Offset: 0x200

    idSWFWidget_Button::animState_t animState; // Offset: 0x204

    bool animateRolls; // Offset: 0x208

    bool labelHasTooltip; // Offset: 0x209

    swfEditTextVertAlign_t labelVerticalAlignment; // Offset: 0x20C

    bool animatePress; // Offset: 0x210

    bool playSounds; // Offset: 0x211

    swfSoundType_t activateSound; // Offset: 0x214

    swfSoundType_t holdSound; // Offset: 0x218

    swfSoundType_t holdCancelSound; // Offset: 0x21C

    swfSoundType_t holdCompleteSound; // Offset: 0x220

    swfSoundType_t focusSound; // Offset: 0x224

    swfSoundType_t rollOnSound; // Offset: 0x228

    swfSoundType_t rollOffSound; // Offset: 0x22C

    idSWFWidget_Button::buttonState_t buttonState; // Offset: 0x230

    bool useMarqueeText; // Offset: 0x234

    // Use this if setting the state has a bigger impact than a visible change on a subsprite, e.g. text and border turn red when locked
    bool useCustomStateSprites; // Offset: 0x235

    bool positionWidthIsTextOnly; // Offset: 0x236

    idStr customSpriteName; // Offset: 0x238

    idStr customMarqueeTextName; // Offset: 0x268

    bool showNewIndicator; // Offset: 0x298

}; // Size: 0x2A0
