struct idAISnippet_Shared_HideRenderModel : idAISnippet
{
    // stop all character FX
    bool stopFX; // Offset: 0x18

    // only valid if stopFX is true. If true, will immediately stop FX instead of letting them fade out.
    bool immediateStopFX; // Offset: 0x19

}; // Size: 0x20
