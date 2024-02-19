struct idAISnippet_Shared_SetFocusToTarget : idAISnippet
{
    struct focusInfo_t
    {
        // type of focus
        aiFoci_t focusType; // Offset: 0x0

        // type of aim point
        aimPoint_t aimPoint; // Offset: 0x4

        // should the focus system keep the target in view
        bool keepFocusInView; // Offset: 0x8

        // vertical aim offset
        float verticalOffsetOverride; // Offset: 0xC

    }; // Size: 0x10

    // types of focus to apply to
    idList < idAISnippet_Shared_SetFocusToTarget::focusInfo_t , TAG_IDLIST , false > focusInfo; // Offset: 0x18

}; // Size: 0x30
