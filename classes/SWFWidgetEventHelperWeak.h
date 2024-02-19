struct SWFWidgetEventHelperWeak : idSWFScriptFunction_RefCounted
{
    idSWFWidget* targetWidget; // Offset: 0xC0

    swfReferenceCounter_t* targetWidgetRefCounter; // Offset: 0xC8

    SWFWidgetEvent_t targetEvent; // Offset: 0xD0

    int targetEventArg; // Offset: 0xD4

}; // Size: 0xD8
