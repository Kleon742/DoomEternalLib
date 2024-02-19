struct idAnimSysEvent
{
    // arguments to pass for this event
    idAnimSysEventArg args[8]; // Offset: 0x0

    // When to trigger this event
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > eventTime; // Offset: 0xC0

    // number of the frame command event
    int eventNum; // Offset: 0xC8

}; // Size: 0xD0
