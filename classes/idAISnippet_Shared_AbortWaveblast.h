struct idAISnippet_Shared_AbortWaveblast : idAISnippet
{
    // optional delay (in MS) for aborting waveblast attacks
    idTypesafeTime < int , millisecondUnique_t , 1000 > abortDelayMS; // Offset: 0x18

}; // Size: 0x20
