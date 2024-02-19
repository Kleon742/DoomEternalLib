struct SWFWidgetActionHelper : idSWFScriptFunction_RefCounted
{
    idSWFWidget* targetWidget; // Offset: 0xC0

    swfReferenceCounter_t* targetRefCounter; // Offset: 0xC8

    SWFWidgetEvent_t targetEvent; // Offset: 0xD0

    int targetEventArg; // Offset: 0xD4

    idSWFWidgetAction targetAction; // Offset: 0xD8

}; // Size: 0x200
