struct idChainsaw_SliceAndSync : idChainsaw_Slice
{
    // tracks whether the sync was chainsaw or not
    bool syncMeleeWithChainsawStarted; // Offset: 0x3C08

    // determine this at the sync start but don't deduct it until the end
    float syncMeleeAmmoCostToUse; // Offset: 0x3C0C

    // actual value of fuel gauge as it seeks target value
    float fuelGaugeActual; // Offset: 0x3C10

    // target value for fuel gauge to seek
    float fuelGaugeTarget; // Offset: 0x3C14

}; // Size: 0x3C18
