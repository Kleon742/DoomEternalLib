struct idSWFWidget_ButtonHelpText : idSWFWidget
{
    idSWFWidget_Text* helpText; // Offset: 0x180

    // message from last widget that had focus
    idStr lastFocusedMessage; // Offset: 0x188

    // message from last widget that was hovered over
    idStr lastHoveredMessage; // Offset: 0x1B8

}; // Size: 0x1E8
