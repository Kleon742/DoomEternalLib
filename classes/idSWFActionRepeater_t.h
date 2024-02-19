struct idSWFActionRepeater_t
{
    idSWFWidget* widget; // Offset: 0x0

    idSWFWidgetEvent event; // Offset: 0x8

    idSWFWidgetAction action; // Offset: 0x140

    int numRepetitions; // Offset: 0x268

    idTypesafeTime < int , millisecondUnique_t , 1000 > nextRepeatTimeMS; // Offset: 0x26C

    idTypesafeTime < int , millisecondUnique_t , 1000 > repeatDelayMS; // Offset: 0x270

    int screenIndex; // Offset: 0x274

    bool joystickDeviceActive; // Offset: 0x278

}; // Size: 0x280
