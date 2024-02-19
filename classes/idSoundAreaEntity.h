struct idSoundAreaEntity : idBloatedEntity
{
    // ambience sound event to use for this volume
    idSoundEvent* ambience; // Offset: 0xB88

    // reverb aux bus to use for this volume
    idSoundAuxBus* reverb; // Offset: 0xB90

    // state controlling baked weapon reverb tails
    idSoundState* weaponReverbState; // Offset: 0xB98

    // state controlling additional state based events
    idSoundState* userDefinedState; // Offset: 0xBA0

    // set this volume to play with overlapping or encompassing polytopes
    bool blendOverride; // Offset: 0xBA8

    // the reverb Aux send value
    float reverbAuxSendValue; // Offset: 0xBAC

    // Play the sound as 2D so it is not virtualized
    bool alwaysRegistered; // Offset: 0xBB0

    // planes for runtime polytope sound volume
    idList < idVec4 , TAG_IDLIST , false > planes; // Offset: 0xBB8

    // starting index for each polytope
    idList < int , TAG_IDLIST , false > indexes; // Offset: 0xBD0

    idList < unsigned short , TAG_IDLIST , false > volumeIDs; // Offset: 0xBE8

}; // Size: 0xC00
