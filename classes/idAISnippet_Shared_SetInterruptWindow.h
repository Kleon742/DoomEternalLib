struct idAISnippet_Shared_SetInterruptWindow : idAISnippet
{
    // how long we want interrupt window to be, zero implies no window
    idTypesafeTime < float , secondUnique_t , 1 > duration; // Offset: 0x18

}; // Size: 0x20
