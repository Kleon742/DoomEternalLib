struct idSWFWidgetEvent
{
    // widget that generated this event
    idSWFWidget* targetWidget; // Offset: 0x0

    SWFWidgetEvent_t type; // Offset: 0x8

    int arg; // Offset: 0xC

    idSWFScriptObject* thisObject; // Offset: 0x10

    idSWFParmList parms; // Offset: 0x18

    // whether this event propagates to all children
    bool propagate; // Offset: 0x130

}; // Size: 0x138
