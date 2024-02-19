struct idVolume_Gravity : idVolume
{
    // Gravity scaling factor.
    float gravityScale; // Offset: 0xC20

    // Jump height scalar.
    float jumpHeightScalar; // Offset: 0xC24

    // sound to play on Activation.
    idSoundEvent* activationSound; // Offset: 0xC28

    // sound to play for lifetime of volume.
    idSoundEvent* loopSound; // Offset: 0xC30

}; // Size: 0xC38
