struct idTrigger_ModPlayerVelocity : idTrigger
{
    // multiplier to modify the speed by, [ < 0.0 == off ]
    float velocityModMultiplier; // Offset: 0xC90

    // the new velocity to set the player to, [ < 0.0f == off ]
    float velocityMod; // Offset: 0xC94

    // hides render model when spawned if a render model exists
    bool hideRenderModel; // Offset: 0xC98

    // the sound to play when triggering
    idSoundEvent* velModSound; // Offset: 0xCA0

}; // Size: 0xCA8
