struct idVolume_DemonicPossession : idVolume
{
    struct possessedInfo_t
    {
        idManagedClassPtr < idAI2 > entity; // Offset: 0x0

        idAtomicString factionName; // Offset: 0x20

    }; // Size: 0x28

    // Space Warp Effect.
    idDeclFX* fxDecl; // Offset: 0xC20

    // Gravity applied to touching entities.
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

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > removeTime; // Offset: 0xC58

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > addPossessedTime; // Offset: 0xC60

    // faction to use when demon is possessed (fighting against other demons)
    idAtomicString possessedFactionName; // Offset: 0xC68

    bool isSinglePossession; // Offset: 0xC70

    idStaticList < idVolume_DemonicPossession::possessedInfo_t , 20 , false , TAG_IDLIST > possessionList; // Offset: 0xC78

}; // Size: 0xFB0
