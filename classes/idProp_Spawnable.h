struct idProp_Spawnable : idProp_Moveable
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > activationStartTime; // Offset: 0x2540

    // breakable to use if this prop is destroyed
    idDeclEntityDef* breakable; // Offset: 0x2548

    // sound to play when this breaks
    idSoundEvent* breakableSound; // Offset: 0x2550

    // particles that spawn when the drop ship is close to the ground
    idDeclParticle* impactParticle; // Offset: 0x2558

}; // Size: 0x2560
