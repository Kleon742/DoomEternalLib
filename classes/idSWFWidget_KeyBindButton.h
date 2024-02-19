struct idSWFWidget_KeyBindButton : idSWFWidget_Button
{
    idStr actionString; // Offset: 0x2A0

    idStr appendString; // Offset: 0x2D0

    idStr optionalAppendString; // Offset: 0x300

    bindSet_t bindset; // Offset: 0x330

    bool isInvasion; // Offset: 0x334

    idSWFWidget_Button* btnPrimary; // Offset: 0x338

    idSWFWidget_Button* btnSecondary; // Offset: 0x340

    idSWFWidget_Button* buttonToKeepEnabled; // Offset: 0x348

    int primaryPressCmdID; // Offset: 0x350

    int secondaryPressCmdID; // Offset: 0x354

}; // Size: 0x358
