struct idNetworkedEntityFx : idEntityFx
{
    // fx decl to be used if viewed by demon player
    idDeclFX* fxEffectDemonVersion; // Offset: 0xD58

    idNetEvent < 15 > activationEvent; // Offset: 0xD60

    idNetEvent < 15 > deactivationEvent; // Offset: 0xD78

}; // Size: 0xD90
