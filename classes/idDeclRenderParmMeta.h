struct idDeclRenderParmMeta : idDeclTypeInfo
{
    struct choice_t
    {
        // Choice name
        idAtomicString name; // Offset: 0x0

        // Choice value
        idVec4 value; // Offset: 0x8

    }; // Size: 0x18

    // Edit mode
    renderParmEditMode_t editMode; // Offset: 0x88

    // Label
    idStr label; // Offset: 0x90

    // Description
    idStr description; // Offset: 0xC0

    // Channels used
    int usedChannels; // Offset: 0xF0

    // Section
    idAtomicString section; // Offset: 0xF8

    // Fixed list of choices
    idList < idDeclRenderParmMeta::choice_t , TAG_IDLIST , false > choices; // Offset: 0x100

    // Labels appearing on vector components
    idList < idStr , TAG_IDLIST , false > componentLabels; // Offset: 0x118

    // Range min
    float rangeMin; // Offset: 0x130

    // Range max
    float rangeMax; // Offset: 0x134

    // Media path
    idStr mediaPath; // Offset: 0x138

    // Media type
    idStr mediaType; // Offset: 0x168

    // Appears only if certain render parms are present
    renderProgFlags_t requiresRenderProgFlags; // Offset: 0x198

    // Picker function for strings
    idStr stringPicker; // Offset: 0x1A0

    // Ends a group of render parms
    bool breakAfter; // Offset: 0x1D0

}; // Size: 0x1D8
