struct idGuiEntity_TextData_t
{
    // text to display
    idStr text; // Offset: 0x0

    // color to use for this text
    idColor color; // Offset: 0x30

    // the width of the text relative to the swf (eg. generic_text = 1.0, generic_text_wide = 1.95)
    float relativeWidth; // Offset: 0x40

    // how the text should be aligned (defaults to CENTER)
    swfEditTextAlign_t alignment; // Offset: 0x44

    // to show a border around the text or not
    bool border; // Offset: 0x48

    // color to use for the border
    idColor borderColor; // Offset: 0x4C

    // show tooltips (button prompts)
    bool showTooltips; // Offset: 0x5C

}; // Size: 0x60
