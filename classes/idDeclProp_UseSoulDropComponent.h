struct idDeclProp_UseSoulDropComponent : idDeclProp_UseComponent
{
    // sound to play when an enemy soul is picked up
    idSoundEvent* sound_soul_confirmed; // Offset: 0x130

    // sound to play when a friendly soul is picked up
    idSoundEvent* sound_soul_denied; // Offset: 0x138

    // perform team checks on pickup
    bool neutralSoul; // Offset: 0x140

    // should the demon be allowed to pick up
    bool allowDemonPickup; // Offset: 0x141

    // should humans be allowed to pick up;
    bool allowHumanPickup; // Offset: 0x142

}; // Size: 0x148
