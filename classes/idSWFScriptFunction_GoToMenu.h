struct idSWFScriptFunction_GoToMenu : idSWFScriptFunction_RefCounted
{
    idMenu* menu; // Offset: 0xC0

    int screenID; // Offset: 0xC8

    menuTransitionType_t transition; // Offset: 0xCC

}; // Size: 0xD0
