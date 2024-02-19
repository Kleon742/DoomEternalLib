struct idHUD_DemonCardWheel : idHUDElement
{
    idHUDEvent_CardWheelOpened::cardWheelData_t cardWheelData; // Offset: 0xF8

    idSWFWidget_WedgeWheel* wheel; // Offset: 0x1A8

    int selectedIndex; // Offset: 0x1B0

}; // Size: 0x1B8
