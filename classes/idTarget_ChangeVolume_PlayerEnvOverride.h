struct idTarget_ChangeVolume_PlayerEnvOverride : idTarget
{
    // time in milliseconds to fade in
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeInTime; // Offset: 0xB88

    // time in milliseconds to fade out
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeOutTime; // Offset: 0xB8C

    // the env to apply
    idDeclEnv* declEnv; // Offset: 0xB90

}; // Size: 0xB98
