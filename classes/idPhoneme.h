struct idPhoneme
{
    // the name of this phoneme
    idAtomicString name; // Offset: 0x0

    // the index of this phoneme in the viseme set
    int phoneme; // Offset: 0x8

    // the index (in the viseme set) of the viseme this phoneme maps to
    int viseme; // Offset: 0xC

    // an arbitrary scale to apply to the weight of this phoneme
    float weightScale; // Offset: 0x10

    // an arbitrary scale to apply to the duration of this phoneme
    float durationScale; // Offset: 0x14

    // an arbitrary offset to add the the start time of this phoneme (in milliseconds)
    int timeOffsetMS; // Offset: 0x18

}; // Size: 0x20
