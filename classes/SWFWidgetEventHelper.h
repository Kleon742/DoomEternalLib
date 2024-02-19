struct SWFWidgetEventHelper : idSWFScriptFunction_RefCounted
{
    idSWFWidget* targetWidget; // Offset: 0xC0

    SWFWidgetEvent_t targetEvent; // Offset: 0xC8

    int targetEventArg; // Offset: 0xCC

}; // Size: 0xD0
