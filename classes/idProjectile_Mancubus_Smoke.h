struct idProjectile_Mancubus_Smoke : idProjectile_Rocket
{
    // Smoke fx entity to spawn when projectile explodes
    idDeclEntityDef* smokeFXEntity; // Offset: 0x3038

    // idVolume_VisualImpairment volume for smoke - opacity probes etc
    idDeclEntityDef* smokeVisualImpairmentVolume; // Offset: 0x3040

    // idVolume_StatusEffect to give demonplayers a status in this smoke
    idDeclEntityDef* smokeHideVolume; // Offset: 0x3048

    // How long to display smoke FX
    idTypesafeTime < int , millisecondUnique_t , 1000 > smokeFXDisplayTimeMS; // Offset: 0x3050

    // Replicate fx and volume entities
    bool replicateSubEntities; // Offset: 0x3054

    // Explode immediately on creation
    bool explodeImmediately; // Offset: 0x3055

}; // Size: 0x3058
