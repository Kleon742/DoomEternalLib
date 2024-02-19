struct idAISnippet_Shared_PhaseShift : idAISnippet
{
    // if true, we are entering phase shift; if false, we are exiting
    bool enterShift; // Offset: 0x18

    // override path manager component blend time for blending into/out of shift
    float forceBlendTime; // Offset: 0x1C

}; // Size: 0x20
