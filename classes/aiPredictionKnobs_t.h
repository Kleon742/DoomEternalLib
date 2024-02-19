struct aiPredictionKnobs_t
{
    // name of this knob collection
    idAtomicString name; // Offset: 0x0

    // at 1.0, apply full dampening of predictions based on confidence of prediction
    float confidenceFactor; // Offset: 0x8

    // sample history of actor this far back to determine confidence
    float confidenceSampleWindow; // Offset: 0xC

    // max weight to use with age biasing
    float confidenceWeightMax; // Offset: 0x10

    // min weight to use with age biasing
    float confidenceWeightMin; // Offset: 0x14

    // table defining how confidence values should be weighted
    idDeclTable* confidenceWeightTable; // Offset: 0x18

    // sample history of actor this far back
    float sampleWindow; // Offset: 0x20

    // max weight to use with age biasing
    float weightMax; // Offset: 0x24

    // min weight to use with age biasing
    float weightMin; // Offset: 0x28

    // table defining how sample values should be weighted
    idDeclTable* sampleWeightTable; // Offset: 0x30

    // if the running average is very close to the actual, we should just make it spot on
    float closeEnoughRatio; // Offset: 0x38

    // if the per-second velocities of actor change less than this on average during prediction, 1.0 confidence
    float confidenceMinVDelta; // Offset: 0x3C

    // if the per-second velocities of actor change more than this on average during prediction, 0.0 confidence
    float confidenceMaxVDelta; // Offset: 0x40

    // tuning number, multiply predicted velocity by this much to zero in on perfection
    float velocityAdjust; // Offset: 0x44

    // maximum time into future we consider prediction valid
    float maxSecondsInFuture; // Offset: 0x48

    // minimum intensity of percept to even be considered valid
    float minimumIntensity; // Offset: 0x4C

}; // Size: 0x50
