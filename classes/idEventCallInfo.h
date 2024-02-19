struct idEventCallInfo
{
    // event number to fire
    idHandle < short , invalidEvent_t , INVALID_EVENT_HANDLE > eventDef; // Offset: 0x0

    // arguments for event
    idEventArg args[9]; // Offset: 0x8

}; // Size: 0xE0
