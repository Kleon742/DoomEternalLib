struct commandBarButtonInfo_t
{
    idStr label; // Offset: 0x0

    idStr header; // Offset: 0x30

    bool indicate; // Offset: 0x60

    bool isVisible; // Offset: 0x61

    idSWFWidgetAction action; // Offset: 0x68

    // Action sent when the hold begins
    idSWFWidgetAction startAction; // Offset: 0x190

    // Action sent when the hold is released early
    idSWFWidgetAction cancelAction; // Offset: 0x2B8

    idSWFWidget* widget; // Offset: 0x3E0

    idSWFWidget_Button_CommandBar* widgetObserver; // Offset: 0x3E8

    bool isHold; // Offset: 0x3F0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > holdTimeOverride; // Offset: 0x3F8

    keyNum_t pcKey; // Offset: 0x400

    bool isEnabled; // Offset: 0x404

    // Some buttons are only visible when using controller
    bool visibleOnPC; // Offset: 0x405

    // Only supported if the command bar alignment is ALIGN_CB_LEFT
    bool rightAligned; // Offset: 0x406

    // Only supported if the button is left-aligned (for now)
    int progressCurrent; // Offset: 0x408

    // Only supported if the button is left-aligned (for now)
    int progressTotal; // Offset: 0x40C

    swfNamedColors_t buttonColor; // Offset: 0x410

    swfSoundType_t activateSound; // Offset: 0x414

}; // Size: 0x418
