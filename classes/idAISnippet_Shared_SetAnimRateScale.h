struct idAISnippet_Shared_SetAnimRateScale : idAISnippet
{
    // for optional "named ratescale" stuff
    idAtomicString rateScaleName; // Offset: 0x18

    // lerp to this ratescale
    float targetRateScale; // Offset: 0x20

    // over this duration
    float lerpTimeInSeconds; // Offset: 0x24

}; // Size: 0x28
