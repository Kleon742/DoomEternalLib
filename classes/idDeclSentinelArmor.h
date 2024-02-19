struct idDeclSentinelArmor : idDeclInventory
{
    // Incoming damage is multiplied by this value
    float incomingDamageMultiplier; // Offset: 0x3F8

    // Number of deaths before player is offered.
    int numDeathsTilActivate; // Offset: 0x3FC

    // Sound to play when activating sentinel armor
    idSoundEvent* activateSound; // Offset: 0x400

    // Sound to play when deactivating sentinel armor
    idSoundEvent* deactivateSound; // Offset: 0x408

    // Sound to play when taking damage with sentinel armor
    idSoundEvent* takeDamageSound; // Offset: 0x410

}; // Size: 0x418
