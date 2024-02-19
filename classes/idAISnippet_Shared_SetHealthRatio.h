struct idAISnippet_Shared_SetHealthRatio : idAISnippet
{
    // set desired ratio only if the current health ratio is less than that
    bool onlyIfCurrentIsLessThanDesired; // Offset: 0x18

    // desired ratio of health to be set
    float desiredRatio; // Offset: 0x1C

}; // Size: 0x20
