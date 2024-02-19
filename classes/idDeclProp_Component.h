struct idDeclProp_Component : idGameDeclTypeInfo
{
    // plays sound when used
    idSoundEvent* sound_use; // Offset: 0x90

    // sound to play when the object is pickup up by a local player
    idSoundEvent* sound_pickup; // Offset: 0x98

    // Play this sound instead on ultra nightmar ( if !defined play normal )
    idSoundEvent* sound_pickupUltraNightmare; // Offset: 0xA0

    // sound to play when the object is unable to be picked up
    idSoundEvent* sound_unableToPickup; // Offset: 0xA8

    // sound to play when the object is picked up by a player with an upgrade
    idSoundEvent* sound_pickupUpgrade; // Offset: 0xB0

    // Does this object remove itself when used?
    bool hide_on_use; // Offset: 0xB8

    // the type of component we will use
    idTypeInfo* componentTypeInfo; // Offset: 0xC0

    // Description Text.
    idStrId use_description; // Offset: 0xC8

}; // Size: 0xD0
