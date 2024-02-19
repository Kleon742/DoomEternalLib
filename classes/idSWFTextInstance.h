struct idSWFTextInstance
{
    struct tooltipIcon_t
    {
        int startIndex; // Offset: 0x0

        int endIndex; // Offset: 0x4

        int tooltipImageId; // Offset: 0x8

    }; // Size: 0xC

    // Removing the private access control statement due to cl 214702 Apparently MS's C++ compiler supports the newer C++ standard, and GCC supports C++03 In the new C++ standard, nested members of a friend class have access to private/protected members of the class granting friendship In C++03, nested members defined in a friend class do NOT have access to private/protected members of the class granting friendship  name of this text instance
    idAtomicString name; // Offset: 0x0

    int fullPathHash; // Offset: 0x8

    // this text instance's script object
    idSWFScriptText* scriptObject; // Offset: 0x10

    // swf this text instance is from
    idSWF* swf; // Offset: 0x18

    // pointer to a dictionary entry in the swf
    idSWFEditText* editText; // Offset: 0x20

    // parent sprite instance (should never be NULL)
    idSWFSpriteInstance* parent; // Offset: 0x28

    // depth of this text instance in the parent's display list
    int depth; // Offset: 0x30

    // ---
    bool forceAutoSize; // Offset: 0x34

    // font size override; if non-zero, this is used instead of the info from the font
    float fontSizeOverride; // Offset: 0x38

    idStr text; // Offset: 0x40

    idStr randomtext; // Offset: 0x70

    idStr variable; // Offset: 0xA0

    swfColorRGBA_t color; // Offset: 0xD0

    unsigned long long cachedTooltipHash; // Offset: 0xD8

    idStr cachedToolTipText; // Offset: 0xE0

    idList < idSWFTextInstance::tooltipIcon_t , TAG_SWF , false > tooltipIconList; // Offset: 0x110

    bool visible; // Offset: 0x128

    bool tooltip; // Offset: 0x129

    // When doing tooltip replacement, replace only images, not keyboard names.
    bool tooltipOnlyReplacesImages; // Offset: 0x12A

    // when true, will only show a max of 1 keybind per tooltip text, even if there are more
    bool tooltipShowsOnlyFirstBind; // Offset: 0x12B

    // If set, tooltip replacement will target this platform
    swfPlatform_t tooltipPlatform; // Offset: 0x12C

    int bindset; // Offset: 0x130

    // horizontal alignment - defaults to what the editText is set to
    swfEditTextAlign_t hAlignment; // Offset: 0x134

    // vertical alignment - must be set from code
    swfEditTextVertAlign_t vAlignment; // Offset: 0x138

    int selectionStart; // Offset: 0x13C

    int selectionEnd; // Offset: 0x140

    int scroll; // Offset: 0x144

    int scrollTime; // Offset: 0x148

    int maxscroll; // Offset: 0x14C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastInputTime; // Offset: 0x150

    bool shiftHeld; // Offset: 0x158

    // ignore scaling for asian languages
    bool skipAsianScaling; // Offset: 0x159

    // whether we will allow the player to input newlines in this text field
    bool allowNewlineInput; // Offset: 0x15A

    bool neverPlatformCache; // Offset: 0x15B

    swfUsedFonts_t fontType; // Offset: 0x15C

    // if we want to switch out the font in code, which font do we want to switch it with?
    swfUsedFonts_t overrideFontType; // Offset: 0x160

    // only supports one line and isn't accurate for scaling or tooltips
    int textLength; // Offset: 0x164

    bool lengthCalculated; // Offset: 0x168

    // text width determined at render time, accurate for all visible lines, scaling and tooltips
    float textWidth; // Offset: 0x16C

    // font fx
    int fontFXMaterialIndex; // Offset: 0x170

    swfTextRenderMode_t renderMode; // Offset: 0x174

    bool generatingText; // Offset: 0x178

    int rndSpotsVisible; // Offset: 0x17C

    int rndSpacesVisible; // Offset: 0x180

    int charMultiplier; // Offset: 0x184

    int textSpotsVisible; // Offset: 0x188

    int rndTime; // Offset: 0x18C

    int startRndTime; // Offset: 0x190

    int prevReplaceIndex; // Offset: 0x194

    bool triggerGenerate; // Offset: 0x198

    int renderDelay; // Offset: 0x19C

    bool scrollUpdate; // Offset: 0x1A0

    idSoundEvent* soundClip; // Offset: 0x1A8

    bool needsSoundUpdate; // Offset: 0x1B0

    idList < int , TAG_SWF , false > indexArray; // Offset: 0x1B8

    // number of characters in each line, numCharsPerLine.Num() is the accurate total number of lines
    idList < int , TAG_IDLIST , false > numCharsPerLine; // Offset: 0x1D0

    idRandom rnd; // Offset: 0x1E8

    // the maximum number of lines that can be drawn in the text instance bounds, determined at render time
    int maxVisibleLines; // Offset: 0x1EC

    // index of line to start with when rendering text; anything above this is blank, but takes vertical space. used by scrolling panels to only draw a window of what's visible.
    int lineRenderOffset; // Offset: 0x1F0

    // max number of lines to render; also used by scrollpanels to set the end of the visible window.
    int lineRenderMax; // Offset: 0x1F4

    // extra height to add to this sprite's bounds. this is a workaround for the codex's scrolling text panel, because Adobe Animate doesn't let us make a textbox taller than 5700 pixels or so.
    float heightExtension; // Offset: 0x1F8

    // if true, will support special string features such as colors, bold, underline and italics
    bool supportsStringEscapeFeatures; // Offset: 0x1FC

    // input text
    int inputTextStartChar; // Offset: 0x200

    int maxCharLength; // Offset: 0x204

    bool updateMaxTextWidthOnRender; // Offset: 0x208

    float maxTextWidth; // Offset: 0x20C

    // placeholder text renders only if there is no actual text in this object.
    idStr placeholderText; // Offset: 0x210

    idStr targetPath; // Offset: 0x240

}; // Size: 0x270
