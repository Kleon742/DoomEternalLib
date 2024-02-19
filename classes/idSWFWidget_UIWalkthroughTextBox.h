struct idSWFWidget_UIWalkthroughTextBox : idSWFWidget
{
    // The string id for this text box
    idStrId strId; // Offset: 0x180

    // The screen coordinates for this text box
    idVec2 screenCoords; // Offset: 0x184

    // The name of this widget, which is used for duplicate/remove
    idStr widgetName; // Offset: 0x190

    // The gamepad button used for advancing
    keyNum_t advanceButton; // Offset: 0x1C0

    // The keyboard key used for advancing
    keyNum_t advanceKey; // Offset: 0x1C4

    // If true show the advance button
    bool showAdvanceButton; // Offset: 0x1C8

    // The actual button
    idSWFWidget_UIWalkthroughTextBox_AdvanceButton* advanceButtonWidget; // Offset: 0x1D0

}; // Size: 0x1D8
