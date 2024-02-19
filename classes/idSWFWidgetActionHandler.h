struct idSWFWidgetActionHandler : idSWFScriptFunction_RefCounted
{
    idSWFWidget* targetWidget; // Offset: 0xC0

    SWFWidgetActionHandler_t type; // Offset: 0xC8

    SWFWidgetEvent_t targetEvent; // Offset: 0xCC

}; // Size: 0xD0
