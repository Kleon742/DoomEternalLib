struct idVolume_SpaceWarp : idVolume
{
    // Space Warp Effect.
    idDeclFX* fxDecl; // Offset: 0xC20

    // Gravity applied to touching entities. {{ units = m / ( s * s ) }}
    idVec3 gravity; // Offset: 0xC28

    // life time in MS.
    idTypesafeTime < int , millisecondUnique_t , 1000 > lifetime; // Offset: 0xC34

    bool startedFX; // Offset: 0xC38

    // sound to play on Activation.
    idSoundEvent* activationSound; // Offset: 0xC40

    // sound to play for lifetime of volume.
    idSoundEvent* loopSound; // Offset: 0xC48

    // sound to play on Deactivation.
    idSoundEvent* deactivationSound; // Offset: 0xC50

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lifeAmount; // Offset: 0xC58

}; // Size: 0xC60
